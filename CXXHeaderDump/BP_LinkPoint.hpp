#ifndef UE4SS_SDK_BP_LinkPoint_HPP
#define UE4SS_SDK_BP_LinkPoint_HPP

class ABP_LinkPoint_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02B0 (size: 0x8)
    class ULBPC_SpawnLuggage_C* LBPC_SpawnLuggage2;                                   // 0x02B8 (size: 0x8)
    class ULBPC_SpawnLuggage_C* LBPC_SpawnLuggage1;                                   // 0x02C0 (size: 0x8)
    class ULBPC_SpawnLuggage_C* LBPC_SpawnLuggage;                                    // 0x02C8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh3;                        // 0x02D0 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh2;                        // 0x02D8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh1;                        // 0x02E0 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* ring;                                                 // 0x02F8 (size: 0x8)
    class UGeometryCacheComponent* LiNK_flag;                                         // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Pole;                                                 // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    bool IsStartPosition;                                                             // 0x0318 (size: 0x1)
    FTransform InstancePoleTransform;                                                 // 0x0320 (size: 0x60)
    FVector DiffPosition;                                                             // 0x0380 (size: 0x18)
    FGuid UniqueID;                                                                   // 0x0398 (size: 0x10)

    void MakePole(class UInstancedStaticMeshComponent* InstancedStaticMeshComp);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LinkPoint(int32 EntryPoint);
}; // Size: 0x3A8

#endif
