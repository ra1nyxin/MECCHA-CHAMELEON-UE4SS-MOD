#ifndef UE4SS_SDK_BPC_AttackCollisionControl_HPP
#define UE4SS_SDK_BPC_AttackCollisionControl_HPP

class UBPC_AttackCollisionControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    FBPC_AttackCollisionControl_CHitEvent HitEvent;                                   // 0x00C0 (size: 0x10)
    void HitEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    TArray<class UPrimitiveComponent*> BindPrimitiveComponents;                       // 0x00D0 (size: 0x10)
    bool Multipy Hit Possible;                                                        // 0x00E0 (size: 0x1)
    TArray<class AActor*> HitActors;                                                  // 0x00E8 (size: 0x10)
    TArray<class ULBPC_DamageEffect_C*> DamageEffect;                                 // 0x00F8 (size: 0x10)
    FBPC_AttackCollisionControl_CBlockCollision BlockCollision;                       // 0x0108 (size: 0x10)
    void BlockCollision();

    bool CheckBlockOverlap(TArray<class UPrimitiveComponent*>& OverlapedPrimitives);
    void Attack_AC(double TimeRange, FName AttackName, double DamageMultiply, bool MutipleHitPossible, double StanMultiply);
    void Combo(double TimeRange, FName ComboName);
    void Attack_AC_Remote(double TimeRange, FName ComponentName, double DamageMultiply, double StanMultiply);
    void BindComponents(const TArray<class UPrimitiveComponent*>& PrimitiveComponent, double ActiveTime, bool MultipyHitPossible, FName TargetTag);
    void OnComponentBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void UnBindComponents();
    void CollisionReset();
    void EffectSpawnEvent(double ActiveTime, FName TargetTag);
    void EffectStop();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPC_AttackCollisionControl(int32 EntryPoint);
    void BlockCollision__DelegateSignature();
    void HitEvent__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x118

#endif
