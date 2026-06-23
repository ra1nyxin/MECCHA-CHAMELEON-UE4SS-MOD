#ifndef UE4SS_SDK_ANT_MovementState_HPP
#define UE4SS_SDK_ANT_MovementState_HPP

class UANT_MovementState_C : public UAnimNotify
{
    TEnumAsByte<EMovementMode> Change Mode;                                           // 0x0038 (size: 0x1)
    double Timer;                                                                     // 0x0040 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x48

#endif
