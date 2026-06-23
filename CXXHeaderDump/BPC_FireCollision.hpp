#ifndef UE4SS_SDK_BPC_FireCollision_HPP
#define UE4SS_SDK_BPC_FireCollision_HPP

class UBPC_FireCollision_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void ReceiveBeginPlay();
    void HitEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void OverlapEvent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BPC_FireCollision(int32 EntryPoint);
}; // Size: 0xC0

#endif
