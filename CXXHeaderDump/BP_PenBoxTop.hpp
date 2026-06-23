#ifndef UE4SS_SDK_BP_PenBoxTop_HPP
#define UE4SS_SDK_BP_PenBoxTop_HPP

class ABP_PenBoxTop_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBPC_CollisionSound_C* BPC_CollisionSound;                                  // 0x02B0 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C0 (size: 0x8)
    class ABP_PenBoxUnder_C* UnderBox;                                                // 0x02C8 (size: 0x8)

    void ReceiveBeginPlay();
    void SleepCall();
    void SimulatePhysicsCheck();
    void BndEvt__BP_PenBoxTop_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentWakeSignature__DelegateSignature(class UPrimitiveComponent* WakingComponent, FName BoneName);
    void BndEvt__BP_PenBoxTop_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void ExecuteUbergraph_BP_PenBoxTop(int32 EntryPoint);
}; // Size: 0x2D0

#endif
