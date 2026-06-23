#ifndef UE4SS_SDK_BPI_Damage_HPP
#define UE4SS_SDK_BPI_Damage_HPP

class IBPI_Damage_C : public IInterface
{

    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void StaminaDamage(double Value);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void GetParryState(bool& State);
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
}; // Size: 0x28

#endif
