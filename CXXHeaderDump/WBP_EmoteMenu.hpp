#ifndef UE4SS_SDK_WBP_EmoteMenu_HPP
#define UE4SS_SDK_WBP_EmoteMenu_HPP

class UWBP_EmoteMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_RadialMenu_C* WBP_RadialMenue;                                         // 0x0348 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0350 (size: 0x8)
    TArray<FST_ItemCoreDatas> CoreDatas;                                              // 0x0358 (size: 0x10)
    FWBP_EmoteMenu_CSelectIndex SelectIndex;                                          // 0x0368 (size: 0x10)
    void SelectIndex(TSubclassOf<class ABP_EmoteData_Base_C> EmoteData, int32 Index);
    FWBP_EmoteMenu_CHoverIndex HoverIndex;                                            // 0x0378 (size: 0x10)
    void HoverIndex(int32 Index);
    int32 BeforeSelectIndex;                                                          // 0x0388 (size: 0x4)
    FLinearColor Non Select Color;                                                    // 0x038C (size: 0x10)
    FLinearColor Select Color;                                                        // 0x039C (size: 0x10)

    void InpActEvt_IA_Look_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ReUpdate();
    void SelectEnd();
    void ExecuteUbergraph_WBP_EmoteMenu(int32 EntryPoint);
    void HoverIndex__DelegateSignature(int32 Index);
    void SelectIndex__DelegateSignature(TSubclassOf<class ABP_EmoteData_Base_C> EmoteData, int32 Index);
}; // Size: 0x3AC

#endif
