#ifndef UE4SS_SDK_BP_CraftedObject_WoodPlane_1_HPP
#define UE4SS_SDK_BP_CraftedObject_WoodPlane_1_HPP

class ABP_CraftedObject_WoodPlane_1_C : public ABP_CraftedObject_Strage_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CraftedObject_WoodPlane_1(int32 EntryPoint);
}; // Size: 0x370

#endif
