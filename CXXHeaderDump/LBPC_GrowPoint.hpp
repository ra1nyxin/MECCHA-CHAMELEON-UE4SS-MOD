#ifndef UE4SS_SDK_LBPC_GrowPoint_HPP
#define UE4SS_SDK_LBPC_GrowPoint_HPP

class ULBPC_GrowPoint_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    int32 SelectOneNumber;                                                            // 0x0248 (size: 0x4)
    double GrowProb;                                                                  // 0x0250 (size: 0x8)
    FVector2D RandomPositonForward;                                                   // 0x0258 (size: 0x10)
    FVector2D RandomPositonRight;                                                     // 0x0268 (size: 0x10)
    TMap<TSubclassOf<AActor>, double> TargetClass;                                    // 0x0278 (size: 0x50)
    FVector2D ScaleRange;                                                             // 0x02C8 (size: 0x10)
    FVector2D RandomYaw;                                                              // 0x02D8 (size: 0x10)
    FVector2D RandomPitch;                                                            // 0x02E8 (size: 0x10)
    FVector2D RandomRoll;                                                             // 0x02F8 (size: 0x10)
    FVector2D RandomPositonUp;                                                        // 0x0308 (size: 0x10)

    void Generate(const FRandomStream& Seed, int32 DepthIndex);
    void ExecuteUbergraph_LBPC_GrowPoint(int32 EntryPoint);
}; // Size: 0x318

#endif
