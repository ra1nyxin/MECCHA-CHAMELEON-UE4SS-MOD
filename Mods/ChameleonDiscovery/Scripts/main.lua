local UEHelpers = require("UEHelpers")

local LOG_PATH = "Mods/ChameleonDiscovery/discovery.log"
local KEYWORDS = {
    "chameleon",
    "penguin",
    "paint",
    "draw",
    "camera",
    "first",
    "third",
    "move",
    "player",
    "character",
    "brush",
    "canvas",
    "photo",
    "view"
}

local dumped = false

local function now()
    return os.date("%Y-%m-%d %H:%M:%S")
end

local function append(line)
    print("[ChameleonDiscovery] " .. line .. "\n")
    local file = io.open(LOG_PATH, "a")
    if file then
        file:write(string.format("[%s] %s\n", now(), line))
        file:close()
    end
end

local function safe(callable, fallback)
    local ok, result = pcall(callable)
    if ok then
        return result
    end
    return fallback
end

local function fullname(object)
    if not object or not object:IsValid() then
        return "<invalid>"
    end
    return safe(function()
        return object:GetFullName()
    end, "<name-error>")
end

local function contains_keyword(text)
    local lower = string.lower(text or "")
    for _, keyword in ipairs(KEYWORDS) do
        if string.find(lower, keyword, 1, true) then
            return true
        end
    end
    return false
end

local function dump_object_group(class_name, limit)
    local objects = safe(function()
        return FindAllOf(class_name)
    end, nil)
    if not objects then
        append("FindAllOf(" .. class_name .. ") returned nil")
        return
    end

    append(string.format("FindAllOf(%s) count=%d", class_name, #objects))
    local count = math.min(#objects, limit)
    for index = 1, count do
        append(string.format("  [%d] %s", index, fullname(objects[index])))
    end
end

local function dump_struct_members(struct_object, max_functions, max_properties)
    local name = fullname(struct_object)
    append("CLASS " .. name)

    local function_count = 0
    safe(function()
        struct_object:ForEachFunction(function(function_object)
            if function_count >= max_functions then
                return
            end
            function_count = function_count + 1
            append("  FUNC " .. fullname(function_object))
        end)
    end)

    local property_count = 0
    safe(function()
        struct_object:ForEachProperty(function(property_object)
            if property_count >= max_properties then
                return
            end
            property_count = property_count + 1
            append("  PROP " .. fullname(property_object))
        end)
    end)
end

local function dump_matching_classes(max_classes)
    local scanned = 0
    local matched = 0
    local classes = safe(function()
        return FindAllOf("Class")
    end, nil)

    if classes then
        scanned = #classes
        for _, class_object in ipairs(classes) do
            if matched >= max_classes then
                break
            end
            local name = fullname(class_object)
            if contains_keyword(name) then
                matched = matched + 1
                dump_struct_members(class_object, 80, 80)
            end
        end
        append(string.format("FindAllOf(Class) scanned=%d matched_classes=%d", scanned, matched))
        return
    end

    local class_meta = StaticFindObject("/Script/CoreUObject.Class")
    if not class_meta or not class_meta:IsValid() then
        append("Unable to resolve /Script/CoreUObject.Class")
        return
    end

    safe(function()
        ForEachUObject(function(object)
            if matched >= max_classes then
                return
            end
            scanned = scanned + 1
            if object and object:IsValid() and object:IsA(class_meta) then
                local name = fullname(object)
                if contains_keyword(name) then
                    matched = matched + 1
                    dump_struct_members(object, 80, 80)
                end
            end
        end)
    end)

    append(string.format("ForEachUObject scanned=%d matched_classes=%d", scanned, matched))
end

local function dump_runtime_context()
    local engine = UEHelpers.GetEngine()
    local instance = UEHelpers.GetGameInstance()
    local world = UEHelpers.GetWorld()
    local controller = UEHelpers.GetPlayerController()
    local pawn = UEHelpers.GetPlayer()
    local game_state = UEHelpers.GetGameStateBase()
    local game_mode = UEHelpers.GetGameModeBase()

    append("Engine=" .. fullname(engine))
    append("GameInstance=" .. fullname(instance))
    append("World=" .. fullname(world))
    append("PlayerController=" .. fullname(controller))
    append("Pawn=" .. fullname(pawn))
    append("GameState=" .. fullname(game_state))
    append("GameMode=" .. fullname(game_mode))
end

local function run_discovery(reason)
    if dumped then
        return
    end
    dumped = true

    append("=== discovery start: " .. reason .. " ===")
    dump_runtime_context()
    dump_object_group("PlayerController", 20)
    dump_object_group("Character", 30)
    dump_object_group("Pawn", 30)
    dump_object_group("CameraComponent", 30)
    dump_object_group("SpringArmComponent", 30)
    dump_object_group("UserWidget", 50)
    dump_matching_classes(160)
    append("=== discovery end ===")
end

append("mod loaded")

RegisterLoadMapPostHook(function()
    dumped = false
    ExecuteWithDelay(5000, function()
        run_discovery("LoadMapPost")
    end)
end)

RegisterBeginPlayPostHook(function(actor)
    if not dumped then
        ExecuteWithDelay(5000, function()
            run_discovery("BeginPlayPost")
        end)
    end
end)

ExecuteWithDelay(8000, function()
    run_discovery("StartupDelay")
end)
