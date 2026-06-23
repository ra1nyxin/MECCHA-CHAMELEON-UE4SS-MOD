enum class EBrushFalloff {
    Linear = 0,
    Smooth = 1,
    Round = 2,
    Sharp = 3,
    EBrushFalloff_MAX = 4,
};

enum class EEOSPlayerReportCategory {
    Cheating = 0,
    Exploiting = 1,
    OffensiveProfile = 2,
    VerbalAbuse = 3,
    Scamming = 4,
    Spamming = 5,
    Other = 6,
    EEOSPlayerReportCategory_MAX = 7,
};

enum class EGameItemType {
    None = 0,
    Consumable = 1,
    Equipment = 2,
    Quest = 3,
    Misc = 4,
    EGameItemType_MAX = 5,
};

enum class EPaintBlendMode {
    Normal = 0,
    Additive = 1,
    Multiply = 2,
    EPaintBlendMode_MAX = 3,
};

enum class EPaintChannel {
    Albedo = 0,
    Metallic = 1,
    Roughness = 2,
    Height = 3,
    All = 4,
    AlbedoMetallicRoughness = 5,
    EPaintChannel_MAX = 6,
};

enum class EPaintChannelApplyMode {
    Override = 0,
    AlphaBlend = 1,
    Additive = 2,
    EPaintChannelApplyMode_MAX = 3,
};

enum class EPaintPerformancePreset {
    Quality = 0,
    Balanced = 1,
    Performance = 2,
    UltraPerformance = 3,
    EPaintPerformancePreset_MAX = 4,
};

