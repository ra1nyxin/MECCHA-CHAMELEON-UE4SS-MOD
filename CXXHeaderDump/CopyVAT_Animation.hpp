#ifndef UE4SS_SDK_CopyVAT_Animation_HPP
#define UE4SS_SDK_CopyVAT_Animation_HPP

class ACopyVAT_Animation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    float VATAnimationTimeLine_MoveLerp_9347C0BE41DCBD7586BFC5A91BA3DECB;             // 0x02C0 (size: 0x4)
    float VATAnimationTimeLine_VAT_OverrideTime_9347C0BE41DCBD7586BFC5A91BA3DECB;     // 0x02C4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> VATAnimationTimeLine__Direction_9347C0BE41DCBD7586BFC5A91BA3DECB; // 0x02C8 (size: 0x1)
    class UTimelineComponent* VATAnimationTimeLine;                                   // 0x02D0 (size: 0x8)
    class UMaterialInstanceDynamic* VAT_Instance;                                     // 0x02D8 (size: 0x8)
    FVector DefaultLocation;                                                          // 0x02E0 (size: 0x18)
    FVector DefaultScale;                                                             // 0x02F8 (size: 0x18)

    void VATAnimationTimeLine__FinishedFunc();
    void VATAnimationTimeLine__UpdateFunc();
    void AnimationStart(class UStaticMeshComponent* ToComponent, FST_VAT_Datas VAT_Datas);
    void ExecuteUbergraph_CopyVAT_Animation(int32 EntryPoint);
}; // Size: 0x310

#endif
