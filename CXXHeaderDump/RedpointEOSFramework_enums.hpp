enum class ERedpointAvatarLoadingIndicator {
    None = 0,
    Throbber = 1,
    DefaultTexture = 2,
    ERedpointAvatarLoadingIndicator_MAX = 3,
};

enum class ERedpointFriendListEntryInviteStatus {
    Unknown = 0,
    MutualFriends = 1,
    PendingInbound = 2,
    PendingOutbound = 3,
    Unrelated = 4,
    ERedpointFriendListEntryInviteStatus_MAX = 5,
};

enum class ERedpointFriendListEntryPresenceStatus {
    Unknown = 0,
    Offline = 1,
    DoNotDisturb = 2,
    Idle = 3,
    Online = 4,
    ERedpointFriendListEntryPresenceStatus_MAX = 5,
};

enum class ERedpointFriendListSectionType {
    InParty = 0,
    InGame = 1,
    Online = 2,
    Offline = 3,
    Recent = 4,
    Blocked = 5,
    ERedpointFriendListSectionType_MAX = 6,
};

enum class ERedpointPartyAttributeType {
    String = 0,
    Int64 = 1,
    Double = 2,
    Bool = 3,
    ERedpointPartyAttributeType_MAX = 4,
};

enum class ERedpointSquareBoxAxis {
    Horizontal = 0,
    Vertical = 1,
    ERedpointSquareBoxAxis_MAX = 2,
};

enum class ERedpointVoiceChatAudioFeature {
    EchoCancellation = 0,
    NoiseSuppression = 1,
    AutoGainControl = 2,
    DiscontinousTransmission = 3,
    PlatformAcousticEchoCancellation = 4,
    ERedpointVoiceChatAudioFeature_MAX = 5,
};

enum class ERedpointVoiceChatProximityType {
    None = 0,
    PossessedPawn = 1,
    Custom = 2,
    ERedpointVoiceChatProximityType_MAX = 3,
};

