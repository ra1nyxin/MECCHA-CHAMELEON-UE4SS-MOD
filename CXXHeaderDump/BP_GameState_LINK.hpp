#ifndef UE4SS_SDK_BP_GameState_LINK_HPP
#define UE4SS_SDK_BP_GameState_LINK_HPP

class ABP_GameState_LINK_C : public AGameStateBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0308 (size: 0x8)
    int32 CurrentRound;                                                               // 0x0310 (size: 0x4)
    double WeightState;                                                               // 0x0318 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* LinkCharacter;                             // 0x0320 (size: 0x8)
    class UUserWidget* ShopTravel;                                                    // 0x0328 (size: 0x8)
    class UUserWidget* CurrentWidget;                                                 // 0x0330 (size: 0x8)
    class UWBP_announcement_C* AnnounceWidget;                                        // 0x0338 (size: 0x8)
    class UWBP_SortieCount_C* SortieWidget;                                           // 0x0340 (size: 0x8)
    class UWBP_ExitShopCount_C* ExitShopWidget;                                       // 0x0348 (size: 0x8)
    TEnumAsByte<EN_LINK_GamePhase::Type> CurrentGamePhase;                            // 0x0350 (size: 0x1)
    int32 GlobalCoin;                                                                 // 0x0354 (size: 0x4)
    bool Is Night;                                                                    // 0x0358 (size: 0x1)
    TMap<class FString, class UWBP_TaskBlock_C*> TaskWidgets;                         // 0x0360 (size: 0x50)
    FName GameMode;                                                                   // 0x03B0 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* KingCharacter;                             // 0x03B8 (size: 0x8)
    FDateTime StartTime;                                                              // 0x03C0 (size: 0x8)
    FDateTime GoalTime;                                                               // 0x03C8 (size: 0x8)
    bool IsRecordNow;                                                                 // 0x03D0 (size: 0x1)
    int32 CurrentStormLevel;                                                          // 0x03D4 (size: 0x4)
    int32 MaxClearLevel;                                                              // 0x03D8 (size: 0x4)
    int32 ReplicateCurrentRound;                                                      // 0x03DC (size: 0x4)

    void OnRep_CurrentStormLevel();
    void OnRep_GameMode();
    void AddCoin(int32 Value);
    void OnRep_GlobalCoin();
    void UseCoin(int32 UseValue, bool& Rezult);
    void OnRep_WeightState();
    void AddTaskUI(int32 TaskIndex, int32 SumProgress, const FString& Key);
    void ProgressAdd(int32 AddValue, const FString& Key);
    void RemoveTaskWidget(const FString& Key);
    void PhaseTextUpdate(int32 Phase, int32 Time, bool IsOverTime);
    void ReplicateSound(class USoundBase* Sound);
    void ReceiveBeginPlay();
    void ShopLoadingUI(bool State);
    void AddWidget(Global)(TSubclassOf<class UUserWidget> WidgetClass);
    void RemoveWidget(Global)();
    void GameOver();
    void GoToShopUI();
    void GameClerUI();
    void UpdateSortieWieget(int32 AppendPreset, FText Text);
    void PlayStartCinema();
    void ExitShopAreaUpdate(class AActor* Actor, bool State);
    void UpdateExitShopUI(int32 AppendPreset, FText Text);
    void PlayIslandTeleportMovie(int32 Day);
    void SetSortieCounterVisibility(bool State);
    void ShowAnnounce(FText Text, float Duration, int32 TypeIndex);
    void ShowAnnounceLocal(float Duration, int32 TypeIndex, int32 ReplaceValue, class ABP_FirstPersonCharacter_LINK_C* LinkCharacter);
    void CloseAnnounce();
    void StopAllBGM(FName NextTarget);
    void SetTimePhase(bool IsNight);
    void GameClear();
    void GoalAfter(const TArray<class ABP_FirstPersonCharacter_LINK_C*>& GoalMiniPenguinOwners);
    void CinemaManequinAttach(const TArray<class AController*>& Controllers);
    void TimerPopup(int32 TextIndex, int32 AddTime, FString CustomString);
    void SendToText(Server)(FString Text, int32 MessageType);
    void SendToText(Client)(FString Text, int32 MessageType);
    void StormTextUpdate(int32 TextIndex, int32 TextNumber);
    void DeathAnnounce(Server)(class ABP_FirstPersonPlayerState_LINK_C* SourcePlayerStete);
    void DeathAnnounce(Client)(FString playerName);
    void UpdateSessionSettings(int32 Index);
    void UpdateMapSettings(int32 Index, FString OverrideText);
    void SendToText(Local)(FString Text, int32 MessageType);
    void WriteWeeklyRezult(FDateTime StartTime, FDateTime EndTime);
    void ShowKingPopup(Server)();
    void ShowKingPopup(Replicate)(FString TargetName);
    void RevivalAnnounce(Server)(class ABP_FirstPersonPlayerState_LINK_C* SourcePlayerStete);
    void RevivalAnnounce(Client)(FString playerName);
    void SetStormLevel(int32 StormLevel);
    void ExecuteUbergraph_BP_GameState_LINK(int32 EntryPoint);
}; // Size: 0x3E0

#endif
