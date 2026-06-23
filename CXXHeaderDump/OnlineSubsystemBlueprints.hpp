#ifndef UE4SS_SDK_OnlineSubsystemBlueprints_HPP
#define UE4SS_SDK_OnlineSubsystemBlueprints_HPP

#include "OnlineSubsystemBlueprints_enums.hpp"

struct FBlockedQueryResultInfo
{
    bool Blocked;                                                                     // 0x0000 (size: 0x1)
    bool BlockedNonFriends;                                                           // 0x0001 (size: 0x1)
    FString UserId;                                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FChatMessageBP
{
    FUniqueNetIdRepl UserId;                                                          // 0x0000 (size: 0x30)
    FString Nickname;                                                                 // 0x0030 (size: 0x10)
    FString Body;                                                                     // 0x0040 (size: 0x10)
    FDateTime Timestamp;                                                              // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FChatRoomConfigBP
{
    bool bRejoinOnDisconnect;                                                         // 0x0000 (size: 0x1)
    bool bPasswordRequired;                                                           // 0x0001 (size: 0x1)
    FString Password;                                                                 // 0x0008 (size: 0x10)
    bool bAnnounceMembers;                                                            // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FChatRoomInfoBP
{
    bool bIsValid;                                                                    // 0x0000 (size: 0x1)
    FString RoomId;                                                                   // 0x0008 (size: 0x10)
    FUniqueNetIdRepl OwnerId;                                                         // 0x0018 (size: 0x30)
    FString Subject;                                                                  // 0x0048 (size: 0x10)
    bool bPrivate;                                                                    // 0x0058 (size: 0x1)
    bool bJoined;                                                                     // 0x0059 (size: 0x1)
    FChatRoomConfigBP RoomConfig;                                                     // 0x0060 (size: 0x20)

}; // Size: 0x80

struct FChatRoomMemberBP
{
    bool bIsValid;                                                                    // 0x0000 (size: 0x1)
    FUniqueNetIdRepl UserId;                                                          // 0x0008 (size: 0x30)
    FString Nickname;                                                                 // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FCloudFileHeaderBP
{
    FString Hash;                                                                     // 0x0000 (size: 0x10)
    FName HashType;                                                                   // 0x0010 (size: 0x8)
    FString DLName;                                                                   // 0x0018 (size: 0x10)
    FString Filename;                                                                 // 0x0028 (size: 0x10)
    int32 FileSize;                                                                   // 0x0038 (size: 0x4)
    FString URL;                                                                      // 0x0040 (size: 0x10)
    int64 ChunkId;                                                                    // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FColumnMetaDataBP
{
    FString ColumnName;                                                               // 0x0000 (size: 0x10)
    EOnlineKeyValuePairDataType_ DataType;                                            // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FExternalIdQueryOptionsBP
{
    bool bLookupByDisplayName;                                                        // 0x0000 (size: 0x1)
    FString AuthType;                                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FExternalUIFlowHandlerRegistration
{
    class UObject* Interface;                                                         // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FFriendSettingsData
{
    TMap<class FString, class FString> Data;                                          // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FLineItemInfoBP
{
    FString ItemName;                                                                 // 0x0000 (size: 0x10)
    FString UniqueID;                                                                 // 0x0010 (size: 0x10)
    FString ValidationInfo;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FLoginFlowResultBP
{
    FString Token;                                                                    // 0x0000 (size: 0x10)
    FText ErrorMessage;                                                               // 0x0010 (size: 0x10)
    FString ErrorRaw;                                                                 // 0x0020 (size: 0x10)
    int32 NumericErrorCode;                                                           // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FNamedOnlineSessionBP : public FOnlineSessionBP
{
    FName SessionName;                                                                // 0x01B0 (size: 0x8)
    bool bHosting;                                                                    // 0x01B8 (size: 0x1)
    FUniqueNetIdRepl LocalOwnerId;                                                    // 0x01C0 (size: 0x30)
    TArray<FUniqueNetIdRepl> RegisteredPlayers;                                       // 0x01F0 (size: 0x10)
    EOnlineSessionState_ SessionState;                                                // 0x0200 (size: 0x1)

}; // Size: 0x208

struct FOnlineAccountCredential
{
    FString Type;                                                                     // 0x0000 (size: 0x10)
    FString ID;                                                                       // 0x0010 (size: 0x10)
    FString Token;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FOnlineAchievementBP
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    double Progress;                                                                  // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FOnlineAchievementDescBP
{
    FText title;                                                                      // 0x0000 (size: 0x10)
    FText LockedDesc;                                                                 // 0x0010 (size: 0x10)
    FText UnlockedDesc;                                                               // 0x0020 (size: 0x10)
    bool bIsHidden;                                                                   // 0x0030 (size: 0x1)
    FDateTime UnlockTime;                                                             // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FOnlineActivityPlayerLocationBP
{
    bool bSet;                                                                        // 0x0000 (size: 0x1)
    FString ZoneId;                                                                   // 0x0008 (size: 0x10)
    FVector Coordinates;                                                              // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FOnlineActivityTasksToResetBP
{
    bool bSet;                                                                        // 0x0000 (size: 0x1)
    TArray<FString> InProgressTasks;                                                  // 0x0008 (size: 0x10)
    TArray<FString> CompletedTasks;                                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FOnlineErrorInfo
{
    bool Successful;                                                                  // 0x0000 (size: 0x1)
    FString ErrorRaw;                                                                 // 0x0008 (size: 0x10)
    FString ErrorCode;                                                                // 0x0018 (size: 0x10)
    FText ErrorMessage;                                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FOnlineFriendSettingsSourceDataConfig
{
    bool NeverShowAgain;                                                              // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FOnlineLobbySearchQueryBP
{
    TArray<FOnlineLobbySearchQueryFilterBP> Filters;                                  // 0x0000 (size: 0x10)
    int64 Limit;                                                                      // 0x0010 (size: 0x8)
    bool HasLimit;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FOnlineLobbySearchQueryFilterBP
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FVariantDataBP Value;                                                             // 0x0010 (size: 0x30)
    EOnlineLobbySearchQueryFilterComparator_ Comparison;                              // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FOnlineMessagePayloadData
{
}; // Size: 0x1

struct FOnlinePartyConfiguration
{
    EJoinRequestAction_ JoinRequestAction;                                            // 0x0000 (size: 0x1)
    EPartySystemPermissions PresencePermissions;                                      // 0x0001 (size: 0x1)
    EPartySystemPermissions InvitePermissions;                                        // 0x0002 (size: 0x1)
    bool ChatEnabled;                                                                 // 0x0003 (size: 0x1)
    bool ShouldRemoveOnDisconnection;                                                 // 0x0004 (size: 0x1)
    bool IsAcceptingMembers;                                                          // 0x0005 (size: 0x1)
    int32 NotAcceptingMembersReason;                                                  // 0x0008 (size: 0x4)
    int32 MaxMembers;                                                                 // 0x000C (size: 0x4)
    FString Nickname;                                                                 // 0x0010 (size: 0x10)
    FString Description;                                                              // 0x0020 (size: 0x10)
    FString Password;                                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FOnlineSessionBP
{
    FUniqueNetIdRepl OwningUserId;                                                    // 0x0000 (size: 0x30)
    FString OwningUserName;                                                           // 0x0030 (size: 0x10)
    FOnlineSessionSettingsBP SessionSettings;                                         // 0x0040 (size: 0x150)
    class UOnlineSessionInfo* SessionInfo;                                            // 0x0190 (size: 0x8)
    int32 NumOpenPrivateConnections;                                                  // 0x0198 (size: 0x4)
    int32 NumOpenPublicConnections;                                                   // 0x019C (size: 0x4)
    FString SessionId;                                                                // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FOnlineSessionMemberSettingsBP
{
    FUniqueNetIdRepl MemberUserId;                                                    // 0x0000 (size: 0x30)
    TMap<class FName, class FOnlineSessionSettingBP> MemberSettings;                  // 0x0030 (size: 0x50)

}; // Size: 0x80

struct FOnlineSessionSearchResultBP
{
    FOnlineSessionBP Session;                                                         // 0x0000 (size: 0x1B0)
    int32 PingInMs;                                                                   // 0x01B0 (size: 0x4)

}; // Size: 0x1B8

struct FOnlineSessionSettingBP
{
    FVariantDataBP Data;                                                              // 0x0000 (size: 0x30)
    EOnlineDataAdvertisementType_ AdvertisementType;                                  // 0x0030 (size: 0x1)
    int32 ID;                                                                         // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FOnlineSessionSettingsBP
{
    int32 NumPublicConnections;                                                       // 0x00D8 (size: 0x4)
    int32 NumPrivateConnections;                                                      // 0x00DC (size: 0x4)
    bool bShouldAdvertise;                                                            // 0x00E0 (size: 0x1)
    bool bAllowJoinInProgress;                                                        // 0x00E1 (size: 0x1)
    bool bIsLANMatch;                                                                 // 0x00E2 (size: 0x1)
    bool bIsDedicated;                                                                // 0x00E3 (size: 0x1)
    bool bUsesStats;                                                                  // 0x00E4 (size: 0x1)
    bool bAllowInvites;                                                               // 0x00E5 (size: 0x1)
    bool bUsesPresence;                                                               // 0x00E6 (size: 0x1)
    bool bAllowJoinViaPresence;                                                       // 0x00E7 (size: 0x1)
    bool bAllowJoinViaPresenceFriendsOnly;                                            // 0x00E8 (size: 0x1)
    bool bAntiCheatProtected;                                                         // 0x00E9 (size: 0x1)
    bool bUseLobbiesIfAvailable;                                                      // 0x00EA (size: 0x1)
    bool bUseLobbiesVoiceChatIfAvailable;                                             // 0x00EB (size: 0x1)
    int32 BuildUniqueId;                                                              // 0x00EC (size: 0x4)
    TMap<class FName, class FOnlineSessionSettingBP> Settings;                        // 0x00F0 (size: 0x50)
    TArray<FOnlineSessionMemberSettingsBP> MemberSettings;                            // 0x0140 (size: 0x10)

}; // Size: 0x150

struct FOnlineStatUpdateBP
{
    EOnlineStatModificationType_ Type;                                                // 0x0000 (size: 0x1)
    FVariantDataBP Value;                                                             // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FOnlineStatsRowBP
{
    FString PlayerNickname;                                                           // 0x0000 (size: 0x10)
    FUniqueNetIdRepl PlayerId;                                                        // 0x0010 (size: 0x30)
    int32 Rank;                                                                       // 0x0040 (size: 0x4)
    TMap<class FString, class FVariantDataBP> Columns;                                // 0x0048 (size: 0x50)

}; // Size: 0x98

struct FOnlineStatsUserStatsBP
{
    FUniqueNetIdRepl PlayerId;                                                        // 0x0000 (size: 0x30)
    TMap<class FString, class FVariantDataBP> Stats;                                  // 0x0030 (size: 0x50)

}; // Size: 0x80

struct FOnlineStatsUserUpdatedStatsBP
{
    FUniqueNetIdRepl PlayerId;                                                        // 0x0000 (size: 0x30)
    TMap<class FString, class FOnlineStatUpdateBP> Stats;                             // 0x0030 (size: 0x50)

}; // Size: 0x80

struct FOnlineStoreCategoryBP
{
    FString ID;                                                                       // 0x0000 (size: 0x10)
    FText Description;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FOnlineStoreFilterBP
{
    TArray<FString> Keywords;                                                         // 0x0000 (size: 0x10)
    TArray<FOnlineStoreCategoryBP> IncludeCategories;                                 // 0x0010 (size: 0x10)
    TArray<FOnlineStoreCategoryBP> ExcludeCategories;                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FOnlineUserPresenceData
{
    FUniqueNetIdRepl SessionId;                                                       // 0x0000 (size: 0x30)
    bool IsOnline;                                                                    // 0x0030 (size: 0x1)
    bool IsPlaying;                                                                   // 0x0031 (size: 0x1)
    bool IsPlayingThisGame;                                                           // 0x0032 (size: 0x1)
    bool IsJoinable;                                                                  // 0x0033 (size: 0x1)
    bool HasVoiceSupport;                                                             // 0x0034 (size: 0x1)
    FDateTime LastOnline;                                                             // 0x0038 (size: 0x8)
    FOnlineUserPresenceStatusData Status;                                             // 0x0040 (size: 0x68)

}; // Size: 0xA8

struct FOnlineUserPresenceStatusData
{
    FString Status;                                                                   // 0x0000 (size: 0x10)
    FOnlineUserPresenceStatusState State;                                             // 0x0010 (size: 0x1)
    TMap<class FString, class FVariantDataBP> Properties;                             // 0x0018 (size: 0x50)

}; // Size: 0x68

struct FOptionalOnlineSessionSearchResultBP
{
    bool bSet;                                                                        // 0x0000 (size: 0x1)
    FOnlineSessionSearchResultBP SearchResult;                                        // 0x0008 (size: 0x1B8)

}; // Size: 0x1C0

struct FPagedQueryBP
{
    int32 Start;                                                                      // 0x0000 (size: 0x4)
    int32 Count;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPurchaseCheckoutRequestBP
{
    FString AccountId;                                                                // 0x0000 (size: 0x10)
    TArray<FPurchaseOfferEntryBP> PurchaseOffers;                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPurchaseOfferEntryBP
{
    FString OfferNamespace;                                                           // 0x0000 (size: 0x10)
    FString OfferId;                                                                  // 0x0010 (size: 0x10)
    int32 Quantity;                                                                   // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FReceiptOfferEntryBP
{
    FString Namespace;                                                                // 0x0000 (size: 0x10)
    FString OfferId;                                                                  // 0x0010 (size: 0x10)
    int32 Quantity;                                                                   // 0x0020 (size: 0x4)
    TArray<FLineItemInfoBP> LineItems;                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRedeemCodeRequestBP
{
    FString Code;                                                                     // 0x0000 (size: 0x10)
    FString CodeUseId;                                                                // 0x0010 (size: 0x10)
    FString FulfillmentSource;                                                        // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FReportPlayedWithUserInfo
{
    FUniqueNetIdRepl UserId;                                                          // 0x0000 (size: 0x30)
    FString PresenceStr;                                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FSessionSearchParamBP
{
    FVariantDataBP Data;                                                              // 0x0000 (size: 0x30)
    EOnlineComparisonOp_ OP;                                                          // 0x0030 (size: 0x1)
    int32 ID;                                                                         // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FShowSendMessageParameters
{
    FText DisplayTitle;                                                               // 0x0000 (size: 0x10)
    TMap<class FString, class FString> DisplayTitle_Loc;                              // 0x0010 (size: 0x50)
    FText DisplayMessage;                                                             // 0x0060 (size: 0x10)
    FText DisplayDetails;                                                             // 0x0070 (size: 0x10)
    TMap<class FString, class FString> DisplayDetails_Loc;                            // 0x0080 (size: 0x50)
    FOnlineMessagePayloadData DataPayload;                                            // 0x00D0 (size: 0x1)
    int32 MaxRecipients;                                                              // 0x00D4 (size: 0x4)

}; // Size: 0xD8

struct FShowStoreParameters
{
    FString Category;                                                                 // 0x0000 (size: 0x10)
    FString ProductId;                                                                // 0x0010 (size: 0x10)
    bool AddToCart;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FShowWebUrlParameters
{
    bool Embedded;                                                                    // 0x0000 (size: 0x1)
    bool ShowCloseButton;                                                             // 0x0001 (size: 0x1)
    bool ShowBackground;                                                              // 0x0002 (size: 0x1)
    bool HideCursor;                                                                  // 0x0003 (size: 0x1)
    bool ResetCookies;                                                                // 0x0004 (size: 0x1)
    int32 OffsetX;                                                                    // 0x0008 (size: 0x4)
    int32 OffsetY;                                                                    // 0x000C (size: 0x4)
    int32 SizeX;                                                                      // 0x0010 (size: 0x4)
    int32 SizeY;                                                                      // 0x0014 (size: 0x4)
    TArray<FString> AllowedDomains;                                                   // 0x0018 (size: 0x10)
    FString CallbackPath;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FVariantDataBP
{
    EOnlineKeyValuePairDataType_ Type;                                                // 0x0000 (size: 0x1)
    bool AsBool;                                                                      // 0x0001 (size: 0x1)
    int32 AsInt;                                                                      // 0x0004 (size: 0x4)
    float AsFloat;                                                                    // 0x0008 (size: 0x4)
    double AsDouble;                                                                  // 0x0010 (size: 0x8)
    int64 AsInt64;                                                                    // 0x0018 (size: 0x8)
    FString AsString;                                                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FVoiceAdminChannelCredentialsBP
{
    FUniqueNetIdRepl TargetUserId;                                                    // 0x0000 (size: 0x30)
    FString playerName;                                                               // 0x0030 (size: 0x10)
    FString ChannelCredentials;                                                       // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FVoiceChatChannel3dPropertiesBP
{
    bool bSet;                                                                        // 0x0000 (size: 0x1)
    EVoiceChatAttenuationModel_ AttenuationModel;                                     // 0x0001 (size: 0x1)
    float MinDistance;                                                                // 0x0004 (size: 0x4)
    float MaxDistance;                                                                // 0x0008 (size: 0x4)
    float Rolloff;                                                                    // 0x000C (size: 0x4)

}; // Size: 0x10

struct FVoiceChatDeviceInfoBP
{
    FString DisplayName;                                                              // 0x0000 (size: 0x10)
    FString ID;                                                                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FVoiceChatResultBP
{
    bool Successful;                                                                  // 0x0000 (size: 0x1)
    EVoiceChatResult_ ResultCode;                                                     // 0x0001 (size: 0x1)
    FString ErrorCode;                                                                // 0x0008 (size: 0x10)
    int32 ErrorNum;                                                                   // 0x0018 (size: 0x4)
    FString ErrorDesc;                                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

class IExternalUIFlowHandler : public IInterface
{

    bool OnLoginFlowUIRequired(FString RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID);
    bool OnCreateAccountFlowUIRequired(FString RequestedURL, class UOnlineExternalUISubsystem* ExternalUIContext, int32 RequestID);
}; // Size: 0x28

class UBlueprintPartyMember : public UObject
{
    FBlueprintPartyMemberOnAttributeChanged OnAttributeChanged;                       // 0x0048 (size: 0x10)
    void PartyMemberAttributeChanged(const FUniqueNetIdRepl& ChangedUserId, FString Attribute, FString NewValue, FString OldValue);
    FBlueprintPartyMemberOnConnectionStatusChanged OnConnectionStatusChanged;         // 0x0058 (size: 0x10)
    void PartyMemberConnectionStatusChanged(const FUniqueNetIdRepl& ChangedUserId, EMemberConnectionStatus_ NewStatus, EMemberConnectionStatus_ PreviousStatus);

    FUniqueNetIdRepl GetUserId();
    bool GetUserAttribute(FString AttrName, FString& OutAttrValue);
    FString GetRealName();
    FString GetDisplayName(FString Platform);
}; // Size: 0x68

class UFileData : public UObject
{
}; // Size: 0x38

class ULobby : public UObject
{

    FUniqueNetIdRepl GetOwnerId();
    class ULobbyId* GetId();
}; // Size: 0x38

class ULobbyId : public UObject
{

    FString ToDebugString();
}; // Size: 0x38

class UMutablePartyData : public UReadablePartyData
{

    void SetAttribute(FString AttrName, const FVariantDataBP& AttrValue);
    void RemoveAttribute(FString AttrName);
}; // Size: 0x48

class UNamedOnlineSession : public UObject
{

    FNamedOnlineSessionBP GetValue();
}; // Size: 0x230

class UOnlineAchievementsSubsystem : public UGameInstanceSubsystem
{
    FOnlineAchievementsSubsystemOnAchievementUnlocked OnAchievementUnlocked;          // 0x00A8 (size: 0x10)
    void Achievements_AchievementUnlocked_BP(const FUniqueNetIdRepl& UserId, FString AchievementId);

    bool IsSubsystemAvailable();
    EOnlineCachedResult_ GetCachedAchievements(const FUniqueNetIdRepl& PlayerId, TArray<FOnlineAchievementBP>& OutAchievements);
    EOnlineCachedResult_ GetCachedAchievementDescription(FString AchievementId, FOnlineAchievementDescBP& OutAchievementDesc);
    EOnlineCachedResult_ GetCachedAchievement(const FUniqueNetIdRepl& PlayerId, FString AchievementId, FOnlineAchievementBP& OutAchievement);
}; // Size: 0xB8

class UOnlineAchievementsSubsystemQueryAchievementDescriptions : public UBlueprintAsyncActionBase
{
    FOnlineAchievementsSubsystemQueryAchievementDescriptionsOnCallFailed OnCallFailed; // 0x0030 (size: 0x10)
    void OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin(const FUniqueNetIdRepl& LocalUserId, bool bWasSuccessful);
    FOnlineAchievementsSubsystemQueryAchievementDescriptionsOnQueryAchievementsComplete OnQueryAchievementsComplete; // 0x0040 (size: 0x10)
    void OnlineAchievementsSubsystemQueryAchievementDescriptionsCallbackPin(const FUniqueNetIdRepl& LocalUserId, bool bWasSuccessful);
    class UOnlineAchievementsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__PlayerId;                                               // 0x0068 (size: 0x30)

    class UOnlineAchievementsSubsystemQueryAchievementDescriptions* QueryAchievementDescriptions(class UOnlineAchievementsSubsystem* Subsystem, const FUniqueNetIdRepl& PlayerId);
}; // Size: 0x98

class UOnlineAchievementsSubsystemQueryAchievements : public UBlueprintAsyncActionBase
{
    FOnlineAchievementsSubsystemQueryAchievementsOnCallFailed OnCallFailed;           // 0x0030 (size: 0x10)
    void OnlineAchievementsSubsystemQueryAchievementsCallbackPin(const FUniqueNetIdRepl& LocalUserId, bool bWasSuccessful);
    FOnlineAchievementsSubsystemQueryAchievementsOnQueryAchievementsComplete OnQueryAchievementsComplete; // 0x0040 (size: 0x10)
    void OnlineAchievementsSubsystemQueryAchievementsCallbackPin(const FUniqueNetIdRepl& LocalUserId, bool bWasSuccessful);
    class UOnlineAchievementsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__PlayerId;                                               // 0x0068 (size: 0x30)

    class UOnlineAchievementsSubsystemQueryAchievements* QueryAchievements(class UOnlineAchievementsSubsystem* Subsystem, const FUniqueNetIdRepl& PlayerId);
}; // Size: 0x98

class UOnlineAchievementsSubsystemWriteAchievements : public UBlueprintAsyncActionBase
{
    FOnlineAchievementsSubsystemWriteAchievementsOnCallFailed OnCallFailed;           // 0x0030 (size: 0x10)
    void OnlineAchievementsSubsystemWriteAchievementsCallbackPin(const FUniqueNetIdRepl& Param1, bool Param2);
    FOnlineAchievementsSubsystemWriteAchievementsOnAchievementsWritten OnAchievementsWritten; // 0x0040 (size: 0x10)
    void OnlineAchievementsSubsystemWriteAchievementsCallbackPin(const FUniqueNetIdRepl& Param1, bool Param2);
    class UOnlineAchievementsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__PlayerId;                                               // 0x0068 (size: 0x30)
    class UOnlineAchievementsWrite* __Store__WriteObject;                             // 0x0098 (size: 0x8)

    class UOnlineAchievementsSubsystemWriteAchievements* WriteAchievements(class UOnlineAchievementsSubsystem* Subsystem, const FUniqueNetIdRepl& PlayerId, class UOnlineAchievementsWrite* WriteObject);
}; // Size: 0xA0

class UOnlineAchievementsWrite : public UObject
{

    void SetAchievementProgress(FString AchievementId, float AchievementProgress);
}; // Size: 0x38

class UOnlineAvatarSubsystem : public UGameInstanceSubsystem
{

    bool IsSubsystemAvailable();
}; // Size: 0xA0

class UOnlineAvatarSubsystemGetAvatar : public UBlueprintAsyncActionBase
{
    FOnlineAvatarSubsystemGetAvatarOnCallFailed OnCallFailed;                         // 0x0030 (size: 0x10)
    void OnlineAvatarSubsystemGetAvatarCallbackPin(bool bWasSuccessful, class UTexture* ResultTexture);
    FOnlineAvatarSubsystemGetAvatarOnGetAvatarComplete OnGetAvatarComplete;           // 0x0040 (size: 0x10)
    void OnlineAvatarSubsystemGetAvatarCallbackPin(bool bWasSuccessful, class UTexture* ResultTexture);
    class UOnlineAvatarSubsystem* __Store__Subsystem;                                 // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FUniqueNetIdRepl __Store__TargetUserId;                                           // 0x0098 (size: 0x30)
    class UTexture* __Store__DefaultTexture;                                          // 0x00C8 (size: 0x8)

    class UOnlineAvatarSubsystemGetAvatar* GetAvatar(class UOnlineAvatarSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId, class UTexture* DefaultTexture);
}; // Size: 0xD0

class UOnlineAvatarSubsystemGetAvatarUrl : public UBlueprintAsyncActionBase
{
    FOnlineAvatarSubsystemGetAvatarUrlOnCallFailed OnCallFailed;                      // 0x0030 (size: 0x10)
    void OnlineAvatarSubsystemGetAvatarUrlCallbackPin(bool bWasSuccessful, FString ResultAvatarUrl);
    FOnlineAvatarSubsystemGetAvatarUrlOnGetAvatarUrlComplete OnGetAvatarUrlComplete;  // 0x0040 (size: 0x10)
    void OnlineAvatarSubsystemGetAvatarUrlCallbackPin(bool bWasSuccessful, FString ResultAvatarUrl);
    class UOnlineAvatarSubsystem* __Store__Subsystem;                                 // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FUniqueNetIdRepl __Store__TargetUserId;                                           // 0x0098 (size: 0x30)
    FString __Store__DefaultAvatarUrl;                                                // 0x00C8 (size: 0x10)

    class UOnlineAvatarSubsystemGetAvatarUrl* GetAvatarUrl(class UOnlineAvatarSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId, FString DefaultAvatarUrl);
}; // Size: 0xD8

class UOnlineChatSubsystem : public UGameInstanceSubsystem
{
    FOnlineChatSubsystemOnChatRoomCreated OnChatRoomCreated;                          // 0x0100 (size: 0x10)
    void Chat_ChatRoomCreated_BP(const FUniqueNetIdRepl& Param1, FString Param2, bool Param3, FString Param4);
    FOnlineChatSubsystemOnChatRoomConfigured OnChatRoomConfigured;                    // 0x0110 (size: 0x10)
    void Chat_ChatRoomConfigured_BP(const FUniqueNetIdRepl& Param1, FString Param2, bool Param3, FString Param4);
    FOnlineChatSubsystemOnChatRoomJoinPublic OnChatRoomJoinPublic;                    // 0x0120 (size: 0x10)
    void Chat_ChatRoomJoinPublic_BP(const FUniqueNetIdRepl& Param1, FString Param2, bool Param3, FString Param4);
    FOnlineChatSubsystemOnChatRoomJoinPrivate OnChatRoomJoinPrivate;                  // 0x0130 (size: 0x10)
    void Chat_ChatRoomJoinPrivate_BP(const FUniqueNetIdRepl& Param1, FString Param2, bool Param3, FString Param4);
    FOnlineChatSubsystemOnChatRoomExit OnChatRoomExit;                                // 0x0140 (size: 0x10)
    void Chat_ChatRoomExit_BP(const FUniqueNetIdRepl& Param1, FString Param2, bool Param3, FString Param4);
    FOnlineChatSubsystemOnChatRoomMemberJoin OnChatRoomMemberJoin;                    // 0x0150 (size: 0x10)
    void Chat_ChatRoomMemberJoin_BP(const FUniqueNetIdRepl& Param1, FString Param2, const FUniqueNetIdRepl& Param3);
    FOnlineChatSubsystemOnChatRoomMemberExit OnChatRoomMemberExit;                    // 0x0160 (size: 0x10)
    void Chat_ChatRoomMemberExit_BP(const FUniqueNetIdRepl& Param1, FString Param2, const FUniqueNetIdRepl& Param3);
    FOnlineChatSubsystemOnChatRoomMemberUpdate OnChatRoomMemberUpdate;                // 0x0170 (size: 0x10)
    void Chat_ChatRoomMemberUpdate_BP(const FUniqueNetIdRepl& Param1, FString Param2, const FUniqueNetIdRepl& Param3);
    FOnlineChatSubsystemOnChatRoomMessageSent OnChatRoomMessageSent;                  // 0x0180 (size: 0x10)
    void Chat_ChatRoomMessageSent_BP(const FUniqueNetIdRepl& Param1, FString Param2, bool Param3, FString Param4);
    FOnlineChatSubsystemOnChatRoomMessageReceived OnChatRoomMessageReceived;          // 0x0190 (size: 0x10)
    void Chat_ChatRoomMessageReceived_BP(const FUniqueNetIdRepl& Param1, FString Param2, const FChatMessageBP& Param3);
    FOnlineChatSubsystemOnChatPrivateMessageSent OnChatPrivateMessageSent;            // 0x01A0 (size: 0x10)
    void Chat_ChatPrivateMessageSent_BP(const FUniqueNetIdRepl& Param1, const FUniqueNetIdRepl& Param2, bool Param3, FString Param4);
    FOnlineChatSubsystemOnChatPrivateMessageReceived OnChatPrivateMessageReceived;    // 0x01B0 (size: 0x10)
    void Chat_ChatPrivateMessageReceived_BP(const FUniqueNetIdRepl& Param1, const FChatMessageBP& Param2);

    bool SendRoomChat(const FUniqueNetIdRepl& UserId, FString RoomId, FString MsgBody);
    bool SendPrivateChat(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& RecipientId, FString MsgBody);
    bool JoinPublicRoom(const FUniqueNetIdRepl& UserId, FString RoomId, FString Nickname, const FChatRoomConfigBP& ChatRoomConfig);
    bool JoinPrivateRoom(const FUniqueNetIdRepl& UserId, FString RoomId, FString Nickname, const FChatRoomConfigBP& ChatRoomConfig);
    bool IsSubsystemAvailable();
    bool IsChatAllowed(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& RecipientId);
    FChatRoomInfoBP GetRoomInfo(const FUniqueNetIdRepl& UserId, FString RoomId);
    bool GetMembers(const FUniqueNetIdRepl& UserId, FString RoomId, TArray<FChatRoomMemberBP>& OutMembers);
    FChatRoomMemberBP GetMember(const FUniqueNetIdRepl& UserId, FString RoomId, const FUniqueNetIdRepl& MemberId);
    bool GetLastMessages(const FUniqueNetIdRepl& UserId, FString RoomId, int32 NumMessages, TArray<FChatMessageBP>& OutMessages);
    void GetJoinedRooms(const FUniqueNetIdRepl& UserId, TArray<FString>& OutRooms);
    bool ExitRoom(const FUniqueNetIdRepl& UserId, FString RoomId);
    void DumpChatState();
    bool CreateRoom(const FUniqueNetIdRepl& UserId, FString RoomId, FString Nickname, const FChatRoomConfigBP& ChatRoomConfig);
    bool ConfigureRoom(const FUniqueNetIdRepl& UserId, FString RoomId, const FChatRoomConfigBP& ChatRoomConfig);
}; // Size: 0x1C0

class UOnlineEntitlement : public UObject
{

    bool IsConsumable();
    FString GetStatus();
    FString GetStartDate();
    int32 GetRemainingCount();
    FString GetNamespace();
    FString GetName();
    FString GetItemId();
    FString GetId();
    FString GetEndDate();
    int32 GetConsumedCount();
}; // Size: 0x38

class UOnlineEntitlementsSubsystem : public UGameInstanceSubsystem
{
    FOnlineEntitlementsSubsystemOnQueryEntitlementsComplete OnQueryEntitlementsComplete; // 0x00A8 (size: 0x10)
    void Entitlements_QueryEntitlementsComplete_BP(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Namespace, FString Error);

    bool IsSubsystemAvailable();
    class UOnlineEntitlement* GetItemEntitlement(const FUniqueNetIdRepl& UserId, FString ItemId);
    class UOnlineEntitlement* GetEntitlement(const FUniqueNetIdRepl& UserId, FString EntitlementId);
    void GetAllEntitlements(const FUniqueNetIdRepl& UserId, FString Namespace, TArray<class UOnlineEntitlement*>& OutUserEntitlements);
}; // Size: 0xB8

class UOnlineEntitlementsSubsystemQueryEntitlements : public UBlueprintAsyncActionBase
{
    FOnlineEntitlementsSubsystemQueryEntitlementsOnCallFailed OnCallFailed;           // 0x0030 (size: 0x10)
    void OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Namespace, FString Error);
    FOnlineEntitlementsSubsystemQueryEntitlementsOnQueryEntitlementsComplete OnQueryEntitlementsComplete; // 0x0040 (size: 0x10)
    void OnlineEntitlementsSubsystemQueryEntitlementsCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Namespace, FString Error);
    class UOnlineEntitlementsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0070 (size: 0x30)
    FString __Store__Namespace;                                                       // 0x00A0 (size: 0x10)
    FPagedQueryBP __Store__Page;                                                      // 0x00B0 (size: 0x8)

    class UOnlineEntitlementsSubsystemQueryEntitlements* QueryEntitlements(class UOnlineEntitlementsSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString Namespace, const FPagedQueryBP& Page);
}; // Size: 0xB8

class UOnlineEventsSubsystem : public UGameInstanceSubsystem
{

    bool IsSubsystemAvailable();
}; // Size: 0xA0

class UOnlineExternalUISubsystem : public UGameInstanceSubsystem
{
    TArray<FExternalUIFlowHandlerRegistration> FlowHandlers;                          // 0x00A8 (size: 0x10)
    FOnlineExternalUISubsystemOnExternalUIChange OnExternalUIChange;                  // 0x0160 (size: 0x10)
    void ExternalUI_ExternalUIChange_BP(bool Param1);

    bool ShowPlatformMessageBox(const FUniqueNetIdRepl& UserId, EPlatformMessageType_ MessageType);
    bool ShowLeaderboardUI(FString LeaderboardName);
    bool ShowInviteUI(int32 LocalUserNum, FName SessionName);
    bool ShowFriendsUI(int32 LocalUserNum);
    bool ShowAchievementsUI(int32 LocalUserNum);
    bool ShowAccountUpgradeUI(const FUniqueNetIdRepl& UniqueID);
    void ReportExitInGameStoreUI();
    void ReportEnterInGameStoreUI();
    void RemoveLoginFlowHandler(const TScriptInterface<class IExternalUIFlowHandler>& Handler);
    FLoginFlowResultBP NotifyLoginRedirectURL(int32 RequestID, FString URL);
    void LoginFlowComplete(int32 RequestID, const FLoginFlowResultBP& Result);
    bool IsSubsystemAvailable();
    bool CloseWebURL();
    void AddLoginFlowHandler(const TScriptInterface<class IExternalUIFlowHandler>& Handler);
}; // Size: 0x170

class UOnlineExternalUISubsystemShowAccountCreationUI : public UBlueprintAsyncActionBase
{
    FOnlineExternalUISubsystemShowAccountCreationUIOnCallFailed OnCallFailed;         // 0x0030 (size: 0x10)
    void OnlineExternalUISubsystemShowAccountCreationUICallbackPin(int32 ControllerIndex, const FOnlineAccountCredential& AccountCredentials, const FOnlineErrorInfo& Error);
    FOnlineExternalUISubsystemShowAccountCreationUIOnAccountCreationUIClosed OnAccountCreationUIClosed; // 0x0040 (size: 0x10)
    void OnlineExternalUISubsystemShowAccountCreationUICallbackPin(int32 ControllerIndex, const FOnlineAccountCredential& AccountCredentials, const FOnlineErrorInfo& Error);
    class UOnlineExternalUISubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__ControllerIndex;                                                   // 0x0068 (size: 0x4)

    class UOnlineExternalUISubsystemShowAccountCreationUI* ShowAccountCreationUI(class UOnlineExternalUISubsystem* Subsystem, int32 ControllerIndex);
}; // Size: 0x70

class UOnlineExternalUISubsystemShowLoginUI : public UBlueprintAsyncActionBase
{
    FOnlineExternalUISubsystemShowLoginUIOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlineExternalUISubsystemShowLoginUICallbackPin(const FUniqueNetIdRepl& UniqueID, int32 ControllerIndex, const FOnlineErrorInfo& Error);
    FOnlineExternalUISubsystemShowLoginUIOnLoginUIClosed OnLoginUIClosed;             // 0x0040 (size: 0x10)
    void OnlineExternalUISubsystemShowLoginUICallbackPin(const FUniqueNetIdRepl& UniqueID, int32 ControllerIndex, const FOnlineErrorInfo& Error);
    class UOnlineExternalUISubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__ControllerIndex;                                                   // 0x0068 (size: 0x4)
    bool __Store__bShowOnlineOnly;                                                    // 0x006C (size: 0x1)
    bool __Store__bShowSkipButton;                                                    // 0x006D (size: 0x1)

    class UOnlineExternalUISubsystemShowLoginUI* ShowLoginUI(class UOnlineExternalUISubsystem* Subsystem, int32 ControllerIndex, bool bShowOnlineOnly, bool bShowSkipButton);
}; // Size: 0x70

class UOnlineExternalUISubsystemShowProfileUI : public UBlueprintAsyncActionBase
{
    FOnlineExternalUISubsystemShowProfileUIOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineExternalUISubsystemShowProfileUICallbackPin();
    FOnlineExternalUISubsystemShowProfileUIOnProfileUIClosed OnProfileUIClosed;       // 0x0040 (size: 0x10)
    void OnlineExternalUISubsystemShowProfileUICallbackPin();
    class UOnlineExternalUISubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__Requestor;                                              // 0x0068 (size: 0x30)
    FUniqueNetIdRepl __Store__Requestee;                                              // 0x0098 (size: 0x30)

    class UOnlineExternalUISubsystemShowProfileUI* ShowProfileUI(class UOnlineExternalUISubsystem* Subsystem, const FUniqueNetIdRepl& Requestor, const FUniqueNetIdRepl& Requestee);
}; // Size: 0xC8

class UOnlineExternalUISubsystemShowSendMessageToUserUI : public UBlueprintAsyncActionBase
{
    FOnlineExternalUISubsystemShowSendMessageToUserUIOnCallFailed OnCallFailed;       // 0x0030 (size: 0x10)
    void OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin(bool bMessageSent);
    FOnlineExternalUISubsystemShowSendMessageToUserUIOnShowSendMessageUIClosed OnShowSendMessageUIClosed; // 0x0040 (size: 0x10)
    void OnlineExternalUISubsystemShowSendMessageToUserUICallbackPin(bool bMessageSent);
    class UOnlineExternalUISubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FUniqueNetIdRepl __Store__Recipient;                                              // 0x0070 (size: 0x30)
    FShowSendMessageParameters __Store__ShowParams;                                   // 0x00A0 (size: 0xD8)

    class UOnlineExternalUISubsystemShowSendMessageToUserUI* ShowSendMessageToUserUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& Recipient, const FShowSendMessageParameters& ShowParams);
}; // Size: 0x178

class UOnlineExternalUISubsystemShowSendMessageUI : public UBlueprintAsyncActionBase
{
    FOnlineExternalUISubsystemShowSendMessageUIOnCallFailed OnCallFailed;             // 0x0030 (size: 0x10)
    void OnlineExternalUISubsystemShowSendMessageUICallbackPin(bool bMessageSent);
    FOnlineExternalUISubsystemShowSendMessageUIOnShowSendMessageUIClosed OnShowSendMessageUIClosed; // 0x0040 (size: 0x10)
    void OnlineExternalUISubsystemShowSendMessageUICallbackPin(bool bMessageSent);
    class UOnlineExternalUISubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FShowSendMessageParameters __Store__ShowParams;                                   // 0x0070 (size: 0xD8)

    class UOnlineExternalUISubsystemShowSendMessageUI* ShowSendMessageUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const FShowSendMessageParameters& ShowParams);
}; // Size: 0x148

class UOnlineExternalUISubsystemShowStoreUI : public UBlueprintAsyncActionBase
{
    FOnlineExternalUISubsystemShowStoreUIOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlineExternalUISubsystemShowStoreUICallbackPin(bool bPurchased);
    FOnlineExternalUISubsystemShowStoreUIOnShowStoreUIClosed OnShowStoreUIClosed;     // 0x0040 (size: 0x10)
    void OnlineExternalUISubsystemShowStoreUICallbackPin(bool bPurchased);
    class UOnlineExternalUISubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FShowStoreParameters __Store__ShowParams;                                         // 0x0070 (size: 0x28)

    class UOnlineExternalUISubsystemShowStoreUI* ShowStoreUI(class UOnlineExternalUISubsystem* Subsystem, int32 LocalUserNum, const FShowStoreParameters& ShowParams);
}; // Size: 0x98

class UOnlineExternalUISubsystemShowWebURL : public UBlueprintAsyncActionBase
{
    FOnlineExternalUISubsystemShowWebURLOnCallFailed OnCallFailed;                    // 0x0030 (size: 0x10)
    void OnlineExternalUISubsystemShowWebURLCallbackPin(FString FinalUrl);
    FOnlineExternalUISubsystemShowWebURLOnShowWebUrlClosed OnShowWebUrlClosed;        // 0x0040 (size: 0x10)
    void OnlineExternalUISubsystemShowWebURLCallbackPin(FString FinalUrl);
    class UOnlineExternalUISubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FString __Store__Url;                                                             // 0x0068 (size: 0x10)
    FShowWebUrlParameters __Store__ShowParams;                                        // 0x0078 (size: 0x38)

    class UOnlineExternalUISubsystemShowWebURL* ShowWebURL(class UOnlineExternalUISubsystem* Subsystem, FString URL, const FShowWebUrlParameters& ShowParams);
}; // Size: 0xB0

class UOnlineFriendRef : public UOnlineUserRef
{

    FOnlineUserPresenceData GetPresence();
    EInviteStatus_ GetInviteStatus();
}; // Size: 0x58

class UOnlineFriendsSubsystem : public UGameInstanceSubsystem
{
    FOnlineFriendsSubsystemOnFriendsChange OnFriendsChange;                           // 0x0158 (size: 0x10)
    void Friends_FriendsChange_BP(int32 LocalUserNum);
    FOnlineFriendsSubsystemOnOutgoingInviteSent OnOutgoingInviteSent;                 // 0x0168 (size: 0x10)
    void Friends_OutgoingInviteSent_BP(int32 LocalUserNum);
    FOnlineFriendsSubsystemOnInviteReceived OnInviteReceived;                         // 0x0178 (size: 0x10)
    void Friends_InviteReceived_BP(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& FriendId);
    FOnlineFriendsSubsystemOnInviteAccepted OnInviteAccepted;                         // 0x0188 (size: 0x10)
    void Friends_InviteAccepted_BP(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& FriendId);
    FOnlineFriendsSubsystemOnInviteRejected OnInviteRejected;                         // 0x0198 (size: 0x10)
    void Friends_InviteRejected_BP(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& FriendId);
    FOnlineFriendsSubsystemOnInviteAborted OnInviteAborted;                           // 0x01A8 (size: 0x10)
    void Friends_InviteAborted_BP(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& FriendId);
    FOnlineFriendsSubsystemOnFriendRemoved OnFriendRemoved;                           // 0x01B8 (size: 0x10)
    void Friends_FriendRemoved_BP(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& FriendId);
    FOnlineFriendsSubsystemOnRejectInviteComplete OnRejectInviteComplete;             // 0x01C8 (size: 0x10)
    void Friends_RejectInviteComplete_BP(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemOnDeleteFriendComplete OnDeleteFriendComplete;             // 0x01D8 (size: 0x10)
    void Friends_DeleteFriendComplete_BP(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemOnBlockedPlayerComplete OnBlockedPlayerComplete;           // 0x01E8 (size: 0x10)
    void Friends_BlockedPlayerComplete_BP(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& UniqueID, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemOnUnblockedPlayerComplete OnUnblockedPlayerComplete;       // 0x01F8 (size: 0x10)
    void Friends_UnblockedPlayerComplete_BP(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& UniqueID, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemOnBlockListChange OnBlockListChange;                       // 0x0208 (size: 0x10)
    void Friends_BlockListChange_BP(int32 LocalUserNum, FString ListName);
    FOnlineFriendsSubsystemOnQueryRecentPlayersComplete OnQueryRecentPlayersComplete; // 0x0218 (size: 0x10)
    void Friends_QueryRecentPlayersComplete_BP(const FUniqueNetIdRepl& UserId, FString Namespace, bool bWasSuccessful, FString Error);
    FOnlineFriendsSubsystemOnQueryBlockedPlayersComplete OnQueryBlockedPlayersComplete; // 0x0228 (size: 0x10)
    void Friends_QueryBlockedPlayersComplete_BP(const FUniqueNetIdRepl& UserId, bool bWasSuccessful, FString Error);
    FOnlineFriendsSubsystemOnRecentPlayersAdded OnRecentPlayersAdded;                 // 0x0238 (size: 0x10)
    void Friends_RecentPlayersAdded_BP(const FUniqueNetIdRepl& UserId, const TArray<class UOnlineRecentPlayerRef*>& AddedPlayers);
    FOnlineFriendsSubsystemOnFriendSettingsUpdated OnFriendSettingsUpdated;           // 0x0248 (size: 0x10)
    void Friends_FriendSettingsUpdated_BP(const FUniqueNetIdRepl& UserId, bool bWasSuccessful, bool bWasUpdate, const FFriendSettingsData& Settings, FString ErrorStr);

    bool IsSubsystemAvailable();
    bool IsFriend(int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName);
    bool GetRecentPlayers(const FUniqueNetIdRepl& UserId, FString Namespace, TArray<class UOnlineRecentPlayerRef*>& OutRecentPlayers);
    bool GetFriendsList(int32 LocalUserNum, FString ListName, TArray<class UOnlineFriendRef*>& OutFriends);
    bool GetFriendSettings(const FUniqueNetIdRepl& UserId, TMap<class FString, class FOnlineFriendSettingsSourceDataConfig>& OutSettings);
    class UOnlineFriendRef* GetFriend(int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName);
    bool GetBlockedPlayers(const FUniqueNetIdRepl& UserId, TArray<class UOnlineUserRef*>& OutBlockedPlayers);
    void DumpRecentPlayers();
    void DumpBlockedPlayers();
}; // Size: 0x258

class UOnlineFriendsSubsystemAcceptInvite : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemAcceptInviteOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemAcceptInviteCallbackPin(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemAcceptInviteOnAcceptInviteComplete OnAcceptInviteComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemAcceptInviteCallbackPin(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FUniqueNetIdRepl __Store__FriendId;                                               // 0x0070 (size: 0x30)
    FString __Store__ListName;                                                        // 0x00A0 (size: 0x10)

    class UOnlineFriendsSubsystemAcceptInvite* AcceptInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName);
}; // Size: 0xB0

class UOnlineFriendsSubsystemAddRecentPlayers : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemAddRecentPlayersOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemAddRecentPlayersCallbackPin(const FUniqueNetIdRepl& UserId, const FOnlineErrorInfo& Error);
    FOnlineFriendsSubsystemAddRecentPlayersOnAddRecentPlayersComplete OnAddRecentPlayersComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemAddRecentPlayersCallbackPin(const FUniqueNetIdRepl& UserId, const FOnlineErrorInfo& Error);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    TArray<FReportPlayedWithUserInfo> __Store__InRecentPlayers;                       // 0x0098 (size: 0x10)
    FString __Store__ListName;                                                        // 0x00A8 (size: 0x10)

    class UOnlineFriendsSubsystemAddRecentPlayers* AddRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, const TArray<FReportPlayedWithUserInfo>& InRecentPlayers, FString ListName);
}; // Size: 0xB8

class UOnlineFriendsSubsystemBlockPlayer : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemBlockPlayerOnCallFailed OnCallFailed;                      // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemBlockPlayerCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UniqueID, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemBlockPlayerOnBlockedPlayerComplete OnBlockedPlayerComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemBlockPlayerCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UniqueID, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    FUniqueNetIdRepl __Store__PlayerId;                                               // 0x0078 (size: 0x30)

    class UOnlineFriendsSubsystemBlockPlayer* BlockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& PlayerId);
}; // Size: 0xA8

class UOnlineFriendsSubsystemDeleteFriend : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemDeleteFriendOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemDeleteFriendCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemDeleteFriendOnDeleteFriendComplete OnDeleteFriendComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemDeleteFriendCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    FUniqueNetIdRepl __Store__FriendId;                                               // 0x0078 (size: 0x30)
    FString __Store__ListName;                                                        // 0x00A8 (size: 0x10)

    class UOnlineFriendsSubsystemDeleteFriend* DeleteFriend(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName);
}; // Size: 0xB8

class UOnlineFriendsSubsystemDeleteFriendAlias : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemDeleteFriendAliasOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemDeleteFriendAliasCallbackPin(int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName, const FOnlineErrorInfo& Error);
    FOnlineFriendsSubsystemDeleteFriendAliasOnDeleteFriendAliasComplete OnDeleteFriendAliasComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemDeleteFriendAliasCallbackPin(int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName, const FOnlineErrorInfo& Error);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FUniqueNetIdRepl __Store__FriendId;                                               // 0x0070 (size: 0x30)
    FString __Store__ListName;                                                        // 0x00A0 (size: 0x10)

    class UOnlineFriendsSubsystemDeleteFriendAlias* DeleteFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName);
}; // Size: 0xB0

class UOnlineFriendsSubsystemDeleteFriendsList : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemDeleteFriendsListOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemDeleteFriendsListCallbackPin(int32 LocalUserNum, bool bWasSuccessful, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemDeleteFriendsListOnDeleteFriendsListComplete OnDeleteFriendsListComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemDeleteFriendsListCallbackPin(int32 LocalUserNum, bool bWasSuccessful, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FString __Store__ListName;                                                        // 0x0070 (size: 0x10)

    class UOnlineFriendsSubsystemDeleteFriendsList* DeleteFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, FString ListName);
}; // Size: 0x80

class UOnlineFriendsSubsystemQueryBlockedPlayers : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemQueryBlockedPlayersOnCallFailed OnCallFailed;              // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemQueryBlockedPlayersCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful, FString Error);
    FOnlineFriendsSubsystemQueryBlockedPlayersOnQueryBlockedPlayersComplete OnQueryBlockedPlayersComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemQueryBlockedPlayersCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful, FString Error);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0070 (size: 0x30)

    class UOnlineFriendsSubsystemQueryBlockedPlayers* QueryBlockedPlayers(class UOnlineFriendsSubsystem* Subsystem, const FUniqueNetIdRepl& UserId);
}; // Size: 0xA0

class UOnlineFriendsSubsystemQueryFriendSettings : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemQueryFriendSettingsOnCallFailed OnCallFailed;              // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemQueryFriendSettingsCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful, bool bWasUpdate, const FFriendSettingsData& Settings, FString ErrorStr);
    FOnlineFriendsSubsystemQueryFriendSettingsOnSettingsOperationComplete OnSettingsOperationComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemQueryFriendSettingsCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful, bool bWasUpdate, const FFriendSettingsData& Settings, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)

    class UOnlineFriendsSubsystemQueryFriendSettings* QueryFriendSettings(class UOnlineFriendsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId);
}; // Size: 0x98

class UOnlineFriendsSubsystemQueryRecentPlayers : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemQueryRecentPlayersOnCallFailed OnCallFailed;               // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemQueryRecentPlayersCallbackPin(const FUniqueNetIdRepl& UserId, FString Namespace, bool bWasSuccessful, FString Error);
    FOnlineFriendsSubsystemQueryRecentPlayersOnQueryRecentPlayersComplete OnQueryRecentPlayersComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemQueryRecentPlayersCallbackPin(const FUniqueNetIdRepl& UserId, FString Namespace, bool bWasSuccessful, FString Error);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0070 (size: 0x30)
    FString __Store__Namespace;                                                       // 0x00A0 (size: 0x10)

    class UOnlineFriendsSubsystemQueryRecentPlayers* QueryRecentPlayers(class UOnlineFriendsSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString Namespace);
}; // Size: 0xB0

class UOnlineFriendsSubsystemReadFriendsList : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemReadFriendsListOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemReadFriendsListCallbackPin(int32 LocalUserNum, bool bWasSuccessful, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemReadFriendsListOnReadFriendsListComplete OnReadFriendsListComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemReadFriendsListCallbackPin(int32 LocalUserNum, bool bWasSuccessful, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FString __Store__ListName;                                                        // 0x0070 (size: 0x10)

    class UOnlineFriendsSubsystemReadFriendsList* ReadFriendsList(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, FString ListName);
}; // Size: 0x80

class UOnlineFriendsSubsystemRejectInvite : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemRejectInviteOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemRejectInviteCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemRejectInviteOnRejectInviteComplete OnRejectInviteComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemRejectInviteCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    FUniqueNetIdRepl __Store__FriendId;                                               // 0x0078 (size: 0x30)
    FString __Store__ListName;                                                        // 0x00A8 (size: 0x10)

    class UOnlineFriendsSubsystemRejectInvite* RejectInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName);
}; // Size: 0xB8

class UOnlineFriendsSubsystemSendInvite : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemSendInviteOnCallFailed OnCallFailed;                       // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemSendInviteCallbackPin(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemSendInviteOnSendInviteComplete OnSendInviteComplete;       // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemSendInviteCallbackPin(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& FriendId, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FUniqueNetIdRepl __Store__FriendId;                                               // 0x0070 (size: 0x30)
    FString __Store__ListName;                                                        // 0x00A0 (size: 0x10)

    class UOnlineFriendsSubsystemSendInvite* SendInvite(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName);
}; // Size: 0xB0

class UOnlineFriendsSubsystemSetFriendAlias : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemSetFriendAliasOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemSetFriendAliasCallbackPin(int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName, const FOnlineErrorInfo& Error);
    FOnlineFriendsSubsystemSetFriendAliasOnSetFriendAliasComplete OnSetFriendAliasComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemSetFriendAliasCallbackPin(int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName, const FOnlineErrorInfo& Error);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FUniqueNetIdRepl __Store__FriendId;                                               // 0x0070 (size: 0x30)
    FString __Store__ListName;                                                        // 0x00A0 (size: 0x10)
    FString __Store__Alias;                                                           // 0x00B0 (size: 0x10)

    class UOnlineFriendsSubsystemSetFriendAlias* SetFriendAlias(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& FriendId, FString ListName, FString Alias);
}; // Size: 0xC0

class UOnlineFriendsSubsystemSetFriendSettings : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemSetFriendSettingsOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemSetFriendSettingsCallbackPin(const FUniqueNetIdRepl& Param1, bool Param2, FString Param3);
    FOnlineFriendsSubsystemSetFriendSettingsOnSetFriendSettingsComplete OnSetFriendSettingsComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemSetFriendSettingsCallbackPin(const FUniqueNetIdRepl& Param1, bool Param2, FString Param3);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FString __Store__Source;                                                          // 0x0098 (size: 0x10)
    bool __Store__bNeverShowAgain;                                                    // 0x00A8 (size: 0x1)

    class UOnlineFriendsSubsystemSetFriendSettings* SetFriendSettings(class UOnlineFriendsSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString Source, bool bNeverShowAgain);
}; // Size: 0xB0

class UOnlineFriendsSubsystemUnblockPlayer : public UBlueprintAsyncActionBase
{
    FOnlineFriendsSubsystemUnblockPlayerOnCallFailed OnCallFailed;                    // 0x0030 (size: 0x10)
    void OnlineFriendsSubsystemUnblockPlayerCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UniqueID, FString ListName, FString ErrorStr);
    FOnlineFriendsSubsystemUnblockPlayerOnUnblockedPlayerComplete OnUnblockedPlayerComplete; // 0x0040 (size: 0x10)
    void OnlineFriendsSubsystemUnblockPlayerCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UniqueID, FString ListName, FString ErrorStr);
    class UOnlineFriendsSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    FUniqueNetIdRepl __Store__PlayerId;                                               // 0x0078 (size: 0x30)

    class UOnlineFriendsSubsystemUnblockPlayer* UnblockPlayer(class UOnlineFriendsSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& PlayerId);
}; // Size: 0xA8

class UOnlineGameActivitySubsystem : public UGameInstanceSubsystem
{
    FOnlineGameActivitySubsystemOnGameActivityActivationRequested OnGameActivityActivationRequested; // 0x00A8 (size: 0x10)
    void GameActivity_GameActivityActivationRequested_BP(const FUniqueNetIdRepl& LocalUserId, FString ActivityId, const FOptionalOnlineSessionSearchResultBP& SessionInfo);

    void UpdatePlayerLocation(const FUniqueNetIdRepl& LocalUserId, FOnlineActivityPlayerLocationBP& ActivityPlayerLocation);
    bool IsSubsystemAvailable();
}; // Size: 0xB8

class UOnlineGameActivitySubsystemEndActivity : public UBlueprintAsyncActionBase
{
    FOnlineGameActivitySubsystemEndActivityOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineGameActivitySubsystemEndActivityCallbackPin(const FUniqueNetIdRepl& LocalUserId, FString ActivityId, EOnlineActivityOutcome_ Outcome, const FOnlineErrorInfo& Status);
    FOnlineGameActivitySubsystemEndActivityOnEndActivityComplete OnEndActivityComplete; // 0x0040 (size: 0x10)
    void OnlineGameActivitySubsystemEndActivityCallbackPin(const FUniqueNetIdRepl& LocalUserId, FString ActivityId, EOnlineActivityOutcome_ Outcome, const FOnlineErrorInfo& Status);
    class UOnlineGameActivitySubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ActivityId;                                                      // 0x0098 (size: 0x10)
    EOnlineActivityOutcome_ __Store__ActivityOutcome;                                 // 0x00A8 (size: 0x1)
    TMap<class FString, class FVariantDataBP> __Store__Parms;                         // 0x00B0 (size: 0x50)

    class UOnlineGameActivitySubsystemEndActivity* EndActivity(class UOnlineGameActivitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ActivityId, EOnlineActivityOutcome_ ActivityOutcome, const TMap<class FString, class FVariantDataBP>& Params);
}; // Size: 0x100

class UOnlineGameActivitySubsystemResetAllActiveActivities : public UBlueprintAsyncActionBase
{
    FOnlineGameActivitySubsystemResetAllActiveActivitiesOnCallFailed OnCallFailed;    // 0x0030 (size: 0x10)
    void OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameActivitySubsystemResetAllActiveActivitiesOnResetAllActiveActivitiesComplete OnResetAllActiveActivitiesComplete; // 0x0040 (size: 0x10)
    void OnlineGameActivitySubsystemResetAllActiveActivitiesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameActivitySubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)

    class UOnlineGameActivitySubsystemResetAllActiveActivities* ResetAllActiveActivities(class UOnlineGameActivitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId);
}; // Size: 0x98

class UOnlineGameActivitySubsystemResumeActivity : public UBlueprintAsyncActionBase
{
    FOnlineGameActivitySubsystemResumeActivityOnCallFailed OnCallFailed;              // 0x0030 (size: 0x10)
    void OnlineGameActivitySubsystemResumeActivityCallbackPin(const FUniqueNetIdRepl& LocalUserId, FString ActivityId, const FOnlineErrorInfo& Status);
    FOnlineGameActivitySubsystemResumeActivityOnResumeActivityComplete OnResumeActivityComplete; // 0x0040 (size: 0x10)
    void OnlineGameActivitySubsystemResumeActivityCallbackPin(const FUniqueNetIdRepl& LocalUserId, FString ActivityId, const FOnlineErrorInfo& Status);
    class UOnlineGameActivitySubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ActivityId;                                                      // 0x0098 (size: 0x10)
    FOnlineActivityTasksToResetBP __Store__TasksToReset;                              // 0x00A8 (size: 0x28)

    class UOnlineGameActivitySubsystemResumeActivity* ResumeActivity(class UOnlineGameActivitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ActivityId, const FOnlineActivityTasksToResetBP& TasksToReset);
}; // Size: 0xD0

class UOnlineGameActivitySubsystemSetActivityAvailability : public UBlueprintAsyncActionBase
{
    FOnlineGameActivitySubsystemSetActivityAvailabilityOnCallFailed OnCallFailed;     // 0x0030 (size: 0x10)
    void OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameActivitySubsystemSetActivityAvailabilityOnSetActivityAvailabilityComplete OnSetActivityAvailabilityComplete; // 0x0040 (size: 0x10)
    void OnlineGameActivitySubsystemSetActivityAvailabilityCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameActivitySubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ActivityId;                                                      // 0x0098 (size: 0x10)
    bool __Store__bEnabled;                                                           // 0x00A8 (size: 0x1)

    class UOnlineGameActivitySubsystemSetActivityAvailability* SetActivityAvailability(class UOnlineGameActivitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ActivityId, bool bEnabled);
}; // Size: 0xB0

class UOnlineGameActivitySubsystemSetActivityPriority : public UBlueprintAsyncActionBase
{
    FOnlineGameActivitySubsystemSetActivityPriorityOnCallFailed OnCallFailed;         // 0x0030 (size: 0x10)
    void OnlineGameActivitySubsystemSetActivityPriorityCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameActivitySubsystemSetActivityPriorityOnSetActivityPriorityComplete OnSetActivityPriorityComplete; // 0x0040 (size: 0x10)
    void OnlineGameActivitySubsystemSetActivityPriorityCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameActivitySubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TMap<FString, int32> __Store__PrioritizedActivities;                              // 0x0098 (size: 0x50)

    class UOnlineGameActivitySubsystemSetActivityPriority* SetActivityPriority(class UOnlineGameActivitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TMap<FString, int32>& PrioritizedActivities);
}; // Size: 0xE8

class UOnlineGameActivitySubsystemStartActivity : public UBlueprintAsyncActionBase
{
    FOnlineGameActivitySubsystemStartActivityOnCallFailed OnCallFailed;               // 0x0030 (size: 0x10)
    void OnlineGameActivitySubsystemStartActivityCallbackPin(const FUniqueNetIdRepl& LocalUserId, FString ActivityId, const FOnlineErrorInfo& Status);
    FOnlineGameActivitySubsystemStartActivityOnStartActivityComplete OnStartActivityComplete; // 0x0040 (size: 0x10)
    void OnlineGameActivitySubsystemStartActivityCallbackPin(const FUniqueNetIdRepl& LocalUserId, FString ActivityId, const FOnlineErrorInfo& Status);
    class UOnlineGameActivitySubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ActivityId;                                                      // 0x0098 (size: 0x10)
    TMap<class FString, class FVariantDataBP> __Store__Parms;                         // 0x00A8 (size: 0x50)

    class UOnlineGameActivitySubsystemStartActivity* StartActivity(class UOnlineGameActivitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ActivityId, const TMap<class FString, class FVariantDataBP>& Params);
}; // Size: 0xF8

class UOnlineGameItemStatsSubsystem : public UGameInstanceSubsystem
{

    bool IsSubsystemAvailable();
}; // Size: 0xA0

class UOnlineGameItemStatsSubsystemItemAvailabilityChange : public UBlueprintAsyncActionBase
{
    FOnlineGameItemStatsSubsystemItemAvailabilityChangeOnCallFailed OnCallFailed;     // 0x0030 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameItemStatsSubsystemItemAvailabilityChangeOnItemAvailabilityChangeComplete OnItemAvailabilityChangeComplete; // 0x0040 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemAvailabilityChangeCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameItemStatsSubsystem* __Store__Subsystem;                          // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TArray<FString> __Store__AvailableItems;                                          // 0x0098 (size: 0x10)
    TArray<FString> __Store__UnavailableItems;                                        // 0x00A8 (size: 0x10)

    class UOnlineGameItemStatsSubsystemItemAvailabilityChange* ItemAvailabilityChange(class UOnlineGameItemStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TArray<FString>& AvailableItems, const TArray<FString>& UnavailableItems);
}; // Size: 0xB8

class UOnlineGameItemStatsSubsystemItemImpact : public UBlueprintAsyncActionBase
{
    FOnlineGameItemStatsSubsystemItemImpactOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemImpactCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameItemStatsSubsystemItemImpactOnItemImpactComplete OnItemImpactComplete; // 0x0040 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemImpactCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameItemStatsSubsystem* __Store__Subsystem;                          // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TArray<FString> __Store__TargetActors;                                            // 0x0098 (size: 0x10)
    FString __Store__ImpactInitiatedBy;                                               // 0x00A8 (size: 0x10)
    TArray<FString> __Store__ItemsUsed;                                               // 0x00B8 (size: 0x10)

    class UOnlineGameItemStatsSubsystemItemImpact* ItemImpact(class UOnlineGameItemStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TArray<FString>& TargetActors, FString ImpactInitiatedBy, const TArray<FString>& ItemsUsed);
}; // Size: 0xC8

class UOnlineGameItemStatsSubsystemItemInventoryChange : public UBlueprintAsyncActionBase
{
    FOnlineGameItemStatsSubsystemItemInventoryChangeOnCallFailed OnCallFailed;        // 0x0030 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameItemStatsSubsystemItemInventoryChangeOnItemInventoryChangeComplete OnItemInventoryChangeComplete; // 0x0040 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemInventoryChangeCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameItemStatsSubsystem* __Store__Subsystem;                          // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TArray<FString> __Store__ItemsToAdd;                                              // 0x0098 (size: 0x10)
    TArray<FString> __Store__ItemsToRemove;                                           // 0x00A8 (size: 0x10)

    class UOnlineGameItemStatsSubsystemItemInventoryChange* ItemInventoryChange(class UOnlineGameItemStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TArray<FString>& ItemsToAdd, const TArray<FString>& ItemsToRemove);
}; // Size: 0xB8

class UOnlineGameItemStatsSubsystemItemLoadoutChange : public UBlueprintAsyncActionBase
{
    FOnlineGameItemStatsSubsystemItemLoadoutChangeOnCallFailed OnCallFailed;          // 0x0030 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameItemStatsSubsystemItemLoadoutChangeOnItemLoadoutChangeComplete OnItemLoadoutChangeComplete; // 0x0040 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemLoadoutChangeCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameItemStatsSubsystem* __Store__Subsystem;                          // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TArray<FString> __Store__EquippedItems;                                           // 0x0098 (size: 0x10)
    TArray<FString> __Store__UnequippedItems;                                         // 0x00A8 (size: 0x10)

    class UOnlineGameItemStatsSubsystemItemLoadoutChange* ItemLoadoutChange(class UOnlineGameItemStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TArray<FString>& EquippedItems, const TArray<FString>& UnequippedItems);
}; // Size: 0xB8

class UOnlineGameItemStatsSubsystemItemMitigation : public UBlueprintAsyncActionBase
{
    FOnlineGameItemStatsSubsystemItemMitigationOnCallFailed OnCallFailed;             // 0x0030 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemMitigationCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameItemStatsSubsystemItemMitigationOnItemMitigationComplete OnItemMitigationComplete; // 0x0040 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemMitigationCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameItemStatsSubsystem* __Store__Subsystem;                          // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TArray<FString> __Store__ItemsUsed;                                               // 0x0098 (size: 0x10)
    TArray<FString> __Store__ImpactItemsMitigated;                                    // 0x00A8 (size: 0x10)
    FString __Store__ItemUsedBy;                                                      // 0x00B8 (size: 0x10)

    class UOnlineGameItemStatsSubsystemItemMitigation* ItemMitigation(class UOnlineGameItemStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TArray<FString>& ItemsUsed, const TArray<FString>& ImpactItemsMitigated, FString ItemUsedBy);
}; // Size: 0xC8

class UOnlineGameItemStatsSubsystemItemUsage : public UBlueprintAsyncActionBase
{
    FOnlineGameItemStatsSubsystemItemUsageOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemUsageCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    FOnlineGameItemStatsSubsystemItemUsageOnItemUsageComplete OnItemUsageComplete;    // 0x0040 (size: 0x10)
    void OnlineGameItemStatsSubsystemItemUsageCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Status);
    class UOnlineGameItemStatsSubsystem* __Store__Subsystem;                          // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ItemUsedBy;                                                      // 0x0098 (size: 0x10)
    TArray<FString> __Store__ItemsUsed;                                               // 0x00A8 (size: 0x10)

    class UOnlineGameItemStatsSubsystemItemUsage* ItemUsage(class UOnlineGameItemStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ItemUsedBy, const TArray<FString>& ItemsUsed);
}; // Size: 0xB8

class UOnlineGroupsSubsystem : public UGameInstanceSubsystem
{

    void SetNamespace(FString Ns);
    bool IsSubsystemAvailable();
    FString GetNamespace();
}; // Size: 0xA0

class UOnlineHelpers : public UBlueprintFunctionLibrary
{

    FString ReadFileDataAsString(class UFileData* FileData);
    class USaveGame* ReadFileDataAsSaveGame(class UFileData* FileData);
    bool IsValid_PartyId(class UPartyId* A);
    bool IsValid_LobbyId(class ULobbyId* A);
    void GetResolvedConnectStringBySearchResult(class UOnlineSessionSubsystem* Subsystem, const FOnlineSessionSearchResultBP& SearchResult, FName PortType, bool& bWasSuccessful, FString& OutConnectInfo);
    void GetResolvedConnectStringByName(class UOnlineSessionSubsystem* Subsystem, FName SessionName, FName PortType, bool& bWasSuccessful, FString& OutConnectInfo);
    int64 GetPrimaryPartyType();
    FUniqueNetIdRepl GetPlayerStateUniqueNetId(class APlayerState* PlayerState);
    FName GetCurrentSubsystemName(const class UObject* WorldContextObject);
    FUniqueNetIdRepl GetControllerUniqueNetId(class APlayerController* PlayerController);
    bool FUniqueNetIdIsValid(const FUniqueNetIdRepl& InNetId);
    FName FUniqueNetIdGetType(const FUniqueNetIdRepl& InNetId);
    bool EqualEqual_PartyIdPartyId(class UPartyId* A, class UPartyId* B);
    bool EqualEqual_LobbyIdLobbyId(class ULobbyId* A, class ULobbyId* B);
    bool EqualEqual_FUniqueNetIdReplFUniqueNetIdRepl(const FUniqueNetIdRepl& InA, const FUniqueNetIdRepl& InB);
    class UMutablePartyData* CreateMutablePartyData(class UReadablePartyData* ReadOnlyPartyData);
    class UFileData* CreateFileDataFromString(FString String);
    class UFileData* CreateFileDataFromSaveGame(class USaveGame* SaveGame);
    class UOnlinePartyJoinInfo* Conv_ULobbyIdToUOnlinePartyJoinInfo(const FUniqueNetIdRepl& InLocalUserId, class UOnlinePartySubsystem* InPartySubsystem, class ULobbyId* InLobbyId);
    FString Conv_FUniqueNetIdReplToString(const FUniqueNetIdRepl& InNetId);
}; // Size: 0x28

class UOnlineIdentitySubsystem : public UGameInstanceSubsystem
{
    FOnlineIdentitySubsystemOnLoginChanged OnLoginChanged;                            // 0x00E0 (size: 0x10)
    void Identity_LoginChanged_BP(int32 LocalUserNum);
    FOnlineIdentitySubsystemOnLoginStatusChanged OnLoginStatusChanged;                // 0x00F0 (size: 0x10)
    void Identity_LoginStatusChanged_BP(int32 LocalUserNum, EOnlineLoginStatus OldStatus, EOnlineLoginStatus NewStatus, const FUniqueNetIdRepl& NewId);
    FOnlineIdentitySubsystemOnLoginComplete OnLoginComplete;                          // 0x0100 (size: 0x10)
    void Identity_LoginComplete_BP(int32 LocalUserNum, bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Error);
    FOnlineIdentitySubsystemOnLogoutComplete OnLogoutComplete;                        // 0x0110 (size: 0x10)
    void Identity_LogoutComplete_BP(int32 LocalUserNum, bool bWasSuccessful);
    FOnlineIdentitySubsystemOnLoginFlowLogout OnLoginFlowLogout;                      // 0x0120 (size: 0x10)
    void Identity_LoginFlowLogout_BP(const TArray<FString>& LoginDomains);

    bool IsSubsystemAvailable();
    class UUserOnlineAccountRef* GetUserAccount(const FUniqueNetIdRepl& UserId);
    FUniqueNetIdRepl GetUniquePlayerId(int32 LocalUserNum);
    FUniqueNetIdRepl GetSponsorUniquePlayerId(int32 LocalUserNum);
    FString GetPlayerNickname(const FUniqueNetIdRepl& UserId);
    int32 GetPlatformUserIdFromUniqueNetId(const FUniqueNetIdRepl& UniqueNetId);
    EOnlineLoginStatus GetLoginStatus(int32 LocalUserNum);
    FString GetAuthType();
    FString GetAuthToken(int32 LocalUserNum);
    TArray<class UUserOnlineAccountRef*> GetAllUserAccounts();
    FUniqueNetIdRepl CreateUniquePlayerId(FString Str);
    void ClearCachedAuthToken(const FUniqueNetIdRepl& UserId);
}; // Size: 0x130

class UOnlineIdentitySubsystemAutoLogin : public UBlueprintAsyncActionBase
{
    FOnlineIdentitySubsystemAutoLoginOnCallFailed OnCallFailed;                       // 0x0030 (size: 0x10)
    void OnlineIdentitySubsystemAutoLoginCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Error);
    FOnlineIdentitySubsystemAutoLoginOnLoginComplete OnLoginComplete;                 // 0x0040 (size: 0x10)
    void OnlineIdentitySubsystemAutoLoginCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Error);
    class UOnlineIdentitySubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)

    class UOnlineIdentitySubsystemAutoLogin* AutoLogin(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum);
}; // Size: 0x78

class UOnlineIdentitySubsystemGetUserPrivilege : public UBlueprintAsyncActionBase
{
    FOnlineIdentitySubsystemGetUserPrivilegeOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineIdentitySubsystemGetUserPrivilegeCallbackPin(const FUniqueNetIdRepl& LocalUserId, EOnlineUserPrivilege Privilege, int64 PrivilegeResult);
    FOnlineIdentitySubsystemGetUserPrivilegeOnGetUserPrivilegeComplete OnGetUserPrivilegeComplete; // 0x0040 (size: 0x10)
    void OnlineIdentitySubsystemGetUserPrivilegeCallbackPin(const FUniqueNetIdRepl& LocalUserId, EOnlineUserPrivilege Privilege, int64 PrivilegeResult);
    class UOnlineIdentitySubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    EOnlineUserPrivilege __Store__Privilege;                                          // 0x0098 (size: 0x1)
    EShowPrivilegeResolveUI_ __Store__ShowResolveUI;                                  // 0x0099 (size: 0x1)

    class UOnlineIdentitySubsystemGetUserPrivilege* GetUserPrivilege(class UOnlineIdentitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, EOnlineUserPrivilege Privilege, EShowPrivilegeResolveUI_ ShowResolveUI);
}; // Size: 0xA0

class UOnlineIdentitySubsystemLogin : public UBlueprintAsyncActionBase
{
    FOnlineIdentitySubsystemLoginOnCallFailed OnCallFailed;                           // 0x0030 (size: 0x10)
    void OnlineIdentitySubsystemLoginCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Error);
    FOnlineIdentitySubsystemLoginOnLoginComplete OnLoginComplete;                     // 0x0040 (size: 0x10)
    void OnlineIdentitySubsystemLoginCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Error);
    class UOnlineIdentitySubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    FOnlineAccountCredential __Store__AccountCredentials;                             // 0x0078 (size: 0x30)

    class UOnlineIdentitySubsystemLogin* Login(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum, const FOnlineAccountCredential& AccountCredentials);
}; // Size: 0xA8

class UOnlineIdentitySubsystemLogout : public UBlueprintAsyncActionBase
{
    FOnlineIdentitySubsystemLogoutOnCallFailed OnCallFailed;                          // 0x0030 (size: 0x10)
    void OnlineIdentitySubsystemLogoutCallbackPin(bool bWasSuccessful);
    FOnlineIdentitySubsystemLogoutOnLogoutComplete OnLogoutComplete;                  // 0x0040 (size: 0x10)
    void OnlineIdentitySubsystemLogoutCallbackPin(bool bWasSuccessful);
    class UOnlineIdentitySubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)

    class UOnlineIdentitySubsystemLogout* Logout(class UOnlineIdentitySubsystem* Subsystem, int32 LocalUserNum);
}; // Size: 0x78

class UOnlineIdentitySubsystemRevokeAuthToken : public UBlueprintAsyncActionBase
{
    FOnlineIdentitySubsystemRevokeAuthTokenOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineIdentitySubsystemRevokeAuthTokenCallbackPin(const FUniqueNetIdRepl& UserId, const FOnlineErrorInfo& OnlineError);
    FOnlineIdentitySubsystemRevokeAuthTokenOnRevokeAuthTokenComplete OnRevokeAuthTokenComplete; // 0x0040 (size: 0x10)
    void OnlineIdentitySubsystemRevokeAuthTokenCallbackPin(const FUniqueNetIdRepl& UserId, const FOnlineErrorInfo& OnlineError);
    class UOnlineIdentitySubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)

    class UOnlineIdentitySubsystemRevokeAuthToken* RevokeAuthToken(class UOnlineIdentitySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId);
}; // Size: 0x98

class UOnlineLeaderboardRead : public UObject
{

    void SetSortedColumn(FString SortedColumn);
    void SetLeaderboardName(FString LeaderboardName);
    void SetColumns(const TArray<FColumnMetaDataBP>& InColumns);
    FString GetSortedColumn();
    TArray<FOnlineStatsRowBP> GetRows();
    EOnlineAsyncTaskState_ GetReadState();
    FString GetLeaderboardName();
    TArray<FColumnMetaDataBP> GetColumns();
    FOnlineStatsRowBP FindPlayerRecord(const FUniqueNetIdRepl& UserId, bool& OutFound);
}; // Size: 0x38

class UOnlineLeaderboardWrite : public UObject
{

    void SetStats(const TMap<class FString, class FVariantDataBP>& Stats);
    void SetRatedStat(FString RatedStat);
    void SetLeaderboardNames(const TArray<FString>& LeaderboardNames);
}; // Size: 0x98

class UOnlineLeaderboardsSubsystem : public UGameInstanceSubsystem
{
    FOnlineLeaderboardsSubsystemOnLeaderboardReadComplete OnLeaderboardReadComplete;  // 0x00B0 (size: 0x10)
    void Leaderboards_LeaderboardReadComplete_BP(bool bWasSuccessful);
    FOnlineLeaderboardsSubsystemOnLeaderboardFlushComplete OnLeaderboardFlushComplete; // 0x00C0 (size: 0x10)
    void Leaderboards_LeaderboardFlushComplete_BP(FName SessionName, bool bWasSuccessful);

    bool WriteLeaderboards(FName SessionName, const FUniqueNetIdRepl& Player, class UOnlineLeaderboardWrite* WriteObject);
    bool IsSubsystemAvailable();
    void FreeStats(class UOnlineLeaderboardRead* ReadObject);
    bool FlushLeaderboards(FName SessionName);
}; // Size: 0xD0

class UOnlineLeaderboardsSubsystemReadLeaderboards : public UBlueprintAsyncActionBase
{
    FOnlineLeaderboardsSubsystemReadLeaderboardsOnCallFailed OnCallFailed;            // 0x0030 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin(bool bWasSuccessful);
    FOnlineLeaderboardsSubsystemReadLeaderboardsOnLeaderboardReadComplete OnLeaderboardReadComplete; // 0x0040 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsCallbackPin(bool bWasSuccessful);
    class UOnlineLeaderboardsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    TArray<FUniqueNetIdRepl> __Store__Players;                                        // 0x0070 (size: 0x10)
    class UOnlineLeaderboardRead* __Store__ReadObject;                                // 0x0080 (size: 0x8)

    class UOnlineLeaderboardsSubsystemReadLeaderboards* ReadLeaderboards(class UOnlineLeaderboardsSubsystem* Subsystem, const TArray<FUniqueNetIdRepl>& Players, class UOnlineLeaderboardRead* ReadObject);
}; // Size: 0x88

class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank : public UBlueprintAsyncActionBase
{
    FOnlineLeaderboardsSubsystemReadLeaderboardsAroundRankOnCallFailed OnCallFailed;  // 0x0030 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin(bool bWasSuccessful);
    FOnlineLeaderboardsSubsystemReadLeaderboardsAroundRankOnLeaderboardReadComplete OnLeaderboardReadComplete; // 0x0040 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsAroundRankCallbackPin(bool bWasSuccessful);
    class UOnlineLeaderboardsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__Rank;                                                              // 0x0070 (size: 0x4)
    int64 __Store__Range;                                                             // 0x0078 (size: 0x8)
    class UOnlineLeaderboardRead* __Store__ReadObject;                                // 0x0080 (size: 0x8)

    class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundRank* ReadLeaderboardsAroundRank(class UOnlineLeaderboardsSubsystem* Subsystem, int32 Rank, int64 Range, class UOnlineLeaderboardRead* ReadObject);
}; // Size: 0x88

class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser : public UBlueprintAsyncActionBase
{
    FOnlineLeaderboardsSubsystemReadLeaderboardsAroundUserOnCallFailed OnCallFailed;  // 0x0030 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin(bool bWasSuccessful);
    FOnlineLeaderboardsSubsystemReadLeaderboardsAroundUserOnLeaderboardReadComplete OnLeaderboardReadComplete; // 0x0040 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsAroundUserCallbackPin(bool bWasSuccessful);
    class UOnlineLeaderboardsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__Player;                                                 // 0x0070 (size: 0x30)
    int64 __Store__Range;                                                             // 0x00A0 (size: 0x8)
    class UOnlineLeaderboardRead* __Store__ReadObject;                                // 0x00A8 (size: 0x8)

    class UOnlineLeaderboardsSubsystemReadLeaderboardsAroundUser* ReadLeaderboardsAroundUser(class UOnlineLeaderboardsSubsystem* Subsystem, const FUniqueNetIdRepl& Player, int64 Range, class UOnlineLeaderboardRead* ReadObject);
}; // Size: 0xB0

class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends : public UBlueprintAsyncActionBase
{
    FOnlineLeaderboardsSubsystemReadLeaderboardsForFriendsOnCallFailed OnCallFailed;  // 0x0030 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin(bool bWasSuccessful);
    FOnlineLeaderboardsSubsystemReadLeaderboardsForFriendsOnLeaderboardReadComplete OnLeaderboardReadComplete; // 0x0040 (size: 0x10)
    void OnlineLeaderboardsSubsystemReadLeaderboardsForFriendsCallbackPin(bool bWasSuccessful);
    class UOnlineLeaderboardsSubsystem* __Store__Subsystem;                           // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    class UOnlineLeaderboardRead* __Store__ReadObject;                                // 0x0078 (size: 0x8)

    class UOnlineLeaderboardsSubsystemReadLeaderboardsForFriends* ReadLeaderboardsForFriends(class UOnlineLeaderboardsSubsystem* Subsystem, int32 LocalUserNum, class UOnlineLeaderboardRead* ReadObject);
}; // Size: 0x80

class UOnlineLobbyMemberTransaction : public UObject
{

    void SetMetadataByMap(const TMap<class FString, class FVariantDataBP>& MetaData);
    void SetMetadata(FString Key, const FVariantDataBP& Value);
    void DeleteMetadataByArray(const TArray<FString>& MetaDataKeys);
    void DeleteMetadata(FString Key);
}; // Size: 0x38

class UOnlineLobbySubsystem : public UGameInstanceSubsystem
{
    FOnlineLobbySubsystemOnLobbyUpdate OnLobbyUpdate;                                 // 0x00C8 (size: 0x10)
    void Lobby_LobbyUpdate_BP(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
    FOnlineLobbySubsystemOnLobbyDelete OnLobbyDelete;                                 // 0x00D8 (size: 0x10)
    void Lobby_LobbyDelete_BP(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
    FOnlineLobbySubsystemOnMemberConnect OnMemberConnect;                             // 0x00E8 (size: 0x10)
    void Lobby_MemberConnect_BP(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const FUniqueNetIdRepl& MemberId);
    FOnlineLobbySubsystemOnMemberUpdate OnMemberUpdate;                               // 0x00F8 (size: 0x10)
    void Lobby_MemberUpdate_BP(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const FUniqueNetIdRepl& MemberId);
    FOnlineLobbySubsystemOnMemberDisconnect OnMemberDisconnect;                       // 0x0108 (size: 0x10)
    void Lobby_MemberDisconnect_BP(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const FUniqueNetIdRepl& MemberId, bool bWasKicked);

    class ULobbyId* ParseSerializedLobbyId(FString InLobbyId);
    class UOnlineLobbyTransaction* MakeUpdateLobbyTransaction(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
    class UOnlineLobbyMemberTransaction* MakeUpdateLobbyMemberTransaction(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const FUniqueNetIdRepl& MemberId);
    class UOnlineLobbyTransaction* MakeCreateLobbyTransaction(const FUniqueNetIdRepl& UserId);
    bool IsSubsystemAvailable();
    bool GetMemberUserId(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, int32 MemberIndex, FUniqueNetIdRepl& OutMemberId);
    bool GetMemberMetadataValue(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const FUniqueNetIdRepl& MemberId, FString MetadataKey, FVariantDataBP& OutMetadataValue);
    bool GetMemberCount(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, int32& OutMemberCount);
    bool GetLobbyMetadataValue(const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, FString MetadataKey, FVariantDataBP& OutMetadataValue);
}; // Size: 0x118

class UOnlineLobbySubsystemConnectLobby : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemConnectLobbyOnCallFailed OnCallFailed;                       // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemConnectLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId, class ULobby* Lobby);
    FOnlineLobbySubsystemConnectLobbyOnLobbyCreateOrConnectComplete OnLobbyCreateOrConnectComplete; // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemConnectLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId, class ULobby* Lobby);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    class ULobbyId* __Store__LobbyId;                                                 // 0x0098 (size: 0x8)

    class UOnlineLobbySubsystemConnectLobby* ConnectLobby(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
}; // Size: 0xA0

class UOnlineLobbySubsystemCreateLobby : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemCreateLobbyOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemCreateLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId, class ULobby* Lobby);
    FOnlineLobbySubsystemCreateLobbyOnLobbyCreateOrConnectComplete OnLobbyCreateOrConnectComplete; // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemCreateLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId, class ULobby* Lobby);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    class UOnlineLobbyTransaction* __Store__Transaction;                              // 0x0098 (size: 0x8)

    class UOnlineLobbySubsystemCreateLobby* CreateLobby(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, class UOnlineLobbyTransaction* Transaction);
}; // Size: 0xA0

class UOnlineLobbySubsystemDeleteLobby : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemDeleteLobbyOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemDeleteLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    FOnlineLobbySubsystemDeleteLobbyOnLobbyOperationComplete OnLobbyOperationComplete; // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemDeleteLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    class ULobbyId* __Store__LobbyId;                                                 // 0x0098 (size: 0x8)

    class UOnlineLobbySubsystemDeleteLobby* DeleteLobby(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
}; // Size: 0xA0

class UOnlineLobbySubsystemDisconnectLobby : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemDisconnectLobbyOnCallFailed OnCallFailed;                    // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemDisconnectLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    FOnlineLobbySubsystemDisconnectLobbyOnLobbyOperationComplete OnLobbyOperationComplete; // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemDisconnectLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    class ULobbyId* __Store__LobbyId;                                                 // 0x0098 (size: 0x8)

    class UOnlineLobbySubsystemDisconnectLobby* DisconnectLobby(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId);
}; // Size: 0xA0

class UOnlineLobbySubsystemKickMember : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemKickMemberOnCallFailed OnCallFailed;                         // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemKickMemberCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    FOnlineLobbySubsystemKickMemberOnLobbyOperationComplete OnLobbyOperationComplete; // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemKickMemberCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    class ULobbyId* __Store__LobbyId;                                                 // 0x0098 (size: 0x8)
    FUniqueNetIdRepl __Store__MemberId;                                               // 0x00A0 (size: 0x30)

    class UOnlineLobbySubsystemKickMember* KickMember(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, const FUniqueNetIdRepl& MemberId);
}; // Size: 0xD0

class UOnlineLobbySubsystemSearch : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemSearchOnCallFailed OnCallFailed;                             // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemSearchCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId, const TArray<class ULobbyId*>& Lobbies);
    FOnlineLobbySubsystemSearchOnLobbySearchComplete OnLobbySearchComplete;           // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemSearchCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId, const TArray<class ULobbyId*>& Lobbies);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FOnlineLobbySearchQueryBP __Store__Query;                                         // 0x0098 (size: 0x20)

    class UOnlineLobbySubsystemSearch* Search(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, const FOnlineLobbySearchQueryBP& Query);
}; // Size: 0xB8

class UOnlineLobbySubsystemUpdateLobby : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemUpdateLobbyOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemUpdateLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    FOnlineLobbySubsystemUpdateLobbyOnLobbyOperationComplete OnLobbyOperationComplete; // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemUpdateLobbyCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    class ULobbyId* __Store__LobbyId;                                                 // 0x0098 (size: 0x8)
    class UOnlineLobbyTransaction* __Store__Transaction;                              // 0x00A0 (size: 0x8)

    class UOnlineLobbySubsystemUpdateLobby* UpdateLobby(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, class UOnlineLobbyTransaction* Transaction);
}; // Size: 0xA8

class UOnlineLobbySubsystemUpdateMemberSelf : public UBlueprintAsyncActionBase
{
    FOnlineLobbySubsystemUpdateMemberSelfOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlineLobbySubsystemUpdateMemberSelfCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    FOnlineLobbySubsystemUpdateMemberSelfOnLobbyOperationComplete OnLobbyOperationComplete; // 0x0040 (size: 0x10)
    void OnlineLobbySubsystemUpdateMemberSelfCallbackPin(const FOnlineErrorInfo& Error, const FUniqueNetIdRepl& UserId);
    class UOnlineLobbySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    class ULobbyId* __Store__LobbyId;                                                 // 0x0098 (size: 0x8)
    class UOnlineLobbyMemberTransaction* __Store__Transaction;                        // 0x00A0 (size: 0x8)

    class UOnlineLobbySubsystemUpdateMemberSelf* UpdateMemberSelf(class UOnlineLobbySubsystem* Subsystem, const FUniqueNetIdRepl& UserId, class ULobbyId* LobbyId, class UOnlineLobbyMemberTransaction* Transaction);
}; // Size: 0xA8

class UOnlineLobbyTransaction : public UObject
{

    void SetPublic(bool Public);
    void SetMetadataByMap(const TMap<class FString, class FVariantDataBP>& MetaData);
    void SetMetadata(FString Key, const FVariantDataBP& Value);
    void SetLocked(bool Locked);
    void SetCapacity(int64 Capacity);
    void DeleteMetadataByArray(const TArray<FString>& MetaDataKeys);
    void DeleteMetadata(FString Key);
}; // Size: 0x38

class UOnlineMessageSanitizerSubsystem : public UGameInstanceSubsystem
{

    void ResetBlockedUserCache();
    bool IsSubsystemAvailable();
}; // Size: 0xA0

class UOnlineMessageSanitizerSubsystemQueryBlockedUser : public UBlueprintAsyncActionBase
{
    FOnlineMessageSanitizerSubsystemQueryBlockedUserOnCallFailed OnCallFailed;        // 0x0030 (size: 0x10)
    void OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin(const FBlockedQueryResultInfo& QueryResult);
    FOnlineMessageSanitizerSubsystemQueryBlockedUserOnQueryUserBlockedResponse OnQueryUserBlockedResponse; // 0x0040 (size: 0x10)
    void OnlineMessageSanitizerSubsystemQueryBlockedUserCallbackPin(const FBlockedQueryResultInfo& QueryResult);
    class UOnlineMessageSanitizerSubsystem* __Store__Subsystem;                       // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0068 (size: 0x4)
    FString __Store__FromUserId;                                                      // 0x0070 (size: 0x10)
    FString __Store__FromPlatform;                                                    // 0x0080 (size: 0x10)

    class UOnlineMessageSanitizerSubsystemQueryBlockedUser* QueryBlockedUser(class UOnlineMessageSanitizerSubsystem* Subsystem, int32 LocalUserNum, FString FromUserId, FString FromPlatform);
}; // Size: 0x90

class UOnlineMessageSanitizerSubsystemSanitizeDisplayName : public UBlueprintAsyncActionBase
{
    FOnlineMessageSanitizerSubsystemSanitizeDisplayNameOnCallFailed OnCallFailed;     // 0x0030 (size: 0x10)
    void OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin(bool bSuccess, FString SanitizedMessage);
    FOnlineMessageSanitizerSubsystemSanitizeDisplayNameOnMessageProcessed OnMessageProcessed; // 0x0040 (size: 0x10)
    void OnlineMessageSanitizerSubsystemSanitizeDisplayNameCallbackPin(bool bSuccess, FString SanitizedMessage);
    class UOnlineMessageSanitizerSubsystem* __Store__Subsystem;                       // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FString __Store__DisplayName;                                                     // 0x0068 (size: 0x10)

    class UOnlineMessageSanitizerSubsystemSanitizeDisplayName* SanitizeDisplayName(class UOnlineMessageSanitizerSubsystem* Subsystem, FString DisplayName);
}; // Size: 0x78

class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames : public UBlueprintAsyncActionBase
{
    FOnlineMessageSanitizerSubsystemSanitizeDisplayNamesOnCallFailed OnCallFailed;    // 0x0030 (size: 0x10)
    void OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin(bool bSuccess, const TArray<FString>& SanitizedMessages);
    FOnlineMessageSanitizerSubsystemSanitizeDisplayNamesOnMessageArrayProcessed OnMessageArrayProcessed; // 0x0040 (size: 0x10)
    void OnlineMessageSanitizerSubsystemSanitizeDisplayNamesCallbackPin(bool bSuccess, const TArray<FString>& SanitizedMessages);
    class UOnlineMessageSanitizerSubsystem* __Store__Subsystem;                       // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    TArray<FString> __Store__DisplayNames;                                            // 0x0068 (size: 0x10)

    class UOnlineMessageSanitizerSubsystemSanitizeDisplayNames* SanitizeDisplayNames(class UOnlineMessageSanitizerSubsystem* Subsystem, const TArray<FString>& DisplayNames);
}; // Size: 0x78

class UOnlineMessageSubsystem : public UGameInstanceSubsystem
{
    FOnlineMessageSubsystemOnEnumerateMessagesComplete OnEnumerateMessagesComplete;   // 0x00C0 (size: 0x10)
    void Message_EnumerateMessagesComplete_BP(int32 LocalUserNum, bool Param1, FString Param2);
    FOnlineMessageSubsystemOnSendMessageComplete OnSendMessageComplete;               // 0x00D0 (size: 0x10)
    void Message_SendMessageComplete_BP(int32 LocalUserNum, bool Param1, FString Param2);

    bool IsSubsystemAvailable();
    bool EnumerateMessages(int32 LocalUserNum);
    bool ClearMessages(int32 LocalUserNum);
    bool ClearMessageHeaders(int32 LocalUserNum);
}; // Size: 0xE0

class UOnlinePartyJoinInfo : public UObject
{

    FString ToDebugString();
    FUniqueNetIdRepl GetSourceUserId();
    FString GetSourceDisplayName();
    class UPartyId* GetPartyId();
}; // Size: 0x38

class UOnlinePartySubsystem : public UGameInstanceSubsystem
{
    FOnlinePartySubsystemOnPartyJoined OnPartyJoined;                                 // 0x0120 (size: 0x10)
    void Party_PartyJoined_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
    FOnlinePartySubsystemOnPartyExited OnPartyExited;                                 // 0x0130 (size: 0x10)
    void Party_PartyExited_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
    FOnlinePartySubsystemOnPartyStateChanged OnPartyStateChanged;                     // 0x0140 (size: 0x10)
    void Party_PartyStateChanged_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, EPartyState_ State, EPartyState_ PreviousState);
    FOnlinePartySubsystemOnPartyPromotionLockoutChanged OnPartyPromotionLockoutChanged; // 0x0150 (size: 0x10)
    void Party_PartyPromotionLockoutChanged_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, bool bLockoutState);
    FOnlinePartySubsystemOnPartyConfigChanged OnPartyConfigChanged;                   // 0x0160 (size: 0x10)
    void Party_PartyConfigChanged_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FOnlinePartyConfiguration& PartyConfig);
    FOnlinePartySubsystemOnPartyDataReceived OnPartyDataReceived;                     // 0x0170 (size: 0x10)
    void Party_PartyDataReceived_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, FName Namespace, class UReadablePartyData* PartyData);
    FOnlinePartySubsystemOnPartyMemberPromoted OnPartyMemberPromoted;                 // 0x0180 (size: 0x10)
    void Party_PartyMemberPromoted_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& NewLeaderId);
    FOnlinePartySubsystemOnPartyMemberExited OnPartyMemberExited;                     // 0x0190 (size: 0x10)
    void Party_PartyMemberExited_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId, EMemberExitedReason_ Reason);
    FOnlinePartySubsystemOnPartyMemberJoined OnPartyMemberJoined;                     // 0x01A0 (size: 0x10)
    void Party_PartyMemberJoined_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId);
    FOnlinePartySubsystemOnPartyMemberDataReceived OnPartyMemberDataReceived;         // 0x01B0 (size: 0x10)
    void Party_PartyMemberDataReceived_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId, FName Namespace, class UReadablePartyData* PartyData);
    FOnlinePartySubsystemOnPartyInvitesChanged OnPartyInvitesChanged;                 // 0x01C0 (size: 0x10)
    void Party_PartyInvitesChanged_BP(const FUniqueNetIdRepl& LocalUserId);
    FOnlinePartySubsystemOnPartyInviteRequestReceived OnPartyInviteRequestReceived;   // 0x01D0 (size: 0x10)
    void Party_PartyInviteRequestReceived_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& SenderId, const FUniqueNetIdRepl& RequestForId);
    FOnlinePartySubsystemOnPartyInviteReceivedEx OnPartyInviteReceivedEx;             // 0x01E0 (size: 0x10)
    void Party_PartyInviteReceivedEx_BP(const FUniqueNetIdRepl& LocalUserId, class UOnlinePartyJoinInfo* Invitation);
    FOnlinePartySubsystemOnFillPartyJoinRequestData OnFillPartyJoinRequestData;       // 0x01F0 (size: 0x10)
    void Party_FillPartyJoinRequestData_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, class UMutablePartyData* PartyData);
    FOnlinePartySubsystemOnPartyRequestToJoinReceived OnPartyRequestToJoinReceived;   // 0x0200 (size: 0x10)
    void Party_PartyRequestToJoinReceived_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& RequesterId, class URedpointOSSv1OnlinePartyRequestToJoinInfo* Request);
    FOnlinePartySubsystemOnPartyRequestToJoinRemoved OnPartyRequestToJoinRemoved;     // 0x0210 (size: 0x10)
    void Party_PartyRequestToJoinRemoved_BP(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& RequesterId, class URedpointOSSv1OnlinePartyRequestToJoinInfo* Request, ERedpointOSSv1PartyRequestToJoinRemovedReason Reason);

    bool UpdatePartyMemberData(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, FName Namespace, class UReadablePartyData* PartyMemberData);
    bool UpdatePartyData(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, FName Namespace, class UReadablePartyData* PartyData);
    void RespondToQueryJoinability(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& RecipientId, bool bCanJoin, int32 DeniedResultCode, class UReadablePartyData* PartyData);
    bool RejectInvitation(const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& SenderId);
    FString MakeTokenFromJoinInfo(class UOnlinePartyJoinInfo* JoinInfo);
    FString MakeJoinInfoJson(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
    class UOnlinePartyJoinInfo* MakeJoinInfoFromToken(FString Token);
    class UOnlinePartyJoinInfo* MakeJoinInfoFromJson(FString JoinInfoJson);
    class UOnlinePartyJoinInfo* MakeJoinInfo(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
    bool IsSubsystemAvailable();
    bool IsMemberLeader(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId);
    bool GetPendingRequestsToJoin(const FUniqueNetIdRepl& LocalUserId, TArray<class URedpointOSSv1OnlinePartyRequestToJoinInfo*>& RequestsToJoin);
    bool GetPendingInvites(const FUniqueNetIdRepl& LocalUserId, TArray<class UOnlinePartyJoinInfo*>& OutPendingInvitesArray);
    bool GetPendingInvitedUsers(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, TArray<FUniqueNetIdRepl>& OutPendingInvitedUserArray);
    bool GetPartyMembers(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, TArray<class UBlueprintPartyMember*>& OutPartyMembersArray);
    class UReadablePartyData* GetPartyMemberData(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId, FName Namespace);
    int64 GetPartyMemberCount(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
    class UBlueprintPartyMember* GetPartyMember(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId);
    class UReadablePartyData* GetPartyData(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, FName Namespace);
    class UParty* GetParty(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId);
    bool GetJoinedParties(const FUniqueNetIdRepl& LocalUserId, TArray<class UPartyId*>& OutPartyIdArray);
    class UOnlinePartyJoinInfo* GetAdvertisedParty(const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& UserId, int64 PartyTypeId);
    void DumpPartyState();
    class UOnlinePartyJoinInfo* ConsumePendingCommandLineInvite();
    bool ApproveJoinRequest(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& RecipientId, bool bIsApproved, int32 DeniedResultCode);
}; // Size: 0x220

class UOnlinePartySubsystemCancelInvitation : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemCancelInvitationOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlinePartySubsystemCancelInvitationCallbackPin(const FUniqueNetIdRepl& SenderUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& TargetUserId, const FOnlineErrorInfo& Result);
    FOnlinePartySubsystemCancelInvitationOnCancelPartyInvitationComplete OnCancelPartyInvitationComplete; // 0x0040 (size: 0x10)
    void OnlinePartySubsystemCancelInvitationCallbackPin(const FUniqueNetIdRepl& SenderUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& TargetUserId, const FOnlineErrorInfo& Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FUniqueNetIdRepl __Store__TargetUserId;                                           // 0x0098 (size: 0x30)
    class UPartyId* __Store__PartyId;                                                 // 0x00C8 (size: 0x8)

    class UOnlinePartySubsystemCancelInvitation* CancelInvitation(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId, class UPartyId* PartyId);
}; // Size: 0xD0

class UOnlinePartySubsystemCleanupParties : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemCleanupPartiesOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlinePartySubsystemCleanupPartiesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Result);
    FOnlinePartySubsystemCleanupPartiesOnCleanupPartiesComplete OnCleanupPartiesComplete; // 0x0040 (size: 0x10)
    void OnlinePartySubsystemCleanupPartiesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)

    class UOnlinePartySubsystemCleanupParties* CleanupParties(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId);
}; // Size: 0x98

class UOnlinePartySubsystemCreateParty : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemCreatePartyOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlinePartySubsystemCreatePartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ECreatePartyCompletionResult_ Result);
    FOnlinePartySubsystemCreatePartyOnCreatePartyComplete OnCreatePartyComplete;      // 0x0040 (size: 0x10)
    void OnlinePartySubsystemCreatePartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ECreatePartyCompletionResult_ Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    int64 __Store__PartyTypeId;                                                       // 0x0098 (size: 0x8)
    FOnlinePartyConfiguration __Store__PartyConfig;                                   // 0x00A0 (size: 0x40)

    class UOnlinePartySubsystemCreateParty* CreateParty(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, int64 PartyTypeId, const FOnlinePartyConfiguration& PartyConfig);
}; // Size: 0xE0

class UOnlinePartySubsystemJoinParty : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemJoinPartyOnCallFailed OnCallFailed;                          // 0x0030 (size: 0x10)
    void OnlinePartySubsystemJoinPartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, EJoinPartyCompletionResult_ Result, int32 NotApprovedReason);
    FOnlinePartySubsystemJoinPartyOnJoinPartyComplete OnJoinPartyComplete;            // 0x0040 (size: 0x10)
    void OnlinePartySubsystemJoinPartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, EJoinPartyCompletionResult_ Result, int32 NotApprovedReason);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    class UOnlinePartyJoinInfo* __Store__OnlinePartyJoinInfo;                         // 0x0098 (size: 0x8)

    class UOnlinePartySubsystemJoinParty* JoinParty(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, class UOnlinePartyJoinInfo* OnlinePartyJoinInfo);
}; // Size: 0xA0

class UOnlinePartySubsystemKickMember : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemKickMemberOnCallFailed OnCallFailed;                         // 0x0030 (size: 0x10)
    void OnlinePartySubsystemKickMemberCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId, EKickMemberCompletionResult_ Result);
    FOnlinePartySubsystemKickMemberOnKickPartyMemberComplete OnKickPartyMemberComplete; // 0x0040 (size: 0x10)
    void OnlinePartySubsystemKickMemberCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId, EKickMemberCompletionResult_ Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    class UPartyId* __Store__PartyId;                                                 // 0x0098 (size: 0x8)
    FUniqueNetIdRepl __Store__TargetMemberId;                                         // 0x00A0 (size: 0x30)

    class UOnlinePartySubsystemKickMember* KickMember(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& TargetMemberId);
}; // Size: 0xD0

class UOnlinePartySubsystemLeaveParty : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemLeavePartyOnCallFailed OnCallFailed;                         // 0x0030 (size: 0x10)
    void OnlinePartySubsystemLeavePartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ELeavePartyCompletionResult_ Result);
    FOnlinePartySubsystemLeavePartyOnLeavePartyComplete OnLeavePartyComplete;         // 0x0040 (size: 0x10)
    void OnlinePartySubsystemLeavePartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, ELeavePartyCompletionResult_ Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    class UPartyId* __Store__PartyId;                                                 // 0x0098 (size: 0x8)
    bool __Store__bSynchronizeLeave;                                                  // 0x00A0 (size: 0x1)

    class UOnlinePartySubsystemLeaveParty* LeaveParty(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, bool bSynchronizeLeave);
}; // Size: 0xA8

class UOnlinePartySubsystemPromoteMember : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemPromoteMemberOnCallFailed OnCallFailed;                      // 0x0030 (size: 0x10)
    void OnlinePartySubsystemPromoteMemberCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId, EPromoteMemberCompletionResult_ Result);
    FOnlinePartySubsystemPromoteMemberOnPromotePartyMemberComplete OnPromotePartyMemberComplete; // 0x0040 (size: 0x10)
    void OnlinePartySubsystemPromoteMemberCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId, EPromoteMemberCompletionResult_ Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    class UPartyId* __Store__PartyId;                                                 // 0x0098 (size: 0x8)
    FUniqueNetIdRepl __Store__TargetMemberId;                                         // 0x00A0 (size: 0x30)

    class UOnlinePartySubsystemPromoteMember* PromoteMember(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& TargetMemberId);
}; // Size: 0xD0

class UOnlinePartySubsystemRestoreInvites : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemRestoreInvitesOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlinePartySubsystemRestoreInvitesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Result);
    FOnlinePartySubsystemRestoreInvitesOnRestoreInvitesComplete OnRestoreInvitesComplete; // 0x0040 (size: 0x10)
    void OnlinePartySubsystemRestoreInvitesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)

    class UOnlinePartySubsystemRestoreInvites* RestoreInvites(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId);
}; // Size: 0x98

class UOnlinePartySubsystemRestoreParties : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemRestorePartiesOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlinePartySubsystemRestorePartiesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Result);
    FOnlinePartySubsystemRestorePartiesOnRestorePartiesComplete OnRestorePartiesComplete; // 0x0040 (size: 0x10)
    void OnlinePartySubsystemRestorePartiesCallbackPin(const FUniqueNetIdRepl& LocalUserId, const FOnlineErrorInfo& Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)

    class UOnlinePartySubsystemRestoreParties* RestoreParties(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId);
}; // Size: 0x98

class UOnlinePartySubsystemSendInvitation : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemSendInvitationOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlinePartySubsystemSendInvitationCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& RecipientId, ESendPartyInvitationCompletionResult_ Result);
    FOnlinePartySubsystemSendInvitationOnSendPartyInvitationComplete OnSendPartyInvitationComplete; // 0x0040 (size: 0x10)
    void OnlinePartySubsystemSendInvitationCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& RecipientId, ESendPartyInvitationCompletionResult_ Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    class UPartyId* __Store__PartyId;                                                 // 0x0098 (size: 0x8)
    FUniqueNetIdRepl __Store__Recipient;                                              // 0x00A0 (size: 0x30)

    class UOnlinePartySubsystemSendInvitation* SendInvitation(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& Recipient);
}; // Size: 0xD0

class UOnlinePartySubsystemUpdateParty : public UBlueprintAsyncActionBase
{
    FOnlinePartySubsystemUpdatePartyOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlinePartySubsystemUpdatePartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, EUpdateConfigCompletionResult_ Result);
    FOnlinePartySubsystemUpdatePartyOnUpdatePartyComplete OnUpdatePartyComplete;      // 0x0040 (size: 0x10)
    void OnlinePartySubsystemUpdatePartyCallbackPin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, EUpdateConfigCompletionResult_ Result);
    class UOnlinePartySubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    class UPartyId* __Store__PartyId;                                                 // 0x0098 (size: 0x8)
    FOnlinePartyConfiguration __Store__PartyConfig;                                   // 0x00A0 (size: 0x40)
    bool __Store__bShouldRegenerateReservationKey;                                    // 0x00E0 (size: 0x1)

    class UOnlinePartySubsystemUpdateParty* UpdateParty(class UOnlinePartySubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FOnlinePartyConfiguration& PartyConfig, bool bShouldRegenerateReservationKey);
}; // Size: 0xE8

class UOnlinePresenceSubsystem : public UGameInstanceSubsystem
{
    FOnlinePresenceSubsystemOnPresenceReceived OnPresenceReceived;                    // 0x00B0 (size: 0x10)
    void Presence_PresenceReceived_BP(const FUniqueNetIdRepl& UserId, const FOnlineUserPresenceData& Presence);
    FOnlinePresenceSubsystemOnPresenceArrayUpdated OnPresenceArrayUpdated;            // 0x00C0 (size: 0x10)
    void Presence_PresenceArrayUpdated_BP(const FUniqueNetIdRepl& UserId, const TArray<FOnlineUserPresenceData>& NewPresenceArray);

    bool IsSubsystemAvailable();
    EOnlineCachedResult_ GetCachedPresenceForApp(const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& User, FString AppId, FOnlineUserPresenceData& OutPresence);
    EOnlineCachedResult_ GetCachedPresence(const FUniqueNetIdRepl& User, FOnlineUserPresenceData& OutPresence);
}; // Size: 0xD0

class UOnlinePresenceSubsystemQueryPresence : public UBlueprintAsyncActionBase
{
    FOnlinePresenceSubsystemQueryPresenceOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlinePresenceSubsystemQueryPresenceCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful);
    FOnlinePresenceSubsystemQueryPresenceOnPresenceTaskComplete OnPresenceTaskComplete; // 0x0040 (size: 0x10)
    void OnlinePresenceSubsystemQueryPresenceCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful);
    class UOnlinePresenceSubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__User;                                                   // 0x0068 (size: 0x30)

    class UOnlinePresenceSubsystemQueryPresence* QueryPresence(class UOnlinePresenceSubsystem* Subsystem, const FUniqueNetIdRepl& User);
}; // Size: 0x98

class UOnlinePresenceSubsystemSetPresence : public UBlueprintAsyncActionBase
{
    FOnlinePresenceSubsystemSetPresenceOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlinePresenceSubsystemSetPresenceCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful);
    FOnlinePresenceSubsystemSetPresenceOnPresenceTaskComplete OnPresenceTaskComplete; // 0x0040 (size: 0x10)
    void OnlinePresenceSubsystemSetPresenceCallbackPin(const FUniqueNetIdRepl& UserId, bool bWasSuccessful);
    class UOnlinePresenceSubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__User;                                                   // 0x0068 (size: 0x30)
    FOnlineUserPresenceStatusData __Store__Status;                                    // 0x0098 (size: 0x68)

    class UOnlinePresenceSubsystemSetPresence* SetPresence(class UOnlinePresenceSubsystem* Subsystem, const FUniqueNetIdRepl& User, const FOnlineUserPresenceStatusData& Status);
}; // Size: 0x100

class UOnlinePurchaseSubsystem : public UGameInstanceSubsystem
{
    FOnlinePurchaseSubsystemOnUnexpectedPurchaseReceipt OnUnexpectedPurchaseReceipt;  // 0x00A8 (size: 0x10)
    void Purchase_UnexpectedPurchaseReceipt_BP(const FUniqueNetIdRepl& UserId);

    bool IsSubsystemAvailable();
    bool IsAllowedToPurchase(const FUniqueNetIdRepl& UserId);
    void GetReceipts(const FUniqueNetIdRepl& UserId, TArray<class UPurchaseReceipt*>& OutReceipts);
    void FinalizePurchase(const FUniqueNetIdRepl& UserId, FString ReceiptId, FString ReceiptInfo);
}; // Size: 0xB8

class UOnlinePurchaseSubsystemCheckout : public UBlueprintAsyncActionBase
{
    FOnlinePurchaseSubsystemCheckoutOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlinePurchaseSubsystemCheckoutCallbackPin(const FOnlineErrorInfo& Result, class UPurchaseReceipt* Receipt);
    FOnlinePurchaseSubsystemCheckoutOnPurchaseCheckoutComplete OnPurchaseCheckoutComplete; // 0x0040 (size: 0x10)
    void OnlinePurchaseSubsystemCheckoutCallbackPin(const FOnlineErrorInfo& Result, class UPurchaseReceipt* Receipt);
    class UOnlinePurchaseSubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FPurchaseCheckoutRequestBP __Store__CheckoutRequest;                              // 0x0098 (size: 0x20)

    class UOnlinePurchaseSubsystemCheckout* Checkout(class UOnlinePurchaseSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, const FPurchaseCheckoutRequestBP& CheckoutRequest);
}; // Size: 0xB8

class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo : public UBlueprintAsyncActionBase
{
    FOnlinePurchaseSubsystemFinalizeReceiptValidationInfoOnCallFailed OnCallFailed;   // 0x0030 (size: 0x10)
    void OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin(const FOnlineErrorInfo& Result, FString ValidationInfo);
    FOnlinePurchaseSubsystemFinalizeReceiptValidationInfoOnFinalizeReceiptValidationInfoComplete OnFinalizeReceiptValidationInfoComplete; // 0x0040 (size: 0x10)
    void OnlinePurchaseSubsystemFinalizeReceiptValidationInfoCallbackPin(const FOnlineErrorInfo& Result, FString ValidationInfo);
    class UOnlinePurchaseSubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FString __Store__InReceiptValidationInfo;                                         // 0x0098 (size: 0x10)

    class UOnlinePurchaseSubsystemFinalizeReceiptValidationInfo* FinalizeReceiptValidationInfo(class UOnlinePurchaseSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString InReceiptValidationInfo);
}; // Size: 0xA8

class UOnlinePurchaseSubsystemQueryReceipts : public UBlueprintAsyncActionBase
{
    FOnlinePurchaseSubsystemQueryReceiptsOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlinePurchaseSubsystemQueryReceiptsCallbackPin(const FOnlineErrorInfo& Result);
    FOnlinePurchaseSubsystemQueryReceiptsOnQueryReceiptsComplete OnQueryReceiptsComplete; // 0x0040 (size: 0x10)
    void OnlinePurchaseSubsystemQueryReceiptsCallbackPin(const FOnlineErrorInfo& Result);
    class UOnlinePurchaseSubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    bool __Store__bRestoreReceipts;                                                   // 0x0098 (size: 0x1)

    class UOnlinePurchaseSubsystemQueryReceipts* QueryReceipts(class UOnlinePurchaseSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, bool bRestoreReceipts);
}; // Size: 0xA0

class UOnlinePurchaseSubsystemRedeemCode : public UBlueprintAsyncActionBase
{
    FOnlinePurchaseSubsystemRedeemCodeOnCallFailed OnCallFailed;                      // 0x0030 (size: 0x10)
    void OnlinePurchaseSubsystemRedeemCodeCallbackPin(const FOnlineErrorInfo& Result, class UPurchaseReceipt* Receipt);
    FOnlinePurchaseSubsystemRedeemCodeOnPurchaseRedeemCodeComplete OnPurchaseRedeemCodeComplete; // 0x0040 (size: 0x10)
    void OnlinePurchaseSubsystemRedeemCodeCallbackPin(const FOnlineErrorInfo& Result, class UPurchaseReceipt* Receipt);
    class UOnlinePurchaseSubsystem* __Store__Subsystem;                               // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FRedeemCodeRequestBP __Store__RedeemCodeRequest;                                  // 0x0098 (size: 0x30)

    class UOnlinePurchaseSubsystemRedeemCode* RedeemCode(class UOnlinePurchaseSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, const FRedeemCodeRequestBP& RedeemCodeRequest);
}; // Size: 0xC8

class UOnlineRecentPlayerRef : public UOnlineUserRef
{

    FDateTime GetLastSeen();
}; // Size: 0x58

class UOnlineSessionInfo : public UObject
{
}; // Size: 0x38

class UOnlineSessionSearch : public UObject
{
    int32 MaxSearchResults;                                                           // 0x0048 (size: 0x4)
    bool bIsLanQuery;                                                                 // 0x004C (size: 0x1)
    int32 PingBucketSize;                                                             // 0x0050 (size: 0x4)
    int32 PlatformHash;                                                               // 0x0054 (size: 0x4)
    float TimeoutInSeconds;                                                           // 0x0058 (size: 0x4)
    TMap<class FName, class FSessionSearchParamBP> SearchParams;                      // 0x0060 (size: 0x50)

    EOnlineAsyncTaskState_ GetSearchState();
    TArray<FOnlineSessionSearchResultBP> GetSearchResults();
}; // Size: 0xB0

class UOnlineSessionSettings : public UObject
{

    FOnlineSessionSettingsBP GetValue();
}; // Size: 0x178

class UOnlineSessionSubsystem : public UGameInstanceSubsystem
{
    FOnlineSessionSubsystemOnCreateSessionComplete OnCreateSessionComplete;           // 0x0160 (size: 0x10)
    void Session_CreateSessionComplete_BP(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemOnStartSessionComplete OnStartSessionComplete;             // 0x0170 (size: 0x10)
    void Session_StartSessionComplete_BP(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemOnUpdateSessionComplete OnUpdateSessionComplete;           // 0x0180 (size: 0x10)
    void Session_UpdateSessionComplete_BP(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemOnEndSessionComplete OnEndSessionComplete;                 // 0x0190 (size: 0x10)
    void Session_EndSessionComplete_BP(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemOnDestroySessionComplete OnDestroySessionComplete;         // 0x01A0 (size: 0x10)
    void Session_DestroySessionComplete_BP(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemOnMatchmakingComplete OnMatchmakingComplete;               // 0x01B0 (size: 0x10)
    void Session_MatchmakingComplete_BP(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemOnCancelMatchmakingComplete OnCancelMatchmakingComplete;   // 0x01C0 (size: 0x10)
    void Session_CancelMatchmakingComplete_BP(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemOnFindSessionsComplete OnFindSessionsComplete;             // 0x01D0 (size: 0x10)
    void Session_FindSessionsComplete_BP(bool bWasSuccessful);
    FOnlineSessionSubsystemOnCancelFindSessionsComplete OnCancelFindSessionsComplete; // 0x01E0 (size: 0x10)
    void Session_CancelFindSessionsComplete_BP(bool bWasSuccessful);
    FOnlineSessionSubsystemOnPingSearchResultsComplete OnPingSearchResultsComplete;   // 0x01F0 (size: 0x10)
    void Session_PingSearchResultsComplete_BP(bool bWasSuccessful);
    FOnlineSessionSubsystemOnJoinSessionComplete OnJoinSessionComplete;               // 0x0200 (size: 0x10)
    void Session_JoinSessionComplete_BP(FName SessionName, EOnJoinSessionCompleteResult_ Result);
    FOnlineSessionSubsystemOnSessionParticipantJoined OnSessionParticipantJoined;     // 0x0210 (size: 0x10)
    void Session_SessionParticipantJoined_BP(FName Param1, const FUniqueNetIdRepl& Param2);
    FOnlineSessionSubsystemOnSessionParticipantLeft OnSessionParticipantLeft;         // 0x0220 (size: 0x10)
    void Session_SessionParticipantLeft_BP(FName Param1, const FUniqueNetIdRepl& Param2, EOnSessionParticipantLeftReason_ Param3);
    FOnlineSessionSubsystemOnQosDataRequested OnQosDataRequested;                     // 0x0230 (size: 0x10)
    void Session_QosDataRequested_BP(FName Param1);
    FOnlineSessionSubsystemOnSessionSettingsUpdated OnSessionSettingsUpdated;         // 0x0240 (size: 0x10)
    void Session_SessionSettingsUpdated_BP(FName Param1, const FOnlineSessionSettingsBP& Param2);
    FOnlineSessionSubsystemOnSessionParticipantSettingsUpdated OnSessionParticipantSettingsUpdated; // 0x0250 (size: 0x10)
    void Session_SessionParticipantSettingsUpdated_BP(FName Param1, const FUniqueNetIdRepl& Param2, const FOnlineSessionSettingsBP& Param3);
    FOnlineSessionSubsystemOnFindFriendSessionComplete OnFindFriendSessionComplete;   // 0x0260 (size: 0x10)
    void Session_FindFriendSessionComplete_BP(int32 LocalUserNum, bool bWasSuccessful, const TArray<FOnlineSessionSearchResultBP>& FriendSearchResult);
    FOnlineSessionSubsystemOnSessionUserInviteAccepted OnSessionUserInviteAccepted;   // 0x0270 (size: 0x10)
    void Session_SessionUserInviteAccepted_BP(bool bWasSuccessful, int32 ControllerId, const FUniqueNetIdRepl& UserId, const FOnlineSessionSearchResultBP& InviteResult);
    FOnlineSessionSubsystemOnSessionInviteReceived OnSessionInviteReceived;           // 0x0280 (size: 0x10)
    void Session_SessionInviteReceived_BP(const FUniqueNetIdRepl& UserId, const FUniqueNetIdRepl& FromId, FString AppId, const FOnlineSessionSearchResultBP& InviteResult);
    FOnlineSessionSubsystemOnRegisterPlayersComplete OnRegisterPlayersComplete;       // 0x0290 (size: 0x10)
    void Session_RegisterPlayersComplete_BP(FName SessionName, const TArray<FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
    FOnlineSessionSubsystemOnUnregisterPlayersComplete OnUnregisterPlayersComplete;   // 0x02A0 (size: 0x10)
    void Session_UnregisterPlayersComplete_BP(FName SessionName, const TArray<FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
    FOnlineSessionSubsystemOnSessionFailure OnSessionFailure;                         // 0x02B0 (size: 0x10)
    void Session_SessionFailure_BP(const FUniqueNetIdRepl& PlayerId, ESessionFailure_ FailureType);
    FOnlineSessionSubsystemOnDestroySessionRequested OnDestroySessionRequested;       // 0x02C0 (size: 0x10)
    void Session_DestroySessionRequested_BP(int32 LocalUserNum, FName SessionName);

    bool SendSessionInviteToFriends(const FUniqueNetIdRepl& LocalUserId, FName SessionName, const TArray<FUniqueNetIdRepl>& Friends);
    bool SendSessionInviteToFriend(const FUniqueNetIdRepl& LocalUserId, FName SessionName, const FUniqueNetIdRepl& Friend);
    void RemovePlayerFromSession(int32 LocalUserNum, FName SessionName, const FUniqueNetIdRepl& TargetPlayerId);
    void RemoveNamedSession(FName SessionName);
    bool IsSubsystemAvailable();
    bool IsPlayerInSession(FName SessionName, const FUniqueNetIdRepl& UniqueID);
    bool HasPresenceSession();
    FString GetVoiceChatRoomName(int32 LocalUserNum, FName SessionName);
    EOnlineSessionState_ GetSessionState(FName SessionName);
    class UOnlineSessionSettings* GetSessionSettings(FName SessionName);
    int32 GetNumSessions();
    class UNamedOnlineSession* GetNamedSession(FName SessionName);
    void DumpSessionState();
    FUniqueNetIdRepl CreateSessionIdFromString(FString SessionIdStr);
}; // Size: 0x2D0

class UOnlineSessionSubsystemCancelFindSessions : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemCancelFindSessionsOnCallFailed OnCallFailed;               // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemCancelFindSessionsCallbackPin(bool bWasSuccessful);
    FOnlineSessionSubsystemCancelFindSessionsOnCancelFindSessionsComplete OnCancelFindSessionsComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemCancelFindSessionsCallbackPin(bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)

    class UOnlineSessionSubsystemCancelFindSessions* CancelFindSessions(class UOnlineSessionSubsystem* Subsystem);
}; // Size: 0x70

class UOnlineSessionSubsystemCancelMatchmaking : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemCancelMatchmakingOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemCancelMatchmakingCallbackPin(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemCancelMatchmakingOnCancelMatchmakingComplete OnCancelMatchmakingComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemCancelMatchmakingCallbackPin(FName SessionName, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__SearchingPlayerId;                                      // 0x0070 (size: 0x30)
    FName __Store__SessionName;                                                       // 0x00A0 (size: 0x8)

    class UOnlineSessionSubsystemCancelMatchmaking* CancelMatchmaking(class UOnlineSessionSubsystem* Subsystem, const FUniqueNetIdRepl& SearchingPlayerId, FName SessionName);
}; // Size: 0xA8

class UOnlineSessionSubsystemCreateSession : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemCreateSessionOnCallFailed OnCallFailed;                    // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemCreateSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemCreateSessionOnCreateSessionComplete OnCreateSessionComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemCreateSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__HostingPlayerId;                                        // 0x0070 (size: 0x30)
    FName __Store__SessionName;                                                       // 0x00A0 (size: 0x8)
    FOnlineSessionSettingsBP __Store__NewSessionSettings;                             // 0x00A8 (size: 0x150)

    class UOnlineSessionSubsystemCreateSession* CreateSession(class UOnlineSessionSubsystem* Subsystem, const FUniqueNetIdRepl& HostingPlayerId, FName SessionName, const FOnlineSessionSettingsBP& NewSessionSettings);
}; // Size: 0x1F8

class UOnlineSessionSubsystemDestroySession : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemDestroySessionOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemDestroySessionCallbackPin(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemDestroySessionOnDestroySessionComplete OnDestroySessionComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemDestroySessionCallbackPin(FName SessionName, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FName __Store__SessionName;                                                       // 0x0068 (size: 0x8)

    class UOnlineSessionSubsystemDestroySession* DestroySession(class UOnlineSessionSubsystem* Subsystem, FName SessionName);
}; // Size: 0x70

class UOnlineSessionSubsystemEndSession : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemEndSessionOnCallFailed OnCallFailed;                       // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemEndSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemEndSessionOnEndSessionComplete OnEndSessionComplete;       // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemEndSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FName __Store__SessionName;                                                       // 0x0070 (size: 0x8)

    class UOnlineSessionSubsystemEndSession* EndSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName);
}; // Size: 0x78

class UOnlineSessionSubsystemFindFriendSession : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemFindFriendSessionOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemFindFriendSessionCallbackPin(bool bWasSuccessful, const TArray<FOnlineSessionSearchResultBP>& FriendSearchResult);
    FOnlineSessionSubsystemFindFriendSessionOnFindFriendSessionComplete OnFindFriendSessionComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemFindFriendSessionCallbackPin(bool bWasSuccessful, const TArray<FOnlineSessionSearchResultBP>& FriendSearchResult);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    FUniqueNetIdRepl __Store__Friend;                                                 // 0x0078 (size: 0x30)

    class UOnlineSessionSubsystemFindFriendSession* FindFriendSession(class UOnlineSessionSubsystem* Subsystem, int32 LocalUserNum, const FUniqueNetIdRepl& Friend);
}; // Size: 0xA8

class UOnlineSessionSubsystemFindSessionById : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemFindSessionByIdOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemFindSessionByIdCallbackPin(int32 LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResultBP& SearchResult);
    FOnlineSessionSubsystemFindSessionByIdOnSingleSessionResultComplete OnSingleSessionResultComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemFindSessionByIdCallbackPin(int32 LocalUserNum, bool bWasSuccessful, const FOnlineSessionSearchResultBP& SearchResult);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__SearchingUserId;                                        // 0x0068 (size: 0x30)
    FUniqueNetIdRepl __Store__SessionId;                                              // 0x0098 (size: 0x30)
    FUniqueNetIdRepl __Store__FriendId;                                               // 0x00C8 (size: 0x30)
    FString __Store__UserData;                                                        // 0x00F8 (size: 0x10)

    class UOnlineSessionSubsystemFindSessionById* FindSessionById(class UOnlineSessionSubsystem* Subsystem, const FUniqueNetIdRepl& SearchingUserId, const FUniqueNetIdRepl& SessionId, const FUniqueNetIdRepl& FriendId, FString UserData);
}; // Size: 0x108

class UOnlineSessionSubsystemFindSessions : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemFindSessionsOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemFindSessionsCallbackPin(bool bWasSuccessful);
    FOnlineSessionSubsystemFindSessionsOnFindSessionsComplete OnFindSessionsComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemFindSessionsCallbackPin(bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__SearchingPlayerId;                                      // 0x0070 (size: 0x30)
    class UOnlineSessionSearch* __Store__SearchSettings;                              // 0x00A0 (size: 0x8)

    class UOnlineSessionSubsystemFindSessions* FindSessions(class UOnlineSessionSubsystem* Subsystem, const FUniqueNetIdRepl& SearchingPlayerId, class UOnlineSessionSearch* SearchSettings);
}; // Size: 0xA8

class UOnlineSessionSubsystemJoinSession : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemJoinSessionOnCallFailed OnCallFailed;                      // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemJoinSessionCallbackPin(FName SessionName, EOnJoinSessionCompleteResult_ Result);
    FOnlineSessionSubsystemJoinSessionOnJoinSessionComplete OnJoinSessionComplete;    // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemJoinSessionCallbackPin(FName SessionName, EOnJoinSessionCompleteResult_ Result);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0070 (size: 0x30)
    FName __Store__SessionName;                                                       // 0x00A0 (size: 0x8)
    FOnlineSessionSearchResultBP __Store__DesiredSession;                             // 0x00A8 (size: 0x1B8)

    class UOnlineSessionSubsystemJoinSession* JoinSession(class UOnlineSessionSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FName SessionName, const FOnlineSessionSearchResultBP& DesiredSession);
}; // Size: 0x260

class UOnlineSessionSubsystemPingSearchResults : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemPingSearchResultsOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemPingSearchResultsCallbackPin(bool bWasSuccessful);
    FOnlineSessionSubsystemPingSearchResultsOnPingSearchResultsComplete OnPingSearchResultsComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemPingSearchResultsCallbackPin(bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FOnlineSessionSearchResultBP __Store__SearchResult;                               // 0x0070 (size: 0x1B8)

    class UOnlineSessionSubsystemPingSearchResults* PingSearchResults(class UOnlineSessionSubsystem* Subsystem, const FOnlineSessionSearchResultBP& SearchResult);
}; // Size: 0x228

class UOnlineSessionSubsystemRegisterLocalPlayer : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemRegisterLocalPlayerOnCallFailed OnCallFailed;              // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemRegisterLocalPlayerCallbackPin(const FUniqueNetIdRepl& Param1, EOnJoinSessionCompleteResult_ Param2);
    FOnlineSessionSubsystemRegisterLocalPlayerOnRegisterLocalPlayerComplete OnRegisterLocalPlayerComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemRegisterLocalPlayerCallbackPin(const FUniqueNetIdRepl& Param1, EOnJoinSessionCompleteResult_ Param2);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__PlayerId;                                               // 0x0068 (size: 0x30)
    FName __Store__SessionName;                                                       // 0x0098 (size: 0x8)

    class UOnlineSessionSubsystemRegisterLocalPlayer* RegisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, const FUniqueNetIdRepl& PlayerId, FName SessionName);
}; // Size: 0xA0

class UOnlineSessionSubsystemRegisterPlayers : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemRegisterPlayersOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemRegisterPlayersCallbackPin(FName SessionName, const TArray<FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
    FOnlineSessionSubsystemRegisterPlayersOnRegisterPlayersComplete OnRegisterPlayersComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemRegisterPlayersCallbackPin(FName SessionName, const TArray<FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FName __Store__SessionName;                                                       // 0x0070 (size: 0x8)
    TArray<FUniqueNetIdRepl> __Store__Players;                                        // 0x0078 (size: 0x10)
    bool __Store__bWasInvited;                                                        // 0x0088 (size: 0x1)

    class UOnlineSessionSubsystemRegisterPlayers* RegisterPlayers(class UOnlineSessionSubsystem* Subsystem, FName SessionName, const TArray<FUniqueNetIdRepl>& Players, bool bWasInvited);
}; // Size: 0x90

class UOnlineSessionSubsystemStartMatchmaking : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemStartMatchmakingOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemStartMatchmakingCallbackPin(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemStartMatchmakingOnMatchmakingComplete OnMatchmakingComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemStartMatchmakingCallbackPin(FName SessionName, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    TArray<FUniqueNetIdRepl> __Store__LocalPlayers;                                   // 0x0070 (size: 0x10)
    FName __Store__SessionName;                                                       // 0x0080 (size: 0x8)
    FOnlineSessionSettingsBP __Store__NewSessionSettings;                             // 0x0088 (size: 0x150)
    class UOnlineSessionSearch* __Store__SearchSettings;                              // 0x01D8 (size: 0x8)

    class UOnlineSessionSubsystemStartMatchmaking* StartMatchmaking(class UOnlineSessionSubsystem* Subsystem, const TArray<FUniqueNetIdRepl>& LocalPlayers, FName SessionName, const FOnlineSessionSettingsBP& NewSessionSettings, class UOnlineSessionSearch*& SearchSettings);
}; // Size: 0x1E0

class UOnlineSessionSubsystemStartSession : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemStartSessionOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemStartSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemStartSessionOnStartSessionComplete OnStartSessionComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemStartSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FName __Store__SessionName;                                                       // 0x0070 (size: 0x8)

    class UOnlineSessionSubsystemStartSession* StartSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName);
}; // Size: 0x78

class UOnlineSessionSubsystemUnregisterLocalPlayer : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemUnregisterLocalPlayerOnCallFailed OnCallFailed;            // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemUnregisterLocalPlayerCallbackPin(const FUniqueNetIdRepl& Param1, bool Param2);
    FOnlineSessionSubsystemUnregisterLocalPlayerOnUnregisterLocalPlayerComplete OnUnregisterLocalPlayerComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemUnregisterLocalPlayerCallbackPin(const FUniqueNetIdRepl& Param1, bool Param2);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__PlayerId;                                               // 0x0068 (size: 0x30)
    FName __Store__SessionName;                                                       // 0x0098 (size: 0x8)

    class UOnlineSessionSubsystemUnregisterLocalPlayer* UnregisterLocalPlayer(class UOnlineSessionSubsystem* Subsystem, const FUniqueNetIdRepl& PlayerId, FName SessionName);
}; // Size: 0xA0

class UOnlineSessionSubsystemUnregisterPlayers : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemUnregisterPlayersOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemUnregisterPlayersCallbackPin(FName SessionName, const TArray<FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
    FOnlineSessionSubsystemUnregisterPlayersOnUnregisterPlayersComplete OnUnregisterPlayersComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemUnregisterPlayersCallbackPin(FName SessionName, const TArray<FUniqueNetIdRepl>& PlayerIds, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FName __Store__SessionName;                                                       // 0x0070 (size: 0x8)
    TArray<FUniqueNetIdRepl> __Store__Players;                                        // 0x0078 (size: 0x10)

    class UOnlineSessionSubsystemUnregisterPlayers* UnregisterPlayers(class UOnlineSessionSubsystem* Subsystem, FName SessionName, const TArray<FUniqueNetIdRepl>& Players);
}; // Size: 0x88

class UOnlineSessionSubsystemUpdateSession : public UBlueprintAsyncActionBase
{
    FOnlineSessionSubsystemUpdateSessionOnCallFailed OnCallFailed;                    // 0x0030 (size: 0x10)
    void OnlineSessionSubsystemUpdateSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    FOnlineSessionSubsystemUpdateSessionOnUpdateSessionComplete OnUpdateSessionComplete; // 0x0040 (size: 0x10)
    void OnlineSessionSubsystemUpdateSessionCallbackPin(FName SessionName, bool bWasSuccessful);
    class UOnlineSessionSubsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FName __Store__SessionName;                                                       // 0x0070 (size: 0x8)
    FOnlineSessionSettingsBP __Store__UpdatedSessionSettings;                         // 0x0078 (size: 0x150)
    bool __Store__bShouldRefreshOnlineData;                                           // 0x01C8 (size: 0x1)

    class UOnlineSessionSubsystemUpdateSession* UpdateSession(class UOnlineSessionSubsystem* Subsystem, FName SessionName, const FOnlineSessionSettingsBP& UpdatedSessionSettings, bool bShouldRefreshOnlineData);
}; // Size: 0x1D0

class UOnlineSharedCloudSubsystem : public UGameInstanceSubsystem
{

    bool WriteSharedFile(const FUniqueNetIdRepl& UserId, FString Filename, class UFileData*& Contents);
    bool IsSubsystemAvailable();
    bool ClearSharedFiles();
}; // Size: 0xA0

class UOnlineSharingSubsystem : public UGameInstanceSubsystem
{
    FOnlineSharingSubsystemOnRequestNewReadPermissionsComplete OnRequestNewReadPermissionsComplete; // 0x00E0 (size: 0x10)
    void Sharing_RequestNewReadPermissionsComplete_BP(int32 LocalUserNum, bool Param1);
    FOnlineSharingSubsystemOnRequestNewPublishPermissionsComplete OnRequestNewPublishPermissionsComplete; // 0x00F0 (size: 0x10)
    void Sharing_RequestNewPublishPermissionsComplete_BP(int32 LocalUserNum, bool Param1);
    FOnlineSharingSubsystemOnReadNewsFeedComplete OnReadNewsFeedComplete;             // 0x0100 (size: 0x10)
    void Sharing_ReadNewsFeedComplete_BP(int32 LocalUserNum, bool Param1);
    FOnlineSharingSubsystemOnSharePostComplete OnSharePostComplete;                   // 0x0110 (size: 0x10)
    void Sharing_SharePostComplete_BP(int32 LocalUserNum, bool Param1);

    bool ReadNewsFeed(int32 LocalUserNum, int32 NumPostsToRead);
    bool IsSubsystemAvailable();
}; // Size: 0x120

class UOnlineStatsSubsystem : public UGameInstanceSubsystem
{

    bool IsSubsystemAvailable();
    FOnlineStatsUserStatsBP GetStats(const FUniqueNetIdRepl& StatsUserId);
}; // Size: 0xA0

class UOnlineStatsSubsystemQueryStats : public UBlueprintAsyncActionBase
{
    FOnlineStatsSubsystemQueryStatsOnCallFailed OnCallFailed;                         // 0x0030 (size: 0x10)
    void OnlineStatsSubsystemQueryStatsCallbackPin(const FOnlineErrorInfo& ResultState, const TArray<FOnlineStatsUserStatsBP>& UsersStatsResult);
    FOnlineStatsSubsystemQueryStatsOnlineStatsQueryUsersStatsComplete OnlineStatsQueryUsersStatsComplete; // 0x0040 (size: 0x10)
    void OnlineStatsSubsystemQueryStatsCallbackPin(const FOnlineErrorInfo& ResultState, const TArray<FOnlineStatsUserStatsBP>& UsersStatsResult);
    class UOnlineStatsSubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TArray<FUniqueNetIdRepl> __Store__StatUsers;                                      // 0x0098 (size: 0x10)
    TArray<FString> __Store__StatNames;                                               // 0x00A8 (size: 0x10)

    class UOnlineStatsSubsystemQueryStats* QueryStats(class UOnlineStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TArray<FUniqueNetIdRepl>& StatUsers, const TArray<FString>& StatNames);
}; // Size: 0xB8

class UOnlineStatsSubsystemUpdateStats : public UBlueprintAsyncActionBase
{
    FOnlineStatsSubsystemUpdateStatsOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlineStatsSubsystemUpdateStatsCallbackPin(const FOnlineErrorInfo& ResultState);
    FOnlineStatsSubsystemUpdateStatsOnlineStatsUpdateStatsComplete OnlineStatsUpdateStatsComplete; // 0x0040 (size: 0x10)
    void OnlineStatsSubsystemUpdateStatsCallbackPin(const FOnlineErrorInfo& ResultState);
    class UOnlineStatsSubsystem* __Store__Subsystem;                                  // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    TArray<FOnlineStatsUserUpdatedStatsBP> __Store__UpdatedUserStats;                 // 0x0098 (size: 0x10)

    class UOnlineStatsSubsystemUpdateStats* UpdateStats(class UOnlineStatsSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, const TArray<FOnlineStatsUserUpdatedStatsBP>& UpdatedUserStats);
}; // Size: 0xA8

class UOnlineStoreOffer : public UObject
{

    bool IsPurchasable();
    FText GetTitle();
    FDateTime GetReleaseDate();
    int64 GetRegularPrice();
    FString GetOfferId();
    int64 GetNumericPrice();
    FText GetLongDescription();
    FDateTime GetExpirationDate();
    TMap<class FString, class FString> GetDynamicFields();
    FText GetDisplayRegularPrice();
    FText GetDisplayPrice();
    FText GetDescription();
    FString GetCurrencyCode();
}; // Size: 0x38

class UOnlineStoreV2Subsystem : public UGameInstanceSubsystem
{
    FOnlineStoreV2SubsystemOnQueryForAvailablePurchasesComplete OnQueryForAvailablePurchasesComplete; // 0x00A8 (size: 0x10)
    void StoreV2_QueryForAvailablePurchasesComplete_BP(bool Param1);

    bool IsSubsystemAvailable();
    void GetOffers(TArray<class UOnlineStoreOffer*>& OutOffers);
    class UOnlineStoreOffer* GetOffer(FString OfferId);
    void GetCategories(TArray<FOnlineStoreCategoryBP>& OutCategories);
}; // Size: 0xB8

class UOnlineStoreV2SubsystemQueryCategories : public UBlueprintAsyncActionBase
{
    FOnlineStoreV2SubsystemQueryCategoriesOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineStoreV2SubsystemQueryCategoriesCallbackPin(bool bWasSuccessful, FString Error);
    FOnlineStoreV2SubsystemQueryCategoriesOnQueryOnlineStoreCategoriesComplete OnQueryOnlineStoreCategoriesComplete; // 0x0040 (size: 0x10)
    void OnlineStoreV2SubsystemQueryCategoriesCallbackPin(bool bWasSuccessful, FString Error);
    class UOnlineStoreV2Subsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)

    class UOnlineStoreV2SubsystemQueryCategories* QueryCategories(class UOnlineStoreV2Subsystem* Subsystem, const FUniqueNetIdRepl& UserId);
}; // Size: 0x98

class UOnlineStoreV2SubsystemQueryOffersByFilter : public UBlueprintAsyncActionBase
{
    FOnlineStoreV2SubsystemQueryOffersByFilterOnCallFailed OnCallFailed;              // 0x0030 (size: 0x10)
    void OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin(bool bWasSuccessful, const TArray<FString>& OfferIds, FString Error);
    FOnlineStoreV2SubsystemQueryOffersByFilterOnQueryOnlineStoreOffersComplete OnQueryOnlineStoreOffersComplete; // 0x0040 (size: 0x10)
    void OnlineStoreV2SubsystemQueryOffersByFilterCallbackPin(bool bWasSuccessful, const TArray<FString>& OfferIds, FString Error);
    class UOnlineStoreV2Subsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FOnlineStoreFilterBP __Store__Filter;                                             // 0x0098 (size: 0x30)

    class UOnlineStoreV2SubsystemQueryOffersByFilter* QueryOffersByFilter(class UOnlineStoreV2Subsystem* Subsystem, const FUniqueNetIdRepl& UserId, const FOnlineStoreFilterBP& Filter);
}; // Size: 0xC8

class UOnlineStoreV2SubsystemQueryOffersById : public UBlueprintAsyncActionBase
{
    FOnlineStoreV2SubsystemQueryOffersByIdOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineStoreV2SubsystemQueryOffersByIdCallbackPin(bool bWasSuccessful, const TArray<FString>& OfferIds, FString Error);
    FOnlineStoreV2SubsystemQueryOffersByIdOnQueryOnlineStoreOffersComplete OnQueryOnlineStoreOffersComplete; // 0x0040 (size: 0x10)
    void OnlineStoreV2SubsystemQueryOffersByIdCallbackPin(bool bWasSuccessful, const TArray<FString>& OfferIds, FString Error);
    class UOnlineStoreV2Subsystem* __Store__Subsystem;                                // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    TArray<FString> __Store__OfferIds;                                                // 0x0098 (size: 0x10)

    class UOnlineStoreV2SubsystemQueryOffersById* QueryOffersById(class UOnlineStoreV2Subsystem* Subsystem, const FUniqueNetIdRepl& UserId, const TArray<FString>& OfferIds);
}; // Size: 0xA8

class UOnlineSubsystem : public UGameInstanceSubsystem
{
    TMap<class FString, class UGameInstanceSubsystem*> SubsystemCache;                // 0x0030 (size: 0x50)

    class UOnlineVoiceSubsystem* GetNamedVoiceSubsystem(FName SubsystemName);
    class UOnlineVoiceAdminSubsystem* GetNamedVoiceAdminSubsystem(FName SubsystemName);
    class UOnlineUserSubsystem* GetNamedUserSubsystem(FName SubsystemName);
    class UOnlineUserCloudSubsystem* GetNamedUserCloudSubsystem(FName SubsystemName);
    class UOnlineTurnBasedSubsystem* GetNamedTurnBasedSubsystem(FName SubsystemName);
    class UOnlineTournamentSubsystem* GetNamedTournamentSubsystem(FName SubsystemName);
    class UOnlineTitleFileSubsystem* GetNamedTitleFileSubsystem(FName SubsystemName);
    class UOnlineTimeSubsystem* GetNamedTimeSubsystem(FName SubsystemName);
    class UOnlineStoreV2Subsystem* GetNamedStoreV2Subsystem(FName SubsystemName);
    class UOnlineStatsSubsystem* GetNamedStatsSubsystem(FName SubsystemName);
    class UOnlineSharingSubsystem* GetNamedSharingSubsystem(FName SubsystemName);
    class UOnlineSharedCloudSubsystem* GetNamedSharedCloudSubsystem(FName SubsystemName);
    class UOnlineSessionSubsystem* GetNamedSessionSubsystem(FName SubsystemName);
    class UOnlinePurchaseSubsystem* GetNamedPurchaseSubsystem(FName SubsystemName);
    class UOnlinePresenceSubsystem* GetNamedPresenceSubsystem(FName SubsystemName);
    class UOnlinePartySubsystem* GetNamedPartySubsystem(FName SubsystemName);
    class UOnlineMessageSubsystem* GetNamedMessageSubsystem(FName SubsystemName);
    class UOnlineMessageSanitizerSubsystem* GetNamedMessageSanitizerSubsystem(FName SubsystemName);
    class UOnlineLobbySubsystem* GetNamedLobbySubsystem(FName SubsystemName);
    class UOnlineLeaderboardsSubsystem* GetNamedLeaderboardsSubsystem(FName SubsystemName);
    class UOnlineIdentitySubsystem* GetNamedIdentitySubsystem(FName SubsystemName);
    class UOnlineGroupsSubsystem* GetNamedGroupsSubsystem(FName SubsystemName);
    class UOnlineGameItemStatsSubsystem* GetNamedGameItemStatsSubsystem(FName SubsystemName);
    class UOnlineGameActivitySubsystem* GetNamedGameActivitySubsystem(FName SubsystemName);
    class UOnlineFriendsSubsystem* GetNamedFriendsSubsystem(FName SubsystemName);
    class UOnlineExternalUISubsystem* GetNamedExternalUISubsystem(FName SubsystemName);
    class UOnlineEventsSubsystem* GetNamedEventsSubsystem(FName SubsystemName);
    class UOnlineEntitlementsSubsystem* GetNamedEntitlementsSubsystem(FName SubsystemName);
    class UOnlineChatSubsystem* GetNamedChatSubsystem(FName SubsystemName);
    class UOnlineAvatarSubsystem* GetNamedAvatarSubsystem(FName SubsystemName);
    class UOnlineAchievementsSubsystem* GetNamedAchievementsSubsystem(FName SubsystemName);
}; // Size: 0x80

class UOnlineTimeSubsystem : public UGameInstanceSubsystem
{
    FOnlineTimeSubsystemOnQueryServerUtcTimeComplete OnQueryServerUtcTimeComplete;    // 0x00A8 (size: 0x10)
    void Time_QueryServerUtcTimeComplete_BP(bool Param1, FString Param2, FString Param3);

    bool QueryServerUtcTime();
    bool IsSubsystemAvailable();
    FString GetLastServerUtcTime();
}; // Size: 0xB8

class UOnlineTitleFileSubsystem : public UGameInstanceSubsystem
{
    FOnlineTitleFileSubsystemOnEnumerateFilesComplete OnEnumerateFilesComplete;       // 0x00B8 (size: 0x10)
    void TitleFile_EnumerateFilesComplete_BP(bool bWasSuccessful, FString Error);
    FOnlineTitleFileSubsystemOnReadFileComplete OnReadFileComplete;                   // 0x00C8 (size: 0x10)
    void TitleFile_ReadFileComplete_BP(bool bWasSuccessful, FString Filename);
    FOnlineTitleFileSubsystemOnReadFileProgress OnReadFileProgress;                   // 0x00D8 (size: 0x10)
    void TitleFile_ReadFileProgress_BP(FString Filename, int64 NumBytes);

    bool IsSubsystemAvailable();
    void GetFileList(TArray<FCloudFileHeaderBP>& Files);
    bool GetFileContents(FString Filename, class UFileData*& FileContents);
    void DeleteCachedFiles(bool bSkipEnumerated);
    bool ClearFiles();
    bool ClearFile(FString Filename);
}; // Size: 0xE8

class UOnlineTitleFileSubsystemEnumerateFiles : public UBlueprintAsyncActionBase
{
    FOnlineTitleFileSubsystemEnumerateFilesOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineTitleFileSubsystemEnumerateFilesCallbackPin(bool bWasSuccessful, FString Error);
    FOnlineTitleFileSubsystemEnumerateFilesOnEnumerateFilesComplete OnEnumerateFilesComplete; // 0x0040 (size: 0x10)
    void OnlineTitleFileSubsystemEnumerateFilesCallbackPin(bool bWasSuccessful, FString Error);
    class UOnlineTitleFileSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FPagedQueryBP __Store__Page;                                                      // 0x0070 (size: 0x8)

    class UOnlineTitleFileSubsystemEnumerateFiles* EnumerateFiles(class UOnlineTitleFileSubsystem* Subsystem, const FPagedQueryBP& Page);
}; // Size: 0x78

class UOnlineTitleFileSubsystemReadFile : public UBlueprintAsyncActionBase
{
    FOnlineTitleFileSubsystemReadFileOnCallFailed OnCallFailed;                       // 0x0030 (size: 0x10)
    void OnlineTitleFileSubsystemReadFileCallbackPin(bool bWasSuccessful, FString Filename, int64 NumBytes);
    FOnlineTitleFileSubsystemReadFileOnReadFileComplete OnReadFileComplete;           // 0x0040 (size: 0x10)
    void OnlineTitleFileSubsystemReadFileCallbackPin(bool bWasSuccessful, FString Filename, int64 NumBytes);
    FOnlineTitleFileSubsystemReadFileOnReadFileProgress OnReadFileProgress;           // 0x0050 (size: 0x10)
    void OnlineTitleFileSubsystemReadFileCallbackPin(bool bWasSuccessful, FString Filename, int64 NumBytes);
    class UOnlineTitleFileSubsystem* __Store__Subsystem;                              // 0x0060 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0068 (size: 0x10)
    FString __Store__FileName;                                                        // 0x0088 (size: 0x10)

    class UOnlineTitleFileSubsystemReadFile* ReadFile(class UOnlineTitleFileSubsystem* Subsystem, FString Filename);
}; // Size: 0x98

class UOnlineTournamentSubsystem : public UGameInstanceSubsystem
{

    bool IsSubsystemAvailable();
}; // Size: 0xA0

class UOnlineTurnBasedSubsystem : public UGameInstanceSubsystem
{

    bool IsSubsystemAvailable();
    int32 GetMatchDataSize();
}; // Size: 0xA0

class UOnlineTurnBasedSubsystemLoadAllMatches : public UBlueprintAsyncActionBase
{
    FOnlineTurnBasedSubsystemLoadAllMatchesOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin(const TArray<FString>& Param1, bool Param2);
    FOnlineTurnBasedSubsystemLoadAllMatchesLoadTurnBasedMatchesSignature LoadTurnBasedMatchesSignature; // 0x0040 (size: 0x10)
    void OnlineTurnBasedSubsystemLoadAllMatchesCallbackPin(const TArray<FString>& Param1, bool Param2);
    class UOnlineTurnBasedSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)

    class UOnlineTurnBasedSubsystemLoadAllMatches* LoadAllMatches(class UOnlineTurnBasedSubsystem* Subsystem);
}; // Size: 0x68

class UOnlineTurnBasedSubsystemLoadMatchWithID : public UBlueprintAsyncActionBase
{
    FOnlineTurnBasedSubsystemLoadMatchWithIDOnCallFailed OnCallFailed;                // 0x0030 (size: 0x10)
    void OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin(FString Param1, bool Param2);
    FOnlineTurnBasedSubsystemLoadMatchWithIDLoadTurnBasedMatchWithIDSignature LoadTurnBasedMatchWithIDSignature; // 0x0040 (size: 0x10)
    void OnlineTurnBasedSubsystemLoadMatchWithIDCallbackPin(FString Param1, bool Param2);
    class UOnlineTurnBasedSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FString __Store__MatchID;                                                         // 0x0068 (size: 0x10)

    class UOnlineTurnBasedSubsystemLoadMatchWithID* LoadMatchWithID(class UOnlineTurnBasedSubsystem* Subsystem, FString MatchID);
}; // Size: 0x78

class UOnlineUserCloudSubsystem : public UGameInstanceSubsystem
{
    FOnlineUserCloudSubsystemOnEnumerateUserFilesComplete OnEnumerateUserFilesComplete; // 0x00D0 (size: 0x10)
    void UserCloud_EnumerateUserFilesComplete_BP(bool bWasSuccessful, const FUniqueNetIdRepl& UserId);
    FOnlineUserCloudSubsystemOnReadUserFileComplete OnReadUserFileComplete;           // 0x00E0 (size: 0x10)
    void UserCloud_ReadUserFileComplete_BP(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    FOnlineUserCloudSubsystemOnWriteUserFileProgress64 OnWriteUserFileProgress64;     // 0x00F0 (size: 0x10)
    void UserCloud_WriteUserFileProgress64_BP(int64 BytesWritten, const FUniqueNetIdRepl& UserId, FString Filename);
    FOnlineUserCloudSubsystemOnWriteUserFileComplete OnWriteUserFileComplete;         // 0x0100 (size: 0x10)
    void UserCloud_WriteUserFileComplete_BP(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    FOnlineUserCloudSubsystemOnWriteUserFileCanceled OnWriteUserFileCanceled;         // 0x0110 (size: 0x10)
    void UserCloud_WriteUserFileCanceled_BP(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    FOnlineUserCloudSubsystemOnDeleteUserFileComplete OnDeleteUserFileComplete;       // 0x0120 (size: 0x10)
    void UserCloud_DeleteUserFileComplete_BP(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);

    bool RequestUsageInfo(const FUniqueNetIdRepl& UserId);
    bool IsSubsystemAvailable();
    void GetUserFileList(const FUniqueNetIdRepl& UserId, TArray<FCloudFileHeaderBP>& UserFiles);
    bool GetFileContents(const FUniqueNetIdRepl& UserId, FString Filename, class UFileData*& FileContents);
    void DumpCloudState(const FUniqueNetIdRepl& UserId);
    void DumpCloudFileState(const FUniqueNetIdRepl& UserId, FString Filename);
    bool ClearFiles(const FUniqueNetIdRepl& UserId);
    bool ClearFile(const FUniqueNetIdRepl& UserId, FString Filename);
    void CancelWriteUserFile(const FUniqueNetIdRepl& UserId, FString Filename);
}; // Size: 0x130

class UOnlineUserCloudSubsystemDeleteUserFile : public UBlueprintAsyncActionBase
{
    FOnlineUserCloudSubsystemDeleteUserFileOnCallFailed OnCallFailed;                 // 0x0030 (size: 0x10)
    void OnlineUserCloudSubsystemDeleteUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    FOnlineUserCloudSubsystemDeleteUserFileOnDeleteUserFileComplete OnDeleteUserFileComplete; // 0x0040 (size: 0x10)
    void OnlineUserCloudSubsystemDeleteUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    class UOnlineUserCloudSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0070 (size: 0x30)
    FString __Store__FileName;                                                        // 0x00A0 (size: 0x10)
    bool __Store__bShouldCloudDelete;                                                 // 0x00B0 (size: 0x1)
    bool __Store__bShouldLocallyDelete;                                               // 0x00B1 (size: 0x1)

    class UOnlineUserCloudSubsystemDeleteUserFile* DeleteUserFile(class UOnlineUserCloudSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString Filename, bool bShouldCloudDelete, bool bShouldLocallyDelete);
}; // Size: 0xB8

class UOnlineUserCloudSubsystemEnumerateUserFiles : public UBlueprintAsyncActionBase
{
    FOnlineUserCloudSubsystemEnumerateUserFilesOnCallFailed OnCallFailed;             // 0x0030 (size: 0x10)
    void OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId);
    FOnlineUserCloudSubsystemEnumerateUserFilesOnEnumerateUserFilesComplete OnEnumerateUserFilesComplete; // 0x0040 (size: 0x10)
    void OnlineUserCloudSubsystemEnumerateUserFilesCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId);
    class UOnlineUserCloudSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0070 (size: 0x30)

    class UOnlineUserCloudSubsystemEnumerateUserFiles* EnumerateUserFiles(class UOnlineUserCloudSubsystem* Subsystem, const FUniqueNetIdRepl& UserId);
}; // Size: 0xA0

class UOnlineUserCloudSubsystemReadUserFile : public UBlueprintAsyncActionBase
{
    FOnlineUserCloudSubsystemReadUserFileOnCallFailed OnCallFailed;                   // 0x0030 (size: 0x10)
    void OnlineUserCloudSubsystemReadUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    FOnlineUserCloudSubsystemReadUserFileOnReadUserFileComplete OnReadUserFileComplete; // 0x0040 (size: 0x10)
    void OnlineUserCloudSubsystemReadUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    class UOnlineUserCloudSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0070 (size: 0x30)
    FString __Store__FileName;                                                        // 0x00A0 (size: 0x10)

    class UOnlineUserCloudSubsystemReadUserFile* ReadUserFile(class UOnlineUserCloudSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString Filename);
}; // Size: 0xB0

class UOnlineUserCloudSubsystemWriteUserFile : public UBlueprintAsyncActionBase
{
    FOnlineUserCloudSubsystemWriteUserFileOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineUserCloudSubsystemWriteUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    FOnlineUserCloudSubsystemWriteUserFileOnWriteUserFileComplete OnWriteUserFileComplete; // 0x0040 (size: 0x10)
    void OnlineUserCloudSubsystemWriteUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    FOnlineUserCloudSubsystemWriteUserFileOnWriteUserFileProgress64 OnWriteUserFileProgress64; // 0x0050 (size: 0x10)
    void OnlineUserCloudSubsystemWriteUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    FOnlineUserCloudSubsystemWriteUserFileOnWriteUserFileCanceled OnWriteUserFileCanceled; // 0x0060 (size: 0x10)
    void OnlineUserCloudSubsystemWriteUserFileCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    class UOnlineUserCloudSubsystem* __Store__Subsystem;                              // 0x0070 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0078 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x00A0 (size: 0x30)
    FString __Store__FileName;                                                        // 0x00D0 (size: 0x10)
    class UFileData* __Store__FileContents;                                           // 0x00E0 (size: 0x8)
    bool __Store__bCompressBeforeUpload;                                              // 0x00E8 (size: 0x1)

    class UOnlineUserCloudSubsystemWriteUserFile* WriteUserFile(class UOnlineUserCloudSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString Filename, class UFileData* FileContents, bool bCompressBeforeUpload);
}; // Size: 0xF0

class UOnlineUserRef : public UObject
{

    void SetUserLocalAttribute(FString Key, FString Value, bool& Success);
    FUniqueNetIdRepl GetUserId();
    FString GetUserAttribute(FString Key, bool& Found);
    FString GetRealName();
    FString GetDisplayName();
}; // Size: 0x48

class UOnlineUserSubsystem : public UGameInstanceSubsystem
{
    FOnlineUserSubsystemOnQueryUserInfoComplete OnQueryUserInfoComplete;              // 0x00B0 (size: 0x10)
    void User_QueryUserInfoComplete_BP(int32 LocalUserNum, bool bWasSuccessful, const TArray<FUniqueNetIdRepl>& UserIds, FString ErrorStr);

    bool IsSubsystemAvailable();
    class UOnlineUserRef* GetUserInfo(int32 LocalUserNum, const FUniqueNetIdRepl& UserId);
    void GetExternalIdMappings(const FExternalIdQueryOptionsBP& QueryOptions, const TArray<FString>& ExternalIds, TArray<FUniqueNetIdRepl>& OutIds);
    FUniqueNetIdRepl GetExternalIdMapping(const FExternalIdQueryOptionsBP& QueryOptions, FString ExternalId);
    bool GetAllUserInfo(int32 LocalUserNum, TArray<class UOnlineUserRef*>& OutUsers);
}; // Size: 0xC0

class UOnlineUserSubsystemQueryExternalIdMappings : public UBlueprintAsyncActionBase
{
    FOnlineUserSubsystemQueryExternalIdMappingsOnCallFailed OnCallFailed;             // 0x0030 (size: 0x10)
    void OnlineUserSubsystemQueryExternalIdMappingsCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, const FExternalIdQueryOptionsBP& QueryOptions, const TArray<FString>& ExternalIds, FString Error);
    FOnlineUserSubsystemQueryExternalIdMappingsOnQueryExternalIdMappingsComplete OnQueryExternalIdMappingsComplete; // 0x0040 (size: 0x10)
    void OnlineUserSubsystemQueryExternalIdMappingsCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, const FExternalIdQueryOptionsBP& QueryOptions, const TArray<FString>& ExternalIds, FString Error);
    class UOnlineUserSubsystem* __Store__Subsystem;                                   // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FExternalIdQueryOptionsBP __Store__QueryOptions;                                  // 0x0098 (size: 0x18)
    TArray<FString> __Store__ExternalIds;                                             // 0x00B0 (size: 0x10)

    class UOnlineUserSubsystemQueryExternalIdMappings* QueryExternalIdMappings(class UOnlineUserSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, const FExternalIdQueryOptionsBP& QueryOptions, const TArray<FString>& ExternalIds);
}; // Size: 0xC0

class UOnlineUserSubsystemQueryUserIdMapping : public UBlueprintAsyncActionBase
{
    FOnlineUserSubsystemQueryUserIdMappingOnCallFailed OnCallFailed;                  // 0x0030 (size: 0x10)
    void OnlineUserSubsystemQueryUserIdMappingCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString DisplayNameOrEmail, const FUniqueNetIdRepl& FoundUserId, FString Error);
    FOnlineUserSubsystemQueryUserIdMappingOnQueryUserMappingComplete OnQueryUserMappingComplete; // 0x0040 (size: 0x10)
    void OnlineUserSubsystemQueryUserIdMappingCallbackPin(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString DisplayNameOrEmail, const FUniqueNetIdRepl& FoundUserId, FString Error);
    class UOnlineUserSubsystem* __Store__Subsystem;                                   // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__UserId;                                                 // 0x0068 (size: 0x30)
    FString __Store__DisplayNameOrEmail;                                              // 0x0098 (size: 0x10)

    class UOnlineUserSubsystemQueryUserIdMapping* QueryUserIdMapping(class UOnlineUserSubsystem* Subsystem, const FUniqueNetIdRepl& UserId, FString DisplayNameOrEmail);
}; // Size: 0xA8

class UOnlineUserSubsystemQueryUserInfo : public UBlueprintAsyncActionBase
{
    FOnlineUserSubsystemQueryUserInfoOnCallFailed OnCallFailed;                       // 0x0030 (size: 0x10)
    void OnlineUserSubsystemQueryUserInfoCallbackPin(bool bWasSuccessful, const TArray<FUniqueNetIdRepl>& UserIds, FString ErrorStr);
    FOnlineUserSubsystemQueryUserInfoOnQueryUserInfoComplete OnQueryUserInfoComplete; // 0x0040 (size: 0x10)
    void OnlineUserSubsystemQueryUserInfoCallbackPin(bool bWasSuccessful, const TArray<FUniqueNetIdRepl>& UserIds, FString ErrorStr);
    class UOnlineUserSubsystem* __Store__Subsystem;                                   // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    int32 __Store__LocalUserNum;                                                      // 0x0070 (size: 0x4)
    TArray<FUniqueNetIdRepl> __Store__UserIds;                                        // 0x0078 (size: 0x10)

    class UOnlineUserSubsystemQueryUserInfo* QueryUserInfo(class UOnlineUserSubsystem* Subsystem, int32 LocalUserNum, const TArray<FUniqueNetIdRepl>& UserIds);
}; // Size: 0x88

class UOnlineVoiceAdminSubsystem : public UGameInstanceSubsystem
{

    bool IsSubsystemAvailable();
}; // Size: 0xA0

class UOnlineVoiceAdminSubsystemCreateChannelCredentials : public UBlueprintAsyncActionBase
{
    FOnlineVoiceAdminSubsystemCreateChannelCredentialsOnCallFailed OnCallFailed;      // 0x0030 (size: 0x10)
    void OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin(const FOnlineErrorInfo& Result, const FUniqueNetIdRepl& LocalUserId, const TArray<FVoiceAdminChannelCredentialsBP>& Credentials);
    FOnlineVoiceAdminSubsystemCreateChannelCredentialsOnVoiceAdminCreateChannelCredentialsComplete OnVoiceAdminCreateChannelCredentialsComplete; // 0x0040 (size: 0x10)
    void OnlineVoiceAdminSubsystemCreateChannelCredentialsCallbackPin(const FOnlineErrorInfo& Result, const FUniqueNetIdRepl& LocalUserId, const TArray<FVoiceAdminChannelCredentialsBP>& Credentials);
    class UOnlineVoiceAdminSubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ChannelName;                                                     // 0x0098 (size: 0x10)
    TArray<FUniqueNetIdRepl> __Store__TargetUserIds;                                  // 0x00A8 (size: 0x10)

    class UOnlineVoiceAdminSubsystemCreateChannelCredentials* CreateChannelCredentials(class UOnlineVoiceAdminSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ChannelName, const TArray<FUniqueNetIdRepl>& TargetUserIds);
}; // Size: 0xB8

class UOnlineVoiceAdminSubsystemKickParticipant : public UBlueprintAsyncActionBase
{
    FOnlineVoiceAdminSubsystemKickParticipantOnCallFailed OnCallFailed;               // 0x0030 (size: 0x10)
    void OnlineVoiceAdminSubsystemKickParticipantCallbackPin(const FOnlineErrorInfo& Result, const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId);
    FOnlineVoiceAdminSubsystemKickParticipantOnVoiceAdminKickParticipantComplete OnVoiceAdminKickParticipantComplete; // 0x0040 (size: 0x10)
    void OnlineVoiceAdminSubsystemKickParticipantCallbackPin(const FOnlineErrorInfo& Result, const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId);
    class UOnlineVoiceAdminSubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ChannelName;                                                     // 0x0098 (size: 0x10)
    FUniqueNetIdRepl __Store__TargetUserId;                                           // 0x00A8 (size: 0x30)

    class UOnlineVoiceAdminSubsystemKickParticipant* KickParticipant(class UOnlineVoiceAdminSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ChannelName, const FUniqueNetIdRepl& TargetUserId);
}; // Size: 0xD8

class UOnlineVoiceAdminSubsystemSetParticipantHardMute : public UBlueprintAsyncActionBase
{
    FOnlineVoiceAdminSubsystemSetParticipantHardMuteOnCallFailed OnCallFailed;        // 0x0030 (size: 0x10)
    void OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin(const FOnlineErrorInfo& Result, const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId, bool bIsNowMuted);
    FOnlineVoiceAdminSubsystemSetParticipantHardMuteOnVoiceAdminSetParticipantHardMuteComplete OnVoiceAdminSetParticipantHardMuteComplete; // 0x0040 (size: 0x10)
    void OnlineVoiceAdminSubsystemSetParticipantHardMuteCallbackPin(const FOnlineErrorInfo& Result, const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId, bool bIsNowMuted);
    class UOnlineVoiceAdminSubsystem* __Store__Subsystem;                             // 0x0050 (size: 0x8)
    FString __Store__CallUniquenessId;                                                // 0x0058 (size: 0x10)
    FUniqueNetIdRepl __Store__LocalUserId;                                            // 0x0068 (size: 0x30)
    FString __Store__ChannelName;                                                     // 0x0098 (size: 0x10)
    FUniqueNetIdRepl __Store__TargetUserId;                                           // 0x00A8 (size: 0x30)
    bool __Store__bMuted;                                                             // 0x00D8 (size: 0x1)

    class UOnlineVoiceAdminSubsystemSetParticipantHardMute* SetParticipantHardMute(class UOnlineVoiceAdminSubsystem* Subsystem, const FUniqueNetIdRepl& LocalUserId, FString ChannelName, const FUniqueNetIdRepl& TargetUserId, bool bMuted);
}; // Size: 0xE0

class UOnlineVoiceChatSubsystem : public UGameInstanceSubsystem
{
    class UVoiceChatUser* PrimaryVoiceUser;                                           // 0x0050 (size: 0x8)
    FOnlineVoiceChatSubsystemOnVoiceChatReconnected OnVoiceChatReconnected;           // 0x0058 (size: 0x10)
    void VoiceChat_OnVoiceChatReconnectedDelegate_BP();
    FOnlineVoiceChatSubsystemOnVoiceChatConnected OnVoiceChatConnected;               // 0x0070 (size: 0x10)
    void VoiceChat_OnVoiceChatConnectedDelegate_BP();
    FOnlineVoiceChatSubsystemOnVoiceChatDisconnected OnVoiceChatDisconnected;         // 0x0088 (size: 0x10)
    void VoiceChat_OnVoiceChatDisconnectedDelegate_BP(const FVoiceChatResultBP& Reason);

    bool Uninitialize_();
    bool IsSubsystemAvailable();
    bool IsInitialized();
    bool IsConnecting();
    bool IsConnected();
    bool Initialize_();
    class UVoiceChatUser* CreateUser();
}; // Size: 0xA0

class UOnlineVoiceChatSubsystemConnect : public UBlueprintAsyncActionBase
{
    FOnlineVoiceChatSubsystemConnectOnCallFailed OnCallFailed;                        // 0x0030 (size: 0x10)
    void OnlineVoiceChatSubsystemConnectCallbackPin(const FVoiceChatResultBP& Result);
    FOnlineVoiceChatSubsystemConnectOnVoiceChatConnectComplete OnVoiceChatConnectComplete; // 0x0040 (size: 0x10)
    void OnlineVoiceChatSubsystemConnectCallbackPin(const FVoiceChatResultBP& Result);
    class UOnlineVoiceChatSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)

    class UOnlineVoiceChatSubsystemConnect* Connect(class UOnlineVoiceChatSubsystem* Subsystem);
}; // Size: 0x58

class UOnlineVoiceChatSubsystemDisconnect : public UBlueprintAsyncActionBase
{
    FOnlineVoiceChatSubsystemDisconnectOnCallFailed OnCallFailed;                     // 0x0030 (size: 0x10)
    void OnlineVoiceChatSubsystemDisconnectCallbackPin(const FVoiceChatResultBP& Result);
    FOnlineVoiceChatSubsystemDisconnectOnVoiceChatDisconnectComplete OnVoiceChatDisconnectComplete; // 0x0040 (size: 0x10)
    void OnlineVoiceChatSubsystemDisconnectCallbackPin(const FVoiceChatResultBP& Result);
    class UOnlineVoiceChatSubsystem* __Store__Subsystem;                              // 0x0050 (size: 0x8)

    class UOnlineVoiceChatSubsystemDisconnect* Disconnect(class UOnlineVoiceChatSubsystem* Subsystem);
}; // Size: 0x58

class UOnlineVoiceSubsystem : public UGameInstanceSubsystem
{
    FOnlineVoiceSubsystemOnPlayerTalkingStateChanged OnPlayerTalkingStateChanged;     // 0x00A8 (size: 0x10)
    void Voice_PlayerTalkingStateChanged_BP(const FUniqueNetIdRepl& Param1, bool Param2);

    bool UnregisterRemoteTalker(const FUniqueNetIdRepl& UniqueID);
    void UnregisterLocalTalkers();
    bool UnregisterLocalTalker(int64 LocalUserNum);
    bool UnmuteRemoteTalker(int32 LocalUserNum, const FUniqueNetIdRepl& PlayerId, bool bIsSystemWide);
    void StopNetworkedVoice(int32 LocalUserNum);
    void StartNetworkedVoice(int32 LocalUserNum);
    void RemoveAllRemoteTalkers();
    bool RegisterRemoteTalker(const FUniqueNetIdRepl& UniqueID);
    void RegisterLocalTalkers();
    bool RegisterLocalTalker(int64 LocalUserNum);
    void ProcessMuteChangeNotification();
    bool PatchRemoteTalkerOutputToEndpoint(FString InDeviceName, bool bMuteInGameOutput);
    bool PatchLocalTalkerOutputToEndpoint(FString InDeviceName);
    bool MuteRemoteTalker(int32 LocalUserNum, const FUniqueNetIdRepl& PlayerId, bool bIsSystemWide);
    bool IsSubsystemAvailable();
    bool IsRemotePlayerTalking(const FUniqueNetIdRepl& UniqueID);
    bool IsMuted(int64 LocalUserNum, const FUniqueNetIdRepl& UniqueID);
    bool IsLocalPlayerTalking(int64 LocalUserNum);
    bool IsHeadsetPresent(int64 LocalUserNum);
    FString GetVoiceDebugState();
    int32 GetNumLocalTalkers();
    float GetAmplitudeOfRemoteTalker(const FUniqueNetIdRepl& PlayerId);
    void DisconnectAllEndpoints();
    void ClearVoicePackets();
}; // Size: 0xB8

class UParty : public UObject
{

    int64 GetPartyTypeId();
    class UPartyId* GetPartyId();
    FOnlinePartyConfiguration GetPartyConfiguration();
    FUniqueNetIdRepl GetLeaderId();
}; // Size: 0x38

class UPartyId : public UObject
{

    FString ToDebugString();
}; // Size: 0x38

class UPurchaseReceipt : public UObject
{

    FString GetTransactionId();
    TArray<FReceiptOfferEntryBP> GetReceiptOffers();
    EPurchaseTransactionState_ GetPurchaseTransactionState();
}; // Size: 0x38

class UReadablePartyData : public UObject
{

    void GetAttribute(FString AttrName, bool& OutFound, FVariantDataBP& OutAttrValue);
}; // Size: 0x38

class URedpointOSSv1BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool EqualEqual_FVariantDataBPFVariantDataBP(const FVariantDataBP& InA, const FVariantDataBP& InB);
    bool EqualEqual_FOnlineSessionSettingBPFOnlineSessionSettingBP(const FOnlineSessionSettingBP& InA, const FOnlineSessionSettingBP& InB);
    FVariantDataBP Conv_StringToFVariantDataBP(FString InData);
    FOnlineSessionSettingBP Conv_StringToFOnlineSessionSettingBP(FString InData);
    FVariantDataBP Conv_Int64ToFVariantDataBP(int64 InData);
    FOnlineSessionSettingBP Conv_Int64ToFOnlineSessionSettingBP(int64 InData);
    FString Conv_FVariantDataBPToString(const FVariantDataBP& InData);
    int64 Conv_FVariantDataBPToInt64(const FVariantDataBP& InData);
    double Conv_FVariantDataBPToDouble(const FVariantDataBP& InData);
    bool Conv_FVariantDataBPToBool(const FVariantDataBP& InData);
    FString Conv_FOnlineSessionSettingBPToString(const FOnlineSessionSettingBP& InData);
    int64 Conv_FOnlineSessionSettingBPToInt64(const FOnlineSessionSettingBP& InData);
    double Conv_FOnlineSessionSettingBPToDouble(const FOnlineSessionSettingBP& InData);
    bool Conv_FOnlineSessionSettingBPToBool(const FOnlineSessionSettingBP& InData);
    FVariantDataBP Conv_DoubleToFVariantDataBP(double InData);
    FOnlineSessionSettingBP Conv_DoubleToFOnlineSessionSettingBP(double InData);
    FVariantDataBP Conv_BoolToFVariantDataBP(bool InData);
    FOnlineSessionSettingBP Conv_BoolToFOnlineSessionSettingBP(bool InData);
}; // Size: 0x28

class URedpointOSSv1OnlinePartyRequestToJoinInfo : public UObject
{

    FUniqueNetIdRepl GetUserId();
    FString GetPlatformData();
    int64 GetPartyTypeId();
    FDateTime GetExpirationTime();
    FString GetDisplayName();
}; // Size: 0x38

class UUserOnlineAccountRef : public UOnlineUserRef
{

    bool SetUserAttribute(FString Key, FString Value);
    FString GetAuthAttribute(FString Key, bool& Found);
    FString GetAccessToken();
}; // Size: 0x58

class UVoiceChatUser : public UObject
{
    FVoiceChatUserOnVoiceChatAvailableAudioDevicesChanged OnVoiceChatAvailableAudioDevicesChanged; // 0x0088 (size: 0x10)
    void VoiceChatUser_OnVoiceChatAvailableAudioDevicesChangedDelegate_BP();
    FVoiceChatUserOnVoiceChatLoggedIn OnVoiceChatLoggedIn;                            // 0x00A0 (size: 0x10)
    void VoiceChatUser_OnVoiceChatLoggedInDelegate_BP(FString playerName);
    FVoiceChatUserOnVoiceChatLoggedOut OnVoiceChatLoggedOut;                          // 0x00B8 (size: 0x10)
    void VoiceChatUser_OnVoiceChatLoggedOutDelegate_BP(FString playerName);
    FVoiceChatUserOnVoiceChatChannelJoined OnVoiceChatChannelJoined;                  // 0x00D0 (size: 0x10)
    void VoiceChatUser_OnVoiceChatChannelJoinedDelegate_BP(FString ChannelName);
    FVoiceChatUserOnVoiceChatChannelExited OnVoiceChatChannelExited;                  // 0x00E8 (size: 0x10)
    void VoiceChatUser_OnVoiceChatChannelExitedDelegate_BP(FString ChannelName, const FVoiceChatResultBP& Reason);
    FVoiceChatUserOnVoiceChatPlayerAdded OnVoiceChatPlayerAdded;                      // 0x0100 (size: 0x10)
    void VoiceChatUser_OnVoiceChatPlayerAddedDelegate_BP(FString ChannelName, FString playerName);
    FVoiceChatUserOnVoiceChatPlayerRemoved OnVoiceChatPlayerRemoved;                  // 0x0118 (size: 0x10)
    void VoiceChatUser_OnVoiceChatPlayerRemovedDelegate_BP(FString ChannelName, FString playerName);
    FVoiceChatUserOnVoiceChatPlayerTalkingUpdated OnVoiceChatPlayerTalkingUpdated;    // 0x0130 (size: 0x10)
    void VoiceChatUser_OnVoiceChatPlayerTalkingUpdatedDelegate_BP(FString ChannelName, FString playerName, bool bIsTalking);
    FVoiceChatUserOnVoiceChatPlayerMuteUpdated OnVoiceChatPlayerMuteUpdated;          // 0x0148 (size: 0x10)
    void VoiceChatUser_OnVoiceChatPlayerMuteUpdatedDelegate_BP(FString ChannelName, FString playerName, bool bIsMuted);
    FVoiceChatUserOnVoiceChatPlayerVolumeUpdated OnVoiceChatPlayerVolumeUpdated;      // 0x0160 (size: 0x10)
    void VoiceChatUser_OnVoiceChatPlayerVolumeUpdatedDelegate_BP(FString ChannelName, FString playerName, float Volume);

    void UnblockPlayers(const TArray<FString>& PlayerNames);
    void TransmitToSpecificChannels(const TSet<FString>& ChannelNames);
    void TransmitToNoChannels();
    void TransmitToAllChannels();
    void SetSetting(FString Name, FString Value);
    void SetPlayerVolume(FString playerName, float Volume);
    void SetPlayerMuted(FString playerName, bool bMuted);
    void SetOutputDeviceId(FString OutputDeviceId);
    void SetInputDeviceId(FString InputDeviceId);
    void SetChannelPlayerMuted(FString ChannelName, FString playerName, bool bAudioMuted);
    void SetAudioOutputVolume(float Volume);
    void SetAudioOutputDeviceMuted(bool bIsMuted);
    void SetAudioInputVolume(float Volume);
    void SetAudioInputDeviceMuted(bool bIsMuted);
    void Set3DPosition(FString ChannelName, FVector SpeakerPosition);
    bool IsPlayerTalking(FString playerName);
    bool IsPlayerMuted(FString playerName);
    bool IsLoggingIn();
    bool IsLoggedIn();
    bool IsChannelPlayerMuted(FString ChannelName, FString playerName);
    FString InsecureGetLoginToken(FString playerName);
    FString InsecureGetJoinToken(FString ChannelName, EVoiceChatChannelType_ ChannelType, const FVoiceChatChannel3dPropertiesBP& Channel3dProperties);
    EVoiceChatTransmitMode_ GetTransmitMode();
    TSet<FString> GetTransmitChannels();
    FString GetSetting(FString Name);
    float GetPlayerVolume(FString playerName);
    TArray<FString> GetPlayersInChannel(FString ChannelName);
    FVoiceChatDeviceInfoBP GetOutputDeviceInfo();
    FString GetLoggedInPlayerName();
    FVoiceChatDeviceInfoBP GetInputDeviceInfo();
    FVoiceChatDeviceInfoBP GetDefaultOutputDeviceInfo();
    FVoiceChatDeviceInfoBP GetDefaultInputDeviceInfo();
    EVoiceChatChannelType_ GetChannelType(FString ChannelName);
    TArray<FString> GetChannels();
    TArray<FVoiceChatDeviceInfoBP> GetAvailableOutputDeviceInfos();
    TArray<FVoiceChatDeviceInfoBP> GetAvailableInputDeviceInfos();
    float GetAudioOutputVolume();
    bool GetAudioOutputDeviceMuted();
    float GetAudioInputVolume();
    bool GetAudioInputDeviceMuted();
    void BlockPlayers(const TArray<FString>& PlayerNames);
}; // Size: 0x178

class UVoiceChatUserJoinChannel : public UBlueprintAsyncActionBase
{
    FVoiceChatUserJoinChannelOnCallFailed OnCallFailed;                               // 0x0030 (size: 0x10)
    void VoiceChatUserJoinChannelCallbackPin(FString ChannelName, const FVoiceChatResultBP& Result);
    FVoiceChatUserJoinChannelOnVoiceChatChannelJoinComplete OnVoiceChatChannelJoinComplete; // 0x0040 (size: 0x10)
    void VoiceChatUserJoinChannelCallbackPin(FString ChannelName, const FVoiceChatResultBP& Result);
    class UVoiceChatUser* __Store__Subsystem;                                         // 0x0050 (size: 0x8)
    FString __Store__ChannelName;                                                     // 0x0058 (size: 0x10)
    FString __Store__ChannelCredentials;                                              // 0x0068 (size: 0x10)
    EVoiceChatChannelType_ __Store__ChannelType;                                      // 0x0078 (size: 0x1)
    FVoiceChatChannel3dPropertiesBP __Store__Channel3dProperties;                     // 0x007C (size: 0x10)

    class UVoiceChatUserJoinChannel* JoinChannel(class UVoiceChatUser* Subsystem, FString ChannelName, FString ChannelCredentials, EVoiceChatChannelType_ ChannelType, const FVoiceChatChannel3dPropertiesBP& Channel3dProperties);
}; // Size: 0x90

class UVoiceChatUserLeaveChannel : public UBlueprintAsyncActionBase
{
    FVoiceChatUserLeaveChannelOnCallFailed OnCallFailed;                              // 0x0030 (size: 0x10)
    void VoiceChatUserLeaveChannelCallbackPin(FString ChannelName, const FVoiceChatResultBP& Result);
    FVoiceChatUserLeaveChannelOnVoiceChatChannelLeaveComplete OnVoiceChatChannelLeaveComplete; // 0x0040 (size: 0x10)
    void VoiceChatUserLeaveChannelCallbackPin(FString ChannelName, const FVoiceChatResultBP& Result);
    class UVoiceChatUser* __Store__Subsystem;                                         // 0x0050 (size: 0x8)
    FString __Store__ChannelName;                                                     // 0x0058 (size: 0x10)

    class UVoiceChatUserLeaveChannel* LeaveChannel(class UVoiceChatUser* Subsystem, FString ChannelName);
}; // Size: 0x68

class UVoiceChatUserLogin : public UBlueprintAsyncActionBase
{
    FVoiceChatUserLoginOnCallFailed OnCallFailed;                                     // 0x0030 (size: 0x10)
    void VoiceChatUserLoginCallbackPin(FString playerName, const FVoiceChatResultBP& Result);
    FVoiceChatUserLoginOnVoiceChatLoginComplete OnVoiceChatLoginComplete;             // 0x0040 (size: 0x10)
    void VoiceChatUserLoginCallbackPin(FString playerName, const FVoiceChatResultBP& Result);
    class UVoiceChatUser* __Store__Subsystem;                                         // 0x0050 (size: 0x8)
    int32 __Store__PlatformId;                                                        // 0x0058 (size: 0x4)
    FString __Store__PlayerName;                                                      // 0x0060 (size: 0x10)
    FString __Store__Credentials;                                                     // 0x0070 (size: 0x10)

    class UVoiceChatUserLogin* Login(class UVoiceChatUser* Subsystem, int32 PlatformId, FString playerName, FString Credentials);
}; // Size: 0x80

class UVoiceChatUserLogout : public UBlueprintAsyncActionBase
{
    FVoiceChatUserLogoutOnCallFailed OnCallFailed;                                    // 0x0030 (size: 0x10)
    void VoiceChatUserLogoutCallbackPin(FString playerName, const FVoiceChatResultBP& Result);
    FVoiceChatUserLogoutOnVoiceChatLogoutComplete OnVoiceChatLogoutComplete;          // 0x0040 (size: 0x10)
    void VoiceChatUserLogoutCallbackPin(FString playerName, const FVoiceChatResultBP& Result);
    class UVoiceChatUser* __Store__Subsystem;                                         // 0x0050 (size: 0x8)

    class UVoiceChatUserLogout* Logout(class UVoiceChatUser* Subsystem);
}; // Size: 0x58

#endif
