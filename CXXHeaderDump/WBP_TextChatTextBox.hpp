#ifndef UE4SS_SDK_WBP_TextChatTextBox_HPP
#define UE4SS_SDK_WBP_TextChatTextBox_HPP

class UWBP_TextChatTextBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* UserName;                                                       // 0x0348 (size: 0x8)
    class UBorder* ReciveBorder;                                                      // 0x0350 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0358 (size: 0x8)
    class UWidgetAnimation* HideOut;                                                  // 0x0360 (size: 0x8)
    class UWidgetAnimation* Recive;                                                   // 0x0368 (size: 0x8)
    FString TargetText;                                                               // 0x0370 (size: 0x10)
    FSlateColor DefaultColor;                                                         // 0x0380 (size: 0x14)
    float TextDuration;                                                               // 0x0394 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Finish();
    void ExecuteUbergraph_WBP_TextChatTextBox(int32 EntryPoint);
}; // Size: 0x398

#endif
