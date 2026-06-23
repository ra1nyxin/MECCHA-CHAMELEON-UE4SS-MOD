#ifndef UE4SS_SDK_BTTask_AttackEnemy_HPP
#define UE4SS_SDK_BTTask_AttackEnemy_HPP

class UBTTask_AttackEnemy_C : public UBTTask_AttackToPlayer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    TEnumAsByte<AttackType::Type> AttackType;                                         // 0x00C0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void EndTask();
    void ExecuteUbergraph_BTTask_AttackEnemy(int32 EntryPoint);
}; // Size: 0xC1

#endif
