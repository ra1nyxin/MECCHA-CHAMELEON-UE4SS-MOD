#ifndef UE4SS_SDK_WBP_MiniPenguinWeight_HPP
#define UE4SS_SDK_WBP_MiniPenguinWeight_HPP

class UWBP_MiniPenguinWeight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_86;                                                   // 0x0348 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0350 (size: 0x8)

    void SetColor(FLinearColor Color, int32 Index);
    void PlayAnimationMessage(bool IsForward, int32 Index);
    void SetText(FText Text, int32 Index);
    void ExecuteUbergraph_WBP_MiniPenguinWeight(int32 EntryPoint);
}; // Size: 0x358

#endif
