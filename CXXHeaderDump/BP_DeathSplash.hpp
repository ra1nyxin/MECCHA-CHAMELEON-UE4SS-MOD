#ifndef UE4SS_SDK_BP_DeathSplash_HPP
#define UE4SS_SDK_BP_DeathSplash_HPP

class ABP_DeathSplash_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TArray<FPaintMaterialPattern> PaintMaterialPatterns;                              // 0x02B8 (size: 0x10)
    FRandomStream RandomStream;                                                       // 0x02C8 (size: 0x8)
    TArray<FHitResult> Out Hits;                                                      // 0x02D0 (size: 0x10)

    void OnRep_PaintMaterialPatterns();
    void ReceiveBeginPlay();
    void PaintSpawn();
    void ExecuteUbergraph_BP_DeathSplash(int32 EntryPoint);
}; // Size: 0x2E0

#endif
