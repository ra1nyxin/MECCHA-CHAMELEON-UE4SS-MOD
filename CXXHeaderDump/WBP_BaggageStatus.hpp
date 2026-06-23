#ifndef UE4SS_SDK_WBP_BaggageStatus_HPP
#define UE4SS_SDK_WBP_BaggageStatus_HPP

class UWBP_BaggageStatus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* Unit;                                                           // 0x0348 (size: 0x8)
    class UTextBlock* Number;                                                         // 0x0350 (size: 0x8)
    float NumberSize;                                                                 // 0x0358 (size: 0x4)
    float UnitSize;                                                                   // 0x035C (size: 0x4)
    double CurrentWeight;                                                             // 0x0360 (size: 0x8)
    double TargetWeight;                                                              // 0x0368 (size: 0x8)
    double LerpValue;                                                                 // 0x0370 (size: 0x8)

    void SetWeight(double Value);
    void PreConstruct(bool IsDesignTime);
    void SetValue();
    void ExecuteUbergraph_WBP_BaggageStatus(int32 EntryPoint);
}; // Size: 0x378

#endif
