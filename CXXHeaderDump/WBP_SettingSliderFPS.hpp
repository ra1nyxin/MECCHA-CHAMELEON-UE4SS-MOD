#ifndef UE4SS_SDK_WBP_SettingSliderFPS_HPP
#define UE4SS_SDK_WBP_SettingSliderFPS_HPP

class UWBP_SettingSliderFPS_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_NavSlider_Penguin_C* WBP_NavSlider_Penguin;                            // 0x0348 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0350 (size: 0x8)
    FWBP_SettingSliderFPS_CUpdateScreenSetting UpdateScreenSetting;                   // 0x0358 (size: 0x10)
    void UpdateScreenSetting();
    bool ConstructEnd;                                                                // 0x0368 (size: 0x1)

    void ApplySetting();
    void BndEvt__WBP_SettingSlider_WBP_NavSlider_Penguin_K2Node_ComponentBoundEvent_4_OnValueChangedEvent__DelegateSignature();
    void Construct();
    void BndEvt__WBP_SettingSliderFPS_WBP_NavSlider_Penguin_K2Node_ComponentBoundEvent_0_OnValueChangeEvery__DelegateSignature(double Value);
    void ExecuteUbergraph_WBP_SettingSliderFPS(int32 EntryPoint);
    void UpdateScreenSetting__DelegateSignature();
}; // Size: 0x369

#endif
