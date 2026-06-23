#ifndef UE4SS_SDK_BP_Parasol_HPP
#define UE4SS_SDK_BP_Parasol_HPP

class ABP_Parasol_C : public ABP_UniqueItemSimple_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0458 (size: 0x8)
    class UAudioComponent* Air;                                                       // 0x0460 (size: 0x8)

    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void ExecuteUbergraph_BP_Parasol(int32 EntryPoint);
}; // Size: 0x468

#endif
