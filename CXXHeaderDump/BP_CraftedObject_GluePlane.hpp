#ifndef UE4SS_SDK_BP_CraftedObject_GluePlane_HPP
#define UE4SS_SDK_BP_CraftedObject_GluePlane_HPP

class ABP_CraftedObject_GluePlane_C : public ABP_CraftedObject_Strage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 OverrideMass;                                                               // 0x0370 (size: 0x4)
    bool NoGrab;                                                                      // 0x0374 (size: 0x1)

    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void ReceiveBeginPlay();
    void ReceiveActorBeginOverlap(class AActor* OtherActor);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CraftedObject_GluePlane(int32 EntryPoint);
}; // Size: 0x375

#endif
