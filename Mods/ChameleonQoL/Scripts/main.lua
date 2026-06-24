local UEHelpers = require("UEHelpers")

local MOD_DIR = "Mods/ChameleonQoL"
local LOG_PATH = MOD_DIR .. "/qol.log"

local DEFAULTS = {
    Enabled = true,
    CameraFOV = 100.0,
    FirstPersonFOV = 100.0,
    ThirdPersonDistance = 520.0,
    MouseSensitivity = 1.0,
    MoveSpeedMultiply = 1.0,
    DisablePaintViewLock = true,
    BodyScaleEnabled = false,
    BodyScale = 1.0,
    BodyScaleMode = "physical",
    VisionEnabled = false,
    VisionMode = "glow",
    VisionTarget = "all",
    VisionStencil = 1,
    PollIntervalMs = 1500,
}

local CONFIG = {}
local last_config_signature = ""
local last_pawn_name = ""
local last_apply_signature = ""
local BODY_BASELINES = {}
local BODY_LAST_APPLIED = {}
local RANDOM_SEEDED = false
local VISION_MARKED_ACTORS = {}
local VISION_FORCED_NAMEPLATES = {}

local function console(ar, line)
    local text = "[ChameleonQoL] " .. line
    local wrote_to_ar = false

    if ar and type(ar) == "userdata" then
        local ok, ar_type = pcall(function()
            return ar:type()
        end)

        if ok and ar_type == "FOutputDevice" then
            local logged = pcall(function()
                ar:Log(text)
            end)
            wrote_to_ar = logged
        end
    end

    if not wrote_to_ar then
        print(text)
    end
end

local function append(line)
    local file = io.open(LOG_PATH, "a")
    if file then
        file:write(string.format("[%s] %s\n", os.date("%Y-%m-%d %H:%M:%S"), line))
        file:close()
    end
end

local function is_valid_object(object)
    if not object then
        return false
    end

    local ok, valid = pcall(function()
        return object:IsValid()
    end)

    return ok and valid == true
end

local function safe(label, callable)
    local ok, result = pcall(callable)
    if not ok then
        append(label .. " failed: " .. tostring(result))
        return nil
    end
    return result
end

local function report_error(ar, label, err)
    local message = label .. " failed: " .. tostring(err)
    append(message)
    if ar then
        console(ar, "执行失败：" .. tostring(err))
    end
end

local function number_value(value, fallback, min_value, max_value)
    local parsed = tonumber(value)
    if parsed == nil then
        return fallback
    end
    if min_value ~= nil and parsed < min_value then
        return min_value
    end
    if max_value ~= nil and parsed > max_value then
        return max_value
    end
    return parsed
end

local function set_defaults()
    CONFIG.Enabled = DEFAULTS.Enabled
    CONFIG.CameraFOV = DEFAULTS.CameraFOV
    CONFIG.FirstPersonFOV = DEFAULTS.FirstPersonFOV
    CONFIG.ThirdPersonDistance = DEFAULTS.ThirdPersonDistance
    CONFIG.MouseSensitivity = DEFAULTS.MouseSensitivity
    CONFIG.MoveSpeedMultiply = DEFAULTS.MoveSpeedMultiply
    CONFIG.DisablePaintViewLock = DEFAULTS.DisablePaintViewLock
    CONFIG.BodyScaleEnabled = DEFAULTS.BodyScaleEnabled
    CONFIG.BodyScale = DEFAULTS.BodyScale
    CONFIG.BodyScaleMode = DEFAULTS.BodyScaleMode
    CONFIG.VisionEnabled = DEFAULTS.VisionEnabled
    CONFIG.VisionMode = DEFAULTS.VisionMode
    CONFIG.VisionTarget = DEFAULTS.VisionTarget
    CONFIG.VisionStencil = DEFAULTS.VisionStencil
    CONFIG.PollIntervalMs = DEFAULTS.PollIntervalMs
end

local function current_config_signature()
    return string.format("%s|%.2f|%.2f|%.2f|%.2f|%.2f|%s|%s|%.6f|%s|%s|%s|%s|%d|%d",
        tostring(CONFIG.Enabled),
        CONFIG.CameraFOV,
        CONFIG.FirstPersonFOV,
        CONFIG.ThirdPersonDistance,
        CONFIG.MouseSensitivity,
        CONFIG.MoveSpeedMultiply,
        tostring(CONFIG.DisablePaintViewLock),
        tostring(CONFIG.BodyScaleEnabled),
        CONFIG.BodyScale,
        CONFIG.BodyScaleMode,
        tostring(CONFIG.VisionEnabled),
        CONFIG.VisionMode,
        CONFIG.VisionTarget,
        CONFIG.VisionStencil,
        CONFIG.PollIntervalMs)
end

local function fullname(object)
    if not is_valid_object(object) then
        return "<invalid>"
    end
    return safe("fullname", function()
        return object:GetFullName()
    end) or "<name-error>"
end

local function set_property(object, property_name, value)
    if not is_valid_object(object) then
        return false
    end

    local ok, err = pcall(function()
        object[property_name] = value
    end)

    if not ok then
        append(string.format("set %s on %s failed: %s", property_name, fullname(object), tostring(err)))
        return false
    end

    return true
end

local function try_set_property(object, property_name, value)
    if not is_valid_object(object) then
        return false
    end

    local ok = pcall(function()
        object[property_name] = value
    end)

    return ok
end

local function read_property(object, property_name)
    if not is_valid_object(object) then
        return nil
    end

    local ok, value = pcall(function()
        return object[property_name]
    end)

    if ok then
        return value
    end
    return nil
end

local unpack_args = table.unpack or unpack

local function call_method(object, method_name, ...)
    if not is_valid_object(object) then
        return false, "invalid object"
    end

    local args = {...}
    local ok, result = pcall(function()
        local method = object[method_name]
        if type(method) ~= "function" then
            error("method not found: " .. tostring(method_name))
        end
        return method(object, unpack_args(args))
    end)

    return ok, result
end

local function resolve_object_param(value)
    if is_valid_object(value) then
        return value
    end

    local ok, resolved = pcall(function()
        return value:get()
    end)

    if ok and is_valid_object(resolved) then
        return resolved
    end

    return value
end

local function for_each_array(array, callback)
    if not array then
        return 0
    end

    local count = 0
    local ok = pcall(function()
        array:ForEach(function(index, element)
            local object = resolve_object_param(element)
            count = count + 1
            callback(object, index)
        end)
    end)

    if ok then
        return count
    end

    local ok_len, len = pcall(function()
        return #array
    end)

    if not ok_len or not len then
        return 0
    end

    for index = 1, len do
        local ok_item, item = pcall(function()
            return array[index]
        end)

        if ok_item then
            count = count + 1
            callback(resolve_object_param(item), index)
        end
    end

    return count
end

local function get_local_pawn()
    local controller = UEHelpers.GetPlayerController()
    if is_valid_object(controller) then
        local ok, pawn = pcall(function()
            return controller.Pawn
        end)

        if ok and is_valid_object(pawn) then
            return pawn
        end
    end

    local pawn = UEHelpers.GetPlayer()
    if is_valid_object(pawn) then
        return pawn
    end

    return CreateInvalidObject()
end

local function make_vector(x, y, z)
    local math_library = UEHelpers.GetKismetMathLibrary()
    if is_valid_object(math_library) then
        local ok, vector = pcall(function()
            return math_library:MakeVector(x, y, z)
        end)
        if ok and vector then
            return vector
        end
    end

    return {
        X = x,
        Y = y,
        Z = z,
    }
end

local function vector_to_string(vector)
    if not vector then
        return "<unknown>"
    end

    local ok, result = pcall(function()
        return string.format("%.2f, %.2f, %.2f", vector.X or 0.0, vector.Y or 0.0, vector.Z or 0.0)
    end)

    return ok and result or "<read-error>"
end

local function object_text(value)
    if value == nil then
        return ""
    end

    local ok, text = pcall(function()
        return value:ToString()
    end)

    if ok and text ~= nil then
        return tostring(text)
    end

    return tostring(value)
end

local function get_actor_scale(pawn)
    return safe("GetActorScale3D", function()
        return pawn:GetActorScale3D()
    end)
end

local function finite_positive_number(value)
    local parsed = tonumber(value)
    if parsed == nil then
        return nil
    end
    if parsed ~= parsed or parsed == math.huge or parsed == -math.huge or parsed <= 0 then
        return nil
    end
    return parsed
end

local function vector_axis(vector, axis, fallback)
    if not vector then
        return fallback
    end

    local ok, value = pcall(function()
        return vector[axis]
    end)

    if ok and tonumber(value) then
        return tonumber(value)
    end

    return fallback
end

local function get_actor_scale_x(pawn)
    local scale = get_actor_scale(pawn)
    return vector_axis(scale, "X", 1.0)
end

local function get_capsule_metrics(capsule)
    if not is_valid_object(capsule) then
        return nil
    end

    local metrics = {}
    metrics.object = capsule
    metrics.name = fullname(capsule)
    metrics.unscaled_radius = safe("GetUnscaledCapsuleRadius", function()
        return capsule:GetUnscaledCapsuleRadius()
    end)
    metrics.unscaled_half_height = safe("GetUnscaledCapsuleHalfHeight", function()
        return capsule:GetUnscaledCapsuleHalfHeight()
    end)
    metrics.scaled_radius = safe("GetScaledCapsuleRadius", function()
        return capsule:GetScaledCapsuleRadius()
    end)
    metrics.scaled_half_height = safe("GetScaledCapsuleHalfHeight", function()
        return capsule:GetScaledCapsuleHalfHeight()
    end)
    return metrics
end

local function read_dynamic_capsule_height(component, method_name)
    if not is_valid_object(component) then
        return nil
    end

    local ok, value = call_method(component, method_name)
    if ok and tonumber(value) then
        return tonumber(value)
    end
    return nil
end

local function get_dynamic_capsule_metrics(component)
    if not is_valid_object(component) then
        return nil
    end

    return {
        object = component,
        name = fullname(component),
        current = read_dynamic_capsule_height(component, "GetDynamicCapsuleCurrentHalfHeight") or
            read_dynamic_capsule_height(component, "GetCurrentCapsuleHalfHeight"),
        desired = read_dynamic_capsule_height(component, "GetDynamicCapsuleDesiredHalfHeight") or
            read_dynamic_capsule_height(component, "GetDesiredCapsuleHalfHeight"),
        standing = read_dynamic_capsule_height(component, "GetDynamicCapsuleStandingHalfHeight"),
        crouching = read_dynamic_capsule_height(component, "GetDynamicCapsuleCrouchingHalfHeight"),
    }
end

local function pawn_key(pawn)
    return fullname(pawn)
end

local function object_path(full_name)
    local text = tostring(full_name or "")
    return text:match("%s(.+)$") or text
end

local function find_dynamic_capsule_settings(pawn)
    if not is_valid_object(pawn) then
        return nil
    end

    local mover = read_property(pawn, "ExtendedPhysicsCharacterMoverComponent")
    if is_valid_object(mover) then
        for _, property_name in ipairs({"DynamicCapsuleHeightSettings", "DynamicCapsuleHeightSettings_0"}) do
            local settings = read_property(mover, property_name)
            if is_valid_object(settings) then
                return settings
            end
        end
    end

    local pawn_path = object_path(fullname(pawn))
    local settings_list = safe("FindAllOf DynamicCapsuleHeightSettings", function()
        return FindAllOf("DynamicCapsuleHeightSettings")
    end)

    local matched = nil
    for_each_array(settings_list, function(settings)
        if matched or not is_valid_object(settings) then
            return
        end

        local settings_name = fullname(settings)
        if settings_name:find(pawn_path, 1, true) then
            matched = settings
        end
    end)

    return matched
end

local function get_dynamic_capsule_settings_metrics(settings)
    if not is_valid_object(settings) then
        return nil
    end

    return {
        object = settings,
        name = fullname(settings),
        standing = tonumber(read_property(settings, "StandingCapsuleHalfHeight")),
        current = tonumber(read_property(settings, "CurrentCapsuleHalfHeightForGroundCheck")),
        crouching = tonumber(read_property(settings, "CrouchingCapsuleHalfHeight")),
        min = tonumber(read_property(settings, "MinCapsuleHalfHeight")),
        max = tonumber(read_property(settings, "MaxCapsuleHalfHeight")),
    }
end

local function capture_body_baseline(pawn)
    local key = pawn_key(pawn)
    if BODY_BASELINES[key] then
        return BODY_BASELINES[key]
    end

    local baseline = {
        pawn_name = key,
        actor_scale = get_actor_scale_x(pawn),
        default_capsule_height = tonumber(read_property(pawn, "DefaultCapsuleHeight")),
        crouching_height = tonumber(read_property(pawn, "CrouchingHeight")),
        body_capsule = get_capsule_metrics(read_property(pawn, "BodyCapsule")),
        overlap_capsule = get_capsule_metrics(read_property(pawn, "OverapCollision")),
        dynamic_capsule = get_dynamic_capsule_metrics(read_property(pawn, "DynamicCapsuleHeightControl")),
        dynamic_settings = get_dynamic_capsule_settings_metrics(find_dynamic_capsule_settings(pawn)),
    }

    local fallback_half = nil
    if baseline.body_capsule and tonumber(baseline.body_capsule.unscaled_half_height) then
        fallback_half = tonumber(baseline.body_capsule.unscaled_half_height)
    elseif baseline.dynamic_capsule and tonumber(baseline.dynamic_capsule.current) then
        fallback_half = tonumber(baseline.dynamic_capsule.current)
    elseif baseline.dynamic_settings and tonumber(baseline.dynamic_settings.current) then
        fallback_half = tonumber(baseline.dynamic_settings.current)
    elseif baseline.default_capsule_height then
        fallback_half = baseline.default_capsule_height
    else
        fallback_half = 88.0
    end

    baseline.base_half_height = fallback_half
    baseline.base_crouch_half_height = baseline.crouching_height or
        (baseline.dynamic_capsule and baseline.dynamic_capsule.crouching) or
        (fallback_half * 0.5)

    BODY_BASELINES[key] = baseline
    return baseline
end

local function set_capsule_from_baseline(capsule, metrics)
    if not is_valid_object(capsule) or not metrics then
        return false
    end

    local radius = tonumber(metrics.unscaled_radius)
    local half_height = tonumber(metrics.unscaled_half_height)
    if not radius or not half_height then
        return false
    end

    -- Actor scale handles the final world size. Keep local capsule dimensions at baseline
    -- so the capsule is not scaled twice.
    local ok, err = pcall(function()
        capsule:SetCapsuleSize(radius, half_height, true)
    end)

    if not ok then
        append("SetCapsuleSize failed on " .. fullname(capsule) .. ": " .. tostring(err))
        return false
    end

    return true
end

local function set_dynamic_capsule_height(component, baseline, scale)
    if not is_valid_object(component) then
        return 0
    end

    local changed = 0
    local standing = (baseline.dynamic_capsule and baseline.dynamic_capsule.standing) or baseline.base_half_height
    local desired = (baseline.dynamic_capsule and baseline.dynamic_capsule.desired) or standing
    local crouching = (baseline.dynamic_capsule and baseline.dynamic_capsule.crouching) or baseline.base_crouch_half_height

    local targets = {
        {"SetDynamicCapsuleStandingHalfHeight", standing * scale},
        {"SetDynamicCapsuleDesiredHalfHeight", desired * scale},
        {"SetDynamicCapsuleCrouchingHalfHeight", crouching * scale},
        {"SetDesiredCapsuleHalfHeight", desired * scale},
    }

    for _, item in ipairs(targets) do
        local ok = call_method(component, item[1], item[2])
        if ok then
            changed = changed + 1
        end
    end

    return changed
end

local function set_dynamic_capsule_settings(settings, baseline, scale)
    if not is_valid_object(settings) then
        return 0
    end

    local source = baseline.dynamic_settings or {}
    local base_half = baseline.base_half_height or 88.0
    local standing = (source.standing or base_half) * scale
    local current = (source.current or source.standing or base_half) * scale
    local crouching = (source.crouching or baseline.base_crouch_half_height or (base_half * 0.5)) * scale
    local min_height = math.max(0.001, math.min(standing, crouching) * 0.05)
    local max_height = math.max(standing, crouching, (source.max or base_half) * math.max(scale, 1.0))

    local changed = 0
    local values = {
        StandingCapsuleHalfHeight = standing,
        CurrentCapsuleHalfHeightForGroundCheck = current,
        CrouchingCapsuleHalfHeight = crouching,
        MinCapsuleHalfHeight = min_height,
        MaxCapsuleHalfHeight = max_height,
    }

    for property_name, value in pairs(values) do
        if try_set_property(settings, property_name, value) then
            changed = changed + 1
        end
    end

    return changed
end

local function teleport_actor_by_z(pawn, delta_z)
    if math.abs(delta_z or 0.0) < 0.001 then
        return false
    end

    local location = safe("K2_GetActorLocation", function()
        return pawn:K2_GetActorLocation()
    end)
    if not location then
        return false
    end

    local rotation = safe("K2_GetActorRotation", function()
        return pawn:K2_GetActorRotation()
    end)

    local new_location = make_vector(
        vector_axis(location, "X", 0.0),
        vector_axis(location, "Y", 0.0),
        vector_axis(location, "Z", 0.0) + delta_z)

    local ok = false
    if rotation then
        ok = safe("K2_TeleportTo", function()
            return pawn:K2_TeleportTo(new_location, rotation)
        end) == true
    end

    if not ok then
        local root = read_property(pawn, "RootComponent")
        if is_valid_object(root) then
            ok = safe("RootComponent:K2_SetWorldLocation", function()
                return root:K2_SetWorldLocation(new_location, false, {}, true)
            end) == true
        end
    end

    return ok
end

local function compensate_feet(pawn, baseline, scale, quiet, old_scale_override)
    local key = pawn_key(pawn)
    local previous = BODY_LAST_APPLIED[key]
    local old_scale = old_scale_override or (previous and previous.scale) or get_actor_scale_x(pawn)
    if math.abs(old_scale - scale) < 0.000001 then
        return 0.0
    end

    local base_half = baseline.base_half_height or 88.0
    local delta_z = (base_half * scale) - (base_half * old_scale)
    if teleport_actor_by_z(pawn, delta_z) then
        return delta_z
    end

    if not quiet then
        append(string.format("foot compensation failed: pawn=%s old_scale=%.6f new_scale=%.6f delta_z=%.2f",
            key, old_scale, scale, delta_z))
    end
    return 0.0
end

local function reset_body_physics(pawn, baseline)
    if not is_valid_object(pawn) or not baseline then
        return
    end

    set_capsule_from_baseline(read_property(pawn, "BodyCapsule"), baseline.body_capsule)
    set_capsule_from_baseline(read_property(pawn, "OverapCollision"), baseline.overlap_capsule)

    local settings = find_dynamic_capsule_settings(pawn)
    if is_valid_object(settings) and baseline.dynamic_settings then
        for _, item in ipairs({
            {"StandingCapsuleHalfHeight", baseline.dynamic_settings.standing},
            {"CurrentCapsuleHalfHeightForGroundCheck", baseline.dynamic_settings.current},
            {"CrouchingCapsuleHalfHeight", baseline.dynamic_settings.crouching},
            {"MinCapsuleHalfHeight", baseline.dynamic_settings.min},
            {"MaxCapsuleHalfHeight", baseline.dynamic_settings.max},
        }) do
            if item[2] ~= nil then
                try_set_property(settings, item[1], item[2])
            end
        end
    end

    local dynamic = read_property(pawn, "DynamicCapsuleHeightControl")
    if is_valid_object(dynamic) then
        set_dynamic_capsule_height(dynamic, baseline, 1.0)
        call_method(dynamic, "ClearDynamicCapsuleDesiredHalfHeight")
        call_method(dynamic, "ClearDesiredCapsuleHalfHeight")
        call_method(dynamic, "SetDynamicCapsuleCrouching", false)
    end
end

local function body_debug_lines(pawn)
    local lines = {}
    if not is_valid_object(pawn) then
        table.insert(lines, "体型诊断：当前还没有本地 Pawn。")
        return lines
    end

    local baseline = capture_body_baseline(pawn)
    table.insert(lines, "体型诊断 Pawn=" .. fullname(pawn))
    table.insert(lines, string.format("  actor_scale=(%s)，baseline_half=%.2f，mode=%s，target=%.6f",
        vector_to_string(get_actor_scale(pawn)),
        baseline.base_half_height or -1.0,
        CONFIG.BodyScaleMode,
        CONFIG.BodyScale))

    local capsules = {
        {"BodyCapsule", get_capsule_metrics(read_property(pawn, "BodyCapsule"))},
        {"OverapCollision", get_capsule_metrics(read_property(pawn, "OverapCollision"))},
    }

    for _, item in ipairs(capsules) do
        local name, metrics = item[1], item[2]
        if metrics then
            table.insert(lines, string.format("  %s：unscaled radius=%.2f half=%.2f；scaled radius=%.2f half=%.2f",
                name,
                tonumber(metrics.unscaled_radius) or -1.0,
                tonumber(metrics.unscaled_half_height) or -1.0,
                tonumber(metrics.scaled_radius) or -1.0,
                tonumber(metrics.scaled_half_height) or -1.0))
        else
            table.insert(lines, "  " .. name .. "：<invalid>")
        end
    end

    local dynamic = get_dynamic_capsule_metrics(read_property(pawn, "DynamicCapsuleHeightControl"))
    if dynamic then
        table.insert(lines, string.format("  DynamicCapsule：current=%.2f desired=%.2f standing=%.2f crouching=%.2f",
            tonumber(dynamic.current) or -1.0,
            tonumber(dynamic.desired) or -1.0,
            tonumber(dynamic.standing) or -1.0,
            tonumber(dynamic.crouching) or -1.0))
    else
        table.insert(lines, "  DynamicCapsule：<invalid>")
    end

    local settings = get_dynamic_capsule_settings_metrics(find_dynamic_capsule_settings(pawn))
    if settings then
        table.insert(lines, string.format("  DynamicSettings：current=%.2f standing=%.2f crouching=%.2f min=%.4f max=%.2f",
            tonumber(settings.current) or -1.0,
            tonumber(settings.standing) or -1.0,
            tonumber(settings.crouching) or -1.0,
            tonumber(settings.min) or -1.0,
            tonumber(settings.max) or -1.0))
    else
        table.insert(lines, "  DynamicSettings：<invalid>")
    end

    return lines
end

local function print_body_debug(ar, pawn)
    for _, line in ipairs(body_debug_lines(pawn or get_local_pawn())) do
        console(ar, line)
    end
end

local function set_actor_scale(pawn, scale, ar, reason, quiet)
    if not is_valid_object(pawn) then
        if not quiet then
            console(ar, "体型修改失败：当前还没有本地 Pawn，先进入房间或等角色生成后再执行。")
        end
        return false
    end

    local baseline = capture_body_baseline(pawn)
    local old_actor_scale = get_actor_scale_x(pawn)
    local before = nil
    if not quiet then
        before = get_actor_scale(pawn)
    end

    local vector = make_vector(scale, scale, scale)

    local ok, err = pcall(function()
        pawn:SetActorScale3D(vector)
    end)

    if not ok then
        if not quiet then
            append("SetActorScale3D failed: " .. tostring(err))
        end

        local root_ok, root = pcall(function()
            return pawn.RootComponent
        end)

        if root_ok and is_valid_object(root) then
            ok, err = pcall(function()
                root:SetWorldScale3D(vector)
            end)
            if not ok and not quiet then
                append("RootComponent:SetWorldScale3D failed: " .. tostring(err))
            end
        elseif not quiet then
            append("read RootComponent failed: " .. tostring(root))
        end
    end

    if ok then
        local capsule_changed = 0
        local dynamic_changed = 0
        local settings_changed = 0
        local foot_delta = 0.0
        local mode = CONFIG.BodyScaleMode or DEFAULTS.BodyScaleMode

        if mode == "physical" then
            if set_capsule_from_baseline(read_property(pawn, "BodyCapsule"), baseline.body_capsule) then
                capsule_changed = capsule_changed + 1
            end
            if set_capsule_from_baseline(read_property(pawn, "OverapCollision"), baseline.overlap_capsule) then
                capsule_changed = capsule_changed + 1
            end
            dynamic_changed = set_dynamic_capsule_height(read_property(pawn, "DynamicCapsuleHeightControl"), baseline, scale)
            settings_changed = set_dynamic_capsule_settings(find_dynamic_capsule_settings(pawn), baseline, scale)
            foot_delta = compensate_feet(pawn, baseline, scale, quiet, old_actor_scale)
        else
            reset_body_physics(pawn, baseline)
        end

        BODY_LAST_APPLIED[pawn_key(pawn)] = {
            scale = scale,
            mode = mode,
        }

        if not quiet then
            local after = get_actor_scale(pawn)
            console(ar, string.format("体型已应用到本地 Pawn：scale=%.6f，模式=%s，原因=%s，Pawn=%s，修改前=(%s)，修改后=(%s)，胶囊=%d，动态胶囊=%d，动态设置=%d，脚底补偿Z=%.2f",
                scale,
                mode,
                reason,
                fullname(pawn),
                vector_to_string(before),
                vector_to_string(after),
                capsule_changed,
                dynamic_changed,
                settings_changed,
                foot_delta))
        end
        return true
    end

    if not quiet then
        console(ar, "体型修改失败：SetActorScale3D 和 RootComponent:SetWorldScale3D 都没有成功。")
    end
    return false
end

local function get_player_display_name(player_state)
    if not is_valid_object(player_state) then
        return "<unknown>"
    end

    local custom_name = read_property(player_state, "CustomPlayerName")
    if custom_name ~= nil then
        local text = object_text(custom_name)
        if text ~= "" and text ~= "nil" then
            return text
        end
    end

    local ok, player_name = pcall(function()
        return player_state:GetPlayerName()
    end)

    if ok and player_name ~= nil then
        local text = object_text(player_name)
        if text ~= "" and text ~= "nil" then
            return text
        end
    end

    return fullname(player_state)
end

local function get_player_character(player_state)
    if not is_valid_object(player_state) then
        return CreateInvalidObject()
    end

    local target_character = read_property(player_state, "TargetCharacter")
    if is_valid_object(target_character) then
        return target_character
    end

    local pawn_private = read_property(player_state, "PawnPrivate")
    if is_valid_object(pawn_private) then
        return pawn_private
    end

    local ok_pawn, pawn = pcall(function()
        return player_state:GetPawn()
    end)
    if ok_pawn and is_valid_object(pawn) then
        return pawn
    end

    local controller = read_property(player_state, "As BP Player Controller C Leon")
    if not is_valid_object(controller) then
        local ok_controller, result = pcall(function()
            return player_state:GetPlayerController()
        end)
        if ok_controller then
            controller = result
        end
    end

    if is_valid_object(controller) then
        local controller_pawn = read_property(controller, "Pawn")
        if is_valid_object(controller_pawn) then
            return controller_pawn
        end
    end

    return CreateInvalidObject()
end

local function classify_player(role_hint, character)
    local name = string.lower(fullname(character))
    if string.find(name, "hunter", 1, true) then
        return "hunter"
    end
    if string.find(name, "survivor", 1, true) then
        return "survivor"
    end
    return role_hint or "player"
end

local function add_player_info(result, seen, player_state, role_hint)
    if not is_valid_object(player_state) then
        return
    end

    local character = get_player_character(player_state)
    if not is_valid_object(character) then
        return
    end

    local character_name = fullname(character)
    if seen[character_name] then
        return
    end

    seen[character_name] = true
    table.insert(result, {
        player_state = player_state,
        character = character,
        name = get_player_display_name(player_state),
        role = classify_player(role_hint, character),
    })
end

local function add_player_state_array(result, seen, array, role_hint)
    for_each_array(array, function(player_state)
        add_player_info(result, seen, player_state, role_hint)
    end)
end

local function add_character_fallbacks(result, seen)
    local local_pawn_name = fullname(get_local_pawn())
    local actors = safe("FindAllOf Character for vision", function()
        return FindAllOf("Character")
    end)

    if not actors then
        return
    end

    for _, actor in ipairs(actors) do
        if is_valid_object(actor) then
            local actor_name = fullname(actor)
            if actor_name ~= local_pawn_name
                and not seen[actor_name]
                and string.find(actor_name, "BP_FirstPersonCharacter_cLeon_Character", 1, true) then
                seen[actor_name] = true
                table.insert(result, {
                    player_state = CreateInvalidObject(),
                    character = actor,
                    name = "<no-player-state>",
                    role = classify_player("player", actor),
                })
            end
        end
    end
end

local function get_player_infos()
    local result = {}
    local seen = {}
    local game_state = UEHelpers.GetGameStateBase()

    if is_valid_object(game_state) then
        add_player_state_array(result, seen, read_property(game_state, "LiveSurvivors_PlayerState"), "survivor")
        add_player_state_array(result, seen, read_property(game_state, "HuntersPlayerState"), "hunter")
        add_player_state_array(result, seen, read_property(game_state, "PlayerArray"), "player")
    end

    add_character_fallbacks(result, seen)
    return result
end

local function is_local_character(character)
    local pawn = get_local_pawn()
    if not is_valid_object(pawn) or not is_valid_object(character) then
        return false
    end
    return fullname(pawn) == fullname(character)
end

local function vision_target_matches(info)
    if not info then
        return false
    end
    if is_local_character(info.character) then
        return false
    end

    local target = CONFIG.VisionTarget or DEFAULTS.VisionTarget
    if target == "all" then
        return true
    end
    if target == "survivor" or target == "survivors" then
        return info.role == "survivor"
    end
    if target == "hunter" or target == "hunters" then
        return info.role == "hunter"
    end
    return true
end

local function set_primitive_outline(component, enabled, stencil)
    if not is_valid_object(component) then
        return false
    end

    local changed = false
    local ok_depth = pcall(function()
        component:SetRenderCustomDepth(enabled)
    end)
    changed = changed or ok_depth

    if enabled then
        local ok_stencil = pcall(function()
            component:SetCustomDepthStencilValue(stencil)
        end)
        changed = changed or ok_stencil
    end

    try_set_property(component, "bRenderCustomDepth", enabled)
    if enabled then
        try_set_property(component, "CustomDepthStencilValue", stencil)
    end

    return changed
end

local function set_character_glow(character, enabled, stencil)
    local changed = 0
    local component_names = {
        "Mesh",
        "BodyCapsule",
        "Sphere",
        "FirstPersonMesh",
        "HandBone",
    }

    for _, component_name in ipairs(component_names) do
        if set_primitive_outline(read_property(character, component_name), enabled, stencil) then
            changed = changed + 1
        end
    end

    if enabled then
        call_method(character, "SetStencilValue(Force)", stencil)
    else
        call_method(character, "SetStencilValue(Force)", 0)
    end

    return changed
end

local function set_character_nameplate(character, display_name, enabled)
    local nameplate = read_property(character, "Nameplate")
    local changed = false

    if enabled then
        try_set_property(character, "CurrentNamePlateVisibility", true)
        try_set_property(character, "NamePlateVisibilityType", 1)
        if display_name and display_name ~= "" then
            call_method(character, "BindName", display_name)
        end
    end

    if is_valid_object(nameplate) then
        pcall(function()
            nameplate:SetHiddenInGame(not enabled, true)
        end)
        pcall(function()
            nameplate:SetVisibility(enabled, true)
        end)
        changed = true
    end

    call_method(character, "NamePlateUpdate")
    return changed
end

local function set_local_vision_controller_state(enabled)
    local controller = UEHelpers.GetPlayerController()
    if not is_valid_object(controller) then
        return
    end

    try_set_property(controller, "IsCanPenteration", enabled)
    try_set_property(controller, "GlobalNameplateVisibility", enabled and (CONFIG.VisionMode == "name" or CONFIG.VisionMode == "both"))
    call_method(controller, "CanPenterationUpdate", enabled)
    call_method(controller, "NamePlateVisibilityChange", enabled and (CONFIG.VisionMode == "name" or CONFIG.VisionMode == "both"))
end

local function apply_player_visual(info, enabled)
    if not info or not is_valid_object(info.character) then
        return 0
    end

    local mode = CONFIG.VisionMode or DEFAULTS.VisionMode
    local glow_enabled = enabled and (mode == "glow" or mode == "both")
    local name_enabled = enabled and (mode == "name" or mode == "both")
    local changed = 0

    if set_character_glow(info.character, glow_enabled, CONFIG.VisionStencil or DEFAULTS.VisionStencil) > 0 then
        changed = changed + 1
    end
    local actor_name = fullname(info.character)
    if name_enabled then
        if set_character_nameplate(info.character, info.name, true) then
            VISION_FORCED_NAMEPLATES[actor_name] = true
            changed = changed + 1
        end
    elseif VISION_FORCED_NAMEPLATES[actor_name] then
        set_character_nameplate(info.character, nil, false)
        VISION_FORCED_NAMEPLATES[actor_name] = nil
    end

    VISION_MARKED_ACTORS[actor_name] = info.character
    return changed
end

local function clear_vision_marks()
    local cleared = 0
    for actor_name, actor in pairs(VISION_MARKED_ACTORS) do
        if is_valid_object(actor) then
            set_character_glow(actor, false, 0)
            if VISION_FORCED_NAMEPLATES[actor_name] then
                set_character_nameplate(actor, nil, false)
            end
            cleared = cleared + 1
        end
        VISION_MARKED_ACTORS[actor_name] = nil
        VISION_FORCED_NAMEPLATES[actor_name] = nil
    end
    set_local_vision_controller_state(false)
    return cleared
end

local function apply_vision(reason, ar, quiet)
    if not CONFIG.VisionEnabled then
        local cleared = clear_vision_marks()
        if not quiet then
            console(ar, string.format("全局视觉已关闭，已清理 %d 个本地标记。", cleared))
        end
        return 0
    end

    set_local_vision_controller_state(true)

    local infos = get_player_infos()
    local applied = 0
    local seen_targets = {}

    for _, info in ipairs(infos) do
        if vision_target_matches(info) then
            if apply_player_visual(info, true) > 0 then
                applied = applied + 1
            end
            seen_targets[fullname(info.character)] = true
        end
    end

    for actor_name, actor in pairs(VISION_MARKED_ACTORS) do
        if not seen_targets[actor_name] then
            if is_valid_object(actor) then
                set_character_glow(actor, false, 0)
                if VISION_FORCED_NAMEPLATES[actor_name] then
                    set_character_nameplate(actor, nil, false)
                end
            end
            VISION_MARKED_ACTORS[actor_name] = nil
            VISION_FORCED_NAMEPLATES[actor_name] = nil
        end
    end

    if not quiet then
        console(ar, string.format("全局视觉已应用：目标=%s，模式=%s，Stencil=%d，命中远程角色=%d，原因=%s",
            CONFIG.VisionTarget,
            CONFIG.VisionMode,
            CONFIG.VisionStencil,
            applied,
            reason))
    end

    return applied
end

local function apply_camera(pawn)
    local camera = safe("read FirstPersonCamera", function()
        return pawn.FirstPersonCamera
    end)

    if is_valid_object(camera) then
        set_property(camera, "FieldOfView", CONFIG.CameraFOV)
        set_property(camera, "FirstPersonFieldOfView", CONFIG.FirstPersonFOV)
        set_property(camera, "bEnableFirstPersonFieldOfView", true)
        safe("CameraComponent:SetFieldOfView", function()
            camera:SetFieldOfView(CONFIG.CameraFOV)
        end)
    end

    local spring_arm = safe("read SpringArm", function()
        return pawn.SpringArm
    end)

    if is_valid_object(spring_arm) then
        set_property(spring_arm, "TargetArmLength", CONFIG.ThirdPersonDistance)
    end
end

local function apply_pawn(reason, ar)
    local config_signature = current_config_signature()

    if not CONFIG.Enabled then
        if last_apply_signature ~= "disabled" then
            append("disabled by config")
            last_apply_signature = "disabled"
        end
        return
    end

    local pawn = get_local_pawn()
    if not is_valid_object(pawn) then
        if ar then
            console(ar, "当前还没有本地 Pawn，先进入房间或等角色生成后再执行。")
        end
        return
    end

    local pawn_name = fullname(pawn)
    if pawn_name ~= last_pawn_name then
        last_pawn_name = pawn_name
        append("local pawn: " .. pawn_name)
    end

    apply_camera(pawn)
    set_property(pawn, "MouseSensitivity", CONFIG.MouseSensitivity)
    set_property(pawn, "TPS_CameraDistance", CONFIG.ThirdPersonDistance)
    set_property(pawn, "MoveSpeedMultiply", CONFIG.MoveSpeedMultiply)

    if CONFIG.DisablePaintViewLock then
        set_property(pawn, "IsPaintViewLock", false)
    end

    if CONFIG.BodyScaleEnabled then
        set_actor_scale(pawn, CONFIG.BodyScale, ar, reason, ar == nil)
    end

    if CONFIG.VisionEnabled then
        apply_vision(reason, ar, ar == nil)
    end

    local apply_signature = pawn_name .. "|" .. config_signature
    if apply_signature ~= last_apply_signature then
        last_apply_signature = apply_signature
        local message = string.format("applied reason=%s fov=%.1f fp_fov=%.1f tps=%.1f sensitivity=%.2f speed=%.2f paint_lock=%s body_scale=%s/%s/%.6f",
            reason,
            CONFIG.CameraFOV,
            CONFIG.FirstPersonFOV,
            CONFIG.ThirdPersonDistance,
            CONFIG.MouseSensitivity,
            CONFIG.MoveSpeedMultiply,
            CONFIG.DisablePaintViewLock and "off" or "unchanged",
            CONFIG.BodyScaleEnabled and "on" or "off",
            CONFIG.BodyScaleMode,
            CONFIG.BodyScale)
        if ar then
            console(ar, message)
        else
            append(message)
        end
    end
end

local function apply_on_game_thread(reason)
    ExecuteInGameThread(function()
        safe("apply_pawn " .. tostring(reason), function()
            apply_pawn(reason)
        end)
    end)
end

local function status(ar)
    local pawn = get_local_pawn()
    local scale_text = "<not ready>"
    if is_valid_object(pawn) then
        scale_text = vector_to_string(get_actor_scale(pawn))
    end

    console(ar, string.format("状态：启用=%s，FOV=%.1f，第一人称FOV=%.1f，第三人称距离=%.1f，鼠标灵敏度=%.2f，移动倍率=%.2f，绘画视角=%s，体型持续应用=%s，体型模式=%s，目标体型=%.6f，当前体型=(%s)",
        tostring(CONFIG.Enabled),
        CONFIG.CameraFOV,
        CONFIG.FirstPersonFOV,
        CONFIG.ThirdPersonDistance,
        CONFIG.MouseSensitivity,
        CONFIG.MoveSpeedMultiply,
        CONFIG.DisablePaintViewLock and "解锁" or "游戏默认",
        CONFIG.BodyScaleEnabled and "开" or "关",
        CONFIG.BodyScaleMode,
        CONFIG.BodyScale,
        scale_text))
    console(ar, string.format("全局视觉：%s，目标=%s，模式=%s，Stencil=%d，本次已标记=%d",
        CONFIG.VisionEnabled and "开" or "关",
        CONFIG.VisionTarget,
        CONFIG.VisionMode,
        CONFIG.VisionStencil,
        (function()
            local count = 0
            for _ in pairs(VISION_MARKED_ACTORS) do
                count = count + 1
            end
            return count
        end)()))
    console(ar, "本地 Pawn：" .. (is_valid_object(pawn) and fullname(pawn) or "<尚未生成>"))
end

local function help(ar)
    console(ar, "ChameleonQoL 命令说明：所有命令只影响本次游戏进程；退出游戏后不会保存，下次启动恢复默认。")
    console(ar, "目标范围：相机/移动/体型只改本地 Pawn；vision 会读取房间玩家列表，但只改你本机的渲染标记和名牌显示。")
    console(ar, "  cham status                         查看当前本次运行配置、本地 Pawn 名称、当前体型缩放。")
    console(ar, "  cham apply                          重新获取本地 Pawn，并把当前配置立即应用一次。")
    console(ar, "  cham on / cham off                  开启或关闭 QoL 自动应用；off 不会自动还原已改过的数值。")
    console(ar, "  cham set fov <60-140>               设置普通相机 FOV，例如：cham set fov 105")
    console(ar, "  cham set fpfov <60-140>             设置第一人称 FOV，例如：cham set fpfov 105")
    console(ar, "  cham set tps <150-1200>             设置第三人称相机距离，例如：cham set tps 560")
    console(ar, "  cham set sens <0.1-5>               设置鼠标灵敏度，例如：cham set sens 1.2")
    console(ar, "  cham set speed <0.1-3>              设置本地移动倍率，例如：cham set speed 1.15")
    console(ar, "  cham paint unlock/default           解锁绘画视角锁定，或恢复游戏默认处理。")
    console(ar, "  cham size <正数>                    设置自身体型倍率并持续应用，无上限限制，例如：cham size 0.05 / 2000")
    console(ar, "  cham size physical <正数>           默认模式：同步视觉缩放、碰撞胶囊、动态胶囊高度和脚底补偿。")
    console(ar, "  cham size visual <正数>             只改 Actor 视觉 scale，并重置体型碰撞；用于 physical 模式出问题时临时回退。")
    console(ar, "  cham size status                    只查看当前体型配置和本地 Pawn 当前 scale。")
    console(ar, "  cham size debug                     打印 BodyCapsule、OverapCollision、DynamicCapsule 的当前尺寸。")
    console(ar, "  cham size apply                     重新获取本地 Pawn，并按当前体型倍率应用一次。")
    console(ar, "  cham size off                       停止后续持续体型应用，但不还原当前体型。")
    console(ar, "  cham size reset                     把当前本地 Pawn 体型还原为 1.0，并关闭持续体型应用。")
    console(ar, "  cham setrandomplayersize <正数>     随机选择一位其他玩家改体型；排除自己；尽可能请求全房间可见。")
    console(ar, "  cham players                        列出当前可定位到的玩家、阵营、角色 Actor。")
    console(ar, "  cham vision on/off                  只在本机视角启用或关闭全局玩家身体位置显示。")
    console(ar, "  cham vision status                  查看全局视觉状态和当前可定位玩家。")
    console(ar, "  cham vision mode glow/name/both     glow=身体发光，name=名字牌，both=两者都开。默认 glow。")
    console(ar, "  cham vision target all/survivor/hunter  选择显示全部、幸存者或猎人。")
    console(ar, "  cham vision stencil <1-255>         设置发光 stencil 值，例如：cham vision stencil 2")
    console(ar, "  cham vision refresh                 重新扫描玩家并立即应用一次。")
    console(ar, "  cham reset                          重置 QoL 配置，并把当前本地 Pawn 体型还原为 1.0。")
end

local function startup_help()
    console(nil, "ChameleonQoL 已加载。配置只在本次游戏进程生效，不会永久保存；输入 cham 查看完整中文教程。")
    console(nil, "常用：cham status | cham apply | cham size 0.05 | cham size debug | cham size reset | cham vision on")
    console(nil, "好友整活：cham setrandomplayersize 0.25 | cham setrandomplayersize 3")
    console(nil, "相机：cham set fov 105 | cham set tps 560 | 移动：cham set speed 1.15 | 绘画：cham paint unlock")
    console(nil, "全局视觉：cham players | cham vision mode glow | cham vision target all | cham vision off")
end

local function handle_size_command(ar, parameters)
    local action = parameters[2] and string.lower(parameters[2]) or "help"
    local pawn = get_local_pawn()

    if action == "status" or action == "help" or action == "?" then
        console(ar, "体型命令：cham size <正数> / cham size physical <正数> / cham size visual <正数> / cham size debug / cham size reset")
        status(ar)
        return true
    elseif action == "debug" or action == "diag" or action == "diagnose" then
        print_body_debug(ar, pawn)
        return true
    elseif action == "apply" then
        if CONFIG.BodyScaleEnabled then
            set_actor_scale(pawn, CONFIG.BodyScale, ar, "console-size-apply")
        else
            console(ar, "体型持续应用当前为关闭。可以先执行：cham size 1.25")
        end
        return true
    elseif action == "off" or action == "disable" then
        CONFIG.BodyScaleEnabled = false
        console(ar, "已关闭后续持续体型应用；当前体型不会被自动还原。需要还原请用：cham size reset")
        return true
    elseif action == "reset" then
        CONFIG.BodyScaleEnabled = false
        CONFIG.BodyScale = 1.0
        CONFIG.BodyScaleMode = DEFAULTS.BodyScaleMode
        set_actor_scale(pawn, 1.0, ar, "console-size-reset")
        return true
    elseif action == "physical" or action == "phys" then
        CONFIG.BodyScaleMode = "physical"
        action = parameters[3] or tostring(CONFIG.BodyScale)
    elseif action == "visual" or action == "actor" then
        CONFIG.BodyScaleMode = "visual"
        action = parameters[3] or tostring(CONFIG.BodyScale)
    elseif action == "set" then
        action = parameters[3] or ""
    end

    local scale = finite_positive_number(action)
    if not scale then
        console(ar, "体型参数无效。用法：cham size <正数>，例如：cham size 0.05 / cham size 1.35 / cham size 2000")
        return true
    end

    CONFIG.BodyScaleEnabled = true
    CONFIG.BodyScale = scale
    set_actor_scale(pawn, CONFIG.BodyScale, ar, "console-size-set")
    return true
end

local function print_players(ar)
    local infos = get_player_infos()
    local local_name = fullname(get_local_pawn())
    console(ar, string.format("当前可定位玩家：%d 个。说明：local=yes 是你自己，不会被 vision 修改。", #infos))

    for index, info in ipairs(infos) do
        local is_local = fullname(info.character) == local_name
        console(ar, string.format("  [%d] name=%s role=%s local=%s actor=%s",
            index,
            info.name,
            info.role,
            is_local and "yes" or "no",
            fullname(info.character)))
    end

    if #infos == 0 then
        console(ar, "还没有拿到玩家数据。先进入局域网房间，等角色生成后再执行 cham players。")
    end

    return true
end

local function seed_random_once()
    if RANDOM_SEEDED then
        return
    end

    math.randomseed(os.time())
    math.random()
    math.random()
    RANDOM_SEEDED = true
end

local function has_authority(actor)
    if not is_valid_object(actor) then
        return false
    end

    local ok, result = pcall(function()
        return actor:HasAuthority()
    end)

    return ok and result == true
end

local function force_actor_net_update(actor)
    if not is_valid_object(actor) then
        return 0
    end

    local changed = 0
    if call_method(actor, "SetReplicates", true) then
        changed = changed + 1
    end
    if call_method(actor, "SetReplicateMovement", true) then
        changed = changed + 1
    end
    if call_method(actor, "SetNetUpdateFrequency", 100.0) then
        changed = changed + 1
    end
    if call_method(actor, "SetMinNetUpdateFrequency", 30.0) then
        changed = changed + 1
    end
    if call_method(actor, "ForceNetUpdate") then
        changed = changed + 1
    end

    local components = {
        read_property(actor, "RootComponent"),
        read_property(actor, "BodyCapsule"),
        read_property(actor, "OverapCollision"),
        read_property(actor, "Mesh"),
        read_property(actor, "FirstPersonMesh"),
    }

    for _, component in ipairs(components) do
        if is_valid_object(component) and call_method(component, "SetIsReplicated", true) then
            changed = changed + 1
        end
    end

    return changed
end

local function try_replicated_scale_routes(actor, scale)
    if not is_valid_object(actor) then
        return 0
    end

    local attempts = 0
    local baseline = capture_body_baseline(actor)
    local target_half_height = (baseline.base_half_height or 88.0) * scale
    local wants_crouch = scale < 1.0

    -- These are best-effort. On a non-owner client, Unreal may drop Server RPCs.
    if call_method(actor, "SetMeshDatas", true) then
        attempts = attempts + 1
    end
    if call_method(actor, "CustomCrouch(Server)", target_half_height, wants_crouch) then
        attempts = attempts + 1
    end
    if call_method(actor, "SetIsCrouching(Server)", wants_crouch) then
        attempts = attempts + 1
    end

    local dynamic = read_property(actor, "DynamicCapsuleHeightControl")
    if is_valid_object(dynamic) then
        for _, item in ipairs({
            {"ServerSetDesiredCapsuleHalfHeight", target_half_height},
            {"MulticastSetDesiredCapsuleHalfHeight", target_half_height},
            {"SetDesiredCapsuleHalfHeight", target_half_height},
            {"SetDynamicCapsuleDesiredHalfHeight", target_half_height},
            {"SetDynamicCapsuleStandingHalfHeight", target_half_height},
            {"SetDynamicCapsuleCrouchingHalfHeight", math.max(0.001, target_half_height * 0.5)},
        }) do
            if call_method(dynamic, item[1], item[2]) then
                attempts = attempts + 1
            end
        end
    end

    local mover = read_property(actor, "ExtendedPhysicsCharacterMoverComponent")
    if is_valid_object(mover) then
        for _, item in ipairs({
            {"ServerSetDesiredCapsuleHalfHeight", target_half_height},
            {"MulticastSetDesiredCapsuleHalfHeight", target_half_height},
            {"SetDesiredCapsuleHalfHeight", target_half_height},
        }) do
            if call_method(mover, item[1], item[2]) then
                attempts = attempts + 1
            end
        end
    end

    return attempts
end

local function remote_player_candidates()
    local result = {}
    local local_name = fullname(get_local_pawn())

    for _, info in ipairs(get_player_infos()) do
        if is_valid_object(info.character) and fullname(info.character) ~= local_name then
            table.insert(result, info)
        end
    end

    return result
end

local function handle_random_player_size_command(ar, parameters)
    local scale = finite_positive_number(parameters[2])
    if not scale then
        console(ar, "用法：cham setrandomplayersize <正数>。例如：cham setrandomplayersize 0.25 或 cham setrandomplayersize 5")
        return true
    end

    local candidates = remote_player_candidates()
    if #candidates == 0 then
        console(ar, "随机体型失败：当前没有可定位的其他玩家。先进入局域网房间，等其他玩家角色生成后再执行。")
        return true
    end

    seed_random_once()
    local target = candidates[math.random(1, #candidates)]
    local actor = target.character
    local authority = has_authority(actor)
    local previous_mode = CONFIG.BodyScaleMode

    CONFIG.BodyScaleMode = "physical"
    local applied = set_actor_scale(actor, scale, ar, "console-random-player-size", false)
    CONFIG.BodyScaleMode = previous_mode

    local net_updates = 0
    local replicated_attempts = 0
    if applied then
        replicated_attempts = try_replicated_scale_routes(actor, scale)
        net_updates = force_actor_net_update(actor)
    end

    console(ar, string.format("随机玩家体型：name=%s role=%s scale=%.6f actor=%s authority=%s replicated_attempts=%d net_update_calls=%d",
        target.name,
        target.role,
        scale,
        fullname(actor),
        tostring(authority),
        replicated_attempts,
        net_updates))

    if not authority then
        console(ar, "说明：当前客户端对目标 Actor 没有 authority；已尽可能尝试 Server/Multicast/NetUpdate 路线。如果其他人看不到，说明这些 RPC 被所有权校验拦住，还需要继续找游戏自带的客户端可请求复制入口。")
    else
        console(ar, "说明：已在有 authority 的 Actor 上修改并请求网络刷新；如果游戏没有复制 scale，可能仍需继续找游戏自己的复制入口。")
    end

    return true
end

local function vision_status(ar)
    status(ar)
    print_players(ar)
    return true
end

local function normalize_vision_mode(value)
    value = string.lower(tostring(value or ""))
    if value == "glow" or value == "body" or value == "outline" then
        return "glow"
    end
    if value == "name" or value == "names" or value == "nameplate" then
        return "name"
    end
    if value == "both" or value == "all" then
        return "both"
    end
    return nil
end

local function normalize_vision_target(value)
    value = string.lower(tostring(value or ""))
    if value == "all" or value == "players" or value == "player" then
        return "all"
    end
    if value == "survivor" or value == "survivors" or value == "s" then
        return "survivor"
    end
    if value == "hunter" or value == "hunters" or value == "h" then
        return "hunter"
    end
    return nil
end

local function handle_vision_command(ar, parameters)
    local action = parameters[2] and string.lower(parameters[2]) or "status"

    if action == "status" or action == "help" or action == "?" then
        console(ar, "全局视觉命令：cham vision on/off/status/refresh/mode/target/stencil")
        console(ar, "示例：cham vision on | cham vision mode glow | cham vision target all | cham vision stencil 2")
        return vision_status(ar)
    elseif action == "on" or action == "enable" then
        CONFIG.VisionEnabled = true
        apply_vision("console-vision-on", ar, false)
        return true
    elseif action == "off" or action == "disable" then
        CONFIG.VisionEnabled = false
        apply_vision("console-vision-off", ar, false)
        return true
    elseif action == "refresh" or action == "apply" then
        apply_vision("console-vision-refresh", ar, false)
        return true
    elseif action == "mode" then
        local mode = normalize_vision_mode(parameters[3])
        if not mode then
            console(ar, "模式参数无效。可用：glow / name / both。例如：cham vision mode glow")
            return true
        end
        CONFIG.VisionMode = mode
        if CONFIG.VisionEnabled then
            apply_vision("console-vision-mode", ar, false)
        else
            console(ar, "已设置全局视觉模式为 " .. mode .. "。启用命令：cham vision on")
        end
        return true
    elseif action == "target" then
        local target = normalize_vision_target(parameters[3])
        if not target then
            console(ar, "目标参数无效。可用：all / survivor / hunter。例如：cham vision target all")
            return true
        end
        CONFIG.VisionTarget = target
        if CONFIG.VisionEnabled then
            apply_vision("console-vision-target", ar, false)
        else
            console(ar, "已设置全局视觉目标为 " .. target .. "。启用命令：cham vision on")
        end
        return true
    elseif action == "stencil" or action == "color" then
        local stencil = number_value(parameters[3], nil, 1, 255)
        if not stencil then
            console(ar, "Stencil 参数无效。范围：1-255。例如：cham vision stencil 2")
            return true
        end
        CONFIG.VisionStencil = math.floor(stencil)
        if CONFIG.VisionEnabled then
            apply_vision("console-vision-stencil", ar, false)
        else
            console(ar, "已设置全局视觉 Stencil 为 " .. tostring(CONFIG.VisionStencil) .. "。启用命令：cham vision on")
        end
        return true
    end

    console(ar, "未知 vision 子命令。输入 cham vision 查看说明。")
    return true
end

local function set_number_from_command(ar, key, value)
    if key == "fov" then
        CONFIG.CameraFOV = number_value(value, CONFIG.CameraFOV, 60.0, 140.0)
    elseif key == "fpfov" or key == "fp_fov" then
        CONFIG.FirstPersonFOV = number_value(value, CONFIG.FirstPersonFOV, 60.0, 140.0)
    elseif key == "tps" or key == "distance" then
        CONFIG.ThirdPersonDistance = number_value(value, CONFIG.ThirdPersonDistance, 150.0, 1200.0)
    elseif key == "sens" or key == "sensitivity" then
        CONFIG.MouseSensitivity = number_value(value, CONFIG.MouseSensitivity, 0.1, 5.0)
    elseif key == "speed" then
        CONFIG.MoveSpeedMultiply = number_value(value, CONFIG.MoveSpeedMultiply, 0.1, 3.0)
    else
        console(ar, "未知设置项：" .. tostring(key) .. "。可用项：fov / fpfov / tps / sens / speed")
        return false
    end

    apply_pawn("console", ar)
    return true
end

local function handle_console_command(full_command, parameters, ar)
    local command = parameters[1] and string.lower(parameters[1]) or "help"

    if command == "help" or command == "?" then
        help(ar)
        return true
    elseif command == "status" then
        status(ar)
        return true
    elseif command == "apply" then
        apply_pawn("console", ar)
        return true
    elseif command == "on" or command == "enable" then
        CONFIG.Enabled = true
        apply_pawn("console", ar)
        return true
    elseif command == "off" or command == "disable" then
        CONFIG.Enabled = false
        status(ar)
        return true
    elseif command == "set" then
        if #parameters < 3 then
            console(ar, "用法：cham set <fov|fpfov|tps|sens|speed> <数值>。例如：cham set fov 105")
            return true
        end
        return set_number_from_command(ar, string.lower(parameters[2]), parameters[3])
    elseif command == "paint" then
        local value = parameters[2] and string.lower(parameters[2]) or ""
        if value == "unlock" or value == "unlocked" or value == "off" then
            CONFIG.DisablePaintViewLock = true
        elseif value == "default" or value == "lock" or value == "game" then
            CONFIG.DisablePaintViewLock = false
        else
            console(ar, "用法：cham paint unlock 或 cham paint default")
            return true
        end
        apply_pawn("console", ar)
        return true
    elseif command == "size" or command == "body" or command == "scale" then
        return handle_size_command(ar, parameters)
    elseif command == "setrandomplayersize" or command == "randomplayersize" or command == "randomsize" then
        return handle_random_player_size_command(ar, parameters)
    elseif command == "players" or command == "player" then
        return print_players(ar)
    elseif command == "vision" or command == "esp" or command == "highlight" then
        return handle_vision_command(ar, parameters)
    elseif command == "reset" then
        local pawn = get_local_pawn()
        set_defaults()
        clear_vision_marks()
        set_actor_scale(pawn, 1.0, ar, "console-reset")
        apply_pawn("console", ar)
        return true
    end

    help(ar)
    return true
end

local function safe_console_command(full_command, parameters, ar)
    local ok, result = pcall(function()
        return handle_console_command(full_command, parameters or {}, ar)
    end)

    if not ok then
        report_error(ar, "console command " .. tostring(full_command), result)
        return true
    end

    return result
end

local function schedule_apply(reason)
    ExecuteWithDelay(2500, function()
        apply_on_game_thread(reason .. "+2.5s")
    end)
    ExecuteWithDelay(8000, function()
        apply_on_game_thread(reason .. "+8s")
    end)
end

local function poll_config()
    local next_delay = DEFAULTS.PollIntervalMs

    local ok, err = pcall(function()
        next_delay = CONFIG.PollIntervalMs or DEFAULTS.PollIntervalMs

        if CONFIG.BodyScaleEnabled then
            ExecuteInGameThread(function()
                safe("body-scale-upkeep", function()
                    local pawn = get_local_pawn()
                    if is_valid_object(pawn) then
                        set_actor_scale(pawn, CONFIG.BodyScale, nil, "body-scale-upkeep", true)
                    end
                end)
            end)
        end

        if CONFIG.VisionEnabled then
            ExecuteInGameThread(function()
                safe("vision-upkeep", function()
                    apply_vision("vision-upkeep", nil, true)
                end)
            end)
        end
    end)

    if not ok then
        append("poll_config failed: " .. tostring(err))
    end

    ExecuteWithDelay(next_delay, poll_config)
end

append("mod loaded")
set_defaults()
last_config_signature = current_config_signature()
append("runtime defaults loaded: " .. last_config_signature)

RegisterConsoleCommandHandler("cham", safe_console_command)
RegisterConsoleCommandHandler("chameleon", safe_console_command)
startup_help()

RegisterLoadMapPostHook(function()
    safe("LoadMapPost hook", function()
        schedule_apply("LoadMapPost")
    end)
end)

ExecuteWithDelay(5000, function()
    apply_on_game_thread("StartupDelay")
end)

ExecuteWithDelay(7000, poll_config)
