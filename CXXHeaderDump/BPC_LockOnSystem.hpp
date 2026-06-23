#ifndef UE4SS_SDK_BPC_LockOnSystem_HPP
#define UE4SS_SDK_BPC_LockOnSystem_HPP

class UBPC_LockOnSystem_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class AActor* Retrun Actor;                                                       // 0x00C0 (size: 0x8)
    class ULBPC_LockOn_C* Return Lock on Component;                                   // 0x00C8 (size: 0x8)
    class UCameraComponent* First Person Camera;                                      // 0x00D0 (size: 0x8)

    void LockOnTargetFind(FTransform View Transform, class AActor*& RetrunActor, class ULBPC_LockOn_C*& ReturnLockOnComponent);
    void ReceiveBeginPlay();
    void LockOn(bool State);
    void LockOnCheck(FTransform OwnerViewTransform);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPC_LockOnSystem(int32 EntryPoint);
}; // Size: 0xD8

#endif
