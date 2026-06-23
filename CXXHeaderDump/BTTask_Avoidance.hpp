#ifndef UE4SS_SDK_BTTask_Avoidance_HPP
#define UE4SS_SDK_BTTask_Avoidance_HPP

class UBTTask_Avoidance_C : public UBTTask_Trace_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FBlackboardKeySelector Target Location Key;                                       // 0x00B8 (size: 0x28)
    bool Success;                                                                     // 0x00E0 (size: 0x1)

    void SetToPosition(FVector Vector, FVector CharactorPosition, class APawn* SelfPawn);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_Avoidance(int32 EntryPoint);
}; // Size: 0xE1

#endif
