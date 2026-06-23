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
    CONFIG.VisionEnabled = DEFAULTS.VisionEnabled
    CONFIG.VisionMode = DEFAULTS.VisionMode
    CONFIG.VisionTarget = DEFAULTS.VisionTarget
    CONFIG.VisionStencil = DEFAULTS.VisionStencil
    CONFIG.PollIntervalMs = DEFAULTS.PollIntervalMs
end

local function current_config_signature()
    return string.format("%s|%.2f|%.2f|%.2f|%.2f|%.2f|%s|%s|%.2f|%s|%s|%s|%d|%d",
        tostring(CONFIG.Enabled),
        CONFIG.CameraFOV,
        CONFIG.FirstPersonFOV,
        CONFIG.ThirdPersonDistance,
        CONFIG.MouseSensitivity,
        CONFIG.MoveSpeedMultiply,
        tostring(CONFIG.DisablePaintViewLock),
        tostring(CONFIG.BodyScaleEnabled),
        CONFIG.BodyScale,
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

local function set_actor_scale(pawn, scale, ar, reason, quiet)
    if not is_valid_object(pawn) then
        if not quiet then
            console(ar, "体型修改失败：当前还没有本地 Pawn，先进入房间或等角色生成后再执行。")
        end
        return false
    end

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
        if not quiet then
            local after = get_actor_scale(pawn)
            console(ar, string.format("体型已应用到本地 Pawn：scale=%.2f，原因=%s，Pawn=%s，修改前=(%s)，修改后=(%s)",
                scale,
                reason,
                fullname(pawn),
                vector_to_string(before),
                vector_to_string(after)))
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
        local message = string.format("applied reason=%s fov=%.1f fp_fov=%.1f tps=%.1f sensitivity=%.2f speed=%.2f paint_lock=%s body_scale=%s/%.2f",
            reason,
            CONFIG.CameraFOV,
            CONFIG.FirstPersonFOV,
            CONFIG.ThirdPersonDistance,
            CONFIG.MouseSensitivity,
            CONFIG.MoveSpeedMultiply,
            CONFIG.DisablePaintViewLock and "off" or "unchanged",
            CONFIG.BodyScaleEnabled and "on" or "off",
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

    console(ar, string.format("状态：启用=%s，FOV=%.1f，第一人称FOV=%.1f，第三人称距离=%.1f，鼠标灵敏度=%.2f，移动倍率=%.2f，绘画视角=%s，体型持续应用=%s，目标体型=%.2f，当前体型=(%s)",
        tostring(CONFIG.Enabled),
        CONFIG.CameraFOV,
        CONFIG.FirstPersonFOV,
        CONFIG.ThirdPersonDistance,
        CONFIG.MouseSensitivity,
        CONFIG.MoveSpeedMultiply,
        CONFIG.DisablePaintViewLock and "解锁" or "游戏默认",
        CONFIG.BodyScaleEnabled and "开" or "关",
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
    console(ar, "  cham size <0.2-5>                   设置自身体型倍率并持续应用，例如：cham size 1.35")
    console(ar, "  cham size status                    只查看当前体型配置和本地 Pawn 当前 scale。")
    console(ar, "  cham size apply                     重新获取本地 Pawn，并按当前体型倍率应用一次。")
    console(ar, "  cham size off                       停止后续持续体型应用，但不还原当前体型。")
    console(ar, "  cham size reset                     把当前本地 Pawn 体型还原为 1.0，并关闭持续体型应用。")
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
    console(nil, "常用：cham status | cham apply | cham size 1.35 | cham size reset | cham vision on")
    console(nil, "相机：cham set fov 105 | cham set tps 560 | 移动：cham set speed 1.15 | 绘画：cham paint unlock")
    console(nil, "全局视觉：cham players | cham vision mode glow | cham vision target all | cham vision off")
end

local function handle_size_command(ar, parameters)
    local action = parameters[2] and string.lower(parameters[2]) or "help"
    local pawn = get_local_pawn()

    if action == "status" or action == "help" or action == "?" then
        console(ar, "体型命令：cham size <0.2-5> / cham size apply / cham size off / cham size reset")
        status(ar)
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
        set_actor_scale(pawn, 1.0, ar, "console-size-reset")
        return true
    elseif action == "set" then
        action = parameters[3] or ""
    end

    local scale = number_value(action, nil, 0.2, 5.0)
    if not scale then
        console(ar, "体型参数无效。用法：cham size <0.2-5>，例如：cham size 1.35")
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
