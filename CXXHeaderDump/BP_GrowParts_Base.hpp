#ifndef UE4SS_SDK_BP_GrowParts_Base_HPP
#define UE4SS_SDK_BP_GrowParts_Base_HPP

class ABP_GrowParts_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)

    void GenerateParts(FRandomStream Seed, int32 DepthIndex);
    void ReceiveBeginPlay();
    void Generate(const FRandomStream& Seed, int32 DepthIndex);
    void ExecuteUbergraph_BP_GrowParts_Base(int32 EntryPoint);
}; // Size: 0x2B8

#endif
