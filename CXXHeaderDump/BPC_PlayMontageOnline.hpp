#ifndef UE4SS_SDK_BPC_PlayMontageOnline_HPP
#define UE4SS_SDK_BPC_PlayMontageOnline_HPP

class UBPC_PlayMontageOnline_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class APawn* OwnerActor;                                                          // 0x00C0 (size: 0x8)

    void OnNotifyEnd_4737952740FB816E45A974B1BF8C0A0A(FName NotifyName);
    void OnNotifyBegin_4737952740FB816E45A974B1BF8C0A0A(FName NotifyName);
    void OnInterrupted_4737952740FB816E45A974B1BF8C0A0A(FName NotifyName);
    void OnBlendOut_4737952740FB816E45A974B1BF8C0A0A(FName NotifyName);
    void OnCompleted_4737952740FB816E45A974B1BF8C0A0A(FName NotifyName);
    void OnNotifyEnd_543B92A3498408DB071366B74B7FF37D(FName NotifyName);
    void OnNotifyBegin_543B92A3498408DB071366B74B7FF37D(FName NotifyName);
    void OnInterrupted_543B92A3498408DB071366B74B7FF37D(FName NotifyName);
    void OnBlendOut_543B92A3498408DB071366B74B7FF37D(FName NotifyName);
    void OnCompleted_543B92A3498408DB071366B74B7FF37D(FName NotifyName);
    void ReceiveBeginPlay();
    void Play(class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage, const bool bShouldStopAllMontages, bool IsLocalPlay);
    void Play(Server)(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, bool bShouldStopAllMontages);
    void Play(Replicate)(class USkeletalMeshComponent* InSkeletalMeshComponent, class UAnimMontage* MontageToPlay, bool bShouldStopAllMontages);
    void Stop(class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage, bool IsLocalStop);
    void Stop(Server)(class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage);
    void Stop(Replicate)(class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage);
    void ExecuteUbergraph_BPC_PlayMontageOnline(int32 EntryPoint);
}; // Size: 0xC8

#endif
