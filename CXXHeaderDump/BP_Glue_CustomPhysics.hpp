#ifndef UE4SS_SDK_BP_Glue_CustomPhysics_HPP
#define UE4SS_SDK_BP_Glue_CustomPhysics_HPP

class ABP_Glue_CustomPhysics_C : public ACPP_Glue
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UTextRenderComponent* TextRender1;                                          // 0x02F8 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0300 (size: 0x8)
    class UStaticMeshComponent* GlueArea;                                             // 0x0308 (size: 0x8)
    float DebugVisualize_Scale_E16BFD1445443862273D29B037A46E00;                      // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DebugVisualize__Direction_E16BFD1445443862273D29B037A46E00; // 0x0314 (size: 0x1)
    class UTimelineComponent* DebugVisualize;                                         // 0x0318 (size: 0x8)
    TArray<class UPrimitiveComponent*> HitComponents;                                 // 0x0320 (size: 0x10)
    class UMaterialInstanceDynamic* DynamicMat;                                       // 0x0330 (size: 0x8)
    class ULBPC_Glue_C* GlueComp;                                                     // 0x0338 (size: 0x8)
    TArray<class UBPC_PowerDispersion_C*> ParentDispattionComonents;                  // 0x0340 (size: 0x10)
    TArray<class AActor*> DebugParentActor;                                           // 0x0350 (size: 0x10)
    double GroundDistance;                                                            // 0x0360 (size: 0x8)
    bool LinkedGround;                                                                // 0x0368 (size: 0x1)
    class ABP_LinkManager_C* LinkManager;                                             // 0x0370 (size: 0x8)
    int32 MathCount;                                                                  // 0x0378 (size: 0x4)

    bool PrimitiveCheck(class AActor* Actor, const class UPrimitiveComponent*& PrimitiveComp);
    void LINKCheckFunc(FVector StaticLocation, const class UPrimitiveComponent*& PrimitiveComp);
    void ResetCustomForce();
    void AddCustomForce(double AddValue);
    void SetLinkComponent(class UActorComponent* Primitive, bool State);
    void DebugVisualize__FinishedFunc();
    void DebugVisualize__UpdateFunc();
    void ReceiveBeginPlay();
    void BndEvt__BP_Glue_CustomPhysics_GlueArea_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void AddPower(double power, class AActor* SourceActor);
    void AddCustomRevicePower(float PowerAmount);
    void BndEvt__BP_Glue_CustomPhysics_GlueArea_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void LINK_Overlap(class UPrimitiveComponent* PrimitiveComponent);
    void ExecuteUbergraph_BP_Glue_CustomPhysics(int32 EntryPoint);
}; // Size: 0x37C

#endif
