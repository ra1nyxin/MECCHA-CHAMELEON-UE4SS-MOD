enum class EDedicatedServersDistributionMode {
    DevelopersOnly = 0,
    DevelopersAndPlayers = 1,
    PlayersOnly = 2,
    EDedicatedServersDistributionMode_MAX = 3,
};

enum class EEOSApiVersion {
    v2026_02_04 = 0,
    v2023_10_27 = 1,
    v2022_10_28 = 2,
    v2022_05_20 = 3,
    v2022_02_11 = 4,
    EEOSApiVersion_MAX = 5,
};

enum class ENetworkAuthenticationMode {
    Default = 0,
    IDToken = 1,
    Off = 2,
    ENetworkAuthenticationMode_MAX = 3,
};

enum class EPartyJoinabilityConstraint {
    AllowPlayersInMultipleParties = 0,
    IgnoreInvitesIfAlreadyInParty = 1,
    EPartyJoinabilityConstraint_MAX = 2,
};

enum class EPresenceAdvertisementType {
    None = 0,
    Party = 1,
    Session = 2,
    EPresenceAdvertisementType_MAX = 3,
};

enum class EStatTypingRule {
    Int32 = 0,
    Bool = 1,
    FloatTruncated = 2,
    FloatEncoded = 3,
    DoubleEncoded = 4,
    EStatTypingRule_MAX = 5,
};

