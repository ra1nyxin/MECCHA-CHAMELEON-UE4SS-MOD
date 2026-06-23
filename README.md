# MECCHA CHAMELEON UE4SS MOD

这是给 `MECCHA CHAMELEON` / `Penguin Hotel` 的 UE4SS Lua mod 研究仓库。仓库根目录按游戏实际加载目录组织：

```text
Chameleon/Binaries/Win64
```

仓库包含 UE4SS 运行文件、当前可用的 UE4SS 设置、自定义签名、dump 出来的 C++ header/对象索引，以及自写的 `ChameleonQoL` Lua mod。游戏主程序 `PenguinHotel-Win64-Shipping.exe` 超过 40MB，未纳入仓库。

## 当前功能

主要命令入口是 UE4SS 控制台命令：

```text
cham
chameleon
```

所有配置都只在本次游戏进程中生效，退出游戏后恢复默认，不会写入持久配置。

### 基础 QoL

```text
cham status
cham apply
cham on
cham off
cham set fov <60-140>
cham set fpfov <60-140>
cham set tps <150-1200>
cham set sens <0.1-5>
cham set speed <0.1-3>
cham paint unlock
cham paint default
```

### 自身体型

只修改本地 `PlayerController.Pawn`，每次执行都会重新获取本地 Pawn，避免换角色样式后失效。

```text
cham size <0.2-5>
cham size status
cham size apply
cham size off
cham size reset
```

### 全局玩家位置显示

只影响本机视角。实现上读取房间玩家列表和角色 Actor，然后对远程玩家角色组件设置本机 `CustomDepth/Stencil`。不会调用带 `Server` / `Replicate` 后缀的函数。

```text
cham players
cham vision on
cham vision off
cham vision status
cham vision refresh
cham vision mode glow
cham vision mode name
cham vision mode both
cham vision target all
cham vision target survivor
cham vision target hunter
cham vision stencil <1-255>
```

默认模式是 `glow`，也就是身体发光。当前测试结果：局域网房间中其他玩家可以显示红色呼吸式发光。

如果能列出玩家但看不到发光，优先尝试：

```text
cham vision stencil 1
cham vision stencil 2
cham vision stencil 3
cham vision stencil 252
```

## 控制台说明

游戏启动后会出现两个和 UE4SS 相关的控制台：

1. 外部 UE4SS 调试控制台窗口。
2. UE4SS GUI 控制台窗口。

另外，游戏内按 `~` 可以打开 Unreal 虚幻内置控制台。当前 `ConsoleEnablerMod` 已启用，日志里能看到：

```text
ConsoleKey[1]: Tilde
ConsoleKey[2]: F10
```

也就是说：

```text
~
F10
```

都可以作为内置虚幻控制台入口。

优先使用虚幻内置控制台/UE4SS 控制台，比手搓 GUI 更适合这个项目：

- 不需要额外绑定大量快捷键。
- 不受笔记本屏幕缩放、DPI、窗口比例影响。
- 可以直接复用 UE4SS 的命令路由和日志输出。
- 可以快速测试 Unreal 对象、函数和蓝图接口。
- 后续加命令只需要扩展 Lua，不需要维护 ImGui/C++ 编译环境。

## 文件结构

核心文件：

```text
UE4SS.dll
dwmapi.dll
UE4SS-settings.ini
UE4SS_Signatures/StaticConstructObject.lua
Mods/mods.txt
Mods/mods.json
Mods/ChameleonQoL/Scripts/main.lua
Mods/ChameleonQoL/config.ini
CXXHeaderDump/
UE4SS_ObjectDump.txt
```

`dwmapi.dll` 是 UE4SS proxy loader。`UE4SS.dll` 是 UE4SS 本体。`UE4SS_Signatures/StaticConstructObject.lua` 是当前游戏版本需要的自定义签名。

`CXXHeaderDump/` 和 `UE4SS_ObjectDump.txt` 用于后续查类、属性、函数、蓝图接口，不是运行时必需文件，但对研究很有用。

## 已启用的 UE4SS 设置

关键设置位于：

```text
UE4SS-settings.ini
```

当前重点：

```ini
ConsoleEnabled = 1
GuiConsoleEnabled = 1
GuiConsoleVisible = 1
HookProcessConsoleExec = 1
```

`Mods/mods.txt` 中当前启用：

```text
CheatManagerEnablerMod : 1
ConsoleCommandsMod : 1
ConsoleEnablerMod : 1
BPML_GenericFunctions : 1
BPModLoaderMod : 1
ChameleonDiscovery : 0
ChameleonQoL : 1
Keybinds : 1
```

`ChameleonDiscovery` 默认关闭，避免每次启动都 dump 和刷日志。

## Lua 编写要点

主脚本：

```text
Mods/ChameleonQoL/Scripts/main.lua
```

基本结构：

```lua
local UEHelpers = require("UEHelpers")

RegisterConsoleCommandHandler("cham", safe_console_command)
RegisterConsoleCommandHandler("chameleon", safe_console_command)
```

主要安全包装：

```lua
is_valid_object(object)
safe(label, callable)
read_property(object, property_name)
try_set_property(object, property_name, value)
call_method(object, method_name, ...)
```

UE4SS hook 有时会传 `RemoteUnrealParam` 包装对象，所以不要在 hook 参数上直接裸调用：

```lua
actor:IsValid()
```

应通过 `pcall` 包装后的 `is_valid_object()` 检查。之前红屏刷日志就是 `RegisterBeginPlayPostHook` 里直接调用 `actor:IsValid()` 导致的。

当前脚本避免使用高频 `BeginPlay` hook，主要使用：

```lua
RegisterLoadMapPostHook(...)
ExecuteWithDelay(...)
ExecuteInGameThread(...)
```

## 源码关键字速查

以下内容在 `CXXHeaderDump/` 和 `UE4SS_ObjectDump.txt` 中很有用：

### 本地 Pawn / 相机 / 移动

```text
BP_FirstPersonCharacter_Main.hpp
FirstPersonCamera
SpringArm
MouseSensitivity
MoveSpeedMultiply
TPS_CameraDistance
SetActorScale3D
GetActorScale3D
```

### cLeon 角色和绘画

```text
BP_FirstPersonCharacter_cLeon_Character.hpp
IsPaintViewLock
IsPaintMode
Nameplate
BodyVisibility
CurrentNamePlateVisibility
NamePlateVisibilityType
SetStencilValue(Game)
SetStencilValue(Force)
BindName
NamePlateUpdate
ForceShowBody
ShowAllSurvivors(Local)
```

### 玩家列表和阵营

```text
BP_GameState_cLeon.hpp
Survivors
Hunters
LiveSurvivors_PlayerState
LiveSurvivors_Controller
HuntersPlayerState
ShowAllSurvivors
AllHunterStencilOff
```

### 玩家名字

```text
BP_FirstPersonPlayerState.hpp
TargetCharacter

BP_FirstPersonPlayerState_Online.hpp
CustomPlayerName
GetPlayerName
```

### 名牌 UI

```text
WBP_Nameplate.hpp
SetPlayerName
SetColor
SetEEYAN

WBP_SpectateNameplate.hpp
SetupSpectateNameplate
ViewChange
GetCustomPlayerName
```

### 轮廓/发光

```text
BPI_OutLine.hpp
View In Out Function

Engine.hpp
SetRenderCustomDepth
SetCustomDepthStencilValue
SetHiddenInGame
SetVisibility
```

### 控制器

```text
BP_PlayerController_cLeon.hpp
IsCanPenteration
GlobalNameplateVisibility
NamePlateVisibilityChange
CanPenterationUpdate
```

## Steam 更新后的处理

Steam 普通更新通常不会删除额外文件，但游戏主程序更新后 UE4SS 签名可能失效。优先检查：

```text
dwmapi.dll
UE4SS.dll
UE4SS.log
UE4SS_Signatures/StaticConstructObject.lua
```

如果 UE4SS 控制台不出现，先确认 `dwmapi.dll` 和 `UE4SS.dll` 是否还在。如果 UE4SS 能启动但 Lua 报错，查看：

```text
UE4SS.log
Mods/ChameleonQoL/qol.log
```

## 当前测试记录

- UE4SS 控制台可正常出现。
- 可以进入局域网房间。
- `cham size` 可以修改本地体型。
- `cham vision on` 可以让其他玩家身体出现红色呼吸式发光。
- 当前脚本不再持久保存功能配置。

## Tip

后续找功能入口时，先在 `CXXHeaderDump/` 搜类名和属性，再在 `UE4SS_ObjectDump.txt` 搜完整函数名。能复用游戏已有蓝图函数或组件属性时，优先复用；只有找不到原生入口时再考虑自己画 UI 或写更重的逻辑。
