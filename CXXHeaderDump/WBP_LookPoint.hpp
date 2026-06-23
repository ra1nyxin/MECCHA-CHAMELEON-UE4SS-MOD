#ifndef UE4SS_SDK_WBP_LookPoint_HPP
#define UE4SS_SDK_WBP_LookPoint_HPP

class UWBP_LookPoint_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* PointText;                                                      // 0x0348 (size: 0x8)
    class UTextBlock* playerName;                                                     // 0x0350 (size: 0x8)
    class UWidgetAnimation* Begin;                                                    // 0x0358 (size: 0x8)
    FString TargetName;                                                               // 0x0360 (size: 0x10)
    int32 PointValue;                                                                 // 0x0370 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void FinishEvent();
    void ExecuteUbergraph_WBP_LookPoint(int32 EntryPoint);
}; // Size: 0x374

#endif
