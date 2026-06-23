#ifndef UE4SS_SDK_BPC_CollisionSound_HPP
#define UE4SS_SDK_BPC_CollisionSound_HPP

class UBPC_CollisionSound_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    bool AudioOff;                                                                    // 0x00C0 (size: 0x1)
    TEnumAsByte<HitMaterial::Type> Actor Material;                                    // 0x00C1 (size: 0x1)
    double AudioScale;                                                                // 0x00C8 (size: 0x8)
    bool CoolTime;                                                                    // 0x00D0 (size: 0x1)
    class UPrimitiveComponent* StaticMesh;                                            // 0x00D8 (size: 0x8)
    class UNiagaraSystem* PlayNiagara;                                                // 0x00E0 (size: 0x8)
    class USoundBase* OverrideSound;                                                  // 0x00E8 (size: 0x8)

    void HitEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPC_CollisionSound(int32 EntryPoint);
}; // Size: 0xF0

#endif
