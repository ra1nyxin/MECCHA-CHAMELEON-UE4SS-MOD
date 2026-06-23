#ifndef UE4SS_SDK_ANS_ReadyAttack_HPP
#define UE4SS_SDK_ANS_ReadyAttack_HPP

class UANS_ReadyAttack_C : public UAnimNotifyState
{
    FGameplayTagContainer AttackBeginTag;                                             // 0x0030 (size: 0x20)
    bool Should Replicate;                                                            // 0x0050 (size: 0x1)

    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x51

#endif
