#ifndef UE4SS_SDK_BP_Bullet_Base_HPP
#define UE4SS_SDK_BP_Bullet_Base_HPP

class ABP_Bullet_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UArrowComponent* Velocity;                                                  // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    bool IsStopOnHit;                                                                 // 0x02C0 (size: 0x1)
    double AutoDestroyTime;                                                           // 0x02C8 (size: 0x8)
    FVector BeforeLocation;                                                           // 0x02D0 (size: 0x18)
    FBP_Bullet_Base_COnHit OnHit;                                                     // 0x02E8 (size: 0x10)
    void OnHit();
    FVector StartVelocity;                                                            // 0x02F8 (size: 0x18)
    double TraceSphereRadius;                                                         // 0x0310 (size: 0x8)
    TSubclassOf<class AActor> IgnoreClass;                                            // 0x0318 (size: 0x8)
    TSubclassOf<class AActor> HitPointSpawnActor;                                     // 0x0320 (size: 0x8)
    TEnumAsByte<EPhysicalSurface> NotSpawnSurfaceType;                                // 0x0328 (size: 0x1)
    double ForceValue;                                                                // 0x0330 (size: 0x8)
    class AActor* DamageSourceActor;                                                  // 0x0338 (size: 0x8)
    class USoundBase* SpawnedSound;                                                   // 0x0340 (size: 0x8)
    float ReportNoizeScale;                                                           // 0x0348 (size: 0x4)
    bool IsHitEnd;                                                                    // 0x034C (size: 0x1)
    FName Damage Name;                                                                // 0x0350 (size: 0x8)
    double Damage Value;                                                              // 0x0358 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void HitAfter(const FHitResult& Hit);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Snap(FTransform SnapTransform);
    void BndEvt__BP_Bullet_Base_StaticMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_BP_Bullet_Base(int32 EntryPoint);
    void OnHit__DelegateSignature();
}; // Size: 0x360

#endif
