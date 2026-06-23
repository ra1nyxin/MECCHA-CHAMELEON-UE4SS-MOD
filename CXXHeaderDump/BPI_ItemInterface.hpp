#ifndef UE4SS_SDK_BPI_ItemInterface_HPP
#define UE4SS_SDK_BPI_ItemInterface_HPP

class IBPI_ItemInterface_C : public IInterface
{

    void UpdateCoreDatas(const FST_ItemCoreDatas CoreDatas);
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void GetParentCharacter(class ABP_FirstPersonCharacter_Main_C*& FirstPersonCharacter);
    void InteractItem();
    void SetMeshDatas(bool KeepScale);
    void DropItem(FVector Force Vector, FVector CentorPosition);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
}; // Size: 0x28

#endif
