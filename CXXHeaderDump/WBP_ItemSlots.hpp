#ifndef UE4SS_SDK_WBP_ItemSlots_HPP
#define UE4SS_SDK_WBP_ItemSlots_HPP

class UWBP_ItemSlots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UHorizontalBox* HorizontalBox_62;                                           // 0x0348 (size: 0x8)
    int32 SlotCount;                                                                  // 0x0350 (size: 0x4)
    TArray<class UWBP_Item_C*> Slots;                                                 // 0x0358 (size: 0x10)
    int32 CurrentSelectIndex;                                                         // 0x0368 (size: 0x4)

    void UpdateSlotStackData(int32 TargetIndex, int32 StackCount);
    void GetCurrentItemData(FCPP_GameItemData& ItemData);
    void UpdateSlotData(int32 TargetIndex, FCPP_GameItemData ItemData);
    void PreConstruct(bool IsDesignTime);
    void UpdateSelectSlot(const int32 Index);
    void ExecuteUbergraph_WBP_ItemSlots(int32 EntryPoint);
}; // Size: 0x36C

#endif
