#ifndef UE4SS_SDK_BTTask_UpdateTarget_HPP
#define UE4SS_SDK_BTTask_UpdateTarget_HPP

class UBTTask_UpdateTarget_C : public UBTTask_Trace_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FBlackboardKeySelector Key;                                                       // 0x00B8 (size: 0x28)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_UpdateTarget(int32 EntryPoint);
}; // Size: 0xE0

#endif
