enum class EMoviePipelineMP4EncodeLevel {
    Auto = 0,
    Level1 = 10,
    Level1_b = 11,
    Level1_1 = 11,
    Level1_2 = 12,
    Level1_3 = 13,
    Level2 = 20,
    Level2_1 = 21,
    Level2_2 = 22,
    Level3 = 30,
    Level3_1 = 31,
    Level3_2 = 32,
    Level4 = 40,
    Level4_1 = 41,
    Level4_2 = 42,
    Level5 = 50,
    Level5_1 = 51,
    Level5_2 = 52,
    EMoviePipelineMP4EncodeLevel_MAX = 53,
};

enum class EMoviePipelineMP4EncodeProfile {
    Baseline = 0,
    Main = 1,
    High = 2,
    EMoviePipelineMP4EncodeProfile_MAX = 3,
};

enum class EMoviePipelineMP4EncodeRateControlMode {
    ConstantQP = 0,
    Quality = 1,
    VariableBitRate = 2,
    VariableBitRate_Constrained = 3,
    ConstantBitRate = 4,
    EMoviePipelineMP4EncodeRateControlMode_MAX = 5,
};

