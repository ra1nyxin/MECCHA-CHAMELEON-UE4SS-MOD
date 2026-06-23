#ifndef UE4SS_SDK_WBP_PaintOptionButton_HPP
#define UE4SS_SDK_WBP_PaintOptionButton_HPP

class UWBP_PaintOptionButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0348 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0350 (size: 0x8)
    class UMaterialInterface* TargetMaterial;                                         // 0x0358 (size: 0x8)
    FWBP_PaintOptionButton_COnHover OnHover;                                          // 0x0360 (size: 0x10)
    void OnHover();
    FWBP_PaintOptionButton_COnClick OnClick;                                          // 0x0370 (size: 0x10)
    void OnClick();

    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_PaintOptionButton_Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__WBP_PaintOptionButton_Button_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_PaintOptionButton(int32 EntryPoint);
    void OnClick__DelegateSignature();
    void OnHover__DelegateSignature();
}; // Size: 0x380

#endif
