#ifndef UE4SS_SDK_BP_Glue_CustomPhysics_V2_HPP
#define UE4SS_SDK_BP_Glue_CustomPhysics_V2_HPP

class ABP_Glue_CustomPhysics_V2_C : public ACPP_Glue
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02F8 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0300 (size: 0x8)
    class UStaticMeshComponent* GlueArea;                                             // 0x0308 (size: 0x8)
    float ScaleAnim_Scale_19AF463B47A89E5F899099A7D25A237F;                           // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ScaleAnim__Direction_19AF463B47A89E5F899099A7D25A237F; // 0x0314 (size: 0x1)
    class UTimelineComponent* ScaleAnim;                                              // 0x0318 (size: 0x8)
    float DebugVisualize_Scale_0A93E7EB41E4F9D8379B149B58701A9F;                      // 0x0320 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DebugVisualize__Direction_0A93E7EB41E4F9D8379B149B58701A9F; // 0x0324 (size: 0x1)
    class UTimelineComponent* DebugVisualize;                                         // 0x0328 (size: 0x8)
    TArray<class UPrimitiveComponent*> HitComponents;                                 // 0x0330 (size: 0x10)
    class UMaterialInstanceDynamic* DynamicMat;                                       // 0x0340 (size: 0x8)
    class ULBPC_Glue_C* GlueComp;                                                     // 0x0348 (size: 0x8)
    TArray<class UBPC_PowerDispersion_C*> ParentDispattionComonents;                  // 0x0350 (size: 0x10)
    TArray<class AActor*> DebugParentActor;                                           // 0x0360 (size: 0x10)
    double GroundDistance;                                                            // 0x0370 (size: 0x8)
    bool LinkedGround;                                                                // 0x0378 (size: 0x1)
    class ABP_LinkManager_C* LinkManager;                                             // 0x0380 (size: 0x8)
    int32 MathCount;                                                                  // 0x0388 (size: 0x4)
    class UWBP_GlueValueText_C* GlueText;                                             // 0x0390 (size: 0x8)
    double BeforeValue;                                                               // 0x0398 (size: 0x8)
    class ANavLinkProxy* NavLinkProxy;                                                // 0x03A0 (size: 0x8)
    int32 StaticIndex;                                                                // 0x03A8 (size: 0x4)
    FVector StaticNavPoint;                                                           // 0x03B0 (size: 0x18)
    bool IsDamageBreak;                                                               // 0x03C8 (size: 0x1)
    class UBP_PenguinBodyPreset_C* BodyPresetDatas;                                   // 0x03D0 (size: 0x8)
    int32 DynamicColorIndex;                                                          // 0x03D8 (size: 0x4)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void OnRep_DynamicColorIndex();
    void AddCustomForce(double AddValue);
    void DebugVisualize__FinishedFunc();
    void DebugVisualize__UpdateFunc();
    void ScaleAnim__FinishedFunc();
    void ScaleAnim__UpdateFunc();
    void AddPower(double power, class AActor* SourceActor);
    void AddCustomRevicePower(float PowerAmount);
    void ReceiveBeginPlay();
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void SnapGlue(FVector WorldPosition, const TArray<class UPrimitiveComponent*>& TargetPrimitives);
    void StaminaDamage(double Value);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void UpdateGlueVisual();
    void ReceiveDestroyed();
    void GlueViewDistanceCheck();
    void SetGlueColor();
    void ExecuteUbergraph_BP_Glue_CustomPhysics_V2(int32 EntryPoint);
}; // Size: 0x3DC

#endif
