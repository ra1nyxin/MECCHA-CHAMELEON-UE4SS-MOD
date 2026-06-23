#ifndef UE4SS_SDK_ANS_BrunchAttack_HPP
#define UE4SS_SDK_ANS_BrunchAttack_HPP

class UANS_BrunchAttack_C : public UAnimNotifyState
{
    bool IsActivate;                                                                  // 0x0030 (size: 0x1)

    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x31

#endif
