#ifndef UE4SS_SDK_BPC_DamageCollision_HPP
#define UE4SS_SDK_BPC_DamageCollision_HPP

class UBPC_DamageCollision_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    double DamageValue;                                                               // 0x00C0 (size: 0x8)
    int32 Team Index;                                                                 // 0x00C8 (size: 0x4)
    TArray<class TSubclassOf<AActor>> FilterClass;                                    // 0x00D0 (size: 0x10)
    bool Un Avoidable;                                                                // 0x00E0 (size: 0x1)
    TEnumAsByte<EN_DamageType::Type> Damage Type;                                     // 0x00E1 (size: 0x1)
    FName Damage Name;                                                                // 0x00E4 (size: 0x8)
    bool ServerOnly;                                                                  // 0x00EC (size: 0x1)
    class USoundBase* HitSound;                                                       // 0x00F0 (size: 0x8)
    bool ClientSoundOnly;                                                             // 0x00F8 (size: 0x1)
    FBPC_DamageCollision_CHitDamage HitDamage;                                        // 0x0100 (size: 0x10)
    void HitDamage(FHitResult Hit);

    void ReceiveBeginPlay();
    void HitEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OverlapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PlayHitSound(FVector Location);
    void ExecuteUbergraph_BPC_DamageCollision(int32 EntryPoint);
    void HitDamage__DelegateSignature(FHitResult Hit);
}; // Size: 0x110

#endif
