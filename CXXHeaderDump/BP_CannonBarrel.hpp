#ifndef UE4SS_SDK_BP_CannonBarrel_HPP
#define UE4SS_SDK_BP_CannonBarrel_HPP

class ABP_CannonBarrel_C : public ABP_CraftedObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UBillboardComponent* SpawnLocation_1;                                       // 0x0358 (size: 0x8)
    class UBillboardComponent* SpawnLocation_3;                                       // 0x0360 (size: 0x8)
    class UBillboardComponent* SpawnLocation_2;                                       // 0x0368 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void BndEvt__BP_CannonBullet_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CannonBarrel(int32 EntryPoint);
}; // Size: 0x370

#endif
