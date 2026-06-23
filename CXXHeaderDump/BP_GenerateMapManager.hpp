#ifndef UE4SS_SDK_BP_GenerateMapManager_HPP
#define UE4SS_SDK_BP_GenerateMapManager_HPP

class ABP_GenerateMapManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBoxComponent* SpawnArea;                                                   // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    FRandomStream RandomSeed;                                                         // 0x02C0 (size: 0x8)
    FVector Half Size;                                                                // 0x02C8 (size: 0x18)
    double GridSize;                                                                  // 0x02E0 (size: 0x8)
    int32 TileX;                                                                      // 0x02E8 (size: 0x4)
    int32 TileY;                                                                      // 0x02EC (size: 0x4)
    class UDataTable* SpawnDatas;                                                     // 0x02F0 (size: 0x8)
    TMap<TSubclassOf<ABP_Structure_Base_C>, double> SpawnClassData;                   // 0x02F8 (size: 0x50)
    class UBP_GenerateDataAsset_C* GenerateData;                                      // 0x0348 (size: 0x8)
    int32 MaxSpawnPerY;                                                               // 0x0350 (size: 0x4)
    int32 MaxSpawnPerX;                                                               // 0x0354 (size: 0x4)
    int32 MaxLinkPoint;                                                               // 0x0358 (size: 0x4)
    TArray<FVector2D> GeneratedPoints;                                                // 0x0360 (size: 0x10)
    TArray<FVector2D> GeneratedPointsLastZone;                                        // 0x0370 (size: 0x10)
    TMap<int32, FST_PriorityGenerateComonents> LineTraceComponents;                   // 0x0380 (size: 0x50)
    bool InverseX;                                                                    // 0x03D0 (size: 0x1)
    double DebugDrawHeight;                                                           // 0x03D8 (size: 0x8)
    TArray<class AActor*> SpawnedActors;                                              // 0x03E0 (size: 0x10)
    FRandomStream InitializeSeed;                                                     // 0x03F0 (size: 0x8)
    int32 GoalPointCount;                                                             // 0x03F8 (size: 0x4)
    int32 GenerateHouseNum;                                                           // 0x03FC (size: 0x4)
    int32 GenerateTreeNum;                                                            // 0x0400 (size: 0x4)
    int32 GenerateBushNum;                                                            // 0x0404 (size: 0x4)
    int32 GenerateMiniTreeNum;                                                        // 0x0408 (size: 0x4)
    int32 GenerateXmasMiniTreeNum;                                                    // 0x040C (size: 0x4)
    TArray<FST_GenerateBoxLocation> AddGenerateBox_Wall;                              // 0x0410 (size: 0x10)
    TArray<FST_GenerateBoxLocation> AddGenerateBox;                                   // 0x0420 (size: 0x10)
    TArray<FST_GenerateBoxLocation> AddGenerateBox_Wall_Local;                        // 0x0430 (size: 0x10)

    void GenerateBell(TSubclassOf<class AActor> SpawnTargetClass, FRandomStream Seed);
    void GenerateBoxLocation_Wall(int32 SpawnNum, TSubclassOf<class AActor> SpawnTargetClass, FVector TraceBoundSize, double FloorCheckDistance, int32 MaxGenerateCharange, bool IsInfinity, FVector2D ScaleRange, FVector2D HeightRange, FRandomStream Seed);
    void GenerateBoxLocation(int32 SpawnNum, TSubclassOf<class AActor> SpawnTargetClass, FVector TraceBoundSize, double FloorCheckDistance, int32 MaxGenerateCharange, bool IsInfinity, FVector2D ScaleRange, FRandomStream Seed);
    void GetGenerateRandomBoxDatas(FTransform& SpawnerTransform, FVector& HarfSize, FRotator& Rotation);
    void GetSpawnTransformAndRadius(FTransform& Transform, double& Radius);
    void ResetGoalPoint();
    void RegisterPriorityGenerateComponet(int32 Key, class ULBPC_PriorityGenerateControl_C* Value);
    void EnableSpawnArray(int32 TileCount, int32 Count, FRandomStream& Seed, TArray<int32>& ReturnArray);
    void NewGetClass(TSubclassOf<class AActor>& Class);
    void GetClass(TSubclassOf<class ABP_Structure_Base_C>& Class);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void GenerateHouse();
    void ExecuteUbergraph_BP_GenerateMapManager(int32 EntryPoint);
}; // Size: 0x440

#endif
