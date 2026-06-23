#ifndef UE4SS_SDK_WBP_ConfigGraphic_HPP
#define UE4SS_SDK_WBP_ConfigGraphic_HPP

class UWBP_ConfigGraphic_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_SettingSliderFPS_C* WBP_SettingSliderFPS;                              // 0x0348 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_MotionBlur;                                       // 0x0350 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_9;                                        // 0x0358 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_7;                                        // 0x0360 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_6;                                        // 0x0368 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_5;                                        // 0x0370 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_4;                                        // 0x0378 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_3;                                        // 0x0380 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_2;                                        // 0x0388 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem_1;                                        // 0x0390 (size: 0x8)
    class UWBP_ComboBox_ScreenMode_C* WBP_ComboBox_ScreenMode;                        // 0x0398 (size: 0x8)
    class UWBP_ComboBox_C* WBP_ComboBox;                                              // 0x03A0 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_Brightness;                                       // 0x03A8 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x03B0 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x03B8 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation;                    // 0x03C0 (size: 0x8)
    class UWidget* Before Widget;                                                     // 0x03C8 (size: 0x8)
    class UBP_ConfigSaveGame_C* As BP Config Save Game;                               // 0x03D0 (size: 0x8)
    class UBPGI_Main_C* As BPGI Main;                                                 // 0x03D8 (size: 0x8)

    void ScreenTypeSettingsUpdate();
    void UpdateScreenEvent();
    void Construct();
    void DeleteConfigWidget();
    void ApplySettings();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ConfigGraphic_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_0_PushEnd__DelegateSignature();
    void BndEvt__WBP_ConfigGraphic_WBP_Brightness_K2Node_ComponentBoundEvent_1_UpdateSettingValue__DelegateSignature();
    void BndEvt__WBP_ConfigGraphic_WBP_MotionBlur_K2Node_ComponentBoundEvent_2_UpdateSettingValue__DelegateSignature();
    void ExecuteUbergraph_WBP_ConfigGraphic(int32 EntryPoint);
}; // Size: 0x3E0

#endif
