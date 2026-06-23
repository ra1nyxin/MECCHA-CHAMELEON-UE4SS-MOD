#ifndef UE4SS_SDK_BP_InfinityGenerator_HPP
#define UE4SS_SDK_BP_InfinityGenerator_HPP

class ABP_InfinityGenerator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TSubclassOf<class AActor> TreeClass;                                              // 0x02B8 (size: 0x8)
    class AActor* BeforeGenerate;                                                     // 0x02C0 (size: 0x8)

    void Generate(const FRandomStream& Seed, int32 DepthIndex);
    void ExecuteUbergraph_BP_InfinityGenerator(int32 EntryPoint);
}; // Size: 0x2C8

#endif
