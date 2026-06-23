#ifndef UE4SS_SDK_WBP_NavSlider_Penguin_HPP
#define UE4SS_SDK_WBP_NavSlider_Penguin_HPP

class UWBP_NavSlider_Penguin_C : public UUINavSlider
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09B0 (size: 0x8)
    class UTextBlock* configItem_text_1;                                              // 0x09B8 (size: 0x8)
    class UMaterialInstanceDynamic* BarPenguin;                                       // 0x09C0 (size: 0x8)
    bool ShowValueText;                                                               // 0x09C8 (size: 0x1)
    FWBP_NavSlider_Penguin_COnValueChangeEvery OnValueChangeEvery;                    // 0x09D0 (size: 0x10)
    void OnValueChangeEvery(double Value);

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__WBP_NavSlider_Slider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void SetValueText(FText InText);
    void ExecuteUbergraph_WBP_NavSlider_Penguin(int32 EntryPoint);
    void OnValueChangeEvery__DelegateSignature(double Value);
}; // Size: 0x9E0

#endif
