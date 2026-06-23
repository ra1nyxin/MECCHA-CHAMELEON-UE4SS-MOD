#ifndef UE4SS_SDK_WBP_NavMultipleInputTextBlock_HPP
#define UE4SS_SDK_WBP_NavMultipleInputTextBlock_HPP

class UWBP_NavMultipleInputTextBlock_C : public UUINavComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UTextBlock* RemainText;                                                     // 0x0918 (size: 0x8)
    class UMultiLineEditableText* MultiLineEditableText_0;                            // 0x0920 (size: 0x8)
    FText HintText;                                                                   // 0x0928 (size: 0x10)
    bool PasswordMode;                                                                // 0x0938 (size: 0x1)
    FWBP_NavMultipleInputTextBlock_COnTextCommitted OnTextCommitted;                  // 0x0940 (size: 0x10)
    void OnTextCommitted(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    int32 MaxTextLength;                                                              // 0x0950 (size: 0x4)
    bool IsNumberOnly;                                                                // 0x0954 (size: 0x1)
    FIntVector2 NumberRange;                                                          // 0x0958 (size: 0x8)
    bool NoSpace;                                                                     // 0x0960 (size: 0x1)
    FText DefaultText;                                                                // 0x0968 (size: 0x10)
    FText EmptyDefaultText;                                                           // 0x0978 (size: 0x10)

    void SetInputText(FText InText);
    FString GetNumerText(const FText& InText);
    void GetInputText(FString& Text);
    void Construct();
    void BndEvt__WBP_NavInputTextBlock_NavButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_NavInputTextBlock_EditableText_24_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void SetEditableText(FText InText);
    void BndEvt__WBP_NavInputTextBlock_EditableText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void PreConstruct(bool IsDesignTime);
    void TextNumUpdate();
    void ExecuteUbergraph_WBP_NavMultipleInputTextBlock(int32 EntryPoint);
    void OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
}; // Size: 0x988

#endif
