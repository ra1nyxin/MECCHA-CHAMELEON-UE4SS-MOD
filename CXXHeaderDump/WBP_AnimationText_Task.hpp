#ifndef UE4SS_SDK_WBP_AnimationText_Task_HPP
#define UE4SS_SDK_WBP_AnimationText_Task_HPP

class UWBP_AnimationText_Task_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class URichTextBlock* MainTextBlock;                                              // 0x0348 (size: 0x8)
    class UWidgetAnimation* Top;                                                      // 0x0350 (size: 0x8)
    FText In Text;                                                                    // 0x0358 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void AnimationEndEvent();
    void ExecuteUbergraph_WBP_AnimationText_Task(int32 EntryPoint);
}; // Size: 0x368

#endif
