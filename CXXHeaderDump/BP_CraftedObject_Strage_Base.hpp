#ifndef UE4SS_SDK_BP_CraftedObject_Strage_Base_HPP
#define UE4SS_SDK_BP_CraftedObject_Strage_Base_HPP

class ABP_CraftedObject_Strage_Base_C : public ABP_CraftedObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    int32 Mass;                                                                       // 0x0358 (size: 0x4)
    FIntVector2 MassRange;                                                            // 0x035C (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void SetWeight(double float);
    void OnRep_Mass();
    void ReceiveBeginPlay();
    void MassStateUpdate();
    void ExecuteUbergraph_BP_CraftedObject_Strage_Base(int32 EntryPoint);
}; // Size: 0x364

#endif
