#ifndef UE4SS_SDK_BP_Structure_Base_HPP
#define UE4SS_SDK_BP_Structure_Base_HPP

class ABP_Structure_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    FRandomStream RandomSeed;                                                         // 0x02B8 (size: 0x8)

    void Generate();
    void ExecuteUbergraph_BP_Structure_Base(int32 EntryPoint);
}; // Size: 0x2C0

#endif
