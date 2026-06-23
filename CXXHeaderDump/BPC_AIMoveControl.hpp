#ifndef UE4SS_SDK_BPC_AIMoveControl_HPP
#define UE4SS_SDK_BPC_AIMoveControl_HPP

class UBPC_AIMoveControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class UCharacterMovementComponent* CharacterMovementComp;                         // 0x00C0 (size: 0x8)
    class ACharacter* OwnerCharacter;                                                 // 0x00C8 (size: 0x8)
    FBPC_AIMoveControl_CMoveEndSignal MoveEndSignal;                                  // 0x00D0 (size: 0x10)
    void MoveEndSignal(TEnumAsByte<EPathFollowingResult::Type> OutPutRezult, FName AttackName);
    double BeforeWalkSpeed;                                                           // 0x00E0 (size: 0x8)
    FName Attack Name;                                                                // 0x00E8 (size: 0x8)

    void OnFail_95EC79A3420BD63D9809D388C58C8FFB(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_95EC79A3420BD63D9809D388C58C8FFB(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void MoveTo(class AActor* TargetActor, double AcceptanceRadius, double GiveUpTime, double MultiplySpeed, bool StopOnOverlap, FName AttackName);
    void MoveStop();
    void ClearTimer();
    void ExecuteUbergraph_BPC_AIMoveControl(int32 EntryPoint);
    void MoveEndSignal__DelegateSignature(TEnumAsByte<EPathFollowingResult::Type> OutPutRezult, FName AttackName);
}; // Size: 0xF0

#endif
