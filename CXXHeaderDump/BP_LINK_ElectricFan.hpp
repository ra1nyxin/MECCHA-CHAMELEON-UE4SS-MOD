#ifndef UE4SS_SDK_BP_LINK_ElectricFan_HPP
#define UE4SS_SDK_BP_LINK_ElectricFan_HPP

class ABP_LINK_ElectricFan_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02B0 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02B8 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x02C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SleepMode();
    void BndEvt__BP_LINK_ElectricFan_Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_LINK_ElectricFan(int32 EntryPoint);
}; // Size: 0x2E8

#endif
