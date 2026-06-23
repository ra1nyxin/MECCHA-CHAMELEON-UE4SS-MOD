#ifndef UE4SS_SDK_BTTask_LockOnPlayer_HPP
#define UE4SS_SDK_BTTask_LockOnPlayer_HPP

class UBTTask_LockOnPlayer_C : public UBTTask_AttackToPlayer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    bool DoLockOn;                                                                    // 0x00C0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTTask_LockOnPlayer(int32 EntryPoint);
}; // Size: 0xC1

#endif
