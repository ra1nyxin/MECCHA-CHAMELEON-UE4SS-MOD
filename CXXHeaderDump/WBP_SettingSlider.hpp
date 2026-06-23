#ifndef UE4SS_SDK_WBP_SettingSlider_HPP
#define UE4SS_SDK_WBP_SettingSlider_HPP

class UWBP_SettingSlider_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_NavSlider_Penguin_C* WBP_NavSlider_Penguin;                            // 0x0348 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0350 (size: 0x8)
    class UBorder* Border_62;                                                         // 0x0358 (size: 0x8)
    float SliderValue;                                                                // 0x0360 (size: 0x4)
    FWBP_SettingSlider_CUpdateScreenSetting UpdateScreenSetting;                      // 0x0368 (size: 0x10)
    void UpdateScreenSetting();
    FName SaveValueKey;                                                               // 0x0378 (size: 0x8)
    FString AppendText;                                                               // 0x0380 (size: 0x10)
    double MaxValue;                                                                  // 0x0390 (size: 0x8)
    FText SplitText;                                                                  // 0x0398 (size: 0x10)
    class UBP_ConfigSaveGame_C* As BP Config Save Game;                               // 0x03A8 (size: 0x8)
    FText MainText;                                                                   // 0x03B0 (size: 0x10)
    TArray<FText> OverrideTextArray;                                                  // 0x03C0 (size: 0x10)
    double StepValue;                                                                 // 0x03D0 (size: 0x8)
    bool FirstSettingsEnd;                                                            // 0x03D8 (size: 0x1)
    class UMaterialInterface* BGMaterial;                                             // 0x03E0 (size: 0x8)
    FWBP_SettingSlider_CUpdateSettingValue UpdateSettingValue;                        // 0x03E8 (size: 0x10)
    void UpdateSettingValue();
    bool IsMonoSpace;                                                                 // 0x03F8 (size: 0x1)
    float Monospaced Width;                                                           // 0x03FC (size: 0x4)
    int32 MinTextCount;                                                               // 0x0400 (size: 0x4)

    FText Get_ConfigItem_Text_1_Text_0();
    void PreConstruct(bool IsDesignTime);
    void Update Config Item();
    void ApplySetting();
    void BndEvt__WBP_SettingSlider_WBP_NavSlider_Penguin_K2Node_ComponentBoundEvent_4_OnValueChangedEvent__DelegateSignature();
    void BndEvt__WBP_SettingSlider_WBP_NavSlider_Penguin_K2Node_ComponentBoundEvent_0_OnValueChangeEvery__DelegateSignature(double Value);
    void ExecuteUbergraph_WBP_SettingSlider(int32 EntryPoint);
    void UpdateSettingValue__DelegateSignature();
    void UpdateScreenSetting__DelegateSignature();
}; // Size: 0x404

#endif
