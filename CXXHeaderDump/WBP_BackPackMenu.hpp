#ifndef UE4SS_SDK_WBP_BackPackMenu_HPP
#define UE4SS_SDK_WBP_BackPackMenu_HPP

class UWBP_BackPackMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_RadialMenu_C* WBP_RadialMenue;                                         // 0x0348 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0350 (size: 0x8)
    TArray<FST_ItemCoreDatas> CoreDatas;                                              // 0x0358 (size: 0x10)
    FWBP_BackPackMenu_CSelectIndex SelectIndex;                                       // 0x0368 (size: 0x10)
    void SelectIndex(int32 Index);
    FWBP_BackPackMenu_CHoverIndex HoverIndex;                                         // 0x0378 (size: 0x10)
    void HoverIndex(int32 Index);
    int32 BeforeSelectIndex;                                                          // 0x0388 (size: 0x4)

    void InpActEvt_IA_Look_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ReUpdate();
    void GrabEndAfterInput();
    void ExecuteUbergraph_WBP_BackPackMenu(int32 EntryPoint);
    void HoverIndex__DelegateSignature(int32 Index);
    void SelectIndex__DelegateSignature(int32 Index);
}; // Size: 0x38C

#endif
