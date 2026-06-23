#ifndef UE4SS_SDK_WBP_ReportTypeButton_HPP
#define UE4SS_SDK_WBP_ReportTypeButton_HPP

class UWBP_ReportTypeButton_C : public UUINavComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x0918 (size: 0x8)
    class UBorder* Border_103;                                                        // 0x0920 (size: 0x8)
    int32 Index;                                                                      // 0x0928 (size: 0x4)
    FWBP_ReportTypeButton_COnPushButton OnPushButton;                                 // 0x0930 (size: 0x10)
    void OnPushButton(class UWBP_ReportTypeButton_C* SelfObject);

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SelectStateUpdate(bool State);
    void BndEvt__WBP_ReportTypeButton_NavButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ReportTypeButton(int32 EntryPoint);
    void OnPushButton__DelegateSignature(class UWBP_ReportTypeButton_C* SelfObject);
}; // Size: 0x940

#endif
