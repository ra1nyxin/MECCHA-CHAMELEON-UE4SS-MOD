enum class ENetworkLOD {
    Interpolated = 1,
    SimExtrapolate = 2,
    ForwardPredict = 4,
    All = 7,
    ENetworkLOD_MAX = 8,
};

enum class ENetworkPredictionStateRead {
    Simulation = 0,
    Presentation = 1,
    ENetworkPredictionStateRead_MAX = 2,
};

enum class ENetworkPredictionTickingPolicy {
    Independent = 1,
    Fixed = 2,
    All = 3,
    ENetworkPredictionTickingPolicy_MAX = 4,
};

