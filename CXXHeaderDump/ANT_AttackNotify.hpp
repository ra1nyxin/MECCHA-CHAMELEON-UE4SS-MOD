#ifndef UE4SS_SDK_ANT_AttackNotify_HPP
#define UE4SS_SDK_ANT_AttackNotify_HPP

class UANT_AttackNotify_C : public UAnimNotify
{
    bool CollisionReset;                                                              // 0x0038 (size: 0x1)
    double TimeRange;                                                                 // 0x0040 (size: 0x8)
    FName AttackName;                                                                 // 0x0048 (size: 0x8)
    double DamageMultiply;                                                            // 0x0050 (size: 0x8)
    bool Mutiple Hit Possible;                                                        // 0x0058 (size: 0x1)
    double Stan Damage Multiply;                                                      // 0x0060 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x68

#endif
