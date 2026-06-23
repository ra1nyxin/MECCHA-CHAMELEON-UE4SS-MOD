#ifndef UE4SS_SDK_WBP_ExitShopCount_HPP
#define UE4SS_SDK_WBP_ExitShopCount_HPP

class UWBP_ExitShopCount_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* SubText;                                                        // 0x0348 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0350 (size: 0x8)
    class UImage* Image_59;                                                           // 0x0358 (size: 0x8)
    class UBorder* Background;                                                        // 0x0360 (size: 0x8)
    class UWidgetAnimation* Show;                                                     // 0x0368 (size: 0x8)
    FText PresetText;                                                                 // 0x0370 (size: 0x10)

    void SetUIText(int32 AppendPreset, FText Text);
    void SetColor(FLinearColor Color, int32 Index);
    void SetText(FText Text, int32 Index);
    void PlayAnimationMessage(bool IsForward, int32 Index);
    void ExecuteUbergraph_WBP_ExitShopCount(int32 EntryPoint);
}; // Size: 0x380

#endif
