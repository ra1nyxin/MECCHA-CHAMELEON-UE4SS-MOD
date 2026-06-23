#ifndef UE4SS_SDK_WBP_LINK_MainUI_HPP
#define UE4SS_SDK_WBP_LINK_MainUI_HPP

class UWBP_LINK_MainUI_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* Yellow;                                                         // 0x0348 (size: 0x8)
    class UVerticalBox* WeightBar_Root;                                               // 0x0350 (size: 0x8)
    class UWBP_VoiceChatState_C* WBP_VoiceChatState;                                  // 0x0358 (size: 0x8)
    class UWBP_VoiceChatLists_C* WBP_VoiceChatLists;                                  // 0x0360 (size: 0x8)
    class UWBP_TextChatVisualBox_C* WBP_TextChatVisualBox;                            // 0x0368 (size: 0x8)
    class UWBP_StormInfo_C* WBP_StormInfo;                                            // 0x0370 (size: 0x8)
    class UWBP_StormCountDown_C* WBP_StormCountDown;                                  // 0x0378 (size: 0x8)
    class UWBP_ShortageStamina_C* WBP_ShortageStamina;                                // 0x0380 (size: 0x8)
    class UWBP_PlayerInfoBar_C* WBP_PlayerInfoBar_Weight;                             // 0x0388 (size: 0x8)
    class UWBP_PlayerInfoBar_C* WBP_PlayerInfoBar_Power;                              // 0x0390 (size: 0x8)
    class UWBP_PlayerInfoBar_C* WBP_PlayerInfoBar_Health;                             // 0x0398 (size: 0x8)
    class UWBP_LocalRecord_C* WBP_LocalRecord;                                        // 0x03A0 (size: 0x8)
    class UWBP_LINK_StaminaBar_C* WBP_LINK_StaminaBar;                                // 0x03A8 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x03B0 (size: 0x8)
    class UWBP_ItemSlots_C* WBP_ItemSlots;                                            // 0x03B8 (size: 0x8)
    class UWBP_CurrentWeight_C* WBP_CurrentWeight;                                    // 0x03C0 (size: 0x8)
    class UWBP_CurrentModeInfo_C* WBP_CurrentModeInfo;                                // 0x03C8 (size: 0x8)
    class UWBP_Compass_C* WBP_Compass;                                                // 0x03D0 (size: 0x8)
    class UWBP_CentorCharge_C* WBP_CentorCharge;                                      // 0x03D8 (size: 0x8)
    class UWBP_BaggageStatus_C* WBP_BaggageStatus;                                    // 0x03E0 (size: 0x8)
    class UOverlay* TimerPopupOverlay;                                                // 0x03E8 (size: 0x8)
    class UVerticalBox* TaskBlocks;                                                   // 0x03F0 (size: 0x8)
    class UImage* RevivalImage;                                                       // 0x03F8 (size: 0x8)
    class UTextBlock* Red;                                                            // 0x0400 (size: 0x8)
    class UTextBlock* Plus;                                                           // 0x0408 (size: 0x8)
    class UVerticalBox* PlayerDeathZone;                                              // 0x0410 (size: 0x8)
    class UTextBlock* PhaseText;                                                      // 0x0418 (size: 0x8)
    class UWBP_KeyImage_C* Jump;                                                      // 0x0420 (size: 0x8)
    class URichTextBlock* ItemText_Explain;                                           // 0x0428 (size: 0x8)
    class URichTextBlock* ItemText;                                                   // 0x0430 (size: 0x8)
    class UHorizontalBox* ItemSlot_Root;                                              // 0x0438 (size: 0x8)
    class UImage* Image_82;                                                           // 0x0440 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0448 (size: 0x8)
    class UTextBlock* Green;                                                          // 0x0450 (size: 0x8)
    class UHorizontalBox* GhostMode;                                                  // 0x0458 (size: 0x8)
    class UWBP_KeyImage_C* Crouch;                                                    // 0x0460 (size: 0x8)
    class UTextBlock* CoinText;                                                       // 0x0468 (size: 0x8)
    class UHorizontalBox* CoinInfo_Root;                                              // 0x0470 (size: 0x8)
    class UOverlay* AddCoinPopup;                                                     // 0x0478 (size: 0x8)
    class ABP_FirstPersonPlayerState_LINK_C* As BP First Person Player State LINK;    // 0x0480 (size: 0x8)
    int32 BeforeCoinValue;                                                            // 0x0488 (size: 0x4)
    class UBPGI_Main_C* As BPGI Main;                                                 // 0x0490 (size: 0x8)

    void SlotTextUpdate(const FCPP_GameItemData& CPP_GameItemData);
    void AddTaskBlock(FText TaskText, int32 SumProgress, class UWBP_TaskBlock_C*& CreatedWidget);
    void UpdateSlotStackData(int32 TargetIndex, int32 StackCount);
    void SetStaminaValue(double NewValue);
    void SetBarValue(TEnumAsByte<EN_LINK_PlayerStateValueType::Type> ValueName, double Value);
    void UpdateSlotData(int32 TargetIndex, FCPP_GameItemData ItemData);
    void SelectSlotUpdate(int32 Index);
    void AddTimerPopup(int32 TextIndex, int32 AddTime, FString CustomString);
    void ChangeSpectateUI(bool IsSpectate);
    void AddPlayerDeathUI(FString playerName);
    void SetNormalizeRevivalValue(double Value);
    void SetCoinValue(int32 Value);
    void AddPlayerRevivalUI(FString playerName);
    void Construct();
    void SetPhaseText(int32 Phase, int32 Time, bool IsOverTime);
    void PreConstruct(bool IsDesignTime);
    void SetCurrentWeight(double WeightValue);
    void ExecuteUbergraph_WBP_LINK_MainUI(int32 EntryPoint);
}; // Size: 0x498

#endif
