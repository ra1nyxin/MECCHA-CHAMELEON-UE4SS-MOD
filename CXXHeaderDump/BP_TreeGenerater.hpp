#ifndef UE4SS_SDK_BP_TreeGenerater_HPP
#define UE4SS_SDK_BP_TreeGenerater_HPP

class ABP_TreeGenerater_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class ULBPC_PriorityGenerateControl_C* LBPC_PriorityGenerateControl;              // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    TSubclassOf<class AActor> TreeClass;                                              // 0x02C0 (size: 0x8)
    FVector2D RandomYawRange;                                                         // 0x02C8 (size: 0x10)

    void ReceiveBeginPlay();
    void Generate(const FRandomStream& Seed, int32 DepthIndex);
    void GenerateTree(FRandomStream Seed);
    void ExecuteUbergraph_BP_TreeGenerater(int32 EntryPoint);
}; // Size: 0x2D8

#endif
