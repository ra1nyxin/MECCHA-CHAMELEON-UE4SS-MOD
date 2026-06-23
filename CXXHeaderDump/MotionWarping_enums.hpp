enum class EAttributeBasedRootMotionMode {
    ApplyDelta = 0,
    ApplyVelocity = 1,
    EAttributeBasedRootMotionMode_MAX = 2,
};

enum class EMotionWarpRotationMethod {
    Slerp = 0,
    SlerpWithClampedRate = 1,
    ConstantRate = 2,
    Scale = 3,
    EMotionWarpRotationMethod_MAX = 4,
};

enum class EMotionWarpRotationType {
    Default = 0,
    Facing = 1,
    OppositeDefault = 2,
    EMotionWarpRotationType_MAX = 3,
};

enum class ERootMotionModifierState {
    Waiting = 0,
    Active = 1,
    MarkedForRemoval = 2,
    Disabled = 3,
    ERootMotionModifierState_MAX = 4,
};

enum class ESwitchOffConditionAngleOp {
    LessThan = 0,
    GreaterThan = 1,
    ESwitchOffConditionAngleOp_MAX = 2,
};

enum class ESwitchOffConditionCompositeOp {
    Or = 0,
    And = 1,
    ESwitchOffConditionCompositeOp_MAX = 2,
};

enum class ESwitchOffConditionDistanceAxesType {
    AllAxes = 0,
    IgnoreZAxis = 1,
    OnlyZAxis = 2,
    ESwitchOffConditionDistanceAxesType_MAX = 3,
};

enum class ESwitchOffConditionDistanceOp {
    LessThan = 0,
    GreaterThan = 1,
    ESwitchOffConditionDistanceOp_MAX = 2,
};

enum class ESwitchOffConditionEffect {
    CancelFollow = 0,
    CancelWarping = 1,
    PauseWarping = 2,
    PauseRootMotion = 3,
    ESwitchOffConditionEffect_MAX = 4,
};

enum class EWarpPointAnimProvider {
    None = 0,
    Static = 1,
    Bone = 2,
    EWarpPointAnimProvider_MAX = 3,
};

enum class EWarpTargetLocationOffsetDirection {
    TargetsForwardVector = 0,
    VectorFromTargetToOwner = 1,
    WorldSpace = 2,
    EWarpTargetLocationOffsetDirection_MAX = 3,
};

