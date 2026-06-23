#ifndef UE4SS_SDK_BP_GenerateRandomBoxLocation_Wall_HPP
#define UE4SS_SDK_BP_GenerateRandomBoxLocation_Wall_HPP

class ABP_GenerateRandomBoxLocation_Wall_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TSubclassOf<class AActor> SpawnTargetClass;                                       // 0x02B8 (size: 0x8)
    FVector Half Size;                                                                // 0x02C0 (size: 0x18)
    FRotator SpawnRotation;                                                           // 0x02D8 (size: 0x18)
    FVector TraceBoundSize;                                                           // 0x02F0 (size: 0x18)
    double FloorCheckDistance;                                                        // 0x0308 (size: 0x8)
    int32 MaxGenerateCharange;                                                        // 0x0310 (size: 0x4)
    bool IsInfinity;                                                                  // 0x0314 (size: 0x1)
    bool SpawnRezult;                                                                 // 0x0315 (size: 0x1)
    FBP_GenerateRandomBoxLocation_Wall_CGeneratedActor GeneratedActor;                // 0x0318 (size: 0x10)
    void GeneratedActor(class AActor* GeneratedActor);
    class AActor* SpawnedActor;                                                       // 0x0328 (size: 0x8)
    double AddHeight;                                                                 // 0x0330 (size: 0x8)
    FVector2D ScaleRange;                                                             // 0x0338 (size: 0x10)
    FVector2D HeightRange;                                                            // 0x0348 (size: 0x10)
    float SearchRadius;                                                               // 0x0358 (size: 0x4)
    FRandomStream Seed;                                                               // 0x035C (size: 0x8)

    bool TraceRound(float Radius, const FVector Start, FHitResult& OutHit);
    void CheckSide(FVector Location, double BoundSizeMultiply, bool& Rezult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_GenerateRandomBoxLocation_Wall(int32 EntryPoint);
    void GeneratedActor__DelegateSignature(class AActor* GeneratedActor);
}; // Size: 0x364

#endif
