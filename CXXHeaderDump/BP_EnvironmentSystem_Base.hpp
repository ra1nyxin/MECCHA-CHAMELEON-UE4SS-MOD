#ifndef UE4SS_SDK_BP_EnvironmentSystem_Base_HPP
#define UE4SS_SDK_BP_EnvironmentSystem_Base_HPP

class ABP_EnvironmentSystem_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_EnvironmentSystem_Base(int32 EntryPoint);
}; // Size: 0x2B8

#endif
