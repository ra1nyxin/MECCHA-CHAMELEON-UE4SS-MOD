#ifndef UE4SS_SDK_BP_LevelPriset_HPP
#define UE4SS_SDK_BP_LevelPriset_HPP

class UBP_LevelPriset_C : public UPrimaryDataAsset
{
    FIntVector2 TileSize;                                                             // 0x0030 (size: 0x8)
    double GridSize;                                                                  // 0x0038 (size: 0x8)
    int32 MaxSpawnPerY;                                                               // 0x0040 (size: 0x4)

}; // Size: 0x44

#endif
