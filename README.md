# MECCHA CHAMELEON UE4SS MOD

这是给 `MECCHA CHAMELEON` / `Penguin Hotel` 做 UE4SS Lua mod 的研究仓库。仓库根目录就是游戏实际注入目录：

```text
Chameleon/Binaries/Win64
# Chameleon/Binaries/Win64：游戏 Win64 可执行文件所在目录，也是 UE4SS.dll 和 dwmapi.dll 放置目录。
```

仓库包含：

- UE4SS 运行文件：`UE4SS.dll`、`dwmapi.dll`、`tbb12.dll`、`tbbmalloc.dll`。
- 当前游戏可用的 UE4SS 设置：`UE4SS-settings.ini`。
- 当前游戏需要的 UE4SS 签名：`UE4SS_Signatures/StaticConstructObject.lua`。
- UE4SS 自带 Lua mod 和自写 `ChameleonQoL` mod。
- Dump 出来的研究资料：`CXXHeaderDump/` 和 `UE4SS_ObjectDump.txt`。
- 中文 README，用来快速回忆怎么调命令、查函数、修 UE4SS 设置。

没有纳入仓库的主要是原游戏大文件和运行日志，例如 `PenguinHotel-Win64-Shipping.exe`、`*.log`、`liveview/`、`watches/`。

## 快速使用

启动游戏后，如果 UE4SS 正常加载，会看到 UE4SS 的外部控制台和 GUI 调试控制台。进入局域网房间后，按 `~` 或 `F10` 打开虚幻内置控制台，然后输入命令。

```text
cham
# cham：ChameleonQoL 的主命令；不带参数时打印完整中文帮助。
```

```text
chameleon
# chameleon：cham 的完整别名；参数和 cham 完全一致。
```

常用命令：

```text
cham status
# cham：主命令。
# status：查看当前本次运行配置、本地 Pawn、体型、全局视觉状态。
```

```text
cham apply
# cham：主命令。
# apply：重新获取本地 Pawn，并把当前相机、移动、绘画、体型、全局视觉配置应用一次。
```

```text
cham size 1.35
# cham：主命令。
# size：体型功能。
# 1.35：目标体型倍率；必须是正数，没有上限限制；默认走 physical 模式，只应用到本机 PlayerController 当前 Pawn。
```

```text
cham size reset
# cham：主命令。
# size：体型功能。
# reset：把当前本地 Pawn 体型还原为 1.0，并关闭后续持续体型应用。
```

```text
cham vision on
# cham：主命令。
# vision：全局玩家位置显示功能。
# on：启用；只改本机渲染标记，不会让其他玩家看到全局玩家位置。
```

```text
cham players
# cham：主命令。
# players：列出当前可定位的玩家名字、阵营、本地/远程标记、角色 Actor。
```

所有 ChameleonQoL 配置都只在本次游戏进程里生效。退出游戏后不会保存，下次启动回到脚本默认值。

## 功能命令手册

### 基础状态和总开关

```text
cham status
# cham：主命令。
# status：查看当前配置、Pawn 名称、当前 Actor scale、vision 已标记数量。
```

```text
cham apply
# cham：主命令。
# apply：手动重新应用当前配置；换角色、进房间后功能没跟上时优先用它。
```

```text
cham on
# cham：主命令。
# on：开启 QoL 自动应用；后续轮询会继续维护相机、移动、绘画锁、体型和 vision。
```

```text
cham off
# cham：主命令。
# off：关闭 QoL 自动应用；不会自动还原已经改过的数值。
```

```text
cham reset
# cham：主命令。
# reset：重置本次运行配置，并把当前本地 Pawn 的体型还原为 1.0。
```

### 相机和移动

```text
cham set fov 105
# cham：主命令。
# set：设置数值型配置。
# fov：普通相机 FOV。
# 105：目标 FOV；范围 60 到 140；会被限制在合法范围内。
```

```text
cham set fpfov 105
# cham：主命令。
# set：设置数值型配置。
# fpfov：第一人称相机 FOV。
# 105：目标第一人称 FOV；范围 60 到 140。
```

```text
cham set tps 560
# cham：主命令。
# set：设置数值型配置。
# tps：第三人称 SpringArm/相机距离相关配置。
# 560：目标第三人称距离；范围 150 到 1200。
```

```text
cham set sens 1.2
# cham：主命令。
# set：设置数值型配置。
# sens：鼠标灵敏度。
# 1.2：目标灵敏度倍率；范围 0.1 到 5.0。
```

```text
cham set speed 1.15
# cham：主命令。
# set：设置数值型配置。
# speed：本地移动倍率。
# 1.15：目标移动倍率；范围 0.1 到 3.0；只改本地 Pawn。
```

### 绘画视角锁定

```text
cham paint unlock
# cham：主命令。
# paint：绘画相关功能。
# unlock：解锁绘画时的视角锁定，方便移动和观察。
```

```text
cham paint default
# cham：主命令。
# paint：绘画相关功能。
# default：恢复游戏默认绘画视角锁定逻辑。
```

### 自身体型

体型功能只修改本地 `PlayerController.Pawn`。每次命令执行前都会重新获取本地 Pawn，避免换角色样式、重生、进出房间后拿到旧对象。

默认 `physical` 模式会同时处理：

- Actor 视觉缩放：`SetActorScale3D`。
- `BodyCapsule` / `OverapCollision` 胶囊体。
- `DynamicCapsuleHeightControl` 当前/站立/蹲伏半高。
- `DynamicCapsuleHeightSettings` 的最小/最大胶囊高度限制。
- 缩放前后胶囊半高差导致的脚底 Z 补偿。

这样比旧版单纯缩放 Actor 更适合超小体型、老鼠洞、沙发靠墙小角落这类低矮空间。

```text
cham size 1.35
# cham：主命令。
# size：体型功能。
# 1.35：目标体型倍率；必须是正数，没有上限限制；默认 physical 模式，开启持续应用。
```

```text
cham size 0.05
# cham：主命令。
# size：体型功能。
# 0.05：很小的体型倍率；会同步视觉、碰撞胶囊、动态胶囊高度和脚底补偿。
```

```text
cham size 2000
# cham：主命令。
# size：体型功能。
# 2000：超大体型倍率；没有人为上限，实际表现取决于 UE 物理、地图碰撞和相机裁剪。
```

```text
cham size set 1.35
# cham：主命令。
# size：体型功能。
# set：显式设置体型；等价于 cham size 1.35。
# 1.35：目标体型倍率；必须是正数，没有上限限制。
```

```text
cham size physical 0.05
# cham：主命令。
# size：体型功能。
# physical：默认模式；同步 Actor scale、碰撞胶囊、动态胶囊高度、动态胶囊设置和脚底补偿。
# 0.05：目标体型倍率；适合钻老鼠洞这类低矮空间。
```

```text
cham size visual 0.05
# cham：主命令。
# size：体型功能。
# visual：回退模式；主要改 Actor scale，并把动态胶囊设置恢复基线。
# 0.05：目标体型倍率；如果 physical 模式和某些地图机关冲突，可以临时用这个模式对比。
```

```text
cham size status
# cham：主命令。
# size：体型功能。
# status：查看体型开关、目标体型、本地 Pawn 当前 scale。
```

```text
cham size debug
# cham：主命令。
# size：体型功能。
# debug：打印 Actor scale、BodyCapsule、OverapCollision、DynamicCapsule、DynamicSettings 当前数值。
```

```text
cham size apply
# cham：主命令。
# size：体型功能。
# apply：重新获取本地 Pawn，并把当前目标体型应用一次。
```

```text
cham size off
# cham：主命令。
# size：体型功能。
# off：关闭后续持续体型应用；当前体型不会被自动还原。
```

```text
cham size reset
# cham：主命令。
# size：体型功能。
# reset：把当前本地 Pawn 体型设回 1.0，并关闭持续体型应用。
```

### 随机修改其他玩家体型

这条命令会从当前可定位到的其他玩家中随机挑一位，永远排除你自己的本地 Pawn。它是一次性应用，不会持续循环维护；目标换角色、重生或游戏同步覆盖后可能恢复。

```text
cham setrandomplayersize 0.25
# cham：主命令。
# setrandomplayersize：随机选择一位其他玩家并修改体型。
# 0.25：目标体型倍率；必须是正数；这次会尝试让全房间都能看到变化。
```

```text
cham setrandomplayersize 3
# cham：主命令。
# setrandomplayersize：随机选择一位其他玩家并修改体型。
# 3：把随机目标放大到 3 倍；只执行一次，不写配置，不进入持续应用。
```

实现上会先本地修改目标 Actor，然后尽可能尝试这些网络刷新/复制路线：

- `SetReplicates(true)`
- `SetReplicateMovement(true)`
- `ForceNetUpdate()`
- `SetIsReplicated(true)` on Root/Mesh/Capsule
- `CustomCrouch(Server)`
- `ServerSetDesiredCapsuleHalfHeight`
- `MulticastSetDesiredCapsuleHalfHeight`

如果命令输出 `authority=false`，说明当前客户端不是目标 Actor 的服务端 authority。脚本仍会尽可能尝试 Server/Multicast 路线，但 Unreal 可能因为 owner 校验丢弃这些 RPC；这种情况下其他人可能看不到变化，需要继续找游戏自带的客户端可请求复制入口。

### 全局玩家位置显示

这个功能只影响本机视角。它会读取房间内玩家列表和角色 Actor，然后对远程玩家角色组件设置本机 `CustomDepth/Stencil` 或名牌可见性。脚本不会调用 `Server` / `Replicate` 后缀函数。

当前 `cham vision on` 默认按“尽量显示全部远程玩家”处理，包括游戏里暂时隐身、透明、被本地隐藏或不在正常视线内的玩家。实现上会同时做这些本地操作：

- 从 `GameState` 的 `LiveSurvivors_PlayerState`、`HuntersPlayerState`、`PlayerArray` 读取 PlayerState。
- 从 `GameState` 的 `Survivors`、`Hunters`、`LiveSurvivors_Controller` 读取 Controller，再反查 PlayerState/Pawn。
- 使用 `FindAllOf("Character")` 兜底扫描本机已经存在的 `BP_FirstPersonCharacter_cLeon_Character`。
- 调用游戏自带的 `ShowAllSurvivors` / `ShowAllSurvivors(Local)` 本地显示逻辑。
- 对目标 Actor 临时设置 `SetActorHiddenInGame(false)`、`BodyVisibility=true`、`LocalFound=true`、`HideBlock=false`。
- 对目标 `Mesh`、`BodyCapsule`、`OverapCollision`、`Sphere`、`FirstPersonMesh`、`RootComponent` 等组件临时设置 `SetHiddenInGame(false)`、`SetVisibility(true)`、`SetRenderInMainPass(true)` 和 `CustomDepth/Stencil`。
- `cham vision off` 会按脚本记录的原始隐藏/可见状态、`CustomDepth` 和 `Stencil` 尽量恢复。

注意：如果某个玩家 Actor 根本没有复制到你的客户端，本机没有那个 Actor，客户端脚本就没有可绘制对象。此时 `cham players` / `cham vision status` 也看不到该目标，需要继续找游戏的复制相关入口，而不是继续调 Stencil。

```text
cham players
# cham：主命令。
# players：打印当前可定位玩家列表；local=yes 的是你自己，不会被 vision 修改。
```

```text
cham vision on
# cham：主命令。
# vision：全局玩家位置显示功能。
# on：启用全局玩家身体/名牌显示；默认模式是 glow，并尝试显示隐身/隐藏玩家。
```

```text
cham vision off
# cham：主命令。
# vision：全局玩家位置显示功能。
# off：关闭显示，并尝试清理脚本标记过的 CustomDepth/Stencil、名牌状态和临时可见性修改。
```

```text
cham vision status
# cham：主命令。
# vision：全局玩家位置显示功能。
# status：查看 vision 配置，并打印当前可定位玩家列表。
```

```text
cham vision refresh
# cham：主命令。
# vision：全局玩家位置显示功能。
# refresh：重新扫描玩家并立即应用一次；玩家加入、离开、重生、隐身状态变化后优先执行。
```

```text
cham vision mode glow
# cham：主命令。
# vision：全局玩家位置显示功能。
# mode：选择显示模式。
# glow：身体发光模式；别名 body、outline。
```

```text
cham vision mode name
# cham：主命令。
# vision：全局玩家位置显示功能。
# mode：选择显示模式。
# name：名字牌模式；别名 names、nameplate。
```

```text
cham vision mode both
# cham：主命令。
# vision：全局玩家位置显示功能。
# mode：选择显示模式。
# both：身体发光和名字牌都启用。
```

```text
cham vision target all
# cham：主命令。
# vision：全局玩家位置显示功能。
# target：选择显示目标。
# all：显示可定位到的全部远程玩家；别名 players、player。
```

```text
cham vision target survivor
# cham：主命令。
# vision：全局玩家位置显示功能。
# target：选择显示目标。
# survivor：只显示幸存者；别名 survivors、s。
```

```text
cham vision target hunter
# cham：主命令。
# vision：全局玩家位置显示功能。
# target：选择显示目标。
# hunter：只显示猎人；别名 hunters、h。
```

```text
cham vision stencil 2
# cham：主命令。
# vision：全局玩家位置显示功能。
# stencil：设置 CustomDepth Stencil 值，也可写成 color。
# 2：Stencil 数值；范围 1 到 255；不同值可能对应不同后处理颜色。
```

如果能列出玩家但看不到发光，可以尝试这些值：

```text
cham vision stencil 1
# cham：主命令。
# vision：全局玩家位置显示功能。
# stencil：修改发光 Stencil 值。
# 1：当前默认值，测试时在局域网房间表现为红色呼吸式发光。
```

```text
cham vision stencil 2
# cham：主命令。
# vision：全局玩家位置显示功能。
# stencil：修改发光 Stencil 值。
# 2：备用 Stencil 值；用于测试当前地图后处理颜色映射。
```

```text
cham vision stencil 3
# cham：主命令。
# vision：全局玩家位置显示功能。
# stencil：修改发光 Stencil 值。
# 3：备用 Stencil 值；用于测试当前地图后处理颜色映射。
```

```text
cham vision stencil 252
# cham：主命令。
# vision：全局玩家位置显示功能。
# stencil：修改发光 Stencil 值。
# 252：高位备用 Stencil 值；有些项目会把高值映射给特殊轮廓颜色。
```

## 控制台入口

这个项目优先使用虚幻内置控制台和 UE4SS 控制台，不手搓 GUI。原因是命令更适合快速研究 dump 出来的对象和函数，也避开笔记本 DPI、系统缩放、窗口比例对 ImGui 的影响。

游戏启动时可能看到三个窗口：

- 游戏窗口。
- 外部 UE4SS debug console，类似普通命令行窗口。
- UE4SS GUI debug console，是 UE4SS 自己的调试窗口。

游戏内控制台入口：

```text
~
# ~：Tilde 键；ConsoleEnablerMod 当前会把它注册为 Unreal 内置控制台键。
```

```text
F10
# F10：备用 Unreal 内置控制台键；如果 ~ 被输入法或键盘布局占用，可以用它。
```

UE4SS 控制台命令注册点：

```lua
RegisterConsoleCommandHandler("cham", safe_console_command)
-- RegisterConsoleCommandHandler：UE4SS Lua API，用来注册控制台命令。
-- "cham"：命令名；在 UE4SS/Unreal 控制台里输入 cham 会进入 safe_console_command。
-- safe_console_command：安全包装后的命令处理函数，内部用 pcall 防止红屏刷错。
```

```lua
RegisterConsoleCommandHandler("chameleon", safe_console_command)
-- RegisterConsoleCommandHandler：UE4SS Lua API，用来注册控制台命令。
-- "chameleon"：cham 的完整别名。
-- safe_console_command：同一个命令处理入口。
```

## 文件结构

核心运行文件：

```text
UE4SS.dll
# UE4SS.dll：UE4SS 本体。
```

```text
dwmapi.dll
# dwmapi.dll：UE4SS proxy loader；游戏启动时通过它加载 UE4SS.dll。
```

```text
tbb12.dll
# tbb12.dll：UE4SS 运行依赖之一。
```

```text
tbbmalloc.dll
# tbbmalloc.dll：UE4SS 运行依赖之一。
```

核心配置和脚本：

```text
UE4SS-settings.ini
# UE4SS-settings.ini：UE4SS 主配置；控制控制台、hook、dump、扫描、GUI 等行为。
```

```text
UE4SS_Signatures/StaticConstructObject.lua
# StaticConstructObject.lua：当前游戏版本需要的自定义签名；UE4SS 扫不到对象构造相关函数时要看它。
```

```text
Mods/mods.txt
# mods.txt：UE4SS mod 启用列表；1 表示启用，0 表示禁用。
```

```text
Mods/ChameleonQoL/Scripts/main.lua
# main.lua：本项目自写功能主脚本；命令、体型、vision、相机、移动都在这里。
```

```text
Mods/ChameleonQoL/config.ini
# config.ini：只保留说明；当前脚本不会把运行时配置写回这里。
```

研究资料：

```text
CXXHeaderDump/
# CXXHeaderDump：UE4SS 生成的 C++ header dump；适合查类、属性、函数签名。
```

```text
UE4SS_ObjectDump.txt
# UE4SS_ObjectDump.txt：UE4SS 对象 dump；适合搜完整 UObject 名、蓝图路径、函数路径。
```

## UE4SS-settings.ini 推荐设置

当前游戏的推荐目标是：稳定启动、能打开 UE4SS GUI 控制台、能打开 Unreal 内置控制台、能执行 Lua 控制台命令、能 dump/查对象，同时避免一启动就强行加载全部资源导致崩溃。

### General

```ini
EnableHotReloadSystem = 1
; EnableHotReloadSystem：启用 UE4SS 热重载；开发 Lua 时可用 Ctrl + HotReloadKey 重新加载 mod。

HotReloadKey = R
; HotReloadKey：热重载字母键；实际组合是 Ctrl + R，不是单独 R。

UseCache = 1
; UseCache：启用 AOB 扫描缓存；减少后续启动扫描成本。

InvalidateCacheIfDLLDiffers = 1
; InvalidateCacheIfDLLDiffers：UE4SS.dll 变化时自动废弃旧缓存，避免升级 UE4SS 后用错缓存。

SecondsToScanBeforeGivingUp = 60
; SecondsToScanBeforeGivingUp：签名扫描超时时间；这个游戏建议给到 60 秒，避免机器慢时过早失败。

bUseUObjectArrayCache = false
; bUseUObjectArrayCache：当前设为 false；如果开 true 启动崩溃或对象缓存异常，就保持 false。

DoEarlyScan = 0
; DoEarlyScan：不开早期扫描；减少游戏刚启动阶段的注入不稳定因素。

DefaultExecuteInGameThreadMethod = EngineTick
; DefaultExecuteInGameThreadMethod：Lua ExecuteInGameThread 默认走 EngineTick；时序更稳定，适合本项目轮询应用。

DefaultFNameToStringMethod = Scan
; DefaultFNameToStringMethod：FName 转字符串方式；保持 Scan，兼容当前 dump/日志表现。
```

### Dump

```ini
LoadAllAssetsBeforeDumpingObjects = 0
; LoadAllAssetsBeforeDumpingObjects：对象 dump 前不强制加载全部资源；强制加载很吃内存，且进主菜单后继续玩容易崩。

UseModuleOffsets = 1
; UseModuleOffsets：dump 函数地址时使用模块偏移；研究不同版本差异时更方便。

DumpOffsetsAndSizes = 1
; DumpOffsetsAndSizes：CXX header 输出属性偏移和大小；查内存布局和字段位置时有用。

KeepMemoryLayout = 0
; KeepMemoryLayout：不强求生成可直接编译的精确布局；UE4SS 这里本来也不是完整 SDK 生成器。

LoadAllAssetsBeforeGeneratingCXXHeaders = 0
; LoadAllAssetsBeforeGeneratingCXXHeaders：生成 CXX header 前不强制加载全部资源；优先稳定。
```

### Debug / GUI Console

```ini
ConsoleEnabled = 1
; ConsoleEnabled：启用外部 UE4SS debug console；启动时能看到普通控制台窗口。

GuiConsoleEnabled = 1
; GuiConsoleEnabled：启用 UE4SS GUI debug console；就是那个带菜单栏的 UE4SS 调试窗口。

GuiConsoleVisible = 1
; GuiConsoleVisible：启动后默认显示 UE4SS GUI console；方便直接看日志和对象。

GuiConsoleFontScaling = 1
; GuiConsoleFontScaling：GUI 控制台字体缩放；笔记本高 DPI 下觉得小可以调大，例如 1.25。

GraphicsAPI = opengl
; GraphicsAPI：UE4SS GUI 渲染 API；当前 opengl 可用就保持，不需要切 dx11/d3d11。

RenderMode = ExternalThread
; RenderMode：GUI 渲染线程模式；ExternalThread 对当前调试窗口足够稳定。
```

### Hooks

```ini
HookProcessInternal = 1
; HookProcessInternal：启用 UE4SS 内部处理 hook；多数 Lua/对象功能依赖它。

HookProcessLocalScriptFunction = 1
; HookProcessLocalScriptFunction：允许 hook 蓝图/脚本函数处理。

HookInitGameState = 1
; HookInitGameState：启用 GameState 初始化 hook；研究房间玩家列表时有用。

HookLoadMap = 1
; HookLoadMap：启用地图加载 hook；ChameleonQoL 用 RegisterLoadMapPostHook 在换图后重新应用配置。

HookCallFunctionByNameWithArguments = 1
; HookCallFunctionByNameWithArguments：允许通过字符串命令调用函数相关路径；控制台命令研究时有用。

HookBeginPlay  = 1
; HookBeginPlay：启用 BeginPlay hook；当前脚本避免高频依赖它，但保留给后续研究。

HookEndPlay  = 1
; HookEndPlay：启用 EndPlay hook；后续需要清理 Actor 状态时可用。

HookLocalPlayerExec = 1
; HookLocalPlayerExec：hook LocalPlayer Exec；对内置控制台/命令执行链有帮助。

HookAActorTick = 1
; HookAActorTick：启用 Actor Tick hook；当前脚本不建议用它做高频扫描，保留给临时研究。

HookEngineTick = 1
; HookEngineTick：启用 Engine Tick hook；ExecuteInGameThread/轮询更稳。

EngineTickResolveMethod = Scan
; EngineTickResolveMethod：Engine::Tick 地址解析方式；Scan 可用时保持 Scan。

HookGameViewportClientTick = 1
; HookGameViewportClientTick：启用 Viewport Tick hook；GUI/输入/控制台相关研究时有用。

HookUObjectProcessEvent = 1
; HookUObjectProcessEvent：启用 UObject ProcessEvent hook；蓝图函数观察和 RegisterHook 常用。

HookProcessConsoleExec = 1
; HookProcessConsoleExec：必须开启；否则 cham/chameleon 这类控制台命令可能无法从内置控制台进入 Lua handler。

HookUStructLink = 1
; HookUStructLink：启用 UStruct 链接 hook；dump/对象结构研究保留。

FExecVTableOffsetInLocalPlayer = 0x28
; FExecVTableOffsetInLocalPlayer：LocalPlayer FExec vtable 偏移；当前配置可用，不要随便改。
```

### CrashDump

```ini
EnableDumping = 1
; EnableDumping：UE4SS 崩溃时生成 dump；排查签名或 hook 崩溃时有用。

FullMemoryDump = 0
; FullMemoryDump：不生成完整内存 dump；完整 dump 体积很大，不适合日常 mod 调试。
```

### mods.txt 推荐状态

```text
CheatManagerEnablerMod : 1
# CheatManagerEnablerMod：启用；让 Unreal CheatManager/控制台相关功能更容易使用。

ConsoleCommandsMod : 1
# ConsoleCommandsMod：启用；保留 UE4SS 自带 dump_object、set 等控制台辅助命令。

ConsoleEnablerMod : 1
# ConsoleEnablerMod：启用；负责打开游戏内 Unreal 控制台，当前 ~ 和 F10 都靠它。

BPML_GenericFunctions : 1
# BPML_GenericFunctions：启用；BPModLoader 相关通用函数。

BPModLoaderMod : 1
# BPModLoaderMod：启用；UE4SS 自带蓝图 mod loader 相关功能。

ChameleonDiscovery : 0
# ChameleonDiscovery：默认禁用；它用于探索/刷日志，平时开着会污染日志。

ChameleonQoL : 1
# ChameleonQoL：启用；本项目自写功能。

Keybinds : 1
# Keybinds：启用；UE4SS 默认键位系统，热重载等功能会用到。
```

## Lua 编写要点

主脚本：

```text
Mods/ChameleonQoL/Scripts/main.lua
# Mods/ChameleonQoL/Scripts/main.lua：ChameleonQoL 的唯一主入口脚本。
```

脚本默认值：

```lua
local DEFAULTS = {
    Enabled = true,              -- Enabled：默认启用 QoL 自动应用。
    CameraFOV = 100.0,           -- CameraFOV：普通相机默认 FOV。
    FirstPersonFOV = 100.0,      -- FirstPersonFOV：第一人称默认 FOV。
    ThirdPersonDistance = 520.0, -- ThirdPersonDistance：第三人称默认相机距离。
    MouseSensitivity = 1.0,      -- MouseSensitivity：默认鼠标灵敏度。
    MoveSpeedMultiply = 1.0,     -- MoveSpeedMultiply：默认移动倍率，不加速。
    DisablePaintViewLock = true, -- DisablePaintViewLock：默认解除绘画视角锁。
    BodyScaleEnabled = false,    -- BodyScaleEnabled：默认不持续改体型。
    BodyScale = 1.0,             -- BodyScale：默认体型倍率。
    BodyScaleMode = "physical",  -- BodyScaleMode：默认同步视觉缩放、碰撞胶囊、动态胶囊和脚底补偿。
    VisionEnabled = false,       -- VisionEnabled：默认不启用全局视觉。
    VisionMode = "glow",         -- VisionMode：默认身体发光。
    VisionTarget = "all",        -- VisionTarget：默认目标为全部远程玩家。
    VisionStencil = 1,           -- VisionStencil：默认 Stencil 值。
    PollIntervalMs = 1500,       -- PollIntervalMs：默认轮询间隔，单位毫秒。
}
```

安全调用模式：

```lua
local function is_valid_object(object)
    -- object：UE4SS 返回的 UObject 或 RemoteUnrealParam 包装对象。
    -- 返回值：true 表示 object 存在且 object:IsValid() 没有抛错。
end
```

```lua
local function safe(label, callable)
    -- label：日志标签，用来定位哪段逻辑失败。
    -- callable：真正要执行的函数。
    -- 返回值：成功时返回 callable 的结果；失败时写入 qol.log 并返回 nil。
end
```

UE4SS hook 有时会传 `RemoteUnrealParam` 包装对象，所以不要在 hook 参数上直接裸调用：

```lua
actor:IsValid()
-- actor：可能是 RemoteUnrealParam，不一定能直接调用 IsValid。
-- IsValid：裸调用失败时会导致 UE4SS 红色错误刷屏。
```

应该走包装：

```lua
is_valid_object(actor)
-- actor：待检查对象。
-- is_valid_object：内部 pcall actor:IsValid()，失败时安全返回 false。
```

当前脚本主要使用：

```lua
RegisterLoadMapPostHook(function()
    -- RegisterLoadMapPostHook：地图加载后回调；适合换图后重新应用配置。
end)
```

```lua
ExecuteWithDelay(delay_ms, function()
    -- ExecuteWithDelay：延迟执行。
    -- delay_ms：延迟毫秒数。
end)
```

```lua
ExecuteInGameThread(function()
    -- ExecuteInGameThread：切回游戏线程执行 UObject 读写。
end)
```

## Dump 关键类、属性和方法

这一节是给后续继续写 mod 时快速定位入口用的。优先在 `CXXHeaderDump/` 搜类和成员，再去 `UE4SS_ObjectDump.txt` 搜完整对象路径。

### 本地角色、相机、移动

| 文件 | 符号 | 用途 |
| --- | --- | --- |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `ABP_FirstPersonCharacter_Main_C` | 游戏主角色蓝图基类，很多相机/移动字段都在这里。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `SpringArm` | 第三人称相机臂组件，和第三人称距离相关。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `FirstPersonCamera` | 第一人称相机组件。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `MouseSensitivity` | 鼠标灵敏度字段。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `MoveSpeedMultiply` | 移动倍率字段。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `TPS_CameraDistance` | 第三人称相机距离字段。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `PlayerClass` | 角色列表/关联角色数组，研究玩家角色关系时可查。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `GetMoveSpeedMultiply(double& MultiplyValue)` | 游戏自己的移动倍率读取函数。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_Main.hpp` | `GetParentCharacter(...)` | 获取父级/关联角色。 |
| `CXXHeaderDump/Engine.hpp` | `SetActorScale3D(FVector NewScale3D)` | UE Actor 原生缩放函数；体型功能最终靠它。 |
| `CXXHeaderDump/Engine.hpp` | `GetActorScale3D()` | 读取 Actor 当前缩放，用于 status 和应用前后确认。 |

### cLeon 角色、绘画、名牌、发光

| 文件 | 符号 | 用途 |
| --- | --- | --- |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `ABP_FirstPersonCharacter_cLeon_Character_C` | 当前小游戏主要角色蓝图类，继承自主角色基类。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `Nameplate` | 名牌 WidgetComponent。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `IsPaintViewLock` | 绘画视角锁定字段；`cham paint unlock/default` 重点看它。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `GetMoveSpeedMultiply(double& MultiplyValue)` | cLeon 角色自己的移动倍率读取。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `SetStencilValue(Game)(int32 StencilValue)` | 游戏自己的 stencil 设置函数；名字带 Game，可能跟正常游戏逻辑绑定。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `SetStencilValue(Force)(int32 StencilValue)` | 强制设置 stencil 的蓝图函数；后续可继续研究。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `ShowAllSurvivors(Local)(...)` | 游戏已有“显示全部幸存者”本地函数，是全局视觉的重点研究入口。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `BodyVisibility` | 角色身体可见性字段；vision 会在本地临时设为 true，用于处理隐身/隐藏目标。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `LocalFound` | 本地发现状态字段；vision 会临时设为 true，辅助触发本地显示逻辑。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `HideBlock` | 隐藏阻断字段；vision 会临时设为 false，减少被本地隐藏逻辑挡住的情况。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `ForceShowBody()` | 游戏自带强制显示身体函数；vision 会对目标本地调用。 |
| `CXXHeaderDump/BP_FirstPersonCharacter_cLeon_Character.hpp` | `OnRep_BodyVisibility()` | 身体可见性复制回调；本地改 `BodyVisibility` 后会调用它刷新状态。 |
| `CXXHeaderDump/BPI_OutLine.hpp` | `View In Out Function` | 轮廓显示蓝图接口；可顺着查游戏自己的 outline 实现。 |
| `CXXHeaderDump/Engine.hpp` | `SetRenderCustomDepth(bool bValue)` | 开关组件 CustomDepth 渲染。 |
| `CXXHeaderDump/Engine.hpp` | `SetCustomDepthStencilValue(int32 Value)` | 设置 CustomDepth Stencil 值。 |
| `CXXHeaderDump/Engine.hpp` | `SetHiddenInGame(bool NewHidden)` | 控制组件或 Actor 游戏内隐藏。 |
| `CXXHeaderDump/Engine.hpp` | `SetVisibility(bool bNewVisibility, bool bPropagateToChildren)` | 控制组件可见性，可用于名牌/组件显示研究。 |
| `CXXHeaderDump/Engine.hpp` | `SetActorHiddenInGame(bool bNewHidden)` | Actor 级隐藏开关；vision 会临时设为 false，并在关闭时尽量恢复。 |
| `CXXHeaderDump/Engine.hpp` | `SetRenderInMainPass(bool bValue)` | 组件是否进入主渲染通道；隐藏/隐身目标需要临时打开，否则可能只有部分组件发光或完全不画。 |

### GameState 玩家列表和阵营

| 文件 | 符号 | 用途 |
| --- | --- | --- |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `ABP_GameState_cLeon_C` | cLeon 模式 GameState，保存房间玩家列表和阵营数据。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `Survivors` | 幸存者 PlayerController 数组。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `Hunters` | 猎人 PlayerController 数组。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `LiveSurvivors_PlayerState` | 存活幸存者 PlayerState 数组。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `LiveSurvivors_Controller` | 存活幸存者 PlayerController 数组。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `HuntersPlayerState` | 猎人 PlayerState 数组。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `OnRep_LiveSurvivors_PlayerState()` | 幸存者 PlayerState 复制回调，可用于研究玩家变动。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `OnRep_HuntersPlayerState()` | 猎人 PlayerState 复制回调。 |
| `CXXHeaderDump/BP_GameState_cLeon.hpp` | `ShowAllSurvivors()` | 游戏已有全局显示逻辑入口，后续可继续 hook/复用。 |

### PlayerState、名字、角色绑定

| 文件 | 符号 | 用途 |
| --- | --- | --- |
| `CXXHeaderDump/BP_FirstPersonPlayerState.hpp` | `ABP_FirstPersonPlayerState_C` | 基础 PlayerState。 |
| `CXXHeaderDump/BP_FirstPersonPlayerState.hpp` | `TargetCharacter` | PlayerState 绑定的角色 Actor；vision 定位玩家身体的重要入口。 |
| `CXXHeaderDump/BP_FirstPersonPlayerState.hpp` | `Initialization(...)` | PlayerState 初始化角色绑定。 |
| `CXXHeaderDump/BP_FirstPersonPlayerState_Online.hpp` | `CustomPlayerName` | 在线玩家自定义名字字段。 |
| `CXXHeaderDump/BP_FirstPersonPlayerState_Online.hpp` | `OnRep_CustomPlayerName()` | 名字复制回调。 |
| `CXXHeaderDump/BP_FirstPersonPlayerState_Online.hpp` | `SetName(Server)(FString CustomPlayerName)` | 服务端改名函数；本项目不调用，只作为研究参考。 |
| `CXXHeaderDump/Engine.hpp` | `GetPlayerName()` | UE PlayerState 原生名字读取函数。 |

### Controller、穿透视野、全局名牌

| 文件 | 符号 | 用途 |
| --- | --- | --- |
| `CXXHeaderDump/BP_PlayerController_cLeon.hpp` | `ABP_PlayerController_cLeon_C` | cLeon 模式 PlayerController。 |
| `CXXHeaderDump/BP_PlayerController_cLeon.hpp` | `IsCanPenteration` | 疑似穿透/透视能力状态字段，拼写是游戏 dump 里的原样。 |
| `CXXHeaderDump/BP_PlayerController_cLeon.hpp` | `CanPenterationUpdate(bool IsCanPenteration)` | 更新穿透能力状态。 |
| `CXXHeaderDump/BP_PlayerController_cLeon.hpp` | `GlobalNameplateVisibility` | 全局名牌可见性字段。 |
| `CXXHeaderDump/BP_PlayerController_cLeon.hpp` | `NamePlateVisibilityChange(bool Visibility)` | 名牌可见性变化函数。 |
| `CXXHeaderDump/BP_PlayerController_cLeon.hpp` | `OnNamePlateVisibilityChange(bool Visibility)` | 名牌可见性事件处理。 |

### UI 名牌

| 文件 | 符号 | 用途 |
| --- | --- | --- |
| `CXXHeaderDump/WBP_Nameplate.hpp` | `WBP_Nameplate_C` | 普通玩家名牌 Widget。 |
| `CXXHeaderDump/WBP_Nameplate.hpp` | `SetPlayerName` | 设置名牌显示名。 |
| `CXXHeaderDump/WBP_Nameplate.hpp` | `SetColor` | 设置名牌颜色。 |
| `CXXHeaderDump/WBP_Nameplate.hpp` | `SetEEYAN` | 名牌特殊状态/图标相关函数。 |
| `CXXHeaderDump/WBP_SpectateNameplate.hpp` | `WBP_SpectateNameplate_C` | 观战名牌 Widget。 |
| `CXXHeaderDump/WBP_SpectateNameplate.hpp` | `SetupSpectateNameplate` | 初始化观战名牌。 |
| `CXXHeaderDump/WBP_SpectateNameplate.hpp` | `ViewChange` | 观战视角切换时刷新名牌。 |
| `CXXHeaderDump/WBP_SpectateNameplate.hpp` | `GetCustomPlayerName` | 获取自定义玩家名。 |

### Unreal 控制台相关

| 文件 | 符号 | 用途 |
| --- | --- | --- |
| `CXXHeaderDump/Engine.hpp` | `UConsole` | Unreal 内置控制台类。 |
| `CXXHeaderDump/Engine.hpp` | `ConsoleKeys` | 控制台按键数组；ConsoleEnablerMod 会设置 `~` / `F10`。 |
| `CXXHeaderDump/Engine.hpp` | `ViewportConsole` | GameViewportClient 持有的控制台对象。 |
| `CXXHeaderDump/Engine.hpp` | `ExecuteConsoleCommand(...)` | 执行 Unreal 控制台命令的 KismetSystemLibrary 函数。 |
| `CXXHeaderDump/Engine.hpp` | `SendToConsole(FString Command)` | 向控制台发送命令。 |

## 当前功能实现映射

| 功能 | 当前实现策略 | 主要入口 |
| --- | --- | --- |
| 控制台命令 | UE4SS `RegisterConsoleCommandHandler` 注册 `cham` 和 `chameleon` | `Mods/ChameleonQoL/Scripts/main.lua` |
| 本地 Pawn 获取 | 通过 UEHelpers/PlayerController 取当前 Pawn，每次命令重新取 | `get_local_pawn()` |
| 体型修改 | 默认 physical 模式：本地 Pawn `SetActorScale3D` + 胶囊体 + DynamicCapsule + 脚底补偿 | `Engine.hpp::SetActorScale3D`、`UCapsuleComponent::SetCapsuleSize`、`DynamicCapsuleHeightControl` |
| 体型状态 | 读取本地 Pawn `GetActorScale3D()`，`cham size debug` 额外打印胶囊和动态胶囊尺寸 | `Engine.hpp::GetActorScale3D` |
| 随机其他玩家体型 | 从玩家列表排除本地 Pawn 后随机选一位，改目标 Actor scale，并尽可能调用 Server/Multicast/NetUpdate 路线 | `cham setrandomplayersize <正数>` |
| 相机 FOV | 修改本地相机组件/角色字段 | `FirstPersonCamera`、`CameraFOV` |
| 第三人称距离 | 修改角色第三人称距离字段/相机臂相关字段 | `TPS_CameraDistance`、`SpringArm` |
| 移动倍率 | 修改本地角色 `MoveSpeedMultiply` | `BP_FirstPersonCharacter_Main.hpp` |
| 绘画解锁 | 修改 cLeon 角色 `IsPaintViewLock` 等本地字段 | `BP_FirstPersonCharacter_cLeon_Character.hpp` |
| 玩家列表 | 从 GameState 数组、PlayerState、Controller、TargetCharacter 多路径合并 | `BP_GameState_cLeon.hpp`、`BP_FirstPersonPlayerState.hpp` |
| 玩家身体发光 | 对远程玩家角色组件设置 `SetRenderCustomDepth` 和 `SetCustomDepthStencilValue` | `Engine.hpp` |
| 名牌显示 | 尝试改名牌组件可见性/游戏已有名牌字段 | `Nameplate`、`GlobalNameplateVisibility` |
| 日志降噪 | 常规状态不持续 print，异常写 `Mods/ChameleonQoL/qol.log` | `safe()`、`append()` |

## 常见问题和解决方案

### UE4SS 控制台没有出现

先检查文件是否还在游戏 Win64 目录：

```text
dwmapi.dll
# dwmapi.dll：proxy loader；缺它通常不会加载 UE4SS。
```

```text
UE4SS.dll
# UE4SS.dll：UE4SS 本体；缺它 proxy loader 找不到目标。
```

再检查 Steam 更新是否覆盖了目录。一般 Steam 更新不会主动删除额外文件，但校验完整性、反复切版本、手动清目录可能会影响。

处理方案：

- 确认 `dwmapi.dll`、`UE4SS.dll`、`UE4SS-settings.ini` 还在 `Chameleon/Binaries/Win64`。
- 确认 `UE4SS_Signatures/StaticConstructObject.lua` 还在。
- 如果游戏更新后 UE4SS 卡扫描或崩溃，先看 `UE4SS.log` 里签名扫描相关错误。

### 能看到 UE4SS 外部控制台，但没有 UE4SS GUI 控制台

检查：

```ini
GuiConsoleEnabled = 1
; GuiConsoleEnabled：必须为 1，才会启用 UE4SS GUI 调试窗口。

GuiConsoleVisible = 1
; GuiConsoleVisible：必须为 1，启动时才默认显示 GUI 调试窗口。

GraphicsAPI = opengl
; GraphicsAPI：当前可用值；如果 GUI 黑屏或不出现，可以尝试 dx11 或 d3d11。

RenderMode = ExternalThread
; RenderMode：当前可用值；如果 GUI 线程异常，可尝试 EngineTick。
```

### 按 `~` 没有打开游戏内虚幻控制台

检查 `ConsoleEnablerMod` 是否启用：

```text
ConsoleEnablerMod : 1
# ConsoleEnablerMod：必须启用；它负责给游戏注册 Unreal 控制台键。
```

再试：

```text
F10
# F10：备用控制台键；如果 ~ 被输入法、键盘布局、游戏自身输入占用，就用 F10。
```

如果仍然不行，看 `UE4SS.log` 里是否出现：

```text
ConsoleKey[1]: Tilde
# ConsoleKey[1]：第一控制台键。
# Tilde：~ 键。
```

```text
ConsoleKey[2]: F10
# ConsoleKey[2]：第二控制台键。
# F10：备用控制台键。
```

### 输入 `cham` 没反应

检查：

```ini
HookProcessConsoleExec = 1
; HookProcessConsoleExec：必须启用；UE4SS 需要 hook 控制台 Exec 才能转发 cham 命令。
```

```text
ChameleonQoL : 1
# ChameleonQoL：必须启用；否则 cham/chameleon 命令不会注册。
```

```lua
RegisterConsoleCommandHandler("cham", safe_console_command)
-- "cham"：命令名；如果脚本加载失败，这行不会执行。
-- safe_console_command：命令处理函数；脚本语法错误时它也不会注册。
```

处理方案：

- 先看 `UE4SS.log` 有没有 Lua 语法错误。
- 再看 `Mods/ChameleonQoL/qol.log` 有没有运行时错误。
- 确认命令是在 UE4SS/Unreal 控制台里输入，不是在 Windows cmd 里输入。

### `cham size` 没改到体型

处理顺序：

```text
cham status
# cham：主命令。
# status：确认本地 Pawn 是否已经生成，当前 scale 是多少。
```

```text
cham apply
# cham：主命令。
# apply：重新获取本地 Pawn 并应用当前配置。
```

```text
cham size 1.35
# cham：主命令。
# size：体型功能。
# 1.35：重新设置目标体型并开启持续应用。
```

如果要测试超小体型：

```text
cham size physical 0.05
# cham：主命令。
# size：体型功能。
# physical：同步视觉和物理胶囊。
# 0.05：超小体型倍率。
```

```text
cham size debug
# cham：主命令。
# size：体型功能。
# debug：确认 BodyCapsule、OverapCollision、DynamicCapsule 是否真的变小。
```

如果刚进房间或刚换角色样式，等角色完全生成后再执行。脚本已经避免缓存旧 Pawn，但游戏自身生成时序仍然可能晚于命令输入。

### `cham size` 改到了别人吗

当前实现目标是只改自己。判断依据：

- 体型命令每次先取本地 `PlayerController.Pawn`。
- 不遍历 GameState 玩家数组去改 scale。
- 不调用 `Server`、`Replicate`、`NetMulticast` 这类网络函数。
- physical 模式只同步你自己的 `BodyCapsule`、`OverapCollision`、`DynamicCapsuleHeightControl`。

验证：

```text
cham players
# cham：主命令。
# players：看 local=yes 的本地角色 Actor 名称。
```

```text
cham status
# cham：主命令。
# status：看本地 Pawn 名称和当前 scale。
```

### `cham setrandomplayersize` 没让其他人看到变化

先看命令输出里的 `authority`：

```text
authority=true
# authority：当前进程对目标 Actor 有服务端权限；通常是房主/主机更可能出现。
# true：脚本已在 authority 侧修改并 ForceNetUpdate，其他人更有机会看到变化。
```

```text
authority=false
# authority：当前进程不是目标 Actor 的服务端权限方。
# false：脚本会尝试 Server/Multicast 路线，但可能被 UE owner 校验丢弃。
```

如果 `authority=false` 且其他人看不到变化，说明单纯从非房主客户端改远程 Actor scale 不会被服务器接受。下一步要继续在 dump 里找游戏已有的“客户端请求服务器改可见角色参数”的入口，而不是再加本地 `SetActorScale3D`。

### 体型变小后脚还是悬空，或者进不了老鼠洞

先执行：

```text
cham size physical 0.05
# cham：主命令。
# size：体型功能。
# physical：强制使用物理体型模式。
# 0.05：超小体型倍率，用来测试低矮洞口。
```

```text
cham size debug
# cham：主命令。
# size：体型功能。
# debug：打印 BodyCapsule、OverapCollision、DynamicCapsule、DynamicSettings 当前尺寸。
```

如果 `debug` 里 `BodyCapsule` 已经很小，但还是进不去，通常是洞口用了额外阻挡体、地图碰撞厚度、交互触发器或导航限制。下一步可以继续单独做 `noclip` / 碰撞通道调试命令。

如果 `DynamicCapsule` 或 `DynamicSettings` 没有变小，说明当前角色样式没有暴露同名组件或游戏更新改了字段名，需要重新 dump 后查：

```text
rg -n "DynamicCapsuleHeightControl|DynamicCapsuleHeightSettings|BodyCapsule|OverapCollision" CXXHeaderDump UE4SS_ObjectDump.txt
# rg：快速搜索工具。
# -n：显示行号。
# "DynamicCapsuleHeightControl|DynamicCapsuleHeightSettings|BodyCapsule|OverapCollision"：要搜索的体型/胶囊关键词。
# CXXHeaderDump UE4SS_ObjectDump.txt：搜索 dump 出来的 C++ header 和对象索引。
```

### 能列出玩家，但 vision 没有发光

处理顺序：

```text
cham players
# cham：主命令。
# players：确认能拿到远程玩家角色 Actor。
```

```text
cham vision mode glow
# cham：主命令。
# vision：全局玩家位置显示功能。
# mode：选择显示模式。
# glow：身体发光模式。
```

```text
cham vision target all
# cham：主命令。
# vision：全局玩家位置显示功能。
# target：选择显示目标。
# all：全部远程玩家。
```

```text
cham vision stencil 1
# cham：主命令。
# vision：全局玩家位置显示功能。
# stencil：设置 Stencil 值。
# 1：默认发光值。
```

```text
cham vision refresh
# cham：主命令。
# vision：全局玩家位置显示功能。
# refresh：重新扫描并应用。
```

如果当前地图后处理没有把该 Stencil 显示成明显颜色，换 `2`、`3`、`252` 继续试。

### vision 只能看到一部分玩家或看不到隐身玩家

新版 `vision` 默认会强制本地显示隐藏/隐身目标，但前提是目标 Actor 已经存在于你的客户端。先看这两条：

```text
cham players
# cham：主命令。
# players：打印当前客户端可定位到的玩家 Actor。
```

```text
cham vision status
# cham：主命令。
# vision：全局玩家位置显示功能。
# status：查看 vision 状态，并打印当前可定位玩家。
```

如果玩家不在列表里，说明本机没有拿到对应 Actor，通常是网络相关性、距离裁剪、游戏同步策略或目标还没生成。此时继续换 `stencil` 没意义，因为没有可标记的组件。下一步应该查 `GameState`、`PlayerController`、`PlayerState.TargetCharacter` 和复制相关函数。

如果玩家在列表里但没发光，执行：

```text
cham vision refresh
# cham：主命令。
# vision：全局玩家位置显示功能。
# refresh：重新扫描玩家，重新调用本地显示逻辑，并重新给组件打 CustomDepth/Stencil。
```

新版脚本会对目标 Actor/组件临时调用 `SetActorHiddenInGame(false)`、`SetHiddenInGame(false)`、`SetVisibility(true)`、`SetRenderInMainPass(true)`、`ForceShowBody()`、`OnRep_BodyVisibility()`，并在 `cham vision off` 时尽量恢复原状态。

### vision 开了以后想完全关掉

```text
cham vision off
# cham：主命令。
# vision：全局玩家位置显示功能。
# off：关闭并清理脚本记录过的标记。
```

如果有玩家在关闭前离开房间或 Actor 被销毁，清理可能找不到旧对象。通常重新进房间或重启游戏即可恢复默认。

### 日志红一大片

先分清来源：

- `CheatManagerEnabler` 重复提示通常不是 ChameleonQoL 的错误。
- `LUA_ERRRUN`、`RemoteUnrealParam`、`ChameleonQoL` 字样才优先看本项目脚本。

检查：

```text
UE4SS.log
# UE4SS.log：UE4SS 总日志；看 Lua 错误、签名扫描、控制台注册。
```

```text
Mods/ChameleonQoL/qol.log
# qol.log：ChameleonQoL 自己的错误日志；safe() 捕获的异常会写这里。
```

常见原因和处理：

- Hook 参数直接裸调用 `actor:IsValid()`：改成 `is_valid_object(actor)`。
- 对象还没生成：延迟后执行 `cham apply` 或 `cham vision refresh`。
- 游戏更新后字段名变了：重新 dump，然后在 `CXXHeaderDump/` 搜相同功能的新字段。
- 高频 hook 里 print 太多：把日志改成只在命令触发时打印，异常写 `qol.log`。

### 进入局域网后功能没自动生效

```text
cham apply
# cham：主命令。
# apply：重新获取本地 Pawn，并应用当前配置。
```

```text
cham vision refresh
# cham：主命令。
# vision：全局玩家位置显示功能。
# refresh：重新扫描玩家列表并应用。
```

原因通常是地图加载、玩家生成、角色替换、PlayerState 复制不是同一个时刻完成。

### 玩家名字显示异常或缺失

优先查：

- `BP_FirstPersonPlayerState_Online.hpp::CustomPlayerName`
- `Engine.hpp::GetPlayerName()`
- `BP_FirstPersonPlayerState.hpp::TargetCharacter`
- `WBP_Nameplate.hpp::SetPlayerName`

处理：

```text
cham players
# cham：主命令。
# players：打印脚本当前识别到的玩家名和 Actor。
```

如果名字还是空，说明 PlayerState 复制或名牌 Widget 还没准备好，等几秒后执行：

```text
cham vision refresh
# cham：主命令。
# vision：全局玩家位置显示功能。
# refresh：重新读取玩家数据。
```

### Steam 更新后怎么办

Steam 普通更新通常不会删除额外文件，但游戏 exe 或蓝图变了以后，旧签名、旧字段、旧函数名可能失效。

检查顺序：

```text
git status
# git：版本控制命令。
# status：查看 Steam 更新或手动改动后哪些文件发生变化。
```

```text
UE4SS.log
# UE4SS.log：看 UE4SS 是否成功启动、签名是否失败、Lua 是否报错。
```

```text
cham status
# cham：主命令。
# status：看 ChameleonQoL 是否加载、Pawn 是否可获取。
```

如果 UE4SS 无法启动，优先看 `dwmapi.dll`、`UE4SS.dll`、`StaticConstructObject.lua`。如果 UE4SS 能启动但功能失效，优先重新 dump 并对照 `CXXHeaderDump/` 中的类、字段、函数名变化。

## 后续研究路线

### 找新功能入口的推荐流程

```text
rg -n "ShowAllSurvivors|SetStencilValue|GlobalNameplateVisibility" CXXHeaderDump
# rg：快速搜索工具。
# -n：显示行号。
# "ShowAllSurvivors|SetStencilValue|GlobalNameplateVisibility"：要搜索的函数/字段关键词。
# CXXHeaderDump：搜索范围，UE4SS 生成的 C++ header dump 目录。
```

```text
rg -n "BP_GameState_cLeon|BP_PlayerController_cLeon|WBP_Nameplate" UE4SS_ObjectDump.txt
# rg：快速搜索工具。
# -n：显示行号。
# "BP_GameState_cLeon|BP_PlayerController_cLeon|WBP_Nameplate"：要搜索的类/对象关键词。
# UE4SS_ObjectDump.txt：搜索范围，UE4SS 对象 dump。
```

查到类和方法后，优先考虑：

- 能读字段就读字段。
- 能改本地组件属性就改本地组件属性。
- 能调用游戏已有本地函数就调用本地函数。
- 不优先调用 `Server`、`Client`、`NetMulticast`、`OnRep` 这类网络/复制链路函数。

### 目前最值得继续研究的游戏内入口

- `ABP_GameState_cLeon_C::ShowAllSurvivors()`
- `ABP_FirstPersonCharacter_cLeon_Character_C::ShowAllSurvivors(Local)(...)`
- `ABP_FirstPersonCharacter_cLeon_Character_C::SetStencilValue(Game)(...)`
- `ABP_FirstPersonCharacter_cLeon_Character_C::SetStencilValue(Force)(...)`
- `ABP_PlayerController_cLeon_C::GlobalNameplateVisibility`
- `ABP_PlayerController_cLeon_C::IsCanPenteration`
- `ABP_PlayerController_cLeon_C::CanPenterationUpdate(...)`
- `ABP_FirstPersonPlayerState_C::TargetCharacter`
- `ABP_FirstPersonPlayerState_Online_C::CustomPlayerName`

## 当前测试记录

- UE4SS 控制台可正常出现。
- UE4SS GUI debug console 可正常出现。
- 游戏内 `~` / `F10` 可打开 Unreal 内置控制台。
- 可以进入局域网房间。
- `cham size` 可以修改本地体型。
- `cham size physical <正数>` 会同步视觉体型、碰撞胶囊、动态胶囊高度和脚底补偿。
- `cham vision on` 可以让其他玩家身体出现红色呼吸式发光。
- 当前脚本不会永久保存功能配置。
- `ChameleonDiscovery` 默认关闭，避免日常启动刷日志。

## Tip

后续写新功能时，先在 dump 里找游戏自己的本地函数和字段，再决定是否自己实现。这个游戏已经有玩家列表、名牌、轮廓、全局显示幸存者这些入口，顺着它们做通常比从零画 overlay 更稳。
