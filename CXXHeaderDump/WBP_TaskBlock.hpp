#ifndef UE4SS_SDK_WBP_TaskBlock_HPP
#define UE4SS_SDK_WBP_TaskBlock_HPP

class UWBP_TaskBlock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_CheckBox_C* WBP_CheckBox;                                              // 0x0348 (size: 0x8)
    class UTextBlock* ProgressText;                                                   // 0x0350 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0358 (size: 0x8)
    FText TaskText;                                                                   // 0x0360 (size: 0x10)
    int32 SumProgress;                                                                // 0x0370 (size: 0x4)
    int32 CurrentProgress;                                                            // 0x0374 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ProgressAdd(int32 AddValue);
    void ExecuteUbergraph_WBP_TaskBlock(int32 EntryPoint);
}; // Size: 0x378

#endif
