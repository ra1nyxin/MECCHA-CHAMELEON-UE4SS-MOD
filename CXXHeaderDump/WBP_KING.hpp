#ifndef UE4SS_SDK_WBP_KING_HPP
#define UE4SS_SDK_WBP_KING_HPP

class UWBP_KING_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_93;                                                           // 0x0350 (size: 0x8)
    class UWidgetAnimation* king;                                                     // 0x0358 (size: 0x8)
    FString TargetName;                                                               // 0x0360 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void AnimationFinish();
    void ExecuteUbergraph_WBP_KING(int32 EntryPoint);
}; // Size: 0x370

#endif
