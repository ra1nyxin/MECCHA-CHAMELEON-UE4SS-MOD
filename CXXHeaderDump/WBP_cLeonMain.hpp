#ifndef UE4SS_SDK_WBP_cLeonMain_HPP
#define UE4SS_SDK_WBP_cLeonMain_HPP

class UWBP_cLeonMain_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWrapBox* WrapBox_Survivor;                                                 // 0x0348 (size: 0x8)
    class UWrapBox* WrapBox_Hunter;                                                   // 0x0350 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBPCompressTextBlock_Filled;                      // 0x0358 (size: 0x8)
    class UWBP_VoiceChatState_C* WBP_VoiceChatState;                                  // 0x0360 (size: 0x8)
    class UWBP_TextChatVisualBox_C* WBP_TextChatVisualBox;                            // 0x0368 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_12;                                           // 0x0370 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_11;                                           // 0x0378 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_10;                                           // 0x0380 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_9;                                            // 0x0388 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_8;                                            // 0x0390 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_7;                                            // 0x0398 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_6;                                            // 0x03A0 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_5;                                            // 0x03A8 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_4;                                            // 0x03B0 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_3;                                            // 0x03B8 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_2;                                            // 0x03C0 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_1;                                            // 0x03C8 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_0;                                            // 0x03D0 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x03D8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_ModeExplainMain;            // 0x03E0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_GameModeExplain;            // 0x03E8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_75;                         // 0x03F0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_13;                         // 0x03F8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_12;                         // 0x0400 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_11;                         // 0x0408 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_10;                         // 0x0410 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_9;                          // 0x0418 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_8;                          // 0x0420 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_7;                          // 0x0428 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_6;                          // 0x0430 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_5;                          // 0x0438 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_4;                          // 0x0440 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_2;                          // 0x0448 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_1;                          // 0x0450 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_0;                          // 0x0458 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x0460 (size: 0x8)
    class UWBP_cLeonToggleSwitch_C* WBP_cLeonToggleSwitchPenteration;                 // 0x0468 (size: 0x8)
    class UWBP_cLeonToggleSwitch_C* WBP_cLeonToggleSwitchNameplate;                   // 0x0470 (size: 0x8)
    class UVerticalBox* WatchRankingContent;                                          // 0x0478 (size: 0x8)
    class UVerticalBox* WatchRankingAll;                                              // 0x0480 (size: 0x8)
    class UHorizontalBox* WatchHideTarget;                                            // 0x0488 (size: 0x8)
    class UTextBlock* TimerText;                                                      // 0x0490 (size: 0x8)
    class UVerticalBox* StartFreeCamera;                                              // 0x0498 (size: 0x8)
    class UImage* Reticle;                                                            // 0x04A0 (size: 0x8)
    class UHorizontalBox* RemainPlayersCount;                                         // 0x04A8 (size: 0x8)
    class UTextBlock* RemainCounter;                                                  // 0x04B0 (size: 0x8)
    class UTextBlock* ProvocationTimerText;                                           // 0x04B8 (size: 0x8)
    class UVerticalBox* Provocation_2;                                                // 0x04C0 (size: 0x8)
    class UVerticalBox* Provocation_1;                                                // 0x04C8 (size: 0x8)
    class UVerticalBox* Provocation;                                                  // 0x04D0 (size: 0x8)
    class UVerticalBox* ProvacationContent;                                           // 0x04D8 (size: 0x8)
    class UHorizontalBox* ProvacationBox;                                             // 0x04E0 (size: 0x8)
    class UHorizontalBox* PoseWidget;                                                 // 0x04E8 (size: 0x8)
    class UTextBlock* PlayerCountTextMain;                                            // 0x04F0 (size: 0x8)
    class UTextBlock* PlayerCountTextCounter;                                         // 0x04F8 (size: 0x8)
    class UTextBlock* NextUpdateNumber;                                               // 0x0500 (size: 0x8)
    class UVerticalBox* NextupdateAll;                                                // 0x0508 (size: 0x8)
    class UTextBlock* NextUpdate;                                                     // 0x0510 (size: 0x8)
    class UTextBlock* ModState;                                                       // 0x0518 (size: 0x8)
    class UTextBlock* MaintText;                                                      // 0x0520 (size: 0x8)
    class UVerticalBox* LostViewPopupArea;                                            // 0x0528 (size: 0x8)
    class UImage* Image_250;                                                          // 0x0530 (size: 0x8)
    class UImage* Image_100;                                                          // 0x0538 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0540 (size: 0x8)
    class UImage* Image;                                                              // 0x0548 (size: 0x8)
    class UImage* Hourglass;                                                          // 0x0550 (size: 0x8)
    class UVerticalBox* GameStartWaitWidgets;                                         // 0x0558 (size: 0x8)
    class UVerticalBox* GameModeExplain;                                              // 0x0560 (size: 0x8)
    class UVerticalBox* EEYAN_Box;                                                    // 0x0568 (size: 0x8)
    class UHorizontalBox* CrouchStart;                                                // 0x0570 (size: 0x8)
    class UHorizontalBox* CrouchEnd;                                                  // 0x0578 (size: 0x8)
    class UHorizontalBox* CrouchAll;                                                  // 0x0580 (size: 0x8)
    class UHorizontalBox* ClimbUp;                                                    // 0x0588 (size: 0x8)
    class UHorizontalBox* ClimbingStart_1;                                            // 0x0590 (size: 0x8)
    class UHorizontalBox* ClimbingStart;                                              // 0x0598 (size: 0x8)
    class UHorizontalBox* ClimbEnd;                                                   // 0x05A0 (size: 0x8)
    class UHorizontalBox* ClimbDown;                                                  // 0x05A8 (size: 0x8)
    class UHorizontalBox* ClimbAll;                                                   // 0x05B0 (size: 0x8)
    class UWidgetAnimation* RotateHourglass;                                          // 0x05B8 (size: 0x8)
    class UWidgetAnimation* NumberMove;                                               // 0x05C0 (size: 0x8)
    class UWidgetAnimation* RemainCountAnim;                                          // 0x05C8 (size: 0x8)
    class UWidgetAnimation* CantStand;                                                // 0x05D0 (size: 0x8)
    class UWidgetAnimation* MainBGM;                                                  // 0x05D8 (size: 0x8)
    class UWidgetAnimation* LoopFilled;                                               // 0x05E0 (size: 0x8)
    class ABP_GameState_cLeon_C* As BP Game State C Leon;                             // 0x05E8 (size: 0x8)
    class UMaterialInstanceDynamic* HourglassMaterial;                                // 0x05F0 (size: 0x8)
    int32 PreTextValue;                                                               // 0x05F8 (size: 0x4)
    bool IsSearchMode;                                                                // 0x05FC (size: 0x1)
    bool WatchRankingVisibility;                                                      // 0x05FD (size: 0x1)

    void SetPlayerPinImage(int32 ImageNum, bool IsHunter, class UPanelWidget* WrapBox);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetWaitWidgetText(int32 TextIndex, int32 AreaInPlayerNum, int32 PlayerNum);
    void TimerTextUpdate(int32 Time);
    void TimerNumberChange(int32 Number);
    void TimerTextChange(int32 TextIndex);
    void Set();
    void IsHunter(bool Hunter);
    void RemainCountChange(int32 RemainCount);
    void CantStandPopup();
    void ClimbingState(bool State);
    void GameModeIndexUpdate(int32 Index);
    void HunterNumChange(int32 HunterNum);
    void GamePhaseChange(TEnumAsByte<EN_cLeonMainGamePhase::Type> MainGamePhase);
    void CanPenterationUpdate(bool IsCanPenteration);
    void NamePlateVisibilityChange(bool Visibility);
    void ShowFilledWidget();
    void VisibilityReset();
    void UpdateWatchRanking(const TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& PlayerStates, const TArray<int32>& Points, int32 UpdateTime);
    void AddPointpopup(class ABP_FirstPersonPlayerState_Online_C* TargetPlayer, class ABP_FirstPersonPlayerState_Online_cLeon_C* SourcePlayer, int32 PointValue);
    void SetWatchRankingVisibility(bool Visibility);
    void eeyan(FString Name);
    void ExecuteUbergraph_WBP_cLeonMain(int32 EntryPoint);
}; // Size: 0x5FE

#endif
