#ifndef UE4SS_SDK_WBP_ConfigV2_HPP
#define UE4SS_SDK_WBP_ConfigV2_HPP

class UWBP_ConfigV2_C : public UUINavWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UWBP_VoiceChatControlPanel_C* WBP_VoiceChatControlPanel;                    // 0x04F8 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_2;                                            // 0x0500 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_1;                                            // 0x0508 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x0510 (size: 0x8)
    class UWBP_FriendList_C* WBP_FriendList;                                          // 0x0518 (size: 0x8)
    class UWBP_FPSCounter_C* WBP_FPSCounter;                                          // 0x0520 (size: 0x8)
    class UWBP_ConfigSound_C* WBP_ConfigSound;                                        // 0x0528 (size: 0x8)
    class UWBP_ConfigGraphic_C* WBP_ConfigGraphic;                                    // 0x0530 (size: 0x8)
    class UWBP_ConfigGameGeneral_C* WBP_ConfigGameGeneral;                            // 0x0538 (size: 0x8)
    class UWBP_ConfigFAQ_C* WBP_ConfigFAQ;                                            // 0x0540 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x0548 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_VoiceChat;          // 0x0550 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_Sound;              // 0x0558 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_Graphic;            // 0x0560 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_GameGeneral;        // 0x0568 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_FriendList;         // 0x0570 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_FAQ;                // 0x0578 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_BackToLobby;                    // 0x0580 (size: 0x8)
    class UWidget* CurrentSideWidget;                                                 // 0x0588 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LastHoverdButton;                             // 0x0590 (size: 0x8)
    FWBP_ConfigV2_CReturn Return;                                                     // 0x0598 (size: 0x10)
    void Return();

    class UUINavComponent* GetInitialFocusComponent();
    void OnDestroySessionComplete_E994E3BA416B92D5C7D03FB3DBF5BBA1(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_E994E3BA416B92D5C7D03FB3DBF5BBA1(FName SessionName, bool bWasSuccessful);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnReturn();
    void BndEvt__WBP_ConfigV2_LongTapButton_OnAnimation_VoiceChat_K2Node_ComponentBoundEvent_0_PushEnd__DelegateSignature();
    void BndEvt__WBP_ConfigV2_LongTapButton_OnAnimation_Sound_K2Node_ComponentBoundEvent_1_PushEnd__DelegateSignature();
    void BndEvt__WBP_ConfigV2_LongTapButton_OnAnimation_Graphic_K2Node_ComponentBoundEvent_2_PushEnd__DelegateSignature();
    void BndEvt__WBP_ConfigV2_LongTapButton_OnAnimation_GameGeneral_K2Node_ComponentBoundEvent_3_PushEnd__DelegateSignature();
    void BndEvt__WBP_ConfigV2_LongTapButton_BackToLobby_K2Node_ComponentBoundEvent_4_PushEnd__DelegateSignature();
    void BndEvt__WBP_ConfigV2_LongTapButton_OnAnimation_FAQ_K2Node_ComponentBoundEvent_5_PushEnd__DelegateSignature();
    void BndEvt__WBP_ConfigV2_LongTapButton_OnAnimation_FriendList_K2Node_ComponentBoundEvent_7_PushEnd__DelegateSignature();
    void ExecuteUbergraph_WBP_ConfigV2(int32 EntryPoint);
    void Return__DelegateSignature();
}; // Size: 0x5A8

#endif
