    None = 0,
    X = 1,
    Y = 2,
    Z = 4,
    All = 7,
    EPatternAxisMaskFlags_MAX = 8,
};

enum class ELayeredMoveFinishVelocityMode {
    MaintainLastRootMotionVelocity = 0,
    SetVelocity = 1,
    ClampVelocity = 2,
    ELayeredMoveFinishVelocityMode_MAX = 3,
};

enum class ELayeredMove_ConstantVelocitySettingsFlags {
    NoFlags = 0,
    VelocityStartRelative = 1,
    VelocityAlwaysRelative = 2,
    ELayeredMove_MAX = 3,
};

enum class EMoveInputType {
    Invalid = 0,
    DirectionalIntent = 1,
    Velocity = 2,
    None = 3,
    EMoveInputType_MAX = 4,
};

enum class EMoveMixMode {
    AdditiveVelocity = 0,
    OverrideVelocity = 1,
    OverrideAll = 2,
    OverrideAllExceptVerticalVelocity = 3,
    EMoveMixMode_MAX = 4,
};

enum class EMoverLaunchVelocityMode {
    Additive = 0,
    Override = 1,
    EMoverLaunchVelocityMode_MAX = 2,
};

enum class EMoverSmoothingMode {
    None = 0,
    VisualComponentOffset = 1,
    EMoverSmoothingMode_MAX = 2,
};

enum class EMoverTickDependencyOrder {
    Before = 0,
    After = 1,
    EMoverTickDependencyOrder_MAX = 2,
};

enum class EMoverTickPhase {
    Invalid = 0,
    ProduceInput = 1,
    SimulateMovement = 2,
    ApplyState = 3,
    EMoverTickPhase_MAX = 4,
};

enum class EOffNavMeshBehavior {
    SwitchToWalking = 0,
    MoveWithoutNavMesh = 1,
    DoNotMove = 2,
    RotateOnly = 3,
    EOffNavMeshBehavior_MAX = 4,
};

enum class EPathedPhysicsPlaybackBehavior {
    OneShot = 0,
    ThereAndBack = 1,
    Looping = 2,
    PingPong = 3,
    EPathedPhysicsPlaybackBehavior_MAX = 4,
};

enum class EPointMovementLocationBasis {
    PreviousPoint = 0,
    PathOrigin = 1,
    World = 2,
    EPointMovementLocationBasis_MAX = 3,
};

enum class EStanceMode {
    Invalid = 0,
    Crouch = 1,
    Prone = 2,
    EStanceMode_MAX = 3,
};

enum class EStaticFloorCheckPolicy {
    Always = 0,
    OnDynamicBaseOnly = 1,
    EStaticFloorCheckPolicy_MAX = 2,
};

