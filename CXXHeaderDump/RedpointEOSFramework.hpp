#ifndef UE4SS_SDK_RedpointEOSFramework_HPP
#define UE4SS_SDK_RedpointEOSFramework_HPP

#include "RedpointEOSFramework_enums.hpp"

struct FRedpointAvatarCacheEntry
{
    class UTexture* Avatar;                                                           // 0x0000 (size: 0x8)
    FDateTime ExpiresAt;                                                              // 0x0008 (size: 0x8)
    bool bFetchInProgress;                                                            // 0x0010 (size: 0x1)
    bool bFailed;                                                                     // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FRedpointPartyAttributeValue
{
    ERedpointPartyAttributeType Type;                                                 // 0x0000 (size: 0x1)
    FString String;                                                                   // 0x0008 (size: 0x10)
    int64 int64;                                                                      // 0x0018 (size: 0x8)
    double Double;                                                                    // 0x0020 (size: 0x8)
    bool bool;                                                                        // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FRedpointPartyMemberInfo
{
    bool bHasPartyMember;                                                             // 0x0000 (size: 0x1)
    FUniqueNetIdRepl UserId;                                                          // 0x0008 (size: 0x30)
    FString playerName;                                                               // 0x0038 (size: 0x10)
    TMap<class FString, class FString> PlayerUserAttributes;                          // 0x0048 (size: 0x50)
    TMap<class FString, class FRedpointPartyAttributeValue> PartyMemberAttributes;    // 0x0098 (size: 0x50)
    bool bIsPartyLeader;                                                              // 0x00E8 (size: 0x1)

}; // Size: 0xF0

struct FRedpointTreeViewFriendListState
{
    TArray<ERedpointFriendListSectionType> SectionTypes;                              // 0x0000 (size: 0x10)
    TMap<class ERedpointFriendListSectionType, class URedpointFriendListSection*> FriendSections; // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FRedpointVoiceChatAudioDevice
{
    FString DeviceID;                                                                 // 0x0000 (size: 0x10)
    FString DeviceName;                                                               // 0x0010 (size: 0x10)
    bool bIsInputDevice;                                                              // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FRedpointVoiceChatChannelConnection
{
    bool bIsUnmanagedChannel;                                                         // 0x0000 (size: 0x1)
    FString ManagedChannelLobbyId;                                                    // 0x0008 (size: 0x10)
    FString UnmanagedChannelBaseUrl;                                                  // 0x0018 (size: 0x10)
    FString UnmanagedChannelName;                                                     // 0x0028 (size: 0x10)
    FString UnmanagedChannelAuthenticationToken;                                      // 0x0038 (size: 0x10)

}; // Size: 0x48

class ARedpointGameSession : public AGameSession
{
    bool bIncludeAnonymousPlayers;                                                    // 0x0330 (size: 0x1)
    bool bStartAndEndSessionAutomatically;                                            // 0x0331 (size: 0x1)

    void ReleasePlayer(FUniqueNetIdRepl PlayerId);
    void HoldPlayer(FUniqueNetIdRepl PlayerId);
}; // Size: 0x338

class ARedpointPartyMember : public AActor
{
    int32 PartyMemberSlot;                                                            // 0x02E8 (size: 0x4)

    void PartyMemberChanged(const FRedpointPartyMemberInfo& PartyMember);
}; // Size: 0x2F0

class ARedpointStartupScreenGameMode : public AGameModeBase
{
}; // Size: 0x340

class ARedpointStartupScreenPlayerController : public APlayerController
{
}; // Size: 0x738

class ARedpointUMGHUD : public AHUD
{
    TSubclassOf<class UUserWidget> HUDUMGWidget;                                      // 0x0398 (size: 0x8)
    bool bManualConstruct;                                                            // 0x03A0 (size: 0x1)
    bool bManualAttach;                                                               // 0x03A1 (size: 0x1)
    class UUserWidget* HUDUMGWidgetInstance;                                          // 0x03A8 (size: 0x8)

    void SetWidgetInstance(class UUserWidget* Widget);
    void PreWidgetHidden(class UUserWidget* Widget, bool bPendingDestruction);
    void PostWidgetShown(class UUserWidget* Widget, bool bInitiallyCreated);
}; // Size: 0x3B0

class IRedpointNotifyUniqueIdInterface : public IInterface
{

    void NotifyUniqueNetIdSet(class APlayerState* PlayerState, const FUniqueNetIdRepl& UniqueID);
}; // Size: 0x28

class IRedpointStartupScreen : public IInterface
{

    void UpdateProgressMessage(const FText& Message);
    void OnStartupScreenDisplayed(const FOnStartupScreenDisplayedOnStartLogin& OnStartLogin);
    void OnLoginFailed(const FText& LoginError, const FOnLoginFailedOnRetryLogin& OnRetryLogin);
}; // Size: 0x28

class URedpointAvatar : public UUserWidget
{
    bool bTargetUserIsLocalUser;                                                      // 0x0340 (size: 0x1)
    FUniqueNetIdRepl TargetUserId;                                                    // 0x0348 (size: 0x30)
    class UTexture* DefaultTexture;                                                   // 0x0378 (size: 0x8)
    ERedpointAvatarLoadingIndicator LoadingIndicator;                                 // 0x0380 (size: 0x1)
    double ExpirationMinutes;                                                         // 0x0388 (size: 0x8)

}; // Size: 0x480

class URedpointBlockVoiceChatMemberAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointBlockVoiceChatMemberAsyncActionOnComplete OnComplete;                    // 0x0030 (size: 0x10)
    void RedpointBlockVoiceChatMemberAsyncActionCallbackPin(bool bSuccessful);
    class URedpointVoiceChatComponent* VoiceChatComponent;                            // 0x0040 (size: 0x8)
    FUniqueNetIdRepl OtherMemberId;                                                   // 0x0048 (size: 0x30)

    class URedpointBlockVoiceChatMemberAsyncAction* BlockMember(class URedpointVoiceChatComponent* VoiceChatComponent, const FUniqueNetIdRepl& OtherMemberId);
}; // Size: 0x78

class URedpointDefaultStartupScreen : public UUserWidget
{
    FSlateFontInfo MessageFont;                                                       // 0x0718 (size: 0x60)
    FSlateFontInfo NoteFont;                                                          // 0x0778 (size: 0x60)
    FSlateFontInfo RegularFont;                                                       // 0x07D8 (size: 0x60)

}; // Size: 0x840

class URedpointFrameworkBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetVoiceChatAudioOutputDevice(class UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId, FString DeviceID);
    void SetVoiceChatAudioInputDevice(class UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId, FString DeviceID);
    void SetPlayerControllerSpectating(class APlayerController* PlayerController, bool bIsSpectating);
    void SetListViewEntrySpacing(class UListView* InListView, float InEntrySpacing);
    void SetGlobalVoiceChatAudioFeatureEnabled(class UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId, ERedpointVoiceChatAudioFeature AudioFeature, bool bEnabled);
    bool KickPlayerController(class APlayerController* PlayerController, FText KickReason);
    bool IsRedpointFrameworkFreeEdition();
    bool IsPlayInEditor();
    bool IsPlayerControllerSpectating(class APlayerController* PlayerController);
    bool IsGlobalVoiceChatAudioFeatureEnabled(class UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId, ERedpointVoiceChatAudioFeature AudioFeature);
    FRedpointVoiceChatAudioDevice GetVoiceChatAudioOutputDevice(class UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    FRedpointVoiceChatAudioDevice GetVoiceChatAudioInputDevice(class UObject* WorldContextObject, const FUniqueNetIdRepl& PlayerId);
    FString GetInputPlatformAndPlayerDebugState(class UObject* WorldContextObject);
    class AGameSession* GetGameSession(class AGameModeBase* GameMode);
    TArray<FRedpointVoiceChatAudioDevice> GetAvailableVoiceChatAudioDevices(class UObject* WorldContextObject);
}; // Size: 0x28

class URedpointFrameworkLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
    TMap<class FString, class URedpointFriendListEntry*> FriendEntries;               // 0x0038 (size: 0x50)
    bool bDisplayCachedPlatformFriends;                                               // 0x0088 (size: 0x1)
    bool bIncludeLocalPlayerInPartySection;                                           // 0x0089 (size: 0x1)

    void UnbindFriendListSections(class UTreeView* TreeView);
    void SetIncludeLocalPlayerInPartySection(bool bEnabled);
    void SetDisplayCachedPlatformFriends(bool bEnabled);
    bool IsPrimaryPartyLeader();
    class UParty* GetPrimaryParty();
    void BindFriendListSections(class UTreeView* TreeView, const TArray<ERedpointFriendListSectionType>& Sections);
}; // Size: 0xE0

class URedpointFrameworkSubsystem : public UGameInstanceSubsystem
{
    bool bEnsureAlwaysInParty;                                                        // 0x0030 (size: 0x1)
    int32 PartyMaximumSize;                                                           // 0x0034 (size: 0x4)
    bool bEnableVoiceChatInParty;                                                     // 0x0038 (size: 0x1)
    TMap<class FUniqueNetIdRepl, class FRedpointAvatarCacheEntry> AvatarCache;        // 0x0040 (size: 0x50)

    FString GetReleaseVersion();
    class UTexture* FetchAvatar(FUniqueNetIdRepl LocalUserId, FUniqueNetIdRepl TargetUserId, FTimespan Expiration, bool& bOutHasFailed);
}; // Size: 0x90

class URedpointFriendListAcceptFriendRequestAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListAcceptFriendRequestAsyncActionOnComplete OnComplete;           // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListAcceptFriendRequestAsyncAction* AcceptFriendRequest(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListBlockPlayerAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListBlockPlayerAsyncActionOnComplete OnComplete;                   // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListBlockPlayerAsyncAction* BlockPlayer(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListEntry : public UObject
{
    class ULocalPlayer* BoundForLocalPlayer;                                          // 0x0030 (size: 0x8)
    bool bHasGameProfile;                                                             // 0x0038 (size: 0x1)
    FUniqueNetIdRepl UserId;                                                          // 0x0040 (size: 0x30)
    FString DisplayName;                                                              // 0x0070 (size: 0x10)
    bool bInParty;                                                                    // 0x0080 (size: 0x1)
    bool bInGame;                                                                     // 0x0081 (size: 0x1)
    bool bIsInvitableToParty;                                                         // 0x0082 (size: 0x1)
    bool bIsInvitableToGame;                                                          // 0x0083 (size: 0x1)
    ERedpointFriendListEntryInviteStatus InviteStatus;                                // 0x0087 (size: 0x1)
    ERedpointFriendListEntryPresenceStatus PresenceStatus;                            // 0x0088 (size: 0x1)
    FText PresenceStatusText;                                                         // 0x0090 (size: 0x10)
    bool bPlayingThisGame;                                                            // 0x00A0 (size: 0x1)
    bool bIsGameFriend;                                                               // 0x00A1 (size: 0x1)
    bool bIsBeingActedUpon;                                                           // 0x00A2 (size: 0x1)
    bool bIsBlocked;                                                                  // 0x00A3 (size: 0x1)
    bool bIsRecent;                                                                   // 0x00A4 (size: 0x1)
    bool bInJoinableParty;                                                            // 0x00A5 (size: 0x1)
    bool bInJoinableGame;                                                             // 0x00A6 (size: 0x1)

    bool CanUnblockPlayer();
    bool CanSendFriendRequest();
    bool CanRemoveFriend();
    bool CanRejectFriendRequest();
    bool CanPromoteToPartyLeader();
    bool CanLeaveParty();
    bool CanKickFromParty();
    bool CanJoinParty();
    bool CanJoinGame();
    bool CanInviteToParty();
    bool CanInviteToGame();
    bool CanBlockPlayer();
    bool CanAcceptFriendRequest();
}; // Size: 0xA8

class URedpointFriendListInviteToGameAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListInviteToGameAsyncActionOnComplete OnComplete;                  // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListInviteToGameAsyncAction* InviteToGame(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListInviteToPartyAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListInviteToPartyAsyncActionOnComplete OnComplete;                 // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListInviteToPartyAsyncAction* InviteToParty(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListJoinGameAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListJoinGameAsyncActionOnComplete OnComplete;                      // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListJoinGameAsyncAction* JoinGame(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x50

class URedpointFriendListJoinPartyAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListJoinPartyAsyncActionOnComplete OnComplete;                     // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListJoinPartyAsyncAction* JoinParty(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListKickFromPartyAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListKickFromPartyAsyncActionOnComplete OnComplete;                 // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListKickFromPartyAsyncAction* KickFromParty(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListLeavePartyAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListLeavePartyAsyncActionOnComplete OnComplete;                    // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListLeavePartyAsyncAction* LeaveParty(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListPromoteInPartyAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListPromoteInPartyAsyncActionOnComplete OnComplete;                // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListPromoteInPartyAsyncAction* PromoteInParty(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListRejectFriendRequestAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListRejectFriendRequestAsyncActionOnComplete OnComplete;           // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListRejectFriendRequestAsyncAction* RejectFriendRequest(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListRemoveFriendAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListRemoveFriendAsyncActionOnComplete OnComplete;                  // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListRemoveFriendAsyncAction* RemoveFriend(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListSection : public UObject
{
    ERedpointFriendListSectionType Type;                                              // 0x0028 (size: 0x1)
    FText title;                                                                      // 0x0030 (size: 0x10)
    bool bRequiresInit;                                                               // 0x0040 (size: 0x1)
    TArray<class URedpointFriendListEntry*> Entries;                                  // 0x0048 (size: 0x10)

    bool HasAnyEntries();
}; // Size: 0x58

class URedpointFriendListSendFriendRequestAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListSendFriendRequestAsyncActionOnComplete OnComplete;             // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListSendFriendRequestAsyncAction* SendFriendRequest(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointFriendListUnblockPlayerAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointFriendListUnblockPlayerAsyncActionOnComplete OnComplete;                 // 0x0030 (size: 0x10)
    void RedpointFriendListActionComplete();
    class URedpointFriendListEntry* Entry;                                            // 0x0040 (size: 0x8)

    class URedpointFriendListUnblockPlayerAsyncAction* UnblockPlayer(class URedpointFriendListEntry* FriendListEntry);
}; // Size: 0x48

class URedpointGameInstance : public UGameInstance
{
    bool bEnsureAlwaysSignedIn;                                                       // 0x01C0 (size: 0x1)
    FSoftClassPath StartupScreen;                                                     // 0x01C8 (size: 0x20)
    class UTexture* StartupScreenLogo;                                                // 0x01E8 (size: 0x8)
    FVector2D StartupScreenLogoSize;                                                  // 0x01F0 (size: 0x10)
    TSubclassOf<class UOnlineSession> OnlineSessionClass;                             // 0x0200 (size: 0x8)
    class UUserWidget* StartupScreenWidget;                                           // 0x0208 (size: 0x8)

    void OnStartLogin();
    class UUserWidget* ConstructStartupScreen(TSubclassOf<class UUserWidget> StartupScreenWidgetClass);
}; // Size: 0x228

class URedpointSquareBox : public UContentWidget
{
    ERedpointSquareBoxAxis Axis;                                                      // 0x0190 (size: 0x1)
    FRedpointSquareBoxAxisDelegate AxisDelegate;                                      // 0x0194 (size: 0x10)
    ERedpointSquareBoxAxis GetRedpointSquareBoxAxis();

}; // Size: 0x1A8

class URedpointSquareBoxSlot : public UPanelSlot
{
}; // Size: 0x48

class URedpointUnblockVoiceChatMemberAsyncAction : public UBlueprintAsyncActionBase
{
    FRedpointUnblockVoiceChatMemberAsyncActionOnComplete OnComplete;                  // 0x0030 (size: 0x10)
    void RedpointUnblockVoiceChatMemberAsyncActionCallbackPin(bool bSuccessful);
    class URedpointVoiceChatComponent* VoiceChatComponent;                            // 0x0040 (size: 0x8)
    FUniqueNetIdRepl OtherMemberId;                                                   // 0x0048 (size: 0x30)

    class URedpointUnblockVoiceChatMemberAsyncAction* UnblockMember(class URedpointVoiceChatComponent* VoiceChatComponent, const FUniqueNetIdRepl& OtherMemberId);
}; // Size: 0x78

class URedpointVoiceChatAnchorPointComponent : public USceneComponent
{
    int32 SpeakerVoiceChatGroup;                                                      // 0x0298 (size: 0x4)
    FUniqueNetIdRepl SpeakerPlayerId;                                                 // 0x02A0 (size: 0x30)
    class USoundAttenuation* SpeakerAttenuationSettings;                              // 0x02D0 (size: 0x8)
    TArray<FName> AudioComponentTags;                                                 // 0x02D8 (size: 0x10)

}; // Size: 0x2F0

class URedpointVoiceChatAnchorPointGameInstanceSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x120

class URedpointVoiceChatClientChannelGameInstanceSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0xE0

class URedpointVoiceChatClientComponentGameInstanceSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x90

class URedpointVoiceChatComponent : public UActorComponent
{
    int32 VoiceChatGroup;                                                             // 0x00BC (size: 0x4)
    ERedpointVoiceChatProximityType ProximityType;                                    // 0x00C0 (size: 0x1)
    class USoundAttenuation* AttenuationSettings;                                     // 0x00C8 (size: 0x8)
    FRedpointVoiceChatChannelConnection Connection;                                   // 0x00D0 (size: 0x48)
    class APawn* PossessedPawn;                                                       // 0x0120 (size: 0x8)
    class AActor* CustomAudioAnchorPoint;                                             // 0x0128 (size: 0x8)
    class AActor* AudioAnchorPoint;                                                   // 0x0130 (size: 0x8)
    class URedpointVoiceChatAnchorPointComponent* AudioAnchorPointComponent;          // 0x0138 (size: 0x8)
    FRedpointVoiceChatComponentOnVoiceChatChannelJoined OnVoiceChatChannelJoined;     // 0x0178 (size: 0x10)
    void RedpointVoiceChatComponentVoiceChatChannelJoined(FString ChannelName);
    FRedpointVoiceChatComponentOnVoiceChatChannelLeft OnVoiceChatChannelLeft;         // 0x0188 (size: 0x10)
    void RedpointVoiceChatComponentVoiceChatChannelLeft(FString PreviousChannelName);

    void SetVoiceChatGroup(int32 InVoiceChatGroup);
    void SetProximityType(ERedpointVoiceChatProximityType InProximityType);
    void SetOutputVolume(float Volume);
    void SetOutputMuted(bool bMuted);
    void SetMemberOutputLocalVolume(const FUniqueNetIdRepl& OtherMemberId, float Volume);
    void SetMemberOutputLocalMuted(const FUniqueNetIdRepl& OtherMemberId, bool bMuted);
    void SetInputVolume(float Volume);
    void SetInputMuted(bool bMuted);
    void SetHardMutedOnServer(bool bHardMuted);
    void SetCustomAudioAnchorPoint(class AActor* AnchorPoint);
    void OnRep_Connection();
    void OnPossessedPawnChanged(class APawn* OldPawn, class APawn* NewPawn);
    bool IsOutputMuted();
    bool IsMemberSpeaking(const FUniqueNetIdRepl& MemberId);
    bool IsMemberOutputLocalMuted(const FUniqueNetIdRepl& OtherMemberId);
    bool IsMemberOutputHardMuted(const FUniqueNetIdRepl& OtherMemberId);
    bool IsMemberBlocked(const FUniqueNetIdRepl& OtherMemberId);
    bool IsLocalUserSpeaking();
    bool IsInputMuted();
    bool IsHardMutedOnServer();
    int32 GetVoiceChatGroup();
    ERedpointVoiceChatProximityType GetProximityType();
    float GetOutputVolume();
    TArray<FUniqueNetIdRepl> GetOtherMemberUserIds();
    float GetMemberOutputLocalVolume(const FUniqueNetIdRepl& OtherMemberId);
    class AActor* GetMemberAudioActor(const FUniqueNetIdRepl& OtherMemberId);
    FUniqueNetIdRepl GetLocalUserId();
    float GetInputVolume();
    class AActor* GetCustomAudioAnchorPoint();
    class AActor* GetAudioAnchorPoint();
    TArray<FUniqueNetIdRepl> GetAllMemberUserIds();
}; // Size: 0x198

class URedpointVoiceChatServerGameInstanceSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0xE0

class URedpointWidgetReferenceList : public UPrimaryDataAsset
{
    TArray<FSoftClassPath> WidgetClasses;                                             // 0x0030 (size: 0x10)

    void RegisterWithAssetManager();
}; // Size: 0x40

#endif
