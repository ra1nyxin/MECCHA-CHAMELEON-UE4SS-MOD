#ifndef UE4SS_SDK_BP_GenerateDataAsset_HPP
#define UE4SS_SDK_BP_GenerateDataAsset_HPP

class UBP_GenerateDataAsset_C : public UPrimaryDataAsset
{
    TMap<TSubclassOf<AActor>, double> SpawnActors;                                    // 0x0030 (size: 0x50)
    FIntVector2 TileSize;                                                             // 0x0080 (size: 0x8)
    double GridSize;                                                                  // 0x0088 (size: 0x8)
    int32 MaxSpawnPerY;                                                               // 0x0090 (size: 0x4)
    int32 MaxSpawnPerX;                                                               // 0x0094 (size: 0x4)
    TArray<FST_GenerateBoxLocation> GenerateBoxLocaiton;                              // 0x0098 (size: 0x10)
    TSubclassOf<class ABP_InstanceCreate_Manager_C> InstangeManager;                  // 0x00A8 (size: 0x8)

}; // Size: 0xB0

#endif
