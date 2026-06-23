#ifndef UE4SS_SDK_BPC_MovementModeControl_HPP
#define UE4SS_SDK_BPC_MovementModeControl_HPP

class UBPC_MovementModeControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    TEnumAsByte<EMovementMode> DefaultMovementMode;                                   // 0x00C0 (size: 0x1)
    class UCharacterMovementComponent* CharacteMovementComp;                          // 0x00C8 (size: 0x8)

    void ModeChange(TEnumAsByte<EMovementMode> ChangeMode, double Timer);
    void ReceiveBeginPlay();
    void MoveMentModeReset();
    void Reset();
    void ExecuteUbergraph_BPC_MovementModeControl(int32 EntryPoint);
}; // Size: 0xD0

#endif
