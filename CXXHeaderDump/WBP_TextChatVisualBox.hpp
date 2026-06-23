#ifndef UE4SS_SDK_WBP_TextChatVisualBox_HPP
#define UE4SS_SDK_WBP_TextChatVisualBox_HPP

class UWBP_TextChatVisualBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x0348 (size: 0x8)
    class UScrollBox* ScrollBox_24;                                                   // 0x0350 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0358 (size: 0x8)
    class UEditableTextBox* EditableTextBox_56;                                       // 0x0360 (size: 0x8)
    class UBorder* Border_61;                                                         // 0x0368 (size: 0x8)
    FWBP_TextChatVisualBox_CEnterText EnterText;                                      // 0x0370 (size: 0x10)
    void EnterText(FString Text);
    class UBPC_TextChatControl_C* TextChatControl;                                    // 0x0380 (size: 0x8)

    void InpActEvt_IA_TextChat_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void BndEvt__WBP_TextChatVisualBox_EditableTextBox_56_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void AddText(FString TargetText, int32 MessageType);
    void UpdateBorderState();
    void PreConstruct(bool IsDesignTime);
    void ReciveText(FString MainString, int32 Index);
    void ExecuteUbergraph_WBP_TextChatVisualBox(int32 EntryPoint);
    void EnterText__DelegateSignature(FString Text);
}; // Size: 0x388

#endif
