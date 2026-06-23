#ifndef UE4SS_SDK_BP_CopyActorBase_HPP
#define UE4SS_SDK_BP_CopyActorBase_HPP

class ABP_CopyActorBase_C : public ABP_EnablePotoIn_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03F0 (size: 0x8)
    float DeleteVATAnim_Time_9C40C62540CE68DAE57FCAA1FB62D81A;                        // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DeleteVATAnim__Direction_9C40C62540CE68DAE57FCAA1FB62D81A; // 0x03FC (size: 0x1)
    class UTimelineComponent* DeleteVATAnim;                                          // 0x0400 (size: 0x8)
    FST_VAT_Datas Voxel_Base;                                                         // 0x0408 (size: 0x10)
    FST_VAT_Datas Voxel_Copy;                                                         // 0x0418 (size: 0x10)
    FST_VAT_Datas Voxel_Delete;                                                       // 0x0428 (size: 0x10)
    FVector OverrideScale;                                                            // 0x0438 (size: 0x18)
    class UStaticMeshComponent* CopiedStaticMeshComponent;                            // 0x0450 (size: 0x8)
    class UMaterialInstanceDynamic* DeleteDynamicMaterialInstance;                    // 0x0458 (size: 0x8)

    void GetParryState(bool& State);
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetCopyClass(class UStaticMeshComponent* CentorComponent, TSubclassOf<class ABP_CopyActorBase_C>& Class, double& Scale, FVector& DefaultScale);
    void UserConstructionScript();
    void DeleteVATAnim__FinishedFunc();
    void DeleteVATAnim__UpdateFunc();
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void Reverse(FTransform NewPosition, FVector HitNormal);
    void Delete();
    void DestroyVAT();
    void Fix();
    void ExecuteUbergraph_BP_CopyActorBase(int32 EntryPoint);
}; // Size: 0x460

#endif
