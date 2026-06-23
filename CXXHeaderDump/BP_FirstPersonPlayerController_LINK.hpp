#ifndef UE4SS_SDK_BP_FirstPersonPlayerController_LINK_HPP
#define UE4SS_SDK_BP_FirstPersonPlayerController_LINK_HPP

class ABP_FirstPersonPlayerController_LINK_C : public ABP_FirstPersonPlayerController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0768 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void Damage(Server)(class UObject* ターゲット, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void StaminaDamage(double Value);
    void SpawnHitEffect(class UPhysicalMaterial* ターゲット, FTransform Transform);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void ShotItem(Server)(FTransform StartTransform, FVector Velocity, double power, TSubclassOf<class ABP_Bullet_Base_C> Class, class AActor* BindActor);
    void ShotItem(Local)(FTransform StartTransform, FVector Velocity, double power, TSubclassOf<class ABP_Bullet_Base_C> Class, class AActor* BindActor);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ExecuteUbergraph_BP_FirstPersonPlayerController_LINK(int32 EntryPoint);
}; // Size: 0x770

#endif
