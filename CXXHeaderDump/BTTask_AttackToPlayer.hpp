#ifndef UE4SS_SDK_BTTask_AttackToPlayer_HPP
#define UE4SS_SDK_BTTask_AttackToPlayer_HPP

class UBTTask_AttackToPlayer_C : public UBTTask_Trace_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_AttackToPlayer(int32 EntryPoint);
}; // Size: 0xB8

#endif
