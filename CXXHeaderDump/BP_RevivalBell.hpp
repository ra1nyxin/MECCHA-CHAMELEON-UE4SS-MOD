#ifndef UE4SS_SDK_BP_RevivalBell_HPP
#define UE4SS_SDK_BP_RevivalBell_HPP

class ABP_RevivalBell_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh1;                                      // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh2;                                      // 0x02B8 (size: 0x8)
    class UNiagaraComponent* NI_BellHit;                                              // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02C8 (size: 0x8)
    class USphereComponent* RevivalArea;                                              // 0x02D0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02D8 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void OnNotifyEnd_90D943BF4AFCA5B61750AE8D3827B9E2(FName NotifyName);
    void OnNotifyBegin_90D943BF4AFCA5B61750AE8D3827B9E2(FName NotifyName);
    void OnInterrupted_90D943BF4AFCA5B61750AE8D3827B9E2(FName NotifyName);
    void OnBlendOut_90D943BF4AFCA5B61750AE8D3827B9E2(FName NotifyName);
    void OnCompleted_90D943BF4AFCA5B61750AE8D3827B9E2(FName NotifyName);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void BellHit();
    void ExecuteUbergraph_BP_RevivalBell(int32 EntryPoint);
}; // Size: 0x2E0

#endif
