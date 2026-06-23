#ifndef UE4SS_SDK_MatchmakingMatchmaker_HPP
#define UE4SS_SDK_MatchmakingMatchmaker_HPP

#include "MatchmakingMatchmaker_enums.hpp"

struct FMatchmakerHostConfiguration
{
    FString QueueName;                                                                // 0x0000 (size: 0x10)
    FString TeamCapacities;                                                           // 0x0010 (size: 0x10)
    bool bAllowPartiallyFilledMatches;                                                // 0x0020 (size: 0x1)
    int32 MinimumTeamMemberCountForPartialFill;                                       // 0x0024 (size: 0x4)
    int32 NoCandidatesTimeout;                                                        // 0x0028 (size: 0x4)
    int32 NoCandidatesTimeoutPerEmptySlot;                                            // 0x002C (size: 0x4)
    bool bPrioritizeBalance;                                                          // 0x0030 (size: 0x1)
    FString SkillStatPrefix;                                                          // 0x0038 (size: 0x10)
    bool bUseDedicatedServers;                                                        // 0x0048 (size: 0x1)
    TSoftObjectPtr<UWorld> Map;                                                       // 0x0050 (size: 0x28)
    TSoftClassPtr<AGameModeBase> GameMode;                                            // 0x0078 (size: 0x28)
    TArray<FMatchmakerHostConfigurationAttributeFilter> SessionFilters;               // 0x00A0 (size: 0x10)
    FName BeaconPort;                                                                 // 0x00B0 (size: 0x8)
    TMap<FUniqueNetIdRepl, int32> UserTeamAssignments;                                // 0x00B8 (size: 0x50)

}; // Size: 0x108

struct FMatchmakerHostConfigurationAttributeFilter
{
    FString AttributeName;                                                            // 0x0000 (size: 0x10)
    EMatchmakerHostConfigurationAttributeFilterType AttributeType;                    // 0x0010 (size: 0x1)
    FString AttributeValueString;                                                     // 0x0018 (size: 0x10)
    int64 AttributeValueInt64;                                                        // 0x0028 (size: 0x8)
    float AttributeValueFloat;                                                        // 0x0030 (size: 0x4)
    bool AttributeValueBoolean;                                                       // 0x0034 (size: 0x1)
    EMatchmakerHostConfigurationAttributeFilterComparison Comparison;                 // 0x0035 (size: 0x1)

}; // Size: 0x38

struct FMatchmakerProgressInfo
{
    FName StepName;                                                                   // 0x0000 (size: 0x8)
    FText CurrentStatus;                                                              // 0x0008 (size: 0x10)
    FText CurrentDetail;                                                              // 0x0018 (size: 0x10)
    float CurrentProgress;                                                            // 0x0028 (size: 0x4)
    FDateTime EstimatedTimeOfCompletion;                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FMatchmakerResult
{
    TArray<FMatchmakerResultTeam> Teams;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMatchmakerResultTeam
{
    TMap<int32, FUniqueNetIdRepl> Slots;                                              // 0x0000 (size: 0x50)

}; // Size: 0x50

class AMatchmaker : public AActor
{
    FMatchmakerHostConfiguration HostConfiguration;                                   // 0x0490 (size: 0x108)

    void SetReadyState(const FUniqueNetIdRepl& UserId, bool bIsReady);
    void OnProgress(const FMatchmakerProgressInfo& ProgressInfo);
    void OnError(FString MatchmakingError);
    void OnCancelled();
    void IsMatchmaking(bool& bIsMatchmaking);
    void GetReadyState(const FUniqueNetIdRepl& LocalUserId, const FUniqueNetIdRepl& TargetUserId, bool& bIsReady);
    void GetMatchmakingStatus(const FUniqueNetIdRepl& UserIdRepl, FMatchmakerProgressInfo& ProgressInfo);
}; // Size: 0x598

class ARedpointMatchmakerTeamPlayerStart : public APlayerStart
{
    int32 Team;                                                                       // 0x02D8 (size: 0x4)
    int32 slot;                                                                       // 0x02DC (size: 0x4)

}; // Size: 0x2E0

class UMatchmakerSubmitMatchResults : public UBlueprintAsyncActionBase
{
    FMatchmakerSubmitMatchResultsOnComplete OnComplete;                               // 0x0030 (size: 0x10)
    void MatchmakerSubmitMatchResultsComplete(bool bWasSuccessful);
    class UMatchmakerSubsystem* Subsystem;                                            // 0x0040 (size: 0x8)
    FUniqueNetIdRepl LocalUserId;                                                     // 0x0048 (size: 0x30)
    TArray<float> TeamScores;                                                         // 0x0078 (size: 0x10)

    class UMatchmakerSubmitMatchResults* SubmitMatchResults(class UMatchmakerSubsystem* Subsystem, FUniqueNetIdRepl LocalUserId, TArray<float> TeamScores);
}; // Size: 0x88

class UMatchmakerSubsystem : public UGameInstanceSubsystem
{
    FMatchmakerSubsystemOnComplete OnComplete;                                        // 0x00A0 (size: 0x10)
    void MatchmakerComplete(int32 ControllerIndex, const FUniqueNetIdRepl& UserId, const FMatchmakerResult& Results);

    void GetTeamAndSlotForPlayerOnServer(class APlayerState* TargetPlayerState, bool& Found, int32& Team, int32& slot);
    void GetTeamAndSlotForPlayer(class APlayerController* LocalPlayerController, class APlayerState* TargetPlayerState, bool& Found, int32& Team, int32& slot);
}; // Size: 0xB0

class URedpointMatchmakerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    class APlayerStart* FindMatchmakerTeamPlayerStart(class APlayerState* PlayerState);
    bool AreAllExpectedPlayersConnectedFromMatchmaker(class UGameInstance* GameInstance);
}; // Size: 0x28

class URedpointMatchmakerConfig : public UObject
{
    FString TeamLayoutWithoutMatchmaker;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

class URedpointMatchmakerTeamComponent : public UActorComponent
{
    int32 Team;                                                                       // 0x00C0 (size: 0x4)
    int32 slot;                                                                       // 0x00C4 (size: 0x4)

    int32 GetTeam();
    int32 GetSlot();
}; // Size: 0xD0

#endif
