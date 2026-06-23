#ifndef UE4SS_SDK_WBP_LINK_goal2_HPP
#define UE4SS_SDK_WBP_LINK_goal2_HPP

class UWBP_LINK_goal2_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0348 (size: 0x8)
    class UWidgetAnimation* Goal;                                                     // 0x0350 (size: 0x8)
    class UWidgetAnimation* OutMovie;                                                 // 0x0358 (size: 0x8)

    void SetText(FText Text, int32 Index);
    void SetColor(FLinearColor Color, int32 Index);
    void FinishEvent();
    void PlayAnimationMessage(bool IsForward, int32 Index);
    void ExecuteUbergraph_WBP_LINK_goal2(int32 EntryPoint);
}; // Size: 0x360

#endif
