#ifndef UE4SS_SDK_BP_Rafflesia_HPP
#define UE4SS_SDK_BP_Rafflesia_HPP

class ABP_Rafflesia_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USphereComponent* ExplotionSensor;                                          // 0x02B0 (size: 0x8)
    class USphereComponent* ExplotionScale;                                           // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C0 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_Rafflesia_ExplotionSensor_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_Rafflesia(int32 EntryPoint);
}; // Size: 0x2C8

#endif
