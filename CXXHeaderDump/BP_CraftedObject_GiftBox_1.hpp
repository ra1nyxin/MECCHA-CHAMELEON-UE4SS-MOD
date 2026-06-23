#ifndef UE4SS_SDK_BP_CraftedObject_GiftBox_1_HPP
#define UE4SS_SDK_BP_CraftedObject_GiftBox_1_HPP

class ABP_CraftedObject_GiftBox_1_C : public ABP_CraftedObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0358 (size: 0x8)
    int32 OverrideMass;                                                               // 0x0360 (size: 0x4)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_CraftedObject_GiftBox_1(int32 EntryPoint);
}; // Size: 0x364

#endif
