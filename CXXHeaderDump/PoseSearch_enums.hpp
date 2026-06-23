enum class EComponentStrippingVector {
    None = 0,
    StripXY = 1,
    StripZ = 2,
    EComponentStrippingVector_MAX = 3,
};

enum class EHeadingAxis {
    X = 0,
    Y = 1,
    Z = 2,
    Num = 3,
    EHeadingAxis_MAX = 4,
};

enum class EInputQueryPose {
    UseCharacterPose = 0,
    UseContinuingPose = 1,
    EInputQueryPose_MAX = 2,
};

enum class EPermutationTimeType {
    UseSampleTime = 0,
    UsePermutationTime = 1,
    UseSampleToPermutationTime = 2,
    EPermutationTimeType_MAX = 3,
};

enum class EPoseSearchAssetSamplerSpace {
    Local = 0,
    Component = 1,
    World = 2,
    EPoseSearchAssetSamplerSpace_MAX = 3,
};

enum class EPoseSearchBoneFlags {
    Velocity = 1,
    Position = 2,
    Rotation = 4,
    Phase = 8,
    EPoseSearchBoneFlags_MAX = 9,
};

enum class EPoseSearchDataPreprocessor {
    None = 0,
    Normalize = 1,
    NormalizeOnlyByDeviation = 2,
    NormalizeWithCommonSchema = 3,
    EPoseSearchDataPreprocessor_MAX = 4,
};

enum class EPoseSearchInterruptMode {
    DoNotInterrupt = 0,
    InterruptOnDatabaseChange = 1,
    InterruptOnDatabaseChangeAndInvalidateContinuingPose = 2,
    ForceInterrupt = 3,
    ForceInterruptAndInvalidateContinuingPose = 4,
    EPoseSearchInterruptMode_MAX = 5,
};

enum class EPoseSearchMirrorOption {
    UnmirroredOnly = 0,
    MirroredOnly = 1,
    UnmirroredAndMirrored = 2,
    EPoseSearchMirrorOption_MAX = 3,
};

enum class EPoseSearchMode {
    BruteForce = 0,
    PCAKDTree = 1,
    VPTree = 2,
    EventOnly = 3,
    EPoseSearchMode_MAX = 4,
};

enum class EPoseSearchTrajectoryFlags {
    Velocity = 1,
    Position = 2,
    VelocityDirection = 4,
    FacingDirection = 8,
    VelocityXY = 16,
    PositionXY = 32,
    VelocityDirectionXY = 64,
    FacingDirectionXY = 128,
    EPoseSearchTrajectoryFlags_MAX = 129,
};

