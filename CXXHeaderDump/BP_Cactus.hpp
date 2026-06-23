#ifndef UE4SS_SDK_BP_Cactus_HPP
#define UE4SS_SDK_BP_Cactus_HPP

class ABP_Cactus_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBPC_DamageCollision_C* BPC_DamageCollision;                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_Cactus_BPC_DamageCollision_K2Node_ComponentBoundEvent_1_HitDamage__DelegateSignature(FHitResult Hit);
    void ExecuteUbergraph_BP_Cactus(int32 EntryPoint);
}; // Size: 0x2C0

#endif
