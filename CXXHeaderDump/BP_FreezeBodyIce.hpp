#ifndef UE4SS_SDK_BP_FreezeBodyIce_HPP
#define UE4SS_SDK_BP_FreezeBodyIce_HPP

class ABP_FreezeBodyIce_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBPC_LinkCharacterCustomControl_C* BPC_LinkCharacterCustomControl;          // 0x02B0 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce* CPP_AC_CustomPhysicsForce;                      // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* CollisionMesh;                                        // 0x02C8 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* ParentTarget;                              // 0x02D0 (size: 0x8)
    double FreezeValue;                                                               // 0x02D8 (size: 0x8)
    int32 BodyIndex;                                                                  // 0x02E0 (size: 0x4)

    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void StaminaDamage(double Value);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void ReceiveDestroyed();
    void Heat(double Value);
    void UnZip();
    void ExecuteUbergraph_BP_FreezeBodyIce(int32 EntryPoint);
}; // Size: 0x2E4

#endif
