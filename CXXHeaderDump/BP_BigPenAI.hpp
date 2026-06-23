#ifndef UE4SS_SDK_BP_BigPenAI_HPP
#define UE4SS_SDK_BP_BigPenAI_HPP

class ABP_BigPenAI_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0658 (size: 0x8)
    class USphereComponent* AttackPenguinZone;                                        // 0x0660 (size: 0x8)
    class USphereComponent* DestroyZone;                                              // 0x0668 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* As BP First Person Character;              // 0x0670 (size: 0x8)
    bool AnimationNow;                                                                // 0x0678 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x0680 (size: 0x8)

    void SoptAI();
    void OnNotifyEnd_E4FD70D84BF2E0A98592B193EDD6DC19(FName NotifyName);
    void OnNotifyBegin_E4FD70D84BF2E0A98592B193EDD6DC19(FName NotifyName);
    void OnInterrupted_E4FD70D84BF2E0A98592B193EDD6DC19(FName NotifyName);
    void OnBlendOut_E4FD70D84BF2E0A98592B193EDD6DC19(FName NotifyName);
    void OnCompleted_E4FD70D84BF2E0A98592B193EDD6DC19(FName NotifyName);
    void OnNotifyEnd_2DAE96654F8D533E451CEB8E88B79A47(FName NotifyName);
    void OnNotifyBegin_2DAE96654F8D533E451CEB8E88B79A47(FName NotifyName);
    void OnInterrupted_2DAE96654F8D533E451CEB8E88B79A47(FName NotifyName);
    void OnBlendOut_2DAE96654F8D533E451CEB8E88B79A47(FName NotifyName);
    void OnCompleted_2DAE96654F8D533E451CEB8E88B79A47(FName NotifyName);
    void ReceiveBeginPlay();
    void BndEvt__BP_BigPenAI_DestroyZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_BigPenAI_AttackPenguinZone_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void DistanceCheck();
    void BigPenStart();
    void sakebi();
    void ExecuteUbergraph_BP_BigPenAI(int32 EntryPoint);
}; // Size: 0x688

#endif
