#ifndef UE4SS_SDK_WBP_Config_HPP
#define UE4SS_SDK_WBP_Config_HPP

class UWBP_Config_C : public UUINavWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_TextSE;                                           // 0x04F8 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_SettingSlider_Difficulty;                         // 0x0500 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_SettingSlider;                                    // 0x0508 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_SE;                                               // 0x0510 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_MotionBlur;                                       // 0x0518 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_10;                                       // 0x0520 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_9;                                        // 0x0528 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_7;                                        // 0x0530 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_6;                                        // 0x0538 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_5;                                        // 0x0540 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_4;                                        // 0x0548 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_3;                                        // 0x0550 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_2;                                        // 0x0558 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_1;                                        // 0x0560 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem;                                          // 0x0568 (size: 0x8)
    class UWBP_ComboBox_ScreenMode_C* WBP_ComboBox_ScreenMode;                        // 0x0570 (size: 0x8)
    class UWBP_ComboBox_InputDevice_C* WBP_ComboBox_InputDevice;                      // 0x0578 (size: 0x8)
    class UWBP_ComboBox_C* WBP_ComboBox;                                              // 0x0580 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_Brightness;                                       // 0x0588 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_BGM;                                              // 0x0590 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0598 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x05A0 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_Back;                           // 0x05A8 (size: 0x8)
    class ULongTapButton_OnAnimation_C* ApplyButton;                                  // 0x05B0 (size: 0x8)
    class UWidget* Before Widget;                                                     // 0x05B8 (size: 0x8)
    class UBP_ConfigSaveGame_C* As BP Config Save Game;                               // 0x05C0 (size: 0x8)
    class UBPGI_Main_C* As BPGI Main;                                                 // 0x05C8 (size: 0x8)

    class UUINavComponent* GetInitialFocusComponent();
    void ScreenTypeSettingsUpdate();
    void InpActEvt_IA_Pause_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void Show config(class UWidget* BeforeWidget);
    void Construct();
    void UpdateScreenEvent();
    void BndEvt__WBP_Config_ApplyButton_K2Node_ComponentBoundEvent_2_PushEnd__DelegateSignature();
    void BndEvt__WBP_Config_LongTapButton_Back_K2Node_ComponentBoundEvent_1_PushEnd__DelegateSignature();
    void DeleteConfigWidget();
    void ExecuteUbergraph_WBP_Config(int32 EntryPoint);
}; // Size: 0x5D0

#endif
