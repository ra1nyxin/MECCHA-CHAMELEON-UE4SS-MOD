#ifndef UE4SS_SDK_BPC_HitOnConnect_HPP
#define UE4SS_SDK_BPC_HitOnConnect_HPP

class UBPC_HitOnConnect_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* OwnerCharacter;                            // 0x00C0 (size: 0x8)

    void IsCanConnect(class UPrimitiveComponent* HitPrimitive, class ABP_FirstPersonGameMode_Online_LINK_C* GameModeLINK, bool& Rezult);
    void ReceiveBeginPlay();
    void HitEvent(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void SleepEvent(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void DestroySafe();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BPC_HitOnConnect(int32 EntryPoint);
}; // Size: 0xC8

#endif
