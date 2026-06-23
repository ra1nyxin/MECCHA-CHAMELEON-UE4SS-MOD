#ifndef UE4SS_SDK_BP_ThrowTrailMesh_HPP
#define UE4SS_SDK_BP_ThrowTrailMesh_HPP

class ABP_ThrowTrailMesh_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x02B0 (size: 0x8)
    TArray<FVector> Positions;                                                        // 0x02B8 (size: 0x10)
    FRotator Rotation;                                                                // 0x02C8 (size: 0x18)
    class UStaticMesh* StaticMesh;                                                    // 0x02E0 (size: 0x8)
    FVector Scale;                                                                    // 0x02E8 (size: 0x18)

    void CreateMesh();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_ThrowTrailMesh(int32 EntryPoint);
}; // Size: 0x300

#endif
