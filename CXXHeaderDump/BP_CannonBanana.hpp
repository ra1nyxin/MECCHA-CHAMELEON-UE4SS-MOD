#ifndef UE4SS_SDK_BP_CannonBanana_HPP
#define UE4SS_SDK_BP_CannonBanana_HPP

class ABP_CannonBanana_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBoxComponent* BananaCollision;                                             // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    class UBPC_PhysicsNetDormancyControl_C* BPC_PhysicsNetDormancyControl;            // 0x02C0 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void BndEvt__BP_CannonBanana_BananaCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_CannonBanana_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentSleepSignature__DelegateSignature(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void ExecuteUbergraph_BP_CannonBanana(int32 EntryPoint);
}; // Size: 0x2C8

#endif
