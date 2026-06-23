enum class EAutoHideMouse {
    Never = 0,
    Gamepad = 1,
    GamepadAndKeyboard = 2,
    EAutoHideMouse_MAX = 3,
};

enum class EAxisType {
    None = 0,
    Positive = 1,
    Negative = 2,
    EAxisType_MAX = 3,
};

enum class EButtonStyle {
    None = 0,
    Normal = 1,
    Hovered = 2,
    Pressed = 3,
    EButtonStyle_MAX = 4,
};

enum class EComponentAction {
    OnClicked = 0,
    OnPressed = 1,
    OnReleased = 2,
    OnNavigatedTo = 3,
    OnNavigatedFrom = 4,
    EComponentAction_MAX = 5,
};

enum class ECountdownPhase {
    None = 0,
    First = 1,
    Looping = 2,
    ECountdownPhase_MAX = 3,
};

enum class EInputAxis {
    X = 0,
    Y = 1,
    Z = 2,
    EInputAxis_MAX = 3,
};

enum class EInputDisplayType {
    Icon = 0,
    Text = 1,
    Both = 2,
    EInputDisplayType_MAX = 3,
};

enum class EInputHoldBehavior {
    DontAllow = 0,
    AllowIfHeld = 1,
    Force = 2,
    EInputHoldBehavior_MAX = 3,
};

enum class EInputMode {
    None = 0,
    GameUI = 1,
    Game = 2,
    UI = 3,
    EInputMode_MAX = 4,
};

enum class EInputRestriction {
    None = 0,
    Keyboard = 1,
    Mouse = 2,
    Keyboard_Mouse = 3,
    Gamepad = 4,
    VR = 5,
    EInputRestriction_MAX = 6,
};

enum class EInputType {
    None = 0,
    Keyboard = 1,
    Mouse = 2,
    Gamepad = 3,
    EInputType_MAX = 4,
};

enum class ENavigationEvent {
    OnSelect = 0,
    OnNavigate = 1,
    ENavigationEvent_MAX = 2,
};

enum class EReceiveInputType {
    None = 0,
    Action = 1,
    Axis = 2,
    EReceiveInputType_MAX = 3,
};

enum class ERevertRebindReason {
    None = 0,
    RestrictionMismatch = 1,
    NonWhitelistedKey = 2,
    BlacklistedKey = 3,
    UsedBySameInputGroup = 4,
    UsedBySameInput = 5,
    SwapRejected = 6,
    ERevertRebindReason_MAX = 7,
};

enum class ESelectorPosition {
    None = 0,
    Position_Center = 1,
    Position_Top = 2,
    Position_Bottom = 3,
    Position_Left = 4,
    Position_Right = 5,
    Position_Top_Right = 6,
    Position_Top_Left = 7,
    Position_Bottom_Right = 8,
    Position_Bottom_Left = 9,
    ESelectorPosition_MAX = 10,
};

enum class ETargetColumn {
    Left = 0,
    Middle = 1,
    Right = 2,
    ETargetColumn_MAX = 3,
};

enum class EThumbstickAsMouse {
    None = 0,
    LeftThumbstick = 1,
    RightThumbstick = 2,
    EThumbstickAsMouse_MAX = 3,
};

