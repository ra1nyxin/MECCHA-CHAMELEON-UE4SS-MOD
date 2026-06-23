#ifndef UE4SS_SDK_BP_GlueCrystal_Purple_HPP
#define UE4SS_SDK_BP_GlueCrystal_Purple_HPP

class ABP_GlueCrystal_Purple_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)
    bool IsPurple;                                                                    // 0x02B8 (size: 0x1)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void PurpleChange();
    void ToPurple();
    void ExecuteUbergraph_BP_GlueCrystal_Purple(int32 EntryPoint);
}; // Size: 0x2B9

#endif
