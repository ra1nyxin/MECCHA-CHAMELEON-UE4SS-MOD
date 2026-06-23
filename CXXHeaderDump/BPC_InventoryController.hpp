#ifndef UE4SS_SDK_BPC_InventoryController_HPP
#define UE4SS_SDK_BPC_InventoryController_HPP

class UBPC_InventoryController_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* OwnerCharacter;                            // 0x00C0 (size: 0x8)
    int32 CurrentSlotIndex;                                                           // 0x00C8 (size: 0x4)
    int32 MaxSlot;                                                                    // 0x00CC (size: 0x4)
    class UDataTable* DataTable;                                                      // 0x00D0 (size: 0x8)
    int32 CurrentLocalSlot;                                                           // 0x00D8 (size: 0x4)
    TArray<FST_ItemCoreDatas> ItemCoreDatas;                                          // 0x00E0 (size: 0x10)
    FGuid CurrentID;                                                                  // 0x00F0 (size: 0x10)
    class UBillboardComponent* DropPoint;                                             // 0x0100 (size: 0x8)
    int32 OffHandIndex;                                                               // 0x0108 (size: 0x4)
    TArray<FST_ItemCoreDatas> DefaultCoreDatas;                                       // 0x0110 (size: 0x10)
    TArray<int32> StackState;                                                         // 0x0120 (size: 0x10)

    void CleanCheckAllSlot();
    void AddCoreOption(int32 Index, const FName& Key);
    void OnRep_StackState();
    void GetCanStackSlot(const FST_ItemCoreDatas& ST_ItemCoreDatas, int32& SlotIndex);
    bool SlotCanStack(int32 SlotIndex, const FST_ItemCoreDatas& ST_ItemCoreDatas);
    void ClearAllItems();
    void ClearSlot(int32 SlotIndex);
    void RespawnItem(TSubclassOf<class ABP_ItemBase_C> ItemClass, FST_ItemCoreDatas ItemCoreDatas, FVector OverrideDropLocation, FRotator Rotaiton);
    bool SlotIsEmpty(int32 SlotIndex);
    void GetEmptySlot(int32& SlotIndex);
    void DropItem(int32 SlotIndex, FVector OverrideDropLocation, bool ForceNoDrop, bool MultiAllDrop, bool& IsDrop);
    void UpdateCurrentCoreData(FST_ItemCoreDatas Value);
    void OnRep_ItemCoreDatas();
    void CopyVariable(class UBPC_InventoryController_C* Source);
    void GetKeyNames(TArray<FName>& KeyNames);
    void AddInventory(int32 SlotIndex, FST_ItemCoreDatas CoreDatas, bool& Rezult);
    void OnRep_CurrentSlotIndex();
    void SetSlotValue(int32 MoveValue);
    void SlotChange(int32 MoveValue, int32& CurrentIndex);
    void SlotUpdate();
    void GetCurrentSlotItem(FName& ItemName, FST_ItemCoreDatas& CoreDatas);
    void GetItemData(FName ItemName, bool& Rezult, FCPP_GameItemData& ItemData);
    void ReceiveBeginPlay();
    void HaveItemSync();
    void UpdateCurrentCoreData(Server)(FST_ItemCoreDatas Value);
    void HaveItemSync(StackCount)();
    void DropCall(Local)(bool ForceNoDrop);
    void DropCall(Server)(int32 SlotIndex, bool ForceNoDrop);
    void ExecuteUbergraph_BPC_InventoryController(int32 EntryPoint);
}; // Size: 0x130

#endif
