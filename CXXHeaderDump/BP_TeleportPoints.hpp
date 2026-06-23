#ifndef UE4SS_SDK_BP_TeleportPoints_HPP
#define UE4SS_SDK_BP_TeleportPoints_HPP

class ABP_TeleportPoints_C : public AActor
{
    class UBoxComponent* Box;                                                         // 0x02A8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x02B0 (size: 0x8)
    int32 NumSpawnPoints;                                                             // 0x02B8 (size: 0x4)
    TArray<FTransform> SpawnTransforms;                                               // 0x02C0 (size: 0x10)
    FVector2D Scale;                                                                  // 0x02D0 (size: 0x10)
    double CharacterRadius;                                                           // 0x02E0 (size: 0x8)
    double CharacterHeight;                                                           // 0x02E8 (size: 0x8)
    int32 CopyNum;                                                                    // 0x02F0 (size: 0x4)

    void GetAllTrasnfroms(TArray<FTransform>& SpawnTransforms);
    void SetSpawnPoint();
    void UserConstructionScript();
}; // Size: 0x2F4

#endif
