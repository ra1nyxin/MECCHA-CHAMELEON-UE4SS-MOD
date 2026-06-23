#ifndef UE4SS_SDK_WBP_DeathBlackOut_HPP
#define UE4SS_SDK_WBP_DeathBlackOut_HPP

class UWBP_DeathBlackOut_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0348 (size: 0x8)
    class UWidgetAnimation* FadeStart;                                                // 0x0350 (size: 0x8)
    FText SplitText;                                                                  // 0x0358 (size: 0x10)

    void SequenceEvent__ENTRYPOINTWBP_DeathBlackOut();
    void PreConstruct(bool IsDesignTime);
    void AudioZero();
    void ExecuteUbergraph_WBP_DeathBlackOut(int32 EntryPoint);
}; // Size: 0x368

#endif
