#ifndef UE4SS_SDK_BPC_ForceMoveCharacter_HPP
#define UE4SS_SDK_BPC_ForceMoveCharacter_HPP

class UBPC_ForceMoveCharacter_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class UCharacterMovementComponent* CharacterMovement;                             // 0x00C0 (size: 0x8)
    class ACharacter* Character;                                                      // 0x00C8 (size: 0x8)
    FVector Direction;                                                                // 0x00D0 (size: 0x18)
    double SpeedScale;                                                                // 0x00E8 (size: 0x8)
    bool NowLockRotation;                                                             // 0x00F0 (size: 0x1)
    bool CurrentAnimationState;                                                       // 0x00F1 (size: 0x1)
    bool LockMovement;                                                                // 0x00F2 (size: 0x1)
    double DefaultSpeed;                                                              // 0x00F8 (size: 0x8)
    float DefaultAcceleration;                                                        // 0x0100 (size: 0x4)
    double Acceleration Scale;                                                        // 0x0108 (size: 0x8)

    void ResetWalkSpeed();
    void UpdateDefaultMoveSpeed(double Speed);
    void GetLockMovementState(bool& State);
    void GetAniamtionState(bool& State);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void MoveStart(double MoveTime, FVector Direction, double SpeedScale, double AccelerationScale, bool LockMovementState);
    void MoeveStop();
    void ExecuteUbergraph_BPC_ForceMoveCharacter(int32 EntryPoint);
}; // Size: 0x110

#endif
