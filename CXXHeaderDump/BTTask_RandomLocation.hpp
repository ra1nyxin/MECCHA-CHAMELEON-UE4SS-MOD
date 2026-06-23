#ifndef UE4SS_SDK_BTTask_RandomLocation_HPP
#define UE4SS_SDK_BTTask_RandomLocation_HPP

class UBTTask_RandomLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FBlackboardKeySelector Target Location Key;                                       // 0x00B0 (size: 0x28)
    double BaseRadius;                                                                // 0x00D8 (size: 0x8)
    double AddRandomRaidus;                                                           // 0x00E0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_RandomLocation(int32 EntryPoint);
}; // Size: 0xE8

#endif
