#ifndef UE4SS_SDK_WBP_ComboBox_ScreenMode_HPP
#define UE4SS_SDK_WBP_ComboBox_ScreenMode_HPP

class UWBP_ComboBox_ScreenMode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox;                                      // 0x0348 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0350 (size: 0x8)
    class UBorder* Border_62;                                                         // 0x0358 (size: 0x8)
    TArray<int32> FlameRateArray_0;                                                   // 0x0360 (size: 0x10)
    TMap<TEnumAsByte<EWindowMode::Type>, FText> WindowModeTexts;                      // 0x0370 (size: 0x50)
    TArray<TEnumAsByte<EWindowMode::Type>> WindowModes;                               // 0x03C0 (size: 0x10)
    FWBP_ComboBox_ScreenMode_CUpdateScreenSetting UpdateScreenSetting;                // 0x03D0 (size: 0x10)
    void UpdateScreenSetting();

    void GetResolution();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update Config Item();
    void UpdateScreenModeUI();
    void ApplySetting();
    void BndEvt__WBP_ComboBox_ScreenMode_WBP_NavOptionBox_K2Node_ComponentBoundEvent_0_OnValueChangedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ComboBox_ScreenMode(int32 EntryPoint);
    void UpdateScreenSetting__DelegateSignature();
}; // Size: 0x3E0

#endif
