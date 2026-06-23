#ifndef UE4SS_SDK_ChaosClothAssetEngine_HPP
#define UE4SS_SDK_ChaosClothAssetEngine_HPP

#include "ChaosClothAssetEngine_enums.hpp"

struct FChaosClothAssetLodTransitionDataCache
{
}; // Size: 0x38

struct FChaosClothSimulationLodModel
{
    TArray<FVector3f> Positions;                                                      // 0x0000 (size: 0x10)
    TArray<FVector3f> Normals;                                                        // 0x0010 (size: 0x10)
    TArray<uint32> Indices;                                                           // 0x0020 (size: 0x10)
    TArray<FClothVertBoneData> BoneData;                                              // 0x0030 (size: 0x10)
    TArray<uint16> RequiredExtraBoneIndices;                                          // 0x0040 (size: 0x10)
    TArray<FVector2f> PatternPositions;                                               // 0x0070 (size: 0x10)
    TArray<uint32> PatternIndices;                                                    // 0x0080 (size: 0x10)
    TArray<uint32> PatternToWeldedIndices;                                            // 0x0090 (size: 0x10)
    FClothTetherData TetherData;                                                      // 0x00F0 (size: 0x10)

}; // Size: 0x1F0

struct FChaosClothSimulationModel
{
    TArray<FChaosClothSimulationLodModel> ClothSimulationLodModels;                   // 0x0000 (size: 0x10)
    TArray<FName> UsedBoneNames;                                                      // 0x0010 (size: 0x10)
    TArray<int32> UsedBoneIndices;                                                    // 0x0020 (size: 0x10)
    int32 ReferenceBoneIndex;                                                         // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FChaosClothSimulationProperties
{
    class UChaosClothAssetInteractor* ClothOutfitInteractor;                          // 0x0000 (size: 0x8)

}; // Size: 0x28

class UChaosClothAsset : public UChaosClothAssetBase
{
    class USkeleton* Skeleton;                                                        // 0x0370 (size: 0x8)
    class UPhysicsAsset* PhysicsAsset;                                                // 0x0378 (size: 0x8)
    bool bSmoothTransition;                                                           // 0x0380 (size: 0x1)
    bool bUseMultipleInfluences;                                                      // 0x0381 (size: 0x1)
    float SkinningKernelRadius;                                                       // 0x0384 (size: 0x4)
    FGuid AssetGuid;                                                                  // 0x0388 (size: 0x10)

}; // Size: 0x3B8

class UChaosClothAssetBase : public USkinnedAsset
{
    FDataflowInstance DataflowInstance;                                               // 0x0100 (size: 0x40)
    TArray<FSkeletalMaterial> Materials;                                              // 0x0140 (size: 0x10)
    TArray<FSkeletalMeshLODInfo> LODInfo;                                             // 0x0150 (size: 0x10)
    FPerQualityLevelInt MinQualityLevelLOD;                                           // 0x0160 (size: 0x68)
    FPerPlatformBool DisableBelowMinLodStripping;                                     // 0x01C8 (size: 0x1)
    FPerPlatformInt MinLOD;                                                           // 0x01CC (size: 0x4)
    uint8 bSupportRayTracing;                                                         // 0x01D0 (size: 0x1)
    int32 RayTracingMinLOD;                                                           // 0x01D4 (size: 0x4)
    class UPhysicsAsset* ShadowPhysicsAsset;                                          // 0x01D8 (size: 0x8)
    class UMaterialInterface* OverlayMaterial;                                        // 0x01E0 (size: 0x8)
    float OverlayMaterialMaxDrawDistance;                                             // 0x01E8 (size: 0x4)
    uint8 bHasVertexColors;                                                           // 0x01EC (size: 0x1)
    FBoxSphereBounds Bounds;                                                          // 0x0308 (size: 0x38)

    void SetOverlayMaterialMaxDrawDistance(float InMaxDrawDistance);
    void SetOverlayMaterial(class UMaterialInterface* NewOverlayMaterial);
    class UPhysicsAsset* GetShadowPhysicsAsset();
    float GetOverlayMaterialMaxDrawDistance();
    class UMaterialInterface* GetOverlayMaterial();
}; // Size: 0x370

class UChaosClothAssetInteractor : public UObject
{

    void SetWeightedFloatValue(FString PropertyName, int32 LODIndex, FVector2D Value);
    void SetVectorValue(FString PropertyName, int32 LODIndex, FVector Value);
    void SetStringValue(FString PropertyName, int32 LODIndex, FString Value);
    void SetLowFloatValue(FString PropertyName, int32 LODIndex, float Value);
    void SetIntValue(FString PropertyName, int32 LODIndex, int32 Value);
    void SetHighFloatValue(FString PropertyName, int32 LODIndex, float Value);
    void SetFloatValue(FString PropertyName, int32 LODIndex, float Value);
    FVector2D GetWeightedFloatValue(FString PropertyName, int32 LODIndex, FVector2D DefaultValue);
    FVector GetVectorValue(FString PropertyName, int32 LODIndex, FVector DefaultValue);
    FString GetStringValue(FString PropertyName, int32 LODIndex, FString DefaultValue);
    float GetLowFloatValue(FString PropertyName, int32 LODIndex, float DefaultValue);
    int32 GetIntValue(FString PropertyName, int32 LODIndex, int32 DefaultValue);
    float GetHighFloatValue(FString PropertyName, int32 LODIndex, float DefaultValue);
    float GetFloatValue(FString PropertyName, int32 LODIndex, float DefaultValue);
    TArray<FString> GetAllProperties(int32 LODIndex);
}; // Size: 0x38

class UChaosClothComponent : public USkinnedMeshComponent
{
    FDataflowSimulationAsset SimulationAsset;                                         // 0x08F0 (size: 0x58)
    float BlendWeight;                                                                // 0x0948 (size: 0x4)
    float ClothGeometryScale;                                                         // 0x094C (size: 0x4)
    uint8 bUseAttachedParentAsPoseComponent;                                          // 0x0950 (size: 0x1)
    uint8 bWaitForParallelTask;                                                       // 0x0950 (size: 0x1)
    uint8 bEnableSimulation;                                                          // 0x0950 (size: 0x1)
    uint8 bSuspendSimulation;                                                         // 0x0950 (size: 0x1)
    uint8 bBindToLeaderComponent;                                                     // 0x0950 (size: 0x1)
    uint8 bTeleport;                                                                  // 0x0950 (size: 0x1)
    uint8 bReset;                                                                     // 0x0950 (size: 0x1)
    uint8 bCollideWithEnvironment;                                                    // 0x0950 (size: 0x1)
    float TeleportDistanceThreshold;                                                  // 0x0954 (size: 0x4)
    float TeleportRotationThreshold;                                                  // 0x0958 (size: 0x4)
    TArray<FChaosClothSimulationProperties> ClothSimulationProperties;                // 0x09F8 (size: 0x10)

    void SuspendSimulation();
    void SetTeleportRotationThreshold(float Threshold);
    void SetTeleportDistanceThreshold(float Threshold);
    void SetSimulateInEditor(const bool bNewSimulateState);
    void SetEnableSimulation(bool bEnable);
    void SetCollideWithEnvironment(bool bCollide);
    void SetClothAsset(class UChaosClothAsset* InClothAsset);
    void SetAsset(class UChaosClothAssetBase* InAsset);
    void ResumeSimulation();
    void ResetTeleportMode();
    void ResetConfigProperties();
    void ResetCollisionSources();
    void RemoveCollisionSources(const class USkinnedMeshComponent* SourceComponent);
    void RemoveCollisionSource(const class USkinnedMeshComponent* SourceComponent, const class UPhysicsAsset* SourcePhysicsAsset);
    void RecreateClothSimulationProxy();
    bool IsSimulationSuspended();
    bool IsSimulationEnabled();
    float GetTeleportRotationThreshold();
    float GetTeleportDistanceThreshold();
    bool GetCollideWithEnvironment();
    class UChaosClothAssetInteractor* GetClothOutfitInteractor(int32 ModelIndex, const FName ClothSimulationModelName);
    class UChaosClothAsset* GetClothAsset();
    class UChaosClothAssetBase* GetAsset();
    void ForceNextUpdateTeleportAndReset();
    void ForceNextUpdateTeleport();
    void AddCollisionSource(class USkinnedMeshComponent* SourceComponent, const class UPhysicsAsset* SourcePhysicsAsset, bool bUseSphylsOnly);
}; // Size: 0xA40

class UClothAssetSkeletalMeshConverter : public UObject
{
}; // Size: 0x28

#endif
