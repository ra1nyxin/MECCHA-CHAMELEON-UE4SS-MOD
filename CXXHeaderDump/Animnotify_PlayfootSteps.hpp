#ifndef UE4SS_SDK_Animnotify_PlayfootSteps_HPP
#define UE4SS_SDK_Animnotify_PlayfootSteps_HPP

class UAnimnotify_PlayfootSteps_C : public UAnimNotify
{
    FName FootBoneName;                                                               // 0x0038 (size: 0x8)
    class UBP_FootStepSoundPreset_C* Preset;                                          // 0x0040 (size: 0x8)
    double UnderDistance;                                                             // 0x0048 (size: 0x8)
    double TraceSphereSize;                                                           // 0x0050 (size: 0x8)
    bool IsDebugDraw;                                                                 // 0x0058 (size: 0x1)
    double ReportNoiseRange;                                                          // 0x0060 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x68

#endif
