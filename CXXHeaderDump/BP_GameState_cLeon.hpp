#ifndef UE4SS_SDK_BP_GameState_cLeon_HPP
#define UE4SS_SDK_BP_GameState_cLeon_HPP

class ABP_GameState_cLeon_C : public AGameStateBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UBPC_TextChatControl_C* BPC_TextChatControl;                                // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    TEnumAsByte<EN_cLeonGamePhase::Type> CurrentGamePhase;                            // 0x0318 (size: 0x1)
    class ABP_PlayerController_cLeon_C* LocalPlayerController;                        // 0x0320 (size: 0x8)
    TArray<class ABP_PlayerController_cLeon_C*> Survivors;                            // 0x0328 (size: 0x10)
    TArray<class ABP_PlayerController_cLeon_C*> Hunters;                              // 0x0338 (size: 0x10)
    TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*> LiveSurvivors_PlayerState; // 0x0348 (size: 0x10)
    TArray<class ABP_PlayerController_cLeon_C*> LiveSurvivors_Controller;             // 0x0358 (size: 0x10)
    class UWBP_cLeonGame_Common_C* CurrentCommonWidget;                               // 0x0368 (size: 0x8)
    FBP_GameState_cLeon_CTimerNumberChange TimerNumberChange;                         // 0x0370 (size: 0x10)
    void TimerNumberChange(int32 Number);
    FBP_GameState_cLeon_CTimerTextChange TimerTextChange;                             // 0x0380 (size: 0x10)
    void TimerTextChange(int32 TextIndex);
    int32 TimerNumber;                                                                // 0x0390 (size: 0x4)
    int32 TimerTextIndex;                                                             // 0x0394 (size: 0x4)
    int32 MaxTimerTime;                                                               // 0x0398 (size: 0x4)
    TEnumAsByte<EN_cLeonGameMode::Type> GameMode;                                     // 0x039C (size: 0x1)
    TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*> HuntersPlayerState;      // 0x03A0 (size: 0x10)
    FBP_GameState_cLeon_CRemainCountChange RemainCountChange;                         // 0x03B0 (size: 0x10)
    void RemainCountChange(int32 RemainCount);
    int32 ForceProvocationInverval;                                                   // 0x03C0 (size: 0x4)
    bool Filter_Monochrome;                                                           // 0x03C4 (size: 0x1)
    bool Filter_Mosaic;                                                               // 0x03C5 (size: 0x1)
    bool Filter_Horror;                                                               // 0x03C6 (size: 0x1)
    TArray<class UBP_cLeonMapData_C*> MapDatas;                                       // 0x03C8 (size: 0x10)
    int32 MapIndex;                                                                   // 0x03D8 (size: 0x4)
    class UWBP_DoubleRanking_C* RankingWidget;                                        // 0x03E0 (size: 0x8)
    FBP_GameState_cLeon_CGameModeIndexUpdate GameModeIndexUpdate;                     // 0x03E8 (size: 0x10)
    void GameModeIndexUpdate(int32 Index);
    FBP_GameState_cLeon_CHunterNumChange HunterNumChange;                             // 0x03F8 (size: 0x10)
    void HunterNumChange(int32 HunterNum);
    FBP_GameState_cLeon_CGamePhaseChange GamePhaseChange;                             // 0x0408 (size: 0x10)
    void GamePhaseChange(TEnumAsByte<EN_cLeonMainGamePhase::Type> MainGamePhase);
    TEnumAsByte<EN_cLeonMainGamePhase::Type> MainGamePhase;                           // 0x0418 (size: 0x1)
    FBP_GameState_cLeon_CShowFilledWidget ShowFilledWidget;                           // 0x0420 (size: 0x10)
    void ShowFilledWidget();
    TMap<ABP_FirstPersonPlayerState_Online_cLeon_C*, int32> LookState;                // 0x0430 (size: 0x50)
    FBP_GameState_cLeon_CUpdateWatchRanking UpdateWatchRanking;                       // 0x0480 (size: 0x10)
    void UpdateWatchRanking(const TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& PlayerStates, const TArray<int32>& Points, int32 UpdateTime);
    FBP_GameState_cLeon_CAddPointpopup AddPointpopup;                                 // 0x0490 (size: 0x10)
    void AddPointpopup(class ABP_FirstPersonPlayerState_Online_C* TargetPlayer, class ABP_FirstPersonPlayerState_Online_cLeon_C* SourcePlayer, int32 PointValue);
    int32 UpdateTime;                                                                 // 0x04A0 (size: 0x4)
    FST_cLeonMapData CurrentMapData;                                                  // 0x04A8 (size: 0x18)
    bool MapDataLayers;                                                               // 0x04C0 (size: 0x1)
    TArray<FST_cLeonMapData> DefaultMapDatas;                                         // 0x04C8 (size: 0x10)
    TArray<FST_cLeonMapData> ModMapDatas;                                             // 0x04D8 (size: 0x10)
    FST_cLeonMapData CurrentPreviewMapData;                                           // 0x04E8 (size: 0x18)
    FString NeedModId;                                                                // 0x0500 (size: 0x10)
    class UWBP_ModQueueAll_C* ModQueue;                                               // 0x0510 (size: 0x8)
    FBP_GameState_cLeon_CModComplete ModComplete;                                     // 0x0518 (size: 0x10)
    void ModComplete();
    bool CanHunterShowWatchRanking;                                                   // 0x0528 (size: 0x1)
    TArray<FST_cLeonSurvivorVariation> SurvivorVariations;                            // 0x0530 (size: 0x10)

    void OnRep_NeedModId();
    void ModStateUpdate();
    void GetAllMapDatas(TArray<FST_cLeonMapData>& ReturnMapArray);
    void OnRep_MainGamePhase();
    void OnRep_HuntersPlayerState();
    void OnRep_GameMode();
    void GetDoubleRanking(TMap<ABP_FirstPersonCharacter_cLeon_Character_Hunter_C*, int32>& ReturnMap);
    void OnRep_Filter_Monochrome();
    void OnRep_Filter_Mosaic();
    void OnRep_Filter_Horror();
    void InitPlayerState();
    void SetTimerTextIndex(int32 TimerTextIndex);
    void SetMaxTimerTime(int32 MaxTimerTime);
    void SetTimerNumber(int32 TimerNumber);
    void OnRep_TimerTextIndex();
    void OnRep_TimerNumber();
    void OnRep_LiveSurvivors_PlayerState();
    void IsLivePlayerState(const class ABP_FirstPersonPlayerState_Online_cLeon_C*& ItemToFind, bool& IsLive);
    void ReceiveBeginPlay();
    void ShowPopup(Client)(int32 PopupIndex);
    void ShowPopup(Local)(int32 PopupIndex);
    void CountUIReset();
    void Winner(class ABP_FirstPersonPlayerState_Online_C* WinnerPlayerState);
    void UpdateRanking();
    void RankingWidgetUpdate(bool IsShow);
    void KillLog(class ABP_FirstPersonPlayerState_Online_cLeon_C* HunterPlayerState, class ABP_FirstPersonPlayerState_Online_cLeon_C* SurvivorPlayerState);
    void ShowAllSurvivors();
    void AllHunterStencilOff();
    void GameEndSurvivorStop();
    void ShowDeathWidget(class APlayerState* TargetPlayerState);
    void PlayTeleportMovie();
    void AddToViewDatas(class ABP_FirstPersonPlayerState_Online_cLeon_C* SourcePlayerState, const TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& PlayerStates, const TArray<int32>& Points);
    void SyncRankning(Client)(const TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& PlayerStates, const TArray<int32>& NewPoints, int32 UpdateTime);
    void SyncRanking(Server)();
    void SetSyncRankingLoopState(bool State);
    void UpdateSend();
    void ClearWatchRanking();
    void ShowPointAddPopup(class ABP_FirstPersonPlayerState_Online_cLeon_C* TargetPlayerState, class ABP_FirstPersonPlayerState_Online_cLeon_C* SourcePlayerState, int32 Point);
    void ModDownloadWait();
    void ForceStart();
    void ForceModeWidgetReset();
    void Complete();
    void EEYAN_Activate();
    void ExecuteUbergraph_BP_GameState_cLeon(int32 EntryPoint);
    void ModComplete__DelegateSignature();
    void AddPointpopup__DelegateSignature(class ABP_FirstPersonPlayerState_Online_C* TargetPlayer, class ABP_FirstPersonPlayerState_Online_cLeon_C* SourcePlayer, int32 PointValue);
    void UpdateWatchRanking__DelegateSignature(const TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& PlayerStates, const TArray<int32>& Points, int32 UpdateTime);
    void ShowFilledWidget__DelegateSignature();
    void GamePhaseChange__DelegateSignature(TEnumAsByte<EN_cLeonMainGamePhase::Type> MainGamePhase);
    void HunterNumChange__DelegateSignature(int32 HunterNum);
    void GameModeIndexUpdate__DelegateSignature(int32 Index);
    void RemainCountChange__DelegateSignature(int32 RemainCount);
    void TimerTextChange__DelegateSignature(int32 TextIndex);
    void TimerNumberChange__DelegateSignature(int32 Number);
}; // Size: 0x540

#endif
