#ifndef UE4SS_SDK_WBP_announcement_HPP
#define UE4SS_SDK_WBP_announcement_HPP

class UWBP_announcement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0348 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0350 (size: 0x8)
    class UWidgetAnimation* In;                                                       // 0x0358 (size: 0x8)
    class UWidgetAnimation* Middle;                                                   // 0x0360 (size: 0x8)
    class UWidgetAnimation* Out;                                                      // 0x0368 (size: 0x8)

    void SetColor(FLinearColor Color, int32 Index);
    void PreConstruct(bool IsDesignTime);
    void SetText(FText Text, int32 Index);
    void PlayAnimationMessage(bool IsForward, int32 Index);
    void RemoveWidget();
    void ExecuteUbergraph_WBP_announcement(int32 EntryPoint);
}; // Size: 0x370

#endif
