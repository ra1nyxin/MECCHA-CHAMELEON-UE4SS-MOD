#ifndef UE4SS_SDK_WBP_Item_HPP
#define UE4SS_SDK_WBP_Item_HPP

class UWBP_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x0348 (size: 0x8)
    class UTextBlock* StackCount;                                                     // 0x0350 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x0358 (size: 0x8)
    class UImage* Background;                                                         // 0x0360 (size: 0x8)
    class UWidgetAnimation* Select;                                                   // 0x0368 (size: 0x8)
    FCPP_GameItemData CurrentItemData;                                                // 0x0370 (size: 0x58)
    bool CurrentSelectState;                                                          // 0x03C8 (size: 0x1)
    FName KeyName;                                                                    // 0x03CC (size: 0x8)

    void SetStackData(int32 StackCount);
    void SetData(FCPP_GameItemData ItemData, int32 StackCount);
    void PreConstruct(bool IsDesignTime);
    void PlaySlotAnim(bool IsSelect);
    void ExecuteUbergraph_WBP_Item(int32 EntryPoint);
}; // Size: 0x3D4

#endif
