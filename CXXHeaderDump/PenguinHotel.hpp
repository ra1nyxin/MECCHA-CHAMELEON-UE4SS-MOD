#ifndef UE4SS_SDK_PenguinHotel_HPP
#define UE4SS_SDK_PenguinHotel_HPP

#include "PenguinHotel_enums.hpp"

struct FBandwidthProbeResult
{
    bool bSucceeded;                                                                  // 0x0000 (size: 0x1)
    float MeasuredBytesPerSec;                                                        // 0x0004 (size: 0x4)
    float MeasuredPerClientBytesPerSec;                                               // 0x0008 (size: 0x4)
    float BaselineAvgLagSeconds;                                                      // 0x000C (size: 0x4)
    float PeakAvgLagSeconds;                                                          // 0x0010 (size: 0x4)
    int32 NumClients;                                                                 // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FBandwidthStats
{
    int32 NumClients;                                                                 // 0x0000 (size: 0x4)
    float TotalOutBytesPerSec;                                                        // 0x0004 (size: 0x4)
    float TotalInBytesPerSec;                                                         // 0x0008 (size: 0x4)
    float OutBytesPerClient;                                                          // 0x000C (size: 0x4)
    float InBytesPerClient;                                                           // 0x0010 (size: 0x4)
    float AvailableBytesPerSec;                                                       // 0x0014 (size: 0x4)
    float UsageRatio;                                                                 // 0x0018 (size: 0x4)
    int32 EstimatedAdditionalCapacity;                                                // 0x001C (size: 0x4)

}; // Size: 0x20

struct FBrushQueryFilter
{
    TArray<class AActor*> TargetActors;                                               // 0x0000 (size: 0x10)
    TArray<class UPrimitiveComponent*> TargetComponents;                              // 0x0010 (size: 0x10)
    bool bFilterByStencil;                                                            // 0x0020 (size: 0x1)
    TArray<int32> TargetStencilValues;                                                // 0x0028 (size: 0x10)
    float MaxTraceDistance;                                                           // 0x0038 (size: 0x4)
    bool bTraceComplex;                                                               // 0x003C (size: 0x1)
    TArray<class AActor*> IgnoreActors;                                               // 0x0040 (size: 0x10)
    int32 UVChannel;                                                                  // 0x0050 (size: 0x4)
    TEnumAsByte<ECollisionChannel> TraceChannel;                                      // 0x0054 (size: 0x1)
    bool bAllowNoCollisionMesh;                                                       // 0x0055 (size: 0x1)
    TArray<class UMeshComponent*> NoCollisionMeshTargets;                             // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FBrushQueryResult
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)
    FVector WorldPosition;                                                            // 0x0008 (size: 0x18)
    FVector WorldNormal;                                                              // 0x0020 (size: 0x18)
    FVector2D HitUV;                                                                  // 0x0038 (size: 0x10)
    bool bHasUV;                                                                      // 0x0048 (size: 0x1)
    class UPrimitiveComponent* HitComponent;                                          // 0x0050 (size: 0x8)
    class AActor* HitActor;                                                           // 0x0058 (size: 0x8)
    int32 FaceIndex;                                                                  // 0x0060 (size: 0x4)
    float Distance;                                                                   // 0x0064 (size: 0x4)
    int32 StencilValue;                                                               // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FCPP_BakedBrunchData
{
    TMap<class UPrimitiveComponent*, class FCPP_BakedWeightData> BakedWeightDatas;    // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_BakedWeightData
{
    TArray<class UPrimitiveComponent*> ComputedPrimitives;                            // 0x0000 (size: 0x10)
    float BakedWeight;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCPP_BlockForceInfo
{
    TSet<UPrimitiveComponent*> BlockTargetPrimitives;                                 // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_ComputedWeight
{
    class UPrimitiveComponent* SourcePrimitive;                                       // 0x0000 (size: 0x8)
    class UPrimitiveComponent* TargetPrimitive;                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FCPP_CurrentForceWave
{
    class UPrimitiveComponent* SourcePrimitive;                                       // 0x0000 (size: 0x8)
    class UPrimitiveComponent* BeforePrimitive;                                       // 0x0008 (size: 0x8)
    float PowerValue;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCPP_EndPointPrimitive
{
    TArray<class UPrimitiveComponent*> EndPointPrimitives;                            // 0x0000 (size: 0x10)
    TArray<class UPrimitiveComponent*> EndPointRootPrimitives;                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FCPP_GameItemData : public FTableRowBase
{
    FGuid UniqueID;                                                                   // 0x0008 (size: 0x10)
    EGameItemType ItemType;                                                           // 0x0018 (size: 0x1)
    class UTexture2D* ItemImage;                                                      // 0x0020 (size: 0x8)
    TSubclassOf<class AActor> ItemClass;                                              // 0x0028 (size: 0x8)
    int32 StackCount;                                                                 // 0x0030 (size: 0x4)
    TArray<FName> OptionTags;                                                         // 0x0038 (size: 0x10)
    FText ItemNameAndInfo;                                                            // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FCPP_GlueRefGroup
{
    TMap<class UPrimitiveComponent*, class FCPP_GlueRefInfo> GroupMap;                // 0x0000 (size: 0x50)
    float StaticWeight;                                                               // 0x0050 (size: 0x4)
    float SumBranchWeight;                                                            // 0x0054 (size: 0x4)
    TMap<UPrimitiveComponent*, float> WeightDatas;                                    // 0x0058 (size: 0x50)
    float SumReverseNormalizedWeight;                                                 // 0x00A8 (size: 0x4)
    TArray<class UPrimitiveComponent*> SortedWeightDatasKey;                          // 0x00B0 (size: 0x10)
    float SumStaticWeight;                                                            // 0x00C0 (size: 0x4)
    float StaticMass;                                                                 // 0x00C4 (size: 0x4)
    float DynamicMass;                                                                // 0x00C8 (size: 0x4)
    TMap<UPrimitiveComponent*, float> DynamicMeshAndPower;                            // 0x00D0 (size: 0x50)

}; // Size: 0x120

struct FCPP_GlueRefInfo
{
    class UPrimitiveComponent* LinkedMergePrimitive;                                  // 0x0000 (size: 0x8)
    float LinkedLength;                                                               // 0x0008 (size: 0x4)
    float LocalWeight;                                                                // 0x000C (size: 0x4)
    TArray<class ACPP_Glue*> Targets;                                                 // 0x0010 (size: 0x10)
    FVector AverageLocation;                                                          // 0x0020 (size: 0x18)
    float AverageDistance;                                                            // 0x0038 (size: 0x4)
    float AverageDistanceSelf;                                                        // 0x003C (size: 0x4)
    float BranchWeight;                                                               // 0x0040 (size: 0x4)
    TMap<class UPrimitiveComponent*, class FCPP_StaticWeightDatas> StaticWeightDatas; // 0x0048 (size: 0x50)
    float DistanceWeight;                                                             // 0x0098 (size: 0x4)
    TArray<FCPP_ComputedWeight> BakedComputedWeights;                                 // 0x00A0 (size: 0x10)
    float CurrentSumSingleWeight;                                                     // 0x00B0 (size: 0x4)
    TMap<UPrimitiveComponent*, float> CanFlowingForces;                               // 0x00B8 (size: 0x50)
    TSet<int32> HasBranchIndex;                                                       // 0x0108 (size: 0x50)

}; // Size: 0x158

struct FCPP_HitPointInfo
{
    FVector Velocity;                                                                 // 0x0000 (size: 0x18)
    TArray<class UPrimitiveComponent*> EndPointRootPrimitives;                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FCPP_MergedNumberData
{
    TMap<int32, float> Weights;                                                       // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_MoveTargetNumberData
{
    TMap<UPrimitiveComponent*, int32> UpperTargets;                                   // 0x0000 (size: 0x50)
    FCPP_MergedNumberData MergedNumberData;                                           // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FCPP_OrderInfo
{
    class UPrimitiveComponent* TargetPrimitive;                                       // 0x0000 (size: 0x8)
    class UPrimitiveComponent* BeforePrimitive;                                       // 0x0008 (size: 0x8)
    float WeightValue;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCPP_OrderInfoArray
{
    TMap<class UPrimitiveComponent*, class FCPP_OrderInfo> OrderInfos;                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_OrderInfoDatas
{
    TMap<class UPrimitiveComponent*, class FCPP_OrderInfo> OrderInfos;                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_SingleOrderData
{
    TMap<class UPrimitiveComponent*, class FCPP_SingleOrderSplitData> DynamicForceValues; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_SingleOrderDataDynamic
{
    TArray<FCPP_SingleOrderInfo> DynamicSingleOrderInfoDatas;                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCPP_SingleOrderInfo
{
    class UPrimitiveComponent* TargetPrimitive;                                       // 0x0000 (size: 0x8)
    class UPrimitiveComponent* BeforePrimitive;                                       // 0x0008 (size: 0x8)
    float WeightValue;                                                                // 0x0010 (size: 0x4)
    TSet<UPrimitiveComponent*> ComputedPrimitives;                                    // 0x0018 (size: 0x50)
    TSet<int32> HasBranchIndex;                                                       // 0x0068 (size: 0x50)
    float CurrentDistance;                                                            // 0x00B8 (size: 0x4)
    int32 StartVersion;                                                               // 0x00BC (size: 0x4)
    int32 StartForceVersion;                                                          // 0x00C0 (size: 0x4)

}; // Size: 0xC8

struct FCPP_SingleOrderSplitData
{
    TMap<class UPrimitiveComponent*, class FCPP_SingleOrderDataDynamic> DynamicSingleOrderDatas; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_StaticWeightDatas
{
    TMap<int32, float> Weights;                                                       // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FCPP_TouchPointDatas
{
    TMap<class FIntVector, class FVector> GroupedVectors;                             // 0x0000 (size: 0x50)
    float Scale;                                                                      // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FCPP_WaveInfo
{
    TMap<UPrimitiveComponent*, float> TargetPower;                                    // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FDepthQueryResult
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)
    FVector WorldPosition;                                                            // 0x0008 (size: 0x18)
    FVector WorldNormal;                                                              // 0x0020 (size: 0x18)
    int32 StencilValue;                                                               // 0x0038 (size: 0x4)
    bool bHasStencil;                                                                 // 0x003C (size: 0x1)
    float SceneDepth;                                                                 // 0x0040 (size: 0x4)
    FVector2D ScreenPosition;                                                         // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FEOSPlayerReportResult
{
    bool bSucceeded;                                                                  // 0x0000 (size: 0x1)
    FString ResultCode;                                                               // 0x0008 (size: 0x10)
    FString ErrorMessage;                                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FIoStoreModLevelInfo
{
    FString ModFolderPath;                                                            // 0x0000 (size: 0x10)
    FString TocFilePath;                                                              // 0x0010 (size: 0x10)
    FString AssetRegistryPath;                                                        // 0x0020 (size: 0x10)
    FString PackageName;                                                              // 0x0030 (size: 0x10)
    FString AssetName;                                                                // 0x0040 (size: 0x10)
    FString ObjectPath;                                                               // 0x0050 (size: 0x10)
    FString LevelPath;                                                                // 0x0060 (size: 0x10)
    FString DisplayName;                                                              // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FModMapJsonInfo
{
    FString ModId;                                                                    // 0x0000 (size: 0x10)
    FString DisplayName;                                                              // 0x0010 (size: 0x10)
    FString Author;                                                                   // 0x0020 (size: 0x10)
    FString Version;                                                                  // 0x0030 (size: 0x10)
    FString PakFile;                                                                  // 0x0040 (size: 0x10)
    FString LevelPath;                                                                // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FMyClimbingInputBatch : public FCharacterDefaultInputs
{
    bool bIsClimbing;                                                                 // 0x0080 (size: 0x1)
    bool IsCrouchingInput;                                                            // 0x0081 (size: 0x1)
    float DesiredCapsuleHalfHeight;                                                   // 0x0084 (size: 0x4)
    FVector ClimbEndLaunchVel;                                                        // 0x0088 (size: 0x18)

}; // Size: 0xA0

struct FPaintChannelData
{
    FLinearColor AlbedoColor;                                                         // 0x0000 (size: 0x10)
    float Metallic;                                                                   // 0x0010 (size: 0x4)
    float Roughness;                                                                  // 0x0014 (size: 0x4)
    float Height;                                                                     // 0x0018 (size: 0x4)
    EPaintChannelApplyMode ApplyMode;                                                 // 0x001C (size: 0x1)

}; // Size: 0x20

struct FPaintMaterialPattern
{
    FLinearColor AlbedoColor;                                                         // 0x0000 (size: 0x10)
    float Metallic;                                                                   // 0x0010 (size: 0x4)
    float Roughness;                                                                  // 0x0014 (size: 0x4)
    float CoverageRatio;                                                              // 0x0018 (size: 0x4)
    int32 SampleCount;                                                                // 0x001C (size: 0x4)

}; // Size: 0x20

struct FPaintStroke
{
    FVector2D Uv;                                                                     // 0x0000 (size: 0x10)
    FVector WorldPosition;                                                            // 0x0010 (size: 0x18)
    bool bHasWorldPosition;                                                           // 0x0028 (size: 0x1)
    FVector LocalPosition;                                                            // 0x0030 (size: 0x18)
    bool bHasLocalPosition;                                                           // 0x0048 (size: 0x1)
    bool bHasSkeletalTriangleAnchor;                                                  // 0x0049 (size: 0x1)
    int32 SkeletalTriangleIndex;                                                      // 0x004C (size: 0x4)
    FVector SkeletalTriangleBarycentric;                                              // 0x0050 (size: 0x18)
    FRuntimeBrushSettings BrushSettings;                                              // 0x0068 (size: 0x28)
    FPaintChannelData ChannelData;                                                    // 0x0090 (size: 0x20)
    EPaintChannel TargetChannel;                                                      // 0x00B0 (size: 0x1)
    float EffectiveBrushWorldRadius;                                                  // 0x00B4 (size: 0x4)
    int32 EffectiveSubdivisionLevel;                                                  // 0x00B8 (size: 0x4)
    float EffectiveSubdivisionPixelSize;                                              // 0x00BC (size: 0x4)
    int32 EffectiveTemplateResolution;                                                // 0x00C0 (size: 0x4)
    int32 EffectiveMaxGeneratedBrushTriangles;                                        // 0x00C4 (size: 0x4)
    int32 EffectiveGutterExpandPixels;                                                // 0x00C8 (size: 0x4)
    FGuid ReplicationSourceId;                                                        // 0x00CC (size: 0x10)

}; // Size: 0xE0

struct FPaintStrokeBatch
{
    TArray<FPaintStroke> Strokes;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPaintTextureOptions
{
    int32 AlbedoResolution;                                                           // 0x0000 (size: 0x4)
    int32 MetallicResolution;                                                         // 0x0004 (size: 0x4)
    int32 RoughnessResolution;                                                        // 0x0008 (size: 0x4)
    int32 HeightResolution;                                                           // 0x000C (size: 0x4)
    int32 SeamBleedPixels;                                                            // 0x0010 (size: 0x4)
    int32 GutterExpandPixels;                                                         // 0x0014 (size: 0x4)
    FLinearColor AlbedoClearColor;                                                    // 0x0018 (size: 0x10)
    float MetallicClearValue;                                                         // 0x0028 (size: 0x4)
    float RoughnessClearValue;                                                        // 0x002C (size: 0x4)
    float HeightClearValue;                                                           // 0x0030 (size: 0x4)
    float SubdivisionPixelSize;                                                       // 0x0034 (size: 0x4)
    int32 MaxSubdivisionLevel;                                                        // 0x0038 (size: 0x4)
    int32 MaxGeneratedBrushTriangles;                                                 // 0x003C (size: 0x4)
    bool bAutoReduceSubdivisionForLargeBrushes;                                       // 0x0040 (size: 0x1)
    float DynamicSubdivisionMinBrushRadius;                                           // 0x0044 (size: 0x4)
    float DynamicSubdivisionMaxBrushRadius;                                           // 0x0048 (size: 0x4)
    int32 DynamicSubdivisionMinLevel;                                                 // 0x004C (size: 0x4)
    int32 DynamicSubdivisionMaxLevel;                                                 // 0x0050 (size: 0x4)

}; // Size: 0x54

struct FPenTabletState
{
    float Pressure;                                                                   // 0x0000 (size: 0x4)
    bool bIsConnected;                                                                // 0x0004 (size: 0x1)
    bool bIsPenDown;                                                                  // 0x0005 (size: 0x1)
    bool bHasPressure;                                                                // 0x0006 (size: 0x1)

}; // Size: 0x8

struct FPlanetDamageInfo
{
    float BaseDamage;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPlanetDamageRezult
{
    bool IsBreak;                                                                     // 0x0000 (size: 0x1)
    int32 SelfID;                                                                     // 0x0004 (size: 0x4)
    int32 InstanceIndex;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPlanetInfo
{
    int32 SelfID;                                                                     // 0x0000 (size: 0x4)
    float Health;                                                                     // 0x0004 (size: 0x4)
    float RevivalTime;                                                                // 0x0008 (size: 0x4)
    float RevivalTargetTime;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPlanetSearchRezult
{
    class UInstancedStaticMeshComponent* InstancedStaticMeshComponent;                // 0x0000 (size: 0x8)
    int32 InstanceIndex;                                                              // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FQueuedRuntimePaintOutgoingBatch
{
    TWeakObjectPtr<class URuntimePaintableComponent> PaintComponent;                  // 0x0000 (size: 0x8)
    TArray<FPaintStroke> Strokes;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x20

struct FQueuedRuntimePaintStrokeBatch
{
    TWeakObjectPtr<class URuntimePaintableComponent> PaintComponent;                  // 0x0000 (size: 0x8)
    TArray<FPaintStroke> Strokes;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x28

struct FRegisterComponentDatas
{
    int32 KeyNumber;                                                                  // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FRuntimeBrushSettings
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    float Hardness;                                                                   // 0x0004 (size: 0x4)
    float Opacity;                                                                    // 0x0008 (size: 0x4)
    float Spacing;                                                                    // 0x000C (size: 0x4)
    EBrushFalloff Falloff;                                                            // 0x0010 (size: 0x1)
    EPaintBlendMode BlendMode;                                                        // 0x0011 (size: 0x1)
    class UTexture2D* BrushTexture;                                                   // 0x0018 (size: 0x8)
    float Rotation;                                                                   // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FRuntimePaintReplicationPressure
{
    int32 QueuedBatchCount;                                                           // 0x0000 (size: 0x4)
    int32 QueuedStrokeCount;                                                          // 0x0004 (size: 0x4)
    int32 MaxStrokesPerTick;                                                          // 0x0008 (size: 0x4)
    float EstimatedTicksToDrain;                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FScreenSpacePaintResult
{
    bool bSuccess;                                                                    // 0x0000 (size: 0x1)
    FVector2D HitUV;                                                                  // 0x0008 (size: 0x10)
    FVector HitWorldPosition;                                                         // 0x0018 (size: 0x18)
    FVector HitNormal;                                                                // 0x0030 (size: 0x18)

}; // Size: 0x48

class ABandwidthProbeActor : public AActor
{

    void Client_ReceiveProbeChunk(const TArray<uint8>& Payload);
}; // Size: 0x2A8

class ACPP_Glue : public AActor
{
    TArray<class UPrimitiveComponent*> LinkedPrimitives;                              // 0x02A8 (size: 0x10)
    int32 InstanceId;                                                                 // 0x02B8 (size: 0x4)
    class UMaterialInstanceDynamic* PDMat;                                            // 0x02C0 (size: 0x8)
    float RecivedPower;                                                               // 0x02C8 (size: 0x4)
    float LimitPower;                                                                 // 0x02CC (size: 0x4)
    FVector ConstantPower;                                                            // 0x02D0 (size: 0x18)
    int32 ComputedCount;                                                              // 0x02E8 (size: 0x4)
    bool bIsLinkedStatic;                                                             // 0x02EC (size: 0x1)

    void UpdateGlueVisual();
    void SetConstantPower(FVector power);
    void OnRep_RecivedPower(float OldHealth);
    bool IsOverLimitPower();
    void InitializeHard();
    void Initialize();
    void DestroyGlue();
    void AddCustomRevicePower(float PowerAmount);
}; // Size: 0x2F0

class ACPP_InventorySystem : public AActor
{
}; // Size: 0x2A8

class ACPP_LinkDataBank : public AActor
{
    TMap<class UPrimitiveComponent*, class FCPP_GlueRefGroup> GlueRefs;               // 0x02A8 (size: 0x50)
    TMap<int32, FCPP_MoveTargetNumberData> MoveTargetNumberDatas;                     // 0x02F8 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCPP_BakedBrunchData> BakedBrunchDatas;    // 0x0348 (size: 0x50)
    TArray<class UPrimitiveComponent*> EndPointPrimitives;                            // 0x0398 (size: 0x10)
    TArray<class UPrimitiveComponent*> StaticPrimitives;                              // 0x03A8 (size: 0x10)
    TMap<UPrimitiveComponent*, int32> StaticPrimitivesHasIndex;                       // 0x03B8 (size: 0x50)
    TSet<UPrimitiveComponent*> StaticPrimitivesKey;                                   // 0x0408 (size: 0x50)
    TArray<class UPrimitiveComponent*> EndPointRootPrimitives;                        // 0x0458 (size: 0x10)
    TArray<class UPrimitiveComponent*> MergePointPrimitives;                          // 0x0468 (size: 0x10)
    TSet<UPrimitiveComponent*> MergePointPrimitivesSet;                               // 0x0478 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCPP_WaveInfo> CurrentForceWaves;          // 0x04C8 (size: 0x50)
    TArray<class UPrimitiveComponent*> SepqrationTargets;                             // 0x0518 (size: 0x10)
    TMap<class UPrimitiveComponent*, class UCPP_AC_CustomPhysicsForce*> CustomPhysicsForces; // 0x0528 (size: 0x50)
    TMap<class UPrimitiveComponent*, class UCPP_AC_CustomPhysicsForce*> TickTargetCustomPhysicsForces; // 0x0578 (size: 0x50)
    TMap<class UPrimitiveComponent*, class UCPP_AC_CustomPhysicsForce*> StaticCalculationTargets; // 0x05C8 (size: 0x50)
    TArray<class ACPP_Glue*> UpdateTargetGlues;                                       // 0x0618 (size: 0x10)
    TArray<class UPrimitiveComponent*> ComputeStartTargets;                           // 0x0628 (size: 0x10)
    TMap<class UPrimitiveComponent*, class FCPP_OrderInfoDatas> SingleComputeTargets; // 0x0638 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCPP_OrderInfoArray> OrderInfoDatas;       // 0x0688 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCPP_SingleOrderData> SingleOrderInfoDatas; // 0x06D8 (size: 0x50)
    TSet<UPrimitiveComponent*> BranchPointPrimitives;                                 // 0x0728 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCPP_BlockForceInfo> BlockMoveForces;      // 0x0778 (size: 0x50)
    int32 CurrentVersion;                                                             // 0x07C8 (size: 0x4)
    int32 CurrentForceVersion;                                                        // 0x07CC (size: 0x4)
    TMap<UPrimitiveComponent*, int32> ActiveForceVersion;                             // 0x07D0 (size: 0x50)

    void UpdateStaticWeightsV2(TArray<FCPP_OrderInfo>& CurrentState, FCPP_OrderInfo OrderInfo, class UPrimitiveComponent* SourceStatic);
    void UpdateStaticWeightsDefaultV2();
    void UpdateStaticWeightsDefault();
    void UpdateStaticWeights(class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent* BeforePrimitive, float BeforeValue);
    void UpdateMergePointPrimitives();
    void UpdateEndPointPrimitives();
    void UpdateBranchWeightSumDefault();
    void UpdateBranchWeightSum(TArray<class UPrimitiveComponent*>& ProcessedMergePoints, TArray<class UPrimitiveComponent*>& ProcessedLoopPoints, class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent* BeforePrimitive, float& SumValue);
    void TransmissionStaticPowerDefault(class UPrimitiveComponent* TargetPrimitive, float WeightValue);
    void TransmissionStaticPower(class UPrimitiveComponent* TraceTarget, float BeforeWeight, FCPP_OrderInfo OrderInfo);
    TArray<FCPP_CurrentForceWave> TransmissionPowerSingle(FCPP_OrderInfo OrderInfo);
    void TransmissionPowerDefault(class UPrimitiveComponent* SourcePrimitive, float power);
    void TransmissionPower(TSet<UPrimitiveComponent*>& ProcessedPrimitives, class UPrimitiveComponent* SourcePrimitive, class UPrimitiveComponent* BeforePrimitive, float power);
    void SetupCurrentForceWave(class UPrimitiveComponent* TargetPrimitive, float ForceValue);
    void SetLinkedMergePrimitve(class UPrimitiveComponent* ParentPrimitive, class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent* SetPrimitive);
    void SetLinkedLength(class UPrimitiveComponent* ParentPrimitive, class UPrimitiveComponent* TargetPrimitive, float Value);
    void SetBranchWeightsV2(TSet<UPrimitiveComponent*>& ProcessedPrimitives, class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent* ParentRootPrimitive, float& WeightValue, class UPrimitiveComponent*& LastPrimitive);
    void SetBranchWeightsDefaultV2();
    void SetBranchWeightsDefault();
    void SetBranchWeights(TSet<UPrimitiveComponent*>& ProcessedPrimitives, class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent* BeforePrimitive, float& WeightValue, TArray<class UPrimitiveComponent*>& MergePointPrimitivesParam, TArray<class UPrimitiveComponent*>& SelfPointPrimitives);
    void SetBranchOrder();
    void SepqrationCheck(class UPrimitiveComponent* Primitive);
    void Sepqration();
    void ResetAllGlueRecivedPower();
    TArray<class UPrimitiveComponent*> RemoveGlueRef(class ACPP_Glue* Glue);
    bool IsBreakCheck(TArray<class ACPP_Glue*> Glues, float AddPower);
    TMap<UPrimitiveComponent*, float> GetNormalizedWeight(class UPrimitiveComponent* SourcePrimitive, TSet<UPrimitiveComponent*> IgnorePrimitives);
    void GetLinkedMergePrimitve(class UPrimitiveComponent* ParentPrimitive, class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent*& Variable);
    float GetLinkedLength(class UPrimitiveComponent* ParentPrimitive, class UPrimitiveComponent* TargetPrimitive);
    FCPP_GlueRefInfo GetGroupInfo(class UPrimitiveComponent* ParentPrimitive, class UPrimitiveComponent* TargetPrimitive);
    TArray<class UPrimitiveComponent*> GetAdjacentPrimitives(const class UPrimitiveComponent* PrimitiveComponent, const TSet<UPrimitiveComponent*>& Filter);
    void AddWaveData(class UPrimitiveComponent* SourcePrimitive, class UPrimitiveComponent* TargetPrimitive, float ForceValue);
    void AddGlueRef(class UPrimitiveComponent* PrimitiveComponent, class ACPP_Glue* Glue);
    void AddForceGlues(TArray<class ACPP_Glue*> Glues, float PowerValue);
    float AddConstanceForceV3(class UPrimitiveComponent* RootStaticComponent, FCPP_OrderInfo OrderInfo, int32 CurrentIndex, TSet<int32>& ComputedIndexs);
    float AddConstanceForceV2(FCPP_OrderInfo OrderInfo, class UPrimitiveComponent* StaticPrimitive);
    void AddConstanceForceToGlue(TArray<float> SumForces, TArray<class UPrimitiveComponent*> TargetPrimitives, float AttenuationValue);
    void AddConstanceForceDefaultV2();
    void AddConstanceForceDefault();
    void AddConstanceForce(class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent* BeforePrimitive, TArray<float>& SumForces, TArray<class UPrimitiveComponent*>& TargetPrimitives);
}; // Size: 0x820

class ACPP_LinkManager : public AActor
{
    class ACPP_LinkDataBank* cppLinkDataBank;                                         // 0x02A8 (size: 0x8)
    TMap<class UPrimitiveComponent*, class FVector> HitPointDatas;                    // 0x02B0 (size: 0x50)

    void UpdateForceWave();
    void ReplicateGlueVisualDatas(const TArray<class ACPP_Glue*>& GlueVisualDatasKey, const TArray<float>& GlueVisualDatasValue);
    void PhysicsForceUpdate();
}; // Size: 0x308

class ACPP_pChainManager : public AActor
{
    TMap<int32, FPlanetInfo> PlanetData;                                              // 0x02A8 (size: 0x50)
    TMap<int32, FPlanetInfo> PlanetDataCopy;                                          // 0x02F8 (size: 0x50)
    float GlobalGameTime;                                                             // 0x0348 (size: 0x4)
    TArray<FPlanetInfo> RevivalQueue;                                                 // 0x0350 (size: 0x10)
    TMap<class UInstancedStaticMeshComponent*, class FRegisterComponentDatas> RegisterComponentIndex; // 0x0360 (size: 0x50)
    TMap<int32, UInstancedStaticMeshComponent*> RegisterComponentfromIndex;           // 0x03B0 (size: 0x50)

    void RevivalPlanet(int32 KeyNumber);
    void RevivalCheck();
    void RegisterPlanetDatas(int32 KeyNumber, class UInstancedStaticMeshComponent* InstancedMeshComponent, FPlanetInfo DefaultData);
    FPlanetSearchRezult GetRegisterComponentDatas(int32 KeyNumber);
    FPlanetDamageRezult DamagePlanet(class UInstancedStaticMeshComponent* InstancedMeshComponent, int32 InstanceIndex, FPlanetDamageInfo DamageInfo);
    void AddRevivalCheck(int32 KeyNumber);
}; // Size: 0x400

class ACustomAIController : public AAIController
{

    void GetHeadLocRot(FVector& OutLocation, FRotator& OutRotation);
}; // Size: 0x3C8

class AMyGameModeBase : public AGameModeBase
{

    void GetSeamlessTravelActorListBPF(bool bToTransition, TArray<class AActor*>& ActorList, TArray<class AActor*> TargetActroList);
}; // Size: 0x350

class IDynamicCapsuleHeightControlInterface : public IInterface
{

    void WriteDynamicCapsuleInput(FMoverInputCmdContext& InputCmd);
    bool SetDynamicCapsuleStandingHalfHeight(float NewHalfHeight);
    void SetDynamicCapsuleDesiredHalfHeight(float NewHalfHeight);
    bool SetDynamicCapsuleCrouchingHalfHeight(float NewHalfHeight);
    void SetDynamicCapsuleCrouching(bool bNewCrouching);
    bool IsDynamicCapsuleCrouching();
    float GetDynamicCapsuleStandingHalfHeight();
    float GetDynamicCapsuleDesiredHalfHeight();
    float GetDynamicCapsuleCurrentHalfHeight();
    float GetDynamicCapsuleCrouchingHalfHeight();
    void ClearDynamicCapsuleDesiredHalfHeight();
}; // Size: 0x28

class UActorInViewChecker : public UBlueprintFunctionLibrary
{

    TArray<FVector> LocalToWorldTransform(const FTransform& ParentTransform, const TArray<FTransform> LocalTransforms);
    bool IsActorInCameraView_2(const class AActor* Actor, const FTransform& CameraTransform, float FOV, float AspectRatio);
    bool IsActorInCameraView(const FTransform& CameraTransform, float FieldOfView, float AspectRatio, class AActor* TargetActor);
    float CalculateDotProductOnCameraXYPlane(FVector CameraForward, FVector ActorPosition);
}; // Size: 0x28

class UBandwidthCheckerLibrary : public UBlueprintFunctionLibrary
{

    void SetMeasuredAvailableBandwidth(float BytesPerSec);
    float QueryNicLinkSpeedBytesPerSec(FString InterfaceFriendlyName);
    float GetMeasuredAvailableBandwidth();
    int32 GetEstimatedAdditionalPlayerCapacity(class UObject* WorldContextObject, float TotalAvailableBytesPerSecOverride);
    float GetEffectiveAvailableBandwidth(class UObject* WorldContextObject, float TotalAvailableBytesPerSecOverride);
    float GetBandwidthUsageRatio(class UObject* WorldContextObject, float TotalAvailableBytesPerSecOverride);
    FBandwidthStats GetBandwidthStats(class UObject* WorldContextObject, float TotalAvailableBytesPerSecOverride);
    float GetBandwidthPerPlayer(class UObject* WorldContextObject);
    float GetAvailableBandwidth(class UObject* WorldContextObject, float TotalAvailableBytesPerSecOverride);
}; // Size: 0x28

class UBandwidthProbeAsyncAction : public UBlueprintAsyncActionBase
{
    FBandwidthProbeAsyncActionOnFinished OnFinished;                                  // 0x0030 (size: 0x10)
    void BandwidthProbeDelegate(const FBandwidthProbeResult& Result);
    TWeakObjectPtr<class UWorld> WorldPtr;                                            // 0x0040 (size: 0x8)
    TArray<TWeakObjectPtr<ABandwidthProbeActor>> ProbeActors;                         // 0x0048 (size: 0x10)

    class UBandwidthProbeAsyncAction* StartBandwidthProbe(class UObject* WorldContextObject, float DurationSeconds, int32 ChunkBytes, int32 ChunksPerTickPerClient);
}; // Size: 0x88

class UCPP_AC_CustomPhysicsForce : public UActorComponent
{
    class UPrimitiveComponent* OwnerPrimitiveComponent;                               // 0x00B8 (size: 0x8)
    TMap<class UPrimitiveComponent*, class FVector> HitPointDatas;                    // 0x00C0 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCPP_TouchPointDatas> TouchPointDatas;     // 0x0110 (size: 0x50)
    TSet<UPrimitiveComponent*> BeforeTouchPointPrimitives;                            // 0x0160 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FCPP_TouchPointDatas> LastTouchPointDatas; // 0x01B0 (size: 0x50)
    TArray<class UPrimitiveComponent*> RidingPrimitives;                              // 0x0200 (size: 0x10)
    TArray<class UPrimitiveComponent*> LastRidingPrimitives;                          // 0x0210 (size: 0x10)
    float ComputedSumWeight;                                                          // 0x0220 (size: 0x4)
    class ACPP_LinkDataBank* LinkDataBank;                                            // 0x0228 (size: 0x8)
    float SelfWeight;                                                                 // 0x0230 (size: 0x4)
    bool NoSleep;                                                                     // 0x0234 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> OverlapCheckObjectTypes;                    // 0x0238 (size: 0x10)

    void WakeComponent();
    void SweepCheck();
    TMap<class UPrimitiveComponent*, class FVector> ResetHitPointDatas();
    void PostPhysicsTickComponent(float DeltaTime);
    void OnComponentWake(class UPrimitiveComponent* WakingComponent, FName BoneName);
    void OnComponentSleep(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void OnComponentHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
    float GetTotalWeight();
    TArray<class AActor*> GetRidingAllPawns(TSet<UPrimitiveComponent*>& ComputedPrimitives);
    void CheckChangeInfos();
}; // Size: 0x248

class UCPP_FunctionLibrary : public UBlueprintFunctionLibrary
{
    TSubclassOf<class AActor> MyBPClass;                                              // 0x0028 (size: 0x8)

    void CPP_UpdateLine(class UObject* WorldContextObject, TArray<class AActor*>& OutSignalDevices, class UNiagaraSystem* NiagaraTemplate, TArray<class UNiagaraComponent*>& SpawnedNiagaraComponents);
}; // Size: 0x30

class UCustomProgramFunctionLibrary : public UBlueprintFunctionLibrary
{

    FString HashStringMD5(FString Source);
    void GetTrappedText(FString Source, FString ID, FString& Value, FString& OutSource);
    bool GetRootMotionDelta(class USkeletalMeshComponent* SkeletalMeshComp, FTransform& OutDeltaTransform);
    float GetPawnRemoteViewPitch(class APawn* Pawn);
    class AActor* GetNearestActorByDotProduct(const FVector& Location, const FVector& Direction, const TArray<class AActor*>& Actors, float& OutDotProduct);
    class AActor* GetNearestActor(const FVector& Location, const TArray<class AActor*>& Actors, float& OutDistance);
    FString GetActiveVoiceInputDevice();
    void FilterActorsByInterface(const TArray<class AActor*>& Actors, TSubclassOf<class UInterface> Interface, TArray<class AActor*>& OutActors);
    FRotator CalculateTorqueForRotation(const FRotator& RotationA, const FRotator& RotationB);
    void ApplyTorqueForce(class UPrimitiveComponent* Component, const FRotator& RotationA, const FRotator& RotationB, float Strength, bool bAccelChange);
}; // Size: 0x28

class UDynamicCapsuleHeightControlComponent : public UActorComponent
{
    bool bAutoFindMoverComponent;                                                     // 0x00C8 (size: 0x1)
    bool bAutoSetAsInputProducerWhenEmpty;                                            // 0x00C9 (size: 0x1)
    class UMoverComponent* MoverComponent;                                            // 0x00D0 (size: 0x8)
    bool bIsCrouchingInput;                                                           // 0x00D8 (size: 0x1)
    float DesiredCapsuleHalfHeight;                                                   // 0x00DC (size: 0x4)

    void OnMoverPostSimulationTick(const FMoverTimeStep& TimeStep);
    class UMoverComponent* GetMoverComponent();
}; // Size: 0xE0

class UDynamicCapsuleHeightSettings : public UObject
{
    float StandingCapsuleHalfHeight;                                                  // 0x0030 (size: 0x4)
    float CurrentCapsuleHalfHeightForGroundCheck;                                     // 0x0034 (size: 0x4)
    float CrouchingCapsuleHalfHeight;                                                 // 0x0038 (size: 0x4)
    float MinCapsuleHalfHeight;                                                       // 0x003C (size: 0x4)
    float MaxCapsuleHalfHeight;                                                       // 0x0040 (size: 0x4)
    bool bReadFromMyMoverInput;                                                       // 0x0044 (size: 0x1)
    bool bUseCrouchingInputWhenNoHeightInput;                                         // 0x0045 (size: 0x1)
    bool bKeepBaseWhenCheckingExpansion;                                              // 0x0046 (size: 0x1)
    bool bPreventExpansionIfBlocked;                                                  // 0x0047 (size: 0x1)

}; // Size: 0x48

class UDynamicCapsulePhysicsDrivenFallingMode : public UPhysicsDrivenFallingMode
{
    float ManualDesiredCapsuleHalfHeight;                                             // 0x00C8 (size: 0x4)

    void SetDesiredCapsuleHalfHeight(float InHalfHeight);
    void ClearDesiredCapsuleHalfHeight();
}; // Size: 0xD0

class UDynamicCapsulePhysicsDrivenFlyingMode : public UPhysicsDrivenFlyingMode
{
    float ManualDesiredCapsuleHalfHeight;                                             // 0x0090 (size: 0x4)

    void SetDesiredCapsuleHalfHeight(float InHalfHeight);
    void ClearDesiredCapsuleHalfHeight();
}; // Size: 0x98

class UDynamicCapsulePhysicsDrivenLibrary : public UBlueprintFunctionLibrary
{

    bool CanSetCapsuleHalfHeight(class UCapsuleComponent* CapsuleComponent, float NewCapsuleHalfHeight, bool bKeepBottomPosition, FVector UpDirection);
    bool ApplyCapsuleHalfHeightToMover(class UMoverComponent* MoverComponent, float NewCapsuleHalfHeight, bool bCheckBlockedExpansion);
}; // Size: 0x28

class UDynamicCapsulePhysicsDrivenWalkingMode : public UPhysicsDrivenWalkingMode
{
    float ManualDesiredCapsuleHalfHeight;                                             // 0x00C8 (size: 0x4)

    void SetDesiredCapsuleHalfHeight(float InHalfHeight);
    void ClearDesiredCapsuleHalfHeight();
}; // Size: 0xD0

class UEOSPlayerReportAsyncAction : public UBlueprintAsyncActionBase
{
    FEOSPlayerReportAsyncActionOnFinished OnFinished;                                 // 0x0030 (size: 0x10)
    void EOSPlayerReportDelegate(const FEOSPlayerReportResult& Result);
    TWeakObjectPtr<class UObject> WorldContextObject;                                 // 0x0040 (size: 0x8)

    class UEOSPlayerReportAsyncAction* SendEOSPlayerReport(class UObject* WorldContextObject, FString ReporterProductUserId, FString ReportedProductUserId, EEOSPlayerReportCategory Category, FString Message, FString ContextJson);
}; // Size: 0xA0

class UMapSortBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SortMapByIntValue(TMap<int32, int32>& TargetMap, bool bAscending);
    void SortMapByFloatValue(TMap<int32, float>& TargetMap, bool bAscending);
}; // Size: 0x28

class UModBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UnloadModLevelInstance(class ULevelStreamingDynamic* StreamingLevel);
    bool ReadModJsonFile(FString JsonFilePath, FModMapJsonInfo& OutInfo);
    bool MountPakFile(FString PakPath);
    class ULevelStreamingDynamic* MountPakAndLoadLevelFromJson(class UObject* WorldContextObject, FString ModFolderPath, FString JsonFileName, FVector Location, FRotator Rotation, bool& bOutSuccess, FModMapJsonInfo& OutInfo);
    bool MountIoStoreContainer(FString TocPath);
    bool MountIoStoreAndGetLevelsFromAssetRegistry(FString ModFolderPath, FString AssetRegistryFileName, FString RequiredPackagePathPrefix, FString RequiredMapSuffix, TArray<FIoStoreModLevelInfo>& OutLevels, int32& OutMountedContainerCount);
    int32 MountAllPakFilesInFolder(FString FolderPath);
    int32 MountAllIoStoreContainersInFolder(FString FolderPath);
    class ULevelStreamingDynamic* LoadModLevelInstanceByPath(class UObject* WorldContextObject, FString LevelPath, FVector Location, FRotator Rotation, bool& bOutSuccess);
    bool GetLevelsFromAssetRegistryBin(FString AssetRegistryPath, FString ModFolderPath, FString TocFilePath, FString RequiredPackagePathPrefix, FString RequiredMapSuffix, TArray<FIoStoreModLevelInfo>& OutLevels);
    FString GetDefaultLocalModsFolder();
}; // Size: 0x28

class UMyLevelLoadingFunctionLibrary : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UOnlineBlueprints : public UBlueprintFunctionLibrary
{

    void ServerTravel(class UObject* WorldContextObject, FString URL, bool Absolute, bool ShoudSkipBameNotify);
    void ClientTravelURL(class UObject* WorldContextObject, FString URL, TEnumAsByte<ETravelType> TravelType, int32 PlayerIndex);
}; // Size: 0x28

class UPenTabletBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool IsPenTabletConnected();
    FPenTabletState GetPenTabletState();
    float GetPenTabletPressure();
}; // Size: 0x28

class URuntimePaintRelayComponent : public UActorComponent
{

    void ServerRelayTextureSync(class URuntimePaintableComponent* PaintComponent);
    void ServerRelayStrokeBatch(class URuntimePaintableComponent* PaintComponent, FPaintStrokeBatch Batch);
    void ServerRelayPaint(class URuntimePaintableComponent* PaintComponent, FPaintStroke Stroke);
    void RelayTextureSyncToServer(class URuntimePaintableComponent* PaintComponent);
    void RelayStrokeBatchToServer(class URuntimePaintableComponent* PaintComponent, const FPaintStrokeBatch& Batch);
    void RelayPaintToServer(class URuntimePaintableComponent* PaintComponent, FPaintStroke Stroke);
}; // Size: 0xB8

class URuntimePaintReplicationManager : public UTickableWorldSubsystem
{
    int32 MaxReplicatedPaintStrokesPerTick;                                           // 0x0040 (size: 0x4)
    int32 MaxReplicatedPaintRenderTargetWritesPerFrame;                               // 0x0044 (size: 0x4)
    int32 MaxOutgoingNetworkBatchesPerSecond;                                         // 0x0048 (size: 0x4)
    int32 MaxOutgoingStrokesPerBatch;                                                 // 0x004C (size: 0x4)
    bool bCoalesceOutgoingStrokes;                                                    // 0x0050 (size: 0x1)
    bool bEnableAdaptiveRemotePaintInterval;                                          // 0x0051 (size: 0x1)
    int32 MinRemotePaintFramesAfterLocalPaint;                                        // 0x0054 (size: 0x4)
    float AdaptiveTargetFPS;                                                          // 0x0058 (size: 0x4)
    float AdaptiveFpsDropRatio;                                                       // 0x005C (size: 0x4)
    int32 MaxAdaptiveRemotePaintFrameInterval;                                        // 0x0060 (size: 0x4)
    TArray<FQueuedRuntimePaintStrokeBatch> QueuedBatches;                             // 0x0068 (size: 0x10)
    TArray<FQueuedRuntimePaintStrokeBatch> QueuedLocalPaintBatches;                   // 0x0078 (size: 0x10)
    TArray<FQueuedRuntimePaintOutgoingBatch> QueuedOutgoingBatches;                   // 0x0088 (size: 0x10)
    TArray<FPaintStroke> StrokeChunkBuffer;                                           // 0x0098 (size: 0x10)

    FRuntimePaintReplicationPressure GetReplicationPressure();
    int32 GetQueuedStrokeCount();
}; // Size: 0x178

class URuntimePaintableComponent : public UActorComponent
{
    FPaintTextureOptions TextureOptions;                                              // 0x00B8 (size: 0x54)
    class UMaterialInterface* CustomBrushMaterial;                                    // 0x0110 (size: 0x8)
    int32 TargetMaterialSlot;                                                         // 0x0118 (size: 0x4)
    int32 UVChannelIndex;                                                             // 0x011C (size: 0x4)
    float MinScreenPaintDistance;                                                     // 0x0120 (size: 0x4)
    bool bPoseIndependentSkeletalPainting;                                            // 0x0124 (size: 0x1)
    bool bRealtimeNetworkSync;                                                        // 0x0125 (size: 0x1)
    FName AlbedoParameterName;                                                        // 0x0128 (size: 0x8)
    FName MetallicParameterName;                                                      // 0x0130 (size: 0x8)
    FName RoughnessParameterName;                                                     // 0x0138 (size: 0x8)
    FName HeightParameterName;                                                        // 0x0140 (size: 0x8)
    class UTextureRenderTarget2D* AlbedoRenderTarget;                                 // 0x0148 (size: 0x8)
    class UTextureRenderTarget2D* MetallicRenderTarget;                               // 0x0150 (size: 0x8)
    class UTextureRenderTarget2D* RoughnessRenderTarget;                              // 0x0158 (size: 0x8)
    class UTextureRenderTarget2D* HeightRenderTarget;                                 // 0x0160 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMaterialInstance;                          // 0x0168 (size: 0x8)
    FRuntimeBrushSettings CurrentBrushSettings;                                       // 0x0170 (size: 0x28)
    bool bAutoRecordStrokes;                                                          // 0x0198 (size: 0x1)
    bool bAutoFlushStrokes;                                                           // 0x0199 (size: 0x1)
    int32 AutoFlushThreshold;                                                         // 0x019C (size: 0x4)
    int32 MaxBatchSize;                                                               // 0x01A0 (size: 0x4)
    int32 MaxNetworkBatchesPerTick;                                                   // 0x01A4 (size: 0x4)
    int32 MaxReplicatedPaintStrokesPerTick;                                           // 0x01A8 (size: 0x4)
    bool bAsyncPrepareReplicatedPaint;                                                // 0x01AC (size: 0x1)
    class UMaterialInstanceDynamic* BrushDynamicMaterial;                             // 0x01E8 (size: 0x8)
    TWeakObjectPtr<class UMeshComponent> TargetMeshComponent;                         // 0x01F0 (size: 0x8)

    void SetBrushTexture(class UTexture2D* Texture);
    void SetBrushSettings(const FRuntimeBrushSettings& NewSettings);
    void SetBrushRadius(float Radius);
    void SetBrushOpacity(float Opacity);
    void SetBrushHardness(float Hardness);
    void SetBrushFalloff(EBrushFalloff Falloff);
    void SetBrushBlendMode(EPaintBlendMode BlendMode);
    void ServerSendStrokeBatch(FPaintStrokeBatch Batch);
    void ServerSendPaint(FPaintStroke Stroke);
    void ServerRequestTextureSync();
    void ServerPaintBatch(FPaintStrokeBatch Batch);
    void ServerPaint(FPaintStroke Stroke);
    void SendStrokeBatchToServer();
    void SendPaintToServer(FVector2D Uv, FPaintChannelData ChannelData, EPaintChannel Channel);
    void SendCustomStrokeBatchToServer(const FPaintStrokeBatch& Batch);
    void RequestStrokeBatchOnServer(const FPaintStrokeBatch& Batch);
    void RequestPaintOnServer(FVector2D Uv, FPaintChannelData ChannelData, EPaintChannel Channel);
    void RequestFullTextureSync();
    void PaintStrokeUV(FVector2D UvStart, FVector2D UvEnd, FPaintChannelData ChannelData, EPaintChannel Channel);
    bool PaintAtWorldPosition(class UMeshComponent* MeshComponent, FVector WorldLocation, FPaintChannelData ChannelData, EPaintChannel Channel);
    void PaintAtUVWithBrush(FVector2D Uv, FPaintChannelData ChannelData, FRuntimeBrushSettings BrushSettings, EPaintChannel Channel);
    void PaintAtUV(FVector2D Uv, FPaintChannelData ChannelData, EPaintChannel Channel);
    FScreenSpacePaintResult PaintAtScreenPosition(class UMeshComponent* MeshComponent, FVector2D ScreenPosition, class APlayerController* PlayerController, FPaintChannelData ChannelData, EPaintChannel Channel, bool bUseCachedTriangles);
    void MulticastSyncCompressedChannelData(EPaintChannel Channel, const TArray<uint8>& CompressedData, int32 UncompressedSize);
    void MulticastSyncChannelData(EPaintChannel Channel, const TArray<uint8>& Data);
    void MulticastPaintToOthers(FPaintStroke Stroke);
    void MulticastPaintBatchToOthers(FPaintStrokeBatch Batch);
    void MulticastPaintBatch(FPaintStrokeBatch Batch);
    void MulticastPaint(FPaintStroke Stroke);
    bool IsStroking();
    bool IsInitialized();
    bool InitializePaint(class UMeshComponent* MeshComponent);
    bool ImportChannelFromBytes(EPaintChannel Channel, const TArray<uint8>& Data);
    FScreenSpacePaintResult HitTestAtScreenPosition(class UMeshComponent* MeshComponent, FVector2D ScreenPosition, class APlayerController* PlayerController, bool bUseCachedTriangles);
    class UTextureRenderTarget2D* GetRenderTarget(EPaintChannel Channel);
    int32 GetRecordedStrokeCount();
    FPaintStrokeBatch GetRecordedStrokeBatch();
    bool GetDominantPaintMaterialPatterns(TArray<FPaintMaterialPattern>& OutPatterns, int32 MaxPatterns, int32 SampleStep, float AlphaThreshold);
    void FlushRecordedStrokesToServer();
    bool ExportChannelToBytes(EPaintChannel Channel, TArray<uint8>& OutData);
    void EndStroke();
    void ClearRecordedStrokes();
    void ClearChannel(EPaintChannel Channel);
    void ClearAllChannels();
    void BeginStroke();
    void ApplyPerformancePreset(EPaintPerformancePreset Preset);
}; // Size: 0x380

class UScreenSpaceBrushQuery : public UActorComponent
{
    FBrushQueryFilter DefaultFilter;                                                  // 0x00B8 (size: 0x68)
    FBrushQueryResult LastQueryResult;                                                // 0x0120 (size: 0x70)
    FDepthQueryResult LastDepthQueryResult;                                           // 0x0190 (size: 0x58)
    class USceneCaptureComponent2D* DepthCaptureComponent;                            // 0x01E8 (size: 0x8)
    class UTextureRenderTarget2D* DepthRenderTarget;                                  // 0x01F0 (size: 0x8)
    class USceneCaptureComponent2D* NormalCaptureComponent;                           // 0x01F8 (size: 0x8)
    class UTextureRenderTarget2D* NormalRenderTarget;                                 // 0x0200 (size: 0x8)
    class USceneCaptureComponent2D* StencilCaptureComponent;                          // 0x0208 (size: 0x8)
    class UTextureRenderTarget2D* StencilRenderTarget;                                // 0x0210 (size: 0x8)

    bool WasLastQuerySuccessful();
    void SetUVChannel(int32 Channel);
    void SetTraceComplex(bool bComplex);
    void SetTraceChannel(TEnumAsByte<ECollisionChannel> Channel);
    void SetMaxTraceDistance(float Distance);
    void SetDefaultFilter(const FBrushQueryFilter& Filter);
    void SetAllowNoCollisionMesh(bool bAllow);
    void ResetFilter();
    void RemoveTargetComponent(class UPrimitiveComponent* Component);
    void RemoveTargetActor(class AActor* Actor);
    void RemoveStencilValue(int32 StencilValue);
    void RemoveNoCollisionMeshTarget(class UMeshComponent* MeshComponent);
    void RemoveIgnoreActor(class AActor* Actor);
    FBrushQueryResult QueryFromWorldRayWithFilter(FVector RayOrigin, FVector RayDirection, const FBrushQueryFilter& Filter);
    FBrushQueryResult QueryFromWorldRay(FVector RayOrigin, FVector RayDirection);
    FDepthQueryResult QueryDepthAtViewportCenter(class APlayerController* PlayerController);
    FDepthQueryResult QueryDepthAtScreenPosition(FVector2D ScreenPosition, class APlayerController* PlayerController);
    FDepthQueryResult QueryDepthAtMousePosition(class APlayerController* PlayerController);
    FBrushQueryResult QueryAtViewportCenterWithFilter(class APlayerController* PlayerController, const FBrushQueryFilter& Filter);
    FBrushQueryResult QueryAtViewportCenter(class APlayerController* PlayerController);
    FBrushQueryResult QueryAtScreenPositionWithFilter(FVector2D ScreenPosition, class APlayerController* PlayerController, const FBrushQueryFilter& Filter);
    FBrushQueryResult QueryAtScreenPosition(FVector2D ScreenPosition, class APlayerController* PlayerController);
    FBrushQueryResult QueryAtMousePositionWithFilter(class APlayerController* PlayerController, const FBrushQueryFilter& Filter);
    FBrushQueryResult QueryAtMousePosition(class APlayerController* PlayerController);
    int32 QueryAllFromWorldRayWithFilter(FVector RayOrigin, FVector RayDirection, const FBrushQueryFilter& Filter, TArray<FBrushQueryResult>& OutResults);
    int32 QueryAllFromWorldRay(FVector RayOrigin, FVector RayDirection, TArray<FBrushQueryResult>& OutResults);
    int32 QueryAllAtScreenPositionWithFilter(FVector2D ScreenPosition, class APlayerController* PlayerController, const FBrushQueryFilter& Filter, TArray<FBrushQueryResult>& OutResults);
    int32 QueryAllAtScreenPosition(FVector2D ScreenPosition, class APlayerController* PlayerController, TArray<FBrushQueryResult>& OutResults);
    FBrushQueryResult GetLastQueryResult();
    FDepthQueryResult GetLastDepthQueryResult();
    FBrushQueryFilter GetDefaultFilter();
    void EnableStencilFilter(int32 StencilValue);
    void DisableStencilFilter();
    void ClearTargetComponents();
    void ClearTargetActors();
    void ClearNoCollisionMeshTargets();
    void ClearIgnoreActors();
    void AddTargetComponent(class UPrimitiveComponent* Component);
    void AddTargetActor(class AActor* Actor);
    void AddStencilValue(int32 StencilValue);
    void AddNoCollisionMeshTarget(class UMeshComponent* MeshComponent);
    void AddIgnoreActor(class AActor* Actor);
}; // Size: 0x220

class USimpleDynamicCapsuleHeightComponent : public UActorComponent
{
    bool bAutoFindMoverComponent;                                                     // 0x00C0 (size: 0x1)
    bool bAutoSetAsInputProducerWhenEmpty;                                            // 0x00C1 (size: 0x1)
    class UMoverComponent* MoverComponent;                                            // 0x00C8 (size: 0x8)
    float DesiredCapsuleHalfHeight;                                                   // 0x00D0 (size: 0x4)

    void WriteDesiredCapsuleHalfHeightInput(FMoverInputCmdContext& InputCmd);
    void SetDesiredCapsuleHalfHeight(float NewHalfHeight);
    void ServerSetDesiredCapsuleHalfHeight(float NewHalfHeight);
    void OnRep_DesiredCapsuleHalfHeight();
    void OnMoverPostSimulationTick(const FMoverTimeStep& TimeStep);
    void MulticastSetDesiredCapsuleHalfHeight(float NewHalfHeight);
    class UMoverComponent* GetMoverComponent();
    float GetDesiredCapsuleHalfHeight();
    float GetCurrentCapsuleHalfHeight();
    void ClearDesiredCapsuleHalfHeight();
}; // Size: 0xD8

class UTextureUtils : public UBlueprintFunctionLibrary
{

    TArray<uint8> TextureToBytes(class UTexture2D* Texture);
    class UTexture2D* BytesToTexture(const TArray<uint8>& ByteArray, int32 Width, int32 Height);
}; // Size: 0x28

class UTextureUtilsLibrary : public UBlueprintFunctionLibrary
{

    class UTexture2D* ConvertToTexture2D(class UTexture* Texture);
    class UTexture2D* ConvertRenderTargetToTexture2D(class UTextureRenderTarget2D* RenderTarget);
}; // Size: 0x28

#endif
