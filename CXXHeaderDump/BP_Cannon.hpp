#ifndef UE4SS_SDK_BP_Cannon_HPP
#define UE4SS_SDK_BP_Cannon_HPP

class ABP_Cannon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce* CPP_AC_CustomPhysicsForce;                      // 0x02B0 (size: 0x8)
    class UBillboardComponent* ShotEffectLocation;                                    // 0x02B8 (size: 0x8)
    class UBPC_CollisionSound_C* BPC_CollisionSound;                                  // 0x02C0 (size: 0x8)
    class UBPC_PhysicsNetDormancyControl_C* BPC_PhysicsNetDormancyControl;            // 0x02C8 (size: 0x8)
    class UNiagaraComponent* NI_Hit_Wood;                                             // 0x02D0 (size: 0x8)
    class USphereComponent* ShotArea;                                                 // 0x02D8 (size: 0x8)
    class UBillboardComponent* ShotLocation;                                          // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E8 (size: 0x8)
    double Health;                                                                    // 0x02F0 (size: 0x8)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x02F8 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ShotCannon(class AActor* TargetActor);
    void PhysicsOn(Local)();
    void PhysicsOn(Replicate)();
    void ExecuteUbergraph_BP_Cannon(int32 EntryPoint);
}; // Size: 0x300

#endif
