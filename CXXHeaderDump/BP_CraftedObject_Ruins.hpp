#ifndef UE4SS_SDK_BP_CraftedObject_Ruins_HPP
#define UE4SS_SDK_BP_CraftedObject_Ruins_HPP

class ABP_CraftedObject_Ruins_C : public ABP_CraftedObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_BP_CraftedObject_Ruins(int32 EntryPoint);
}; // Size: 0x358

#endif
