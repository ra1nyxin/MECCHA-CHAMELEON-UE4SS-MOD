#ifndef UE4SS_SDK_BP_FirstPersonGameMode_Online_LINK_HPP
#define UE4SS_SDK_BP_FirstPersonGameMode_Online_LINK_HPP

class ABP_FirstPersonGameMode_Online_LINK_C : public ABP_FirstPersonGameMode_V2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class UBPGI_Main_C* BPGI Main;                                                    // 0x03C0 (size: 0x8)
    class ABP_GameState_LINK_C* BP Game State LINK;                                   // 0x03C8 (size: 0x8)
    class ABP_TeleportPoints_C* ShopTeleportPoints;                                   // 0x03D0 (size: 0x8)
    TMap<class AController*, class FName> UserStates;                                 // 0x03D8 (size: 0x50)
    int32 LobbyPhase;                                                                 // 0x0428 (size: 0x4)
    int32 ShopPhase;                                                                  // 0x042C (size: 0x4)
    double StartTimerDefualtValue;                                                    // 0x0430 (size: 0x8)
    double DaySeconds;                                                                // 0x0438 (size: 0x8)
    double CurrentDaySeconds;                                                         // 0x0440 (size: 0x8)
    double CurrentTimerValue;                                                         // 0x0448 (size: 0x8)
    double DayTimerUpdateInverval;                                                    // 0x0450 (size: 0x8)
    FRandomStream GenerateMapSeed;                                                    // 0x0458 (size: 0x8)
    TArray<FRandomStream> GenerateMapSeedArray;                                       // 0x0460 (size: 0x10)
    TArray<class UBP_LevelPriset_C*> SpawnLevelPrisets;                               // 0x0470 (size: 0x10)
    FBP_FirstPersonGameMode_Online_LINK_COnGoal OnGoal;                               // 0x0480 (size: 0x10)
    void OnGoal();
    TArray<int32> RemainId;                                                           // 0x0490 (size: 0x10)
    int32 MaxColorIndex;                                                              // 0x04A0 (size: 0x4)
    int32 CurrentSpawnPointNum;                                                       // 0x04A4 (size: 0x4)
    int32 CurrentLinkNum;                                                             // 0x04A8 (size: 0x4)
    TArray<class ABP_LinkGoalPosition_C*> LastGoalTargets;                            // 0x04B0 (size: 0x10)
    int32 CurrentLastGoalNumber;                                                      // 0x04C0 (size: 0x4)
    int32 CurrentTimer;                                                               // 0x04C4 (size: 0x4)
    int32 CurrentPhase;                                                               // 0x04C8 (size: 0x4)
    bool IsOverTime;                                                                  // 0x04CC (size: 0x1)
    TMap<int32, int32> PhaseTimer;                                                    // 0x04D0 (size: 0x50)
    int32 ModeLevel;                                                                  // 0x0520 (size: 0x4)
    FName StartGameMode;                                                              // 0x0524 (size: 0x8)

    void KingVisualUpdate();
    void SelectKing();
    void GiveDefaultItem();
    void AddCoinAllPlayers(int32 AddValue);
    void RemoveAllTasks();
    void IsAllTaskClear(bool& IsAllClear);
    void GetLiveAndDeathPlayers(TArray<class ABP_FirstPersonCharacter_Main_C*>& LiveCharacters, TArray<class ABP_FirstPersonCharacter_Main_C*>& DeathCharacters);
    void UserStateClean();
    void UpdateGoalPointCount();
    void GetGoalPointCount(int32& PointNum);
    void CanLinkCheck(bool& Rezult);
    void ItemAllClear();
    void CheckGoalMiniPenguins(TArray<class ABP_FirstPersonCharacter_LINK_C*>& GoalMiniOwnersArray);
    void ShowAnnounce(int32 TextIndex, bool LastAnnounce);
    void BodyIdReset();
    int32 GetRandomBodyId();
    void SetMiniPenguinWeight(double Weight);
    void AllPlayerStateReset();
    void GetGamePhase(TEnumAsByte<EN_LINK_GamePhase::Type>& CurrentGamePhase);
    void RemoveMap();
    void GenerateMap(int32 Level);
    void UnZipAll();
    void SetGamePhase(TEnumAsByte<EN_LINK_GamePhase::Type> GamePhase);
    void TeleportPlayers(FName TargetPositionName);
    void GetTargetStateUsers(FName TargetName, TArray<class AController*>& GetControllers);
    void SetCurrentPlayerNum();
    void OnRequestComplete_596ADE20A86B39499222CE49C139BEF3(FString Response, bool bSuccessful, FHttpHeader OutHeader);
    void OnRequestComplete_04685BE662ED3B24A6652AE4019A5EE2(FString Response, bool bSuccessful, FHttpHeader OutHeader);
    void OnJoinSessionComplete_69EDB86241BB277C5E43CEB754903A82(FName SessionName, EOnJoinSessionCompleteResult_ Result);
    void OnCallFailed_69EDB86241BB277C5E43CEB754903A82(FName SessionName, EOnJoinSessionCompleteResult_ Result);
    void OnUpdateSessionComplete_0015FF304852112AC6F85EB1B4FD7C13(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_0015FF304852112AC6F85EB1B4FD7C13(FName SessionName, bool bWasSuccessful);
    void StormStart();
    void IgrooGoalEvent();
    void PhaseTaskStart(int32 Phase);
    void TaskClear();
    void DayStart();
    void TimeChange();
    void ResetDayCycle();
    void PhaseStart(int32 PhaseNumber, int32 PhaseTime);
    void MoveTime();
    void PhaseTimerClear();
    void TimeAdd(int32 TextIndex, int32 AddValue, FString CustomString);
    void StateUpdate(class AController* Controller, FName StateName);
    void RemoveCurrentGame(class AController* Controller);
    void StateCheck();
    void CountOut();
    void GameOver();
    void ReceiveBeginPlay();
    void MemberJoin(const FUniqueNetIdRepl& LocalUserId, class UPartyId* PartyId, const FUniqueNetIdRepl& MemberId);
    void OnSessionUserInviteAccepted(bool bWasSuccessful, int32 ControllerId, const FUniqueNetIdRepl& UserId, const FOnlineSessionSearchResultBP& InviteResult);
    void TravelMap();
    void LogicStart();
    void Goal(int32 PenguinCounet);
    void GoToWork();
    void Freeze(class ABP_FirstPersonCharacter_Main_C* Character);
    void K2_PostLogin(class APlayerController* NewPlayer);
    void Spawn(class AController* Controller);
    void K2_OnLogout(class AController* ExitingController);
    void UpdateSpawnContllers();
    void GameStartWait();
    void ReGenerateMap(int32 Level);
    void BackToLobby();
    void LastPhaseStart();
    void LastGoal();
    void GameClear();
    void UpdateCanJoin(bool State);
    void SetClearTime();
    void ClearStateUpdate();
    void QuickForceStart();
    void Countdown();
    void UpdateOverlapingPlayers();
    void OnUpdateOverlapingPlayers(int32 Length);
    void UpdateShopUI();
    void OverlapShopPlayers(int32 Length);
    void ExecuteUbergraph_BP_FirstPersonGameMode_Online_LINK(int32 EntryPoint);
    void OnGoal__DelegateSignature();
}; // Size: 0x52C

#endif
