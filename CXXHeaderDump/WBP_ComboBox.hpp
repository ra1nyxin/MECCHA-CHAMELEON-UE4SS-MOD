#ifndef UE4SS_SDK_WBP_ComboBox_HPP
#define UE4SS_SDK_WBP_ComboBox_HPP

class UWBP_ComboBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox;                                      // 0x0348 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0350 (size: 0x8)
    TArray<int32> FlameRateArray_0;                                                   // 0x0358 (size: 0x10)
    FWBP_ComboBox_CUpdateScreenSetting UpdateScreenSetting;                           // 0x0368 (size: 0x10)
    void UpdateScreenSetting();

    void GetResolution();
    void Construct();
    void Update Config Item();
    void UpdateScreenResolutionUI();
    void PreConstruct(bool IsDesignTime);
    void ApplySetting();
    void BndEvt__WBP_ComboBox_WBP_NavOptionBox_K2Node_ComponentBoundEvent_0_OnValueChangedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ComboBox(int32 EntryPoint);
    void UpdateScreenSetting__DelegateSignature();
}; // Size: 0x378

#endif
