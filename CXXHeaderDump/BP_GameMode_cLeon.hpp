#ifndef UE4SS_SDK_BP_GameMode_cLeon_HPP
#define UE4SS_SDK_BP_GameMode_cLeon_HPP

class ABP_GameMode_cLeon_C : public ABP_FirstPersonGameMode_V2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    class ABP_CountZone_cLeon_C* HunterCountZone;                                     // 0x03C0 (size: 0x8)
    class ABP_CountZone_cLeon_C* SurvivorCountZone;                                   // 0x03C8 (size: 0x8)
    int32 StartWaitTimeDefault;                                                       // 0x03D0 (size: 0x4)
    int32 CurrentTimer;                                                               // 0x03D4 (size: 0x4)
    int32 StartWaitTime;                                                              // 0x03D8 (size: 0x4)
    class ABP_GameState_cLeon_C* BP_GameState_cLeon;                                  // 0x03E0 (size: 0x8)
    int32 TimerDefault;                                                               // 0x03E8 (size: 0x4)
    int32 MaxHunterNum;                                                               // 0x03EC (size: 0x4)
    class ABP_cLeonHunterLotteryArea_C* LotteryArea;                                  // 0x03F0 (size: 0x8)
    int32 HunterWaitTimeDefault;                                                      // 0x03F8 (size: 0x4)
    int32 HunterWaitTime;                                                             // 0x03FC (size: 0x4)
    int32 CheckAnswersTimeDefault;                                                    // 0x0400 (size: 0x4)
    int32 CheckAnswersTime;                                                           // 0x0404 (size: 0x4)
    FName CurrentPhase;                                                               // 0x0408 (size: 0x8)
    int32 GameModeIndex;                                                              // 0x0410 (size: 0x4)
    bool CanOpenOption;                                                               // 0x0414 (size: 0x1)
    double BodyChangeDelay;                                                           // 0x0418 (size: 0x8)
    int32 TestInt;                                                                    // 0x0420 (size: 0x4)
    int32 CurrentGameMapIndex;                                                        // 0x0424 (size: 0x4)
    bool CanModMap;                                                                   // 0x0428 (size: 0x1)
    bool IsModUse;                                                                    // 0x0429 (size: 0x1)
    TSubclassOf<class ABP_FirstPersonCharacter_cLeon_Character_Survivor_C> SurvivorClass; // 0x0430 (size: 0x8)

    void GetMapIndex(int32& SelectMapIndex, class UBP_cLeonMapData_C*& SelectMapDatas, int32& GameMapIndex, class UBP_cLeonMapData_C*& GameMapDatas);
    void GetDoubleWinnerPlayer(class ABP_FirstPersonCharacter_cLeon_Character_Hunter_C*& WinnerPlayerActor);
    void SetFoundTarget();
    void GetGameModeIndex(int32& GameModeIndex);
    void GetCheckAnswersTime(int32& CheckAnswersTime);
    void GetHunterWaitTime(int32& HunterWaitTime);
    void GetMaxHunterNum(int32& MaxHunterNum);
    void GetGameTime(int32& TimerDefault);
    void SetGameModeIndex(int32 GameModeIndex);
    void SetMapIndex(int32 MapIndex);
    void SetCheckAnswersTime(int32 CheckAnswersTime);
    void SetHunterWaitTime(int32 HunterWaitTime);
    void SetMaxHunterNum(int32 MaxHunterNum);
    void SetGameTime(int32 TimerDefault);
    void ControllerArrayToPlayerState(TArray<class ABP_PlayerController_cLeon_C*>& PlayerController, TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& PlayerStateArray);
    void GameStateCheck(bool& IsGameEnd, FName& WinnerRole);
    void RemoveGamePlayer(bool IsLogout, class AController* Controller);
    void IsEndGame();
    void BodyChange(TEnumAsByte<EN_cLeonBodyType::Type> TargetBody, class ABP_PlayerController_cLeon_C* TargetController, const FTransform& OverrideSpawnTransform, bool KeepBody, bool BodyVisibility, class ABP_FirstPersonCharacter_cLeon_Character_C*& CreateCharacter);
    void ReceiveBeginPlay();
    void StartGameCheck();
    void GameStartWait();
    void GameStart();
    void SetRole(Basic)();
    void RoleTeleportSurvivor(bool BodyVisibility);
    void K2_OnLogout(class AController* ExitingController);
    void TimerMinus();
    void GameEnd();
    void TeleportLobby();
    void GameEndCheck();
    void CountDownStart();
    void HunterWaitTimerMinus();
    void GameTimerClear();
    void TeleportHunter();
    void CheckAnswerTimeMinus();
    void StartCheckAnswers(bool IsHunterWin);
    void KillPlayer(class ABP_FirstPersonCharacter_cLeon_Character_C* FirstPersonCharacter, class ABP_FirstPersonPlayerState_C* SourcePlayerState);
    void SetRole(Double)();
    void RoleTeleportDouble_1();
    void RoleTeleportDouble_2();
    void SurvivorToHunter(class ABP_PlayerController_cLeon_C* TargetController);
    void K2_PostLogin(class APlayerController* NewPlayer);
    void K2_OnRestartPlayer(class AController* NewPlayer);
    void ModComplete();
    void ExecuteUbergraph_BP_GameMode_cLeon(int32 EntryPoint);
}; // Size: 0x438

#endif
