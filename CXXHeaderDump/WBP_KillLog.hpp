#ifndef UE4SS_SDK_WBP_KillLog_HPP
#define UE4SS_SDK_WBP_KillLog_HPP

class UWBP_KillLog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x0348 (size: 0x8)
    class UWidgetAnimation* LogAnimation;                                             // 0x0350 (size: 0x8)
    FString HunterName;                                                               // 0x0358 (size: 0x10)
    FString SurvivorName;                                                             // 0x0368 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void AnimationEnd();
    void ExecuteUbergraph_WBP_KillLog(int32 EntryPoint);
}; // Size: 0x378

#endif
