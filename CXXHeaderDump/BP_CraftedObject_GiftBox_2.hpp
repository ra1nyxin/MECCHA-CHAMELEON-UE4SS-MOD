#ifndef UE4SS_SDK_BP_CraftedObject_GiftBox_2_HPP
#define UE4SS_SDK_BP_CraftedObject_GiftBox_2_HPP

class ABP_CraftedObject_GiftBox_2_C : public ABP_CraftedObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x0358 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0360 (size: 0x8)
    FTransform DefaultTransform;                                                      // 0x0370 (size: 0x60)
    int32 OverrideMass;                                                               // 0x03D0 (size: 0x4)

    void OnRep_OverrideMass();
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CraftedObject_GiftBox_2(int32 EntryPoint);
}; // Size: 0x3D4

#endif
