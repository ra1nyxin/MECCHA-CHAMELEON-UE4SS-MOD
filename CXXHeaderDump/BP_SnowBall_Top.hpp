#ifndef UE4SS_SDK_BP_SnowBall_Top_HPP
#define UE4SS_SDK_BP_SnowBall_Top_HPP

class ABP_SnowBall_Top_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBPC_CollisionSound_C* BPC_CollisionSound;                                  // 0x02B0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02B8 (size: 0x8)
    class USphereComponent* SearchCharacter;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C8 (size: 0x8)
    class AActor* TraceTarget;                                                        // 0x02D0 (size: 0x8)
    FVector BeforeLocation;                                                           // 0x02D8 (size: 0x18)
    class ABP_SnowBall_Under_C* Bottom;                                               // 0x02F0 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void BndEvt__BP_SnowBall_Top_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__BP_SnowBall_Top_SearchCharacter_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void SnowBallActivate();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_SnowBall_Top(int32 EntryPoint);
}; // Size: 0x2F8

#endif
