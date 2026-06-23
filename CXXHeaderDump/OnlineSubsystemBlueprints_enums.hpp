enum class EAcceptPartyInvitationCompletionResult_ {
    NotLoggedIn = 156,
    InvitePending = 157,
    AlreadyInParty = 158,
    PartyFull = 159,
    NoPermission = 160,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    EAcceptPartyInvitationCompletionResult_MAX = 161,
};

enum class ECreatePartyCompletionResult_ {
    UnknownClientFailure = 156,
    AlreadyInPartyOfSpecifiedType = 157,
    AlreadyCreatingParty = 158,
    AlreadyInParty = 159,
    FailedToCreateMucRoom = 160,
    NoResponse = 161,
    LoggedOut = 162,
    NotPrimaryUser = 163,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    ECreatePartyCompletionResult_MAX = 164,
};

enum class EInvitationResponse_ {
    UnknownFailure = 0,
    BadBuild = 1,
    Rejected = 2,
    Accepted = 3,
    EInvitationResponse_MAX = 4,
};

enum class EInviteStatus_ {
    Unknown = 0,
    Accepted = 1,
    PendingInbound = 2,
    PendingOutbound = 3,
    Blocked = 4,
    Suggested = 5,
    EInviteStatus_MAX = 6,
};

enum class EJoinPartyCompletionResult_ {
    UnknownClientFailure = 156,
    BadBuild = 157,
    InvalidAccessKey = 158,
    AlreadyInLeadersJoiningList = 159,
    AlreadyInLeadersPartyRoster = 160,
    NoSpace = 161,
    NotApproved = 162,
    RequesteeNotMember = 163,
    RequesteeNotLeader = 164,
    NoResponse = 165,
    LoggedOut = 166,
    UnableToRejoin = 167,
    IncompatiblePlatform = 168,
    AlreadyJoiningParty = 169,
    AlreadyInParty = 170,
    JoinInfoInvalid = 171,
    AlreadyInPartyOfSpecifiedType = 172,
    MessagingFailure = 173,
    GameSpecificReason = 174,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    EJoinPartyCompletionResult_MAX = 175,
};

enum class EJoinRequestAction_ {
    Manual = 0,
    AutoApprove = 1,
    AutoReject = 2,
    EJoinRequestAction_MAX = 3,
};

enum class EKickMemberCompletionResult_ {
    UnknownClientFailure = 156,
    UnknownParty = 157,
    LocalMemberNotMember = 158,
    LocalMemberNotLeader = 159,
    RemoteMemberNotMember = 160,
    MessagingFailure = 161,
    NoResponse = 162,
    LoggedOut = 163,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    EKickMemberCompletionResult_MAX = 164,
};

enum class ELeavePartyCompletionResult_ {
    UnknownClientFailure = 156,
    NoResponse = 157,
    LoggedOut = 158,
    UnknownParty = 159,
    LeavePending = 160,
    UnknownLocalUser = 161,
    NotMember = 162,
    MessagingFailure = 163,
    UnknownTransportFailure = 164,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    ELeavePartyCompletionResult_MAX = 165,
};

enum class EMemberConnectionStatus_ {
    Uninitialized = 0,
    Disconnected = 1,
    Initializing = 2,
    Connected = 3,
    EMemberConnectionStatus_MAX = 4,
};

enum class EMemberExitedReason_ {
    Unknown = 0,
    Left = 1,
    Removed = 2,
    Kicked = 3,
    EMemberExitedReason_MAX = 4,
};

enum class EOnJoinSessionCompleteResult_ {
    Success = 0,
    SessionIsFull = 1,
    SessionDoesNotExist = 2,
    CouldNotRetrieveAddress = 3,
    AlreadyInSession = 4,
    UnknownError = 5,
    EOnJoinSessionCompleteResult_MAX = 6,
};

enum class EOnSessionParticipantLeftReason_ {
    Left = 0,
    Disconnected = 1,
    Kicked = 2,
    Closed = 3,
    EOnSessionParticipantLeftReason_MAX = 4,
};

enum class EOnlineActivityOutcome_ {
    Completed = 0,
    Failed = 1,
    Cancelled = 2,
    EOnlineActivityOutcome_MAX = 3,
};

enum class EOnlineAsyncTaskState_ {
    NotStarted = 0,
    InProgress = 1,
    Done = 2,
    Failed = 3,
    EOnlineAsyncTaskState_MAX = 4,
};

enum class EOnlineCachedResult_ {
    Success = 0,
    NotFound = 1,
    EOnlineCachedResult_MAX = 2,
};

enum class EOnlineComparisonOp_ {
    Equals = 0,
    NotEquals = 1,
    GreaterThan = 2,
    GreaterThanEquals = 3,
    LessThan = 4,
    LessThanEquals = 5,
    Near = 6,
    In = 7,
    NotIn = 8,
    EOnlineComparisonOp_MAX = 9,
};

enum class EOnlineDataAdvertisementType_ {
    DontAdvertise = 0,
    ViaPingOnly = 1,
    ViaOnlineService = 2,
    ViaOnlineServiceAndPing = 3,
    EOnlineDataAdvertisementType_MAX = 4,
};

enum class EOnlineKeyValuePairDataType_ {
    Empty = 0,
    Int32 = 1,
    UInt32_NotSupported = 2,
    Int64 = 3,
    UInt64_NotSupported = 4,
    Double = 5,
    String = 6,
    Float = 7,
    Blob_NotSupported = 8,
    Bool = 9,
    Json_NotSupported = 10,
    EOnlineKeyValuePairDataType_MAX = 11,
};

enum class EOnlineLobbySearchQueryFilterComparator_ {
    Equal = 0,
    NotEqual = 1,
    LessThan = 2,
    LessThanOrEqual = 3,
    GreaterThan = 4,
    GreaterThanOrEqual = 5,
    EOnlineLobbySearchQueryFilterComparator_MAX = 6,
};

enum class EOnlineLoginStatus {
    NotLoggedIn = 0,
    UsingLocalProfile = 1,
    LoggedIn = 2,
    EOnlineLoginStatus_MAX = 3,
};

enum class EOnlineSessionState_ {
    NoSession = 0,
    Creating = 1,
    Pending = 2,
    Starting = 3,
    InProgress = 4,
    Ending = 5,
    Ended = 6,
    Destroying = 7,
    EOnlineSessionState_MAX = 8,
};

enum class EOnlineStatModificationType_ {
    Unknown = 0,
    Sum = 1,
    Set = 2,
    Largest = 3,
    Smallest = 4,
    EOnlineStatModificationType_MAX = 5,
};

enum class EOnlineUserPrivilege {
    CanPlay = 0,
    CanPlayOnline = 1,
    CanCommunicateOnline = 2,
    CanUseUserGeneratedContent = 3,
    CanUserCrossPlay = 4,
    EOnlineUserPrivilege_MAX = 5,
};

enum class EPartyState_ {
    None = 0,
    CreatePending = 1,
    JoinPending = 2,
    RejoinPending = 3,
    LeavePending = 4,
    Active = 5,
    Disconnected = 6,
    CleanUp = 7,
    EPartyState_MAX = 8,
};

enum class EPartySystemPermissions {
    Noone = 0,
    Leader = 1,
    Friends = 2,
    Anyone = 3,
    EPartySystemPermissions_MAX = 4,
};

enum class EPlatformMessageType_ {
    EmptyStore = 0,
    ChatRestricted = 1,
    UGCRestricted = 2,
    EPlatformMessageType_MAX = 3,
};

enum class EPromoteMemberCompletionResult_ {
    UnknownClientFailure = 156,
    UnknownServiceFailure = 157,
    UnknownParty = 158,
    LocalMemberNotMember = 159,
    LocalMemberNotLeader = 160,
    PromotionAlreadyPending = 161,
    TargetIsSelf = 162,
    TargetNotMember = 163,
    MessagingFailure = 164,
    NoResponse = 165,
    LoggedOut = 166,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    EPromoteMemberCompletionResult_MAX = 167,
};

enum class EPurchaseTransactionState_ {
    NotStarted = 0,
    Processing = 1,
    Purchased = 2,
    Failed = 3,
    Deferred = 4,
    Canceled = 5,
    Restored = 6,
    NotAllowed = 7,
    Invalid = 8,
    EPurchaseTransactionState_MAX = 9,
};

enum class ERedpointOSSv1PartyRequestToJoinRemovedReason {
    Unknown = 0,
    Cancelled = 1,
    Expired = 2,
    Dismissed = 3,
    Accepted = 4,
    ERedpointOSSv1PartyRequestToJoinRemovedReason_MAX = 5,
};

enum class ERejectPartyInvitationCompletionResult_ {
    NotLoggedIn = 156,
    InvitePending = 157,
    AlreadyInParty = 158,
    PartyFull = 159,
    NoPermission = 160,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    ERejectPartyInvitationCompletionResult_MAX = 161,
};

enum class ERequestPartyInvitationCompletionResult_ {
    NotLoggedIn = 156,
    InvitePending = 157,
    AlreadyInParty = 158,
    PartyFull = 159,
    NoPermission = 160,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    ERequestPartyInvitationCompletionResult_MAX = 161,
};

enum class ESendPartyInvitationCompletionResult_ {
    NotLoggedIn = 156,
    InvitePending = 157,
    AlreadyInParty = 158,
    PartyFull = 159,
    NoPermission = 160,
    RateLimited = 161,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    ESendPartyInvitationCompletionResult_MAX = 162,
};

enum class ESessionFailure_ {
    ServiceConnectionLost = 0,
    ESessionFailure_MAX = 1,
};

enum class EShowPrivilegeResolveUI_ {
    Default = 0,
    Show = 1,
    NotShow = 2,
    EShowPrivilegeResolveUI_MAX = 3,
};

enum class EUpdateConfigCompletionResult_ {
    UnknownClientFailure = 156,
    UnknownParty = 157,
    LocalMemberNotMember = 158,
    LocalMemberNotLeader = 159,
    RemoteMemberNotMember = 160,
    MessagingFailure = 161,
    NoResponse = 162,
    UnknownInternalFailure = 0,
    Succeeded = 1,
    EUpdateConfigCompletionResult_MAX = 163,
};

enum class EVoiceChatAttenuationModel_ {
    None = 0,
    InverseByDistance = 1,
    LinearByDistance = 2,
    ExponentialByDistance = 3,
    EVoiceChatAttenuationModel_MAX = 4,
};

enum class EVoiceChatChannelType_ {
    NonPositional = 0,
    Positional = 1,
    Echo = 2,
    EVoiceChatChannelType_MAX = 3,
};

enum class EVoiceChatResult_ {
    Success = 0,
    InvalidState = 1,
    NotInitialized = 2,
    NotConnected = 3,
    NotLoggedIn = 4,
    NotPermitted = 5,
    Throttled = 6,
    InvalidArgument = 7,
    CredentialsInvalid = 8,
    CredentialsExpired = 9,
    ClientTimeout = 10,
    ServerTimeout = 11,
    DnsFailure = 12,
    ConnectionFailure = 13,
    ImplementationError = 14,
    EVoiceChatResult_MAX = 15,
};

enum class EVoiceChatTransmitMode_ {
    None = 0,
    All = 1,
    Channel = 2,
    EVoiceChatTransmitMode_MAX = 3,
};

enum class FOnlineUserPresenceStatusState {
    Online = 0,
    Offline = 1,
    Away = 2,
    ExtendedAway = 3,
    DoNotDisturb = 4,
    Chat = 5,
    FOnlineUserPresenceStatusState_MAX = 6,
};

