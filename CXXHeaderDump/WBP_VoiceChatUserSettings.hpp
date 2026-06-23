#ifndef UE4SS_SDK_WBP_VoiceChatUserSettings_HPP
#define UE4SS_SDK_WBP_VoiceChatUserSettings_HPP

class UWBP_VoiceChatUserSettings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_ReportContent_C* WBP_ReportContent;                                    // 0x0348 (size: 0x8)
    class UWBP_NavSlider_Penguin_C* WBP_NavSlider_Penguin;                            // 0x0350 (size: 0x8)
    class UTextBlock* UserName;                                                       // 0x0358 (size: 0x8)
    class UTextBlock* PingText;                                                       // 0x0360 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_Kick_1;             // 0x0368 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_Kick;               // 0x0370 (size: 0x8)
    bool UseVoiceChatSettings;                                                        // 0x0378 (size: 0x1)
    FString UserNameString;                                                           // 0x0380 (size: 0x10)

    void OnFinished_1657203944876F75161AA6986A7C9FD9(const FEOSPlayerReportResult& Result);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_VoiceChatUserSettings_WBP_NavSlider_Penguin_K2Node_ComponentBoundEvent_0_OnValueChangedEvent__DelegateSignature();
    void ConstructSetup(class ABP_FirstPersonPlayerState_Online_C* TargetPlayerState);
    void PingCheck();
    void BndEvt__WBP_VoiceChatUserSettings_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_1_PushEnd__DelegateSignature();
    void Report();
    void BndEvt__WBP_VoiceChatUserSettings_LongTapButton_OnAnimation_Kick_1_K2Node_ComponentBoundEvent_2_PushEnd__DelegateSignature();
    void ExecuteUbergraph_WBP_VoiceChatUserSettings(int32 EntryPoint);
}; // Size: 0x390

#endif
