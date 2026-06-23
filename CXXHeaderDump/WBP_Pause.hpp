#ifndef UE4SS_SDK_WBP_Pause_HPP
#define UE4SS_SDK_WBP_Pause_HPP

class UWBP_Pause_C : public UUINavWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_VoiceChat;                      // 0x04F8 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_Settings;                       // 0x0500 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_BackToHome;                     // 0x0508 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_BackGame;                       // 0x0510 (size: 0x8)
    class ABP_FirstPersonGameMode_C* As BP First Person Game Mode;                    // 0x0518 (size: 0x8)
    class UBPGI_Main_C* As BP UI Global;                                              // 0x0520 (size: 0x8)
    FWBP_Pause_CReturnEvent ReturnEvent;                                              // 0x0528 (size: 0x10)
    void ReturnEvent();

    class UUINavComponent* GetInitialFocusComponent();
    void OnDestroySessionComplete_E73CF3A14099BA1780F00197E2D8169E(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_E73CF3A14099BA1780F00197E2D8169E(FName SessionName, bool bWasSuccessful);
    void Construct();
    void OnInitialized();
    void BndEvt__WBP_Pause_LongTapButton_BackGame_K2Node_ComponentBoundEvent_3_PushEnd__DelegateSignature();
    void BndEvt__WBP_Pause_LongTapButton_BackToHome_K2Node_ComponentBoundEvent_4_PushEnd__DelegateSignature();
    void BndEvt__WBP_Pause_LongTapButton_Settings_K2Node_ComponentBoundEvent_5_PushEnd__DelegateSignature();
    void BndEvt__WBP_Pause_LongTapButton_VoiceChat_K2Node_ComponentBoundEvent_0_PushEnd__DelegateSignature();
    void OnReturn();
    void ExecuteUbergraph_WBP_Pause(int32 EntryPoint);
    void ReturnEvent__DelegateSignature();
}; // Size: 0x538

#endif
