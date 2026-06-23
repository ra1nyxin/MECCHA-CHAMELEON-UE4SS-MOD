#ifndef UE4SS_SDK_PoseSearch_HPP
#define UE4SS_SDK_PoseSearch_HPP

#include "PoseSearch_enums.hpp"

struct FAnimNode_MotionMatching : public FAnimNode_BlendStack_Standalone
{
    class UPoseSearchDatabase* Database;                                              // 0x00C0 (size: 0x8)
    float BlendTime;                                                                  // 0x00C8 (size: 0x4)
    class UBlendProfile* BlendProfile;                                                // 0x00D0 (size: 0x8)
    EAlphaBlendOption BlendOption;                                                    // 0x00D8 (size: 0x1)
    FFloatInterval PoseJumpThresholdTime;                                             // 0x00DC (size: 0x8)
    float PoseReselectHistory;                                                        // 0x00E4 (size: 0x4)
    float SearchThrottleTime;                                                         // 0x00E8 (size: 0x4)
    FFloatInterval PlayRate;                                                          // 0x00EC (size: 0x8)
    float PlayRateMultiplier;                                                         // 0x00F4 (size: 0x4)
    bool bUseInertialBlend;                                                           // 0x00F8 (size: 0x1)
    bool bResetOnBecomingRelevant;                                                    // 0x00F9 (size: 0x1)
    bool bShouldSearch;                                                               // 0x00FA (size: 0x1)
    bool bShouldUseCachedChannelData;                                                 // 0x00FB (size: 0x1)
    FPoseSearchEvent EventToSearch;                                                   // 0x00FC (size: 0x18)
    FMotionMatchingState MotionMatchingState;                                         // 0x0118 (size: 0xF8)
    TArray<class UPoseSearchDatabase*> DatabasesToSearch;                             // 0x0220 (size: 0x10)

}; // Size: 0x238

struct FAnimNode_MotionMatchingInteraction : public FAnimNode_BlendStack_Standalone
{
    TArray<FPoseSearchInteractionAvailability> Availabilities;                        // 0x00C0 (size: 0x10)
    bool bValidateResultAgainstAvailabilities;                                        // 0x00D0 (size: 0x1)
    float WarpingTranslationRatio;                                                    // 0x00D4 (size: 0x4)
    float WarpingRotationRatio;                                                       // 0x00D8 (size: 0x4)
    bool bWarpUsingRootBone;                                                          // 0x00DC (size: 0x1)
    bool bResetOnBecomingRelevant;                                                    // 0x00DD (size: 0x1)
    float BlendTime;                                                                  // 0x00E0 (size: 0x4)
    class UBlendProfile* BlendProfile;                                                // 0x00E8 (size: 0x8)
    EAlphaBlendOption BlendOption;                                                    // 0x00F0 (size: 0x1)
    EBlendStack_BlendspaceUpdateMode BlendspaceUpdateMode;                            // 0x00F1 (size: 0x1)
    bool bUseInertialBlend;                                                           // 0x00F2 (size: 0x1)
    FPoseSearchBlueprintResult CurrentResult;                                         // 0x00F8 (size: 0x78)

}; // Size: 0x250

struct FAnimNode_PoseSearchComponentSpaceHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{
    FComponentSpacePoseLink Source;                                                   // 0x0288 (size: 0x10)

}; // Size: 0x298

struct FAnimNode_PoseSearchHistoryCollector : public FAnimNode_PoseSearchHistoryCollector_Base
{
    FPoseLink Source;                                                                 // 0x0288 (size: 0x10)

}; // Size: 0x298

struct FAnimNode_PoseSearchHistoryCollector_Base : public FAnimNode_Base
{
    int32 PoseCount;                                                                  // 0x0010 (size: 0x4)
    float SamplingInterval;                                                           // 0x0014 (size: 0x4)
    TArray<FBoneReference> CollectedBones;                                            // 0x0018 (size: 0x10)
    TArray<FName> CollectedCurves;                                                    // 0x0028 (size: 0x10)
    bool bInitializeWithRefPose;                                                      // 0x0038 (size: 0x1)
    bool bResetOnBecomingRelevant;                                                    // 0x0039 (size: 0x1)
    bool bStoreScales;                                                                // 0x003A (size: 0x1)
    float RootBoneRecoveryTime;                                                       // 0x003C (size: 0x4)
    float RootBoneTranslationRecoveryRatio;                                           // 0x0040 (size: 0x4)
    float RootBoneRotationRecoveryRatio;                                              // 0x0044 (size: 0x4)
    bool bGenerateTrajectory;                                                         // 0x0058 (size: 0x1)
    FTransformTrajectory TransformTrajectory;                                         // 0x0060 (size: 0x10)
    float TrajectorySpeedMultiplier;                                                  // 0x0070 (size: 0x4)
    int32 TrajectoryHistoryCount;                                                     // 0x0074 (size: 0x4)
    int32 TrajectoryPredictionCount;                                                  // 0x0078 (size: 0x4)
    float PredictionSamplingInterval;                                                 // 0x007C (size: 0x4)
    FPoseSearchTrajectoryData TrajectoryData;                                         // 0x0080 (size: 0x128)

}; // Size: 0x288

struct FChooserParameterPoseHistoryBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserPoseSearchRowData
{
    class UAnimationAsset* ResultAsset;                                               // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMotionMatchingAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FMotionMatchingBlueprintBlendSettings
{
    float BlendTime;                                                                  // 0x0000 (size: 0x4)
    class UBlendProfile* BlendProfile;                                                // 0x0008 (size: 0x8)
    EAlphaBlendOption BlendOption;                                                    // 0x0010 (size: 0x1)
    bool bUseInertialBlend;                                                           // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FMotionMatchingInteractionAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FMotionMatchingState
{
    FPoseSearchBlueprintResult SearchResult;                                          // 0x0020 (size: 0x78)

}; // Size: 0xF8

struct FPoseHistoryAnimationAttribute
{
}; // Size: 0x10

struct FPoseHistoryContextProperty : public FChooserParameterPoseHistoryBase
{
    FChooserPropertyBinding Binding;                                                  // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FPoseHistoryReference
{
}; // Size: 0x10

struct FPoseSearchAssetSamplerInput
{
    class UAnimationAsset* Animation;                                                 // 0x0000 (size: 0x8)
    float AnimationTime;                                                              // 0x0008 (size: 0x4)
    FTransform RootTransformOrigin;                                                   // 0x0010 (size: 0x60)
    bool bMirrored;                                                                   // 0x0070 (size: 0x1)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x0078 (size: 0x8)
    FVector BlendParameters;                                                          // 0x0080 (size: 0x18)
    int32 RootTransformSamplingRate;                                                  // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FPoseSearchAssetSamplerPose
{
}; // Size: 0xE0

struct FPoseSearchBlueprintResult
{
    class UObject* SelectedAnim;                                                      // 0x0000 (size: 0x8)
    float SelectedTime;                                                               // 0x0008 (size: 0x4)
    bool bIsContinuingPoseSearch;                                                     // 0x000C (size: 0x1)
    float WantedPlayRate;                                                             // 0x0010 (size: 0x4)
    bool bLoop;                                                                       // 0x0014 (size: 0x1)
    bool bIsMirrored;                                                                 // 0x0015 (size: 0x1)
    FVector BlendParameters;                                                          // 0x0018 (size: 0x18)
    class UPoseSearchDatabase* SelectedDatabase;                                      // 0x0030 (size: 0x8)
    float SearchCost;                                                                 // 0x0038 (size: 0x4)
    bool bIsInteraction;                                                              // 0x003C (size: 0x1)
    FName Role;                                                                       // 0x0040 (size: 0x8)
    TArray<FTransform> ActorRootTransforms;                                           // 0x0048 (size: 0x10)
    TArray<FTransform> ActorRootBoneTransforms;                                       // 0x0058 (size: 0x10)
    TArray<class UObject*> AnimContexts;                                              // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FPoseSearchBone
{
    FBoneReference Reference;                                                         // 0x0000 (size: 0x10)
    int32 Flags;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FPoseSearchColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    FInstancedStruct OutputStartTime;                                                 // 0x0018 (size: 0x10)
    FInstancedStruct OutputMirror;                                                    // 0x0028 (size: 0x10)
    FInstancedStruct OutputCost;                                                      // 0x0038 (size: 0x10)
    TArray<FChooserPoseSearchRowData> RowValues;                                      // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FPoseSearchContinuingProperties
{
    class UObject* PlayingAsset;                                                      // 0x0000 (size: 0x8)
    float PlayingAssetAccumulatedTime;                                                // 0x0008 (size: 0x4)
    bool bIsPlayingAssetMirrored;                                                     // 0x000C (size: 0x1)
    FVector PlayingAssetBlendParameters;                                              // 0x0010 (size: 0x18)
    EPoseSearchInterruptMode InterruptMode;                                           // 0x0028 (size: 0x1)
    bool bIsContinuingInteraction;                                                    // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FPoseSearchCost
{
    float TotalCost;                                                                  // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPoseSearchDatabaseAnimComposite : public FPoseSearchDatabaseAnimationAssetBase
{
    class UAnimComposite* AnimComposite;                                              // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPoseSearchDatabaseAnimMontage : public FPoseSearchDatabaseAnimationAssetBase
{
    class UAnimMontage* AnimMontage;                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPoseSearchDatabaseAnimationAssetBase
{
}; // Size: 0x8

struct FPoseSearchDatabaseBlendSpace : public FPoseSearchDatabaseAnimationAssetBase
{
    class UBlendSpace* BlendSpace;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPoseSearchDatabaseMultiAnimAsset : public FPoseSearchDatabaseAnimationAssetBase
{
    class UMultiAnimAsset* MultiAnimAsset;                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPoseSearchDatabaseSequence : public FPoseSearchDatabaseAnimationAssetBase
{
    class UAnimSequence* Sequence;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPoseSearchEvent
{
    FGameplayTag EventTag;                                                            // 0x0000 (size: 0x8)
    float TimeToEvent;                                                                // 0x0008 (size: 0x4)
    bool bEnablePoseFilters;                                                          // 0x000C (size: 0x1)
    bool bUsePlayRateRangeOverride;                                                   // 0x000D (size: 0x1)
    FFloatInterval PlayRateRangeOverride;                                             // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FPoseSearchFutureProperties
{
    class UObject* Animation;                                                         // 0x0000 (size: 0x8)
    float AnimationTime;                                                              // 0x0008 (size: 0x4)
    float IntervalTime;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPoseSearchHistoryCollectorAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FPoseSearchIKWindowConstraint
{
    FName FromGoalName;                                                               // 0x0000 (size: 0x8)
    FName FromGoalRole;                                                               // 0x0008 (size: 0x8)
    FName ToGoalName;                                                                 // 0x0010 (size: 0x8)
    FName ToGoalRole;                                                                 // 0x0018 (size: 0x8)
    float TranslationWeight;                                                          // 0x0020 (size: 0x4)
    float RotationWeight;                                                             // 0x0024 (size: 0x4)
    float ActivationTime;                                                             // 0x0028 (size: 0x4)
    float DeactivationTime;                                                           // 0x002C (size: 0x4)

}; // Size: 0x30

struct FPoseSearchInteractionAnimContextAvailabilities
{
    class UObject* AnimContext;                                                       // 0x0000 (size: 0x8)
    TArray<FPoseSearchInteractionAvailabilityEx> Availabilities;                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPoseSearchInteractionAssetItem
{
    class UAnimationAsset* Animation;                                                 // 0x0000 (size: 0x8)
    FName Role;                                                                       // 0x0008 (size: 0x8)
    float WarpingWeightRotation;                                                      // 0x0010 (size: 0x4)
    float WarpingWeightTranslation;                                                   // 0x0014 (size: 0x4)
    FTransform Origin;                                                                // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FPoseSearchInteractionAvailability
{
    class UPoseSearchDatabase* Database;                                              // 0x0000 (size: 0x8)
    FName Tag;                                                                        // 0x0008 (size: 0x8)
    TArray<FName> RolesFilter;                                                        // 0x0010 (size: 0x10)
    float BroadPhaseRadius;                                                           // 0x0020 (size: 0x4)
    float BroadPhaseRadiusIncrementOnInteraction;                                     // 0x0024 (size: 0x4)
    bool bDisableCollisions;                                                          // 0x0028 (size: 0x1)
    int32 TickPriority;                                                               // 0x002C (size: 0x4)

}; // Size: 0x30

struct FPoseSearchInteractionAvailabilityEx : public FPoseSearchInteractionAvailability
{
}; // Size: 0x40

struct FPoseSearchQueryTrajectory
{
    TArray<FPoseSearchQueryTrajectorySample> Samples;                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPoseSearchQueryTrajectorySample
{
    FQuat Facing;                                                                     // 0x0000 (size: 0x20)
    FVector position;                                                                 // 0x0020 (size: 0x18)
    float AccumulatedSeconds;                                                         // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FPoseSearchRoledSkeleton
{
    class USkeleton* Skeleton;                                                        // 0x0000 (size: 0x8)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x0008 (size: 0x8)
    FName Role;                                                                       // 0x0010 (size: 0x8)
    TArray<FBoneReference> BoneReferences;                                            // 0x0018 (size: 0x10)
    TArray<uint16> BoneIndicesWithParents;                                            // 0x0028 (size: 0x10)
    TArray<FName> RequiredCurves;                                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FPoseSearchTrajectoryData
{
    float RotateTowardsMovementSpeed;                                                 // 0x0000 (size: 0x4)
    float MaxControllerYawRate;                                                       // 0x0004 (size: 0x4)
    float BendVelocityTowardsAcceleration;                                            // 0x0008 (size: 0x4)
    bool bUseSpeedRemappingCurve;                                                     // 0x000C (size: 0x1)
    FRuntimeFloatCurve SpeedRemappingCurve;                                           // 0x0010 (size: 0x88)
    bool bUseAccelerationRemappingCurve;                                              // 0x0098 (size: 0x1)
    FRuntimeFloatCurve AccelerationRemappingCurve;                                    // 0x00A0 (size: 0x88)

}; // Size: 0x128

struct FPoseSearchTrajectorySample
{
    float Offset;                                                                     // 0x0000 (size: 0x4)
    int32 Flags;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPoseSearchTrajectory_WorldCollisionResults
{
    float TimeToLand;                                                                 // 0x0000 (size: 0x4)
    float LandSpeed;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

class IPoseSearchTrajectoryPredictorInterface : public IInterface
{

    void Predict(FTransformTrajectory& InOutTrajectory, int32 NumPredictionSamples, float SecondsPerPredictionSample, int32 NumHistorySamples);
    void GetVelocity(FVector& OutVelocity);
    void GetGravity(FVector& OutGravityAccel);
    void GetCurrentState(FVector& OutPosition, FQuat& OutFacing, FVector& OutVelocity);
}; // Size: 0x28

class UAnimNotifyState_PoseSearchBase : public UAnimNotifyState
{
}; // Size: 0x30

class UAnimNotifyState_PoseSearchBlockTransition : public UAnimNotifyState_PoseSearchBase
{
}; // Size: 0x30

class UAnimNotifyState_PoseSearchBranchIn : public UAnimNotifyState_PoseSearchBase
{
    class UPoseSearchDatabase* Database;                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

class UAnimNotifyState_PoseSearchExcludeFromDatabase : public UAnimNotifyState_PoseSearchBase
{
}; // Size: 0x30

class UAnimNotifyState_PoseSearchIKWindow : public UAnimNotifyState_PoseSearchBase
{
    TArray<FPoseSearchIKWindowConstraint> Constraints;                                // 0x0030 (size: 0x10)

}; // Size: 0x40

class UAnimNotifyState_PoseSearchModifyCost : public UAnimNotifyState_PoseSearchBase
{
    float CostAddend;                                                                 // 0x0030 (size: 0x4)

}; // Size: 0x38

class UAnimNotifyState_PoseSearchOverrideContinuingPoseCostBias : public UAnimNotifyState_PoseSearchBase
{
    float CostAddend;                                                                 // 0x0030 (size: 0x4)

}; // Size: 0x38

class UAnimNotifyState_PoseSearchSamplingAttribute : public UAnimNotifyState_PoseSearchSamplingEvent
{
}; // Size: 0x30

class UAnimNotifyState_PoseSearchSamplingEvent : public UAnimNotifyState_PoseSearchBase
{
}; // Size: 0x30

class UAnimNotify_PoseSearchBase : public UAnimNotify
{
}; // Size: 0x38

class UAnimNotify_PoseSearchEvent : public UAnimNotify_PoseSearchBase
{
    FGameplayTag EventTag;                                                            // 0x0038 (size: 0x8)

}; // Size: 0x40

class UMotionMatchingAnimNodeLibrary : public UBlueprintFunctionLibrary
{

    void SetInterruptMode(const FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode);
    void SetDatabaseToSearch(const FMotionMatchingAnimNodeReference& MotionMatchingNode, class UPoseSearchDatabase* Database, EPoseSearchInterruptMode InterruptMode);
    void SetDatabasesToSearch(const FMotionMatchingAnimNodeReference& MotionMatchingNode, const TArray<class UPoseSearchDatabase*>& Databases, EPoseSearchInterruptMode InterruptMode);
    void ResetDatabasesToSearch(const FMotionMatchingAnimNodeReference& MotionMatchingNode, EPoseSearchInterruptMode InterruptMode);
    void OverrideMotionMatchingBlendSettings(const FMotionMatchingAnimNodeReference& MotionMatchingNode, const FMotionMatchingBlueprintBlendSettings& BlendSettings, bool& bIsResultValid);
    void GetMotionMatchingSearchResult(const FMotionMatchingAnimNodeReference& MotionMatchingNode, FPoseSearchBlueprintResult& Result, bool& bIsResultValid);
    void GetMotionMatchingBlendSettings(const FMotionMatchingAnimNodeReference& MotionMatchingNode, FMotionMatchingBlueprintBlendSettings& BlendSettings, bool& bIsResultValid);
    void ConvertToMotionMatchingNodePure(const FAnimNodeReference& Node, FMotionMatchingAnimNodeReference& MotionMatchingNode, bool& Result);
    FMotionMatchingAnimNodeReference ConvertToMotionMatchingNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UMotionMatchingInteractionAnimNodeLibrary : public UBlueprintFunctionLibrary
{

    void SetAvailabilities(const FMotionMatchingInteractionAnimNodeReference& MotionMatchingInteractionNode, const TArray<FPoseSearchInteractionAvailability>& Availabilities);
    bool IsInteracting(const FMotionMatchingInteractionAnimNodeReference& MotionMatchingInteractionNode);
    void ConvertToMotionMatchingInteractionNodePure(const FAnimNodeReference& Node, FMotionMatchingInteractionAnimNodeReference& MotionMatchingInteractionNode, bool& Result);
    FMotionMatchingInteractionAnimNodeReference ConvertToMotionMatchingInteractionNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UMultiAnimAsset : public UObject
{

    FTransform BP_GetOrigin(const FName& Role);
    class UAnimationAsset* BP_GetAnimationAsset(const FName& Role);
}; // Size: 0x28

class UPoseSearchAssetSamplerLibrary : public UBlueprintFunctionLibrary
{

    FPoseSearchAssetSamplerPose SamplePose(const class UAnimInstance* AnimInstance, const FPoseSearchAssetSamplerInput Input);
    FTransform GetTransformByName(FPoseSearchAssetSamplerPose& AssetSamplerPose, FName BoneName, EPoseSearchAssetSamplerSpace Space);
    void Draw(const class UAnimInstance* AnimInstance, FPoseSearchAssetSamplerPose& AssetSamplerPose);
}; // Size: 0x28

class UPoseSearchDatabase : public UDataAsset
{
    class UPoseSearchSchema* Schema;                                                  // 0x0030 (size: 0x8)
    float ContinuingPoseCostBias;                                                     // 0x0038 (size: 0x4)
    float BaseCostBias;                                                               // 0x003C (size: 0x4)
    float LoopingCostBias;                                                            // 0x0040 (size: 0x4)
    float ContinuingInteractionCostBias;                                              // 0x0044 (size: 0x4)
    TArray<FInstancedStruct> AnimationAssets;                                         // 0x0048 (size: 0x10)
    class UChooserTable* Chooser;                                                     // 0x0058 (size: 0x8)
    TArray<FName> Tags;                                                               // 0x0060 (size: 0x10)
    EPoseSearchMode PoseSearchMode;                                                   // 0x0070 (size: 0x4)
    int32 KDTreeQueryNumNeighbors;                                                    // 0x0074 (size: 0x4)
    int32 KDTreeQueryNumNeighborsWithDuplicates;                                      // 0x0078 (size: 0x4)

    int32 GetNumAnimationAssets();
    class UObject* GetAnimationAsset(int32 Index);
}; // Size: 0x1E0

class UPoseSearchEventLibrary : public UBlueprintFunctionLibrary
{

    void UpdatePoseSearchEvent(const FPoseSearchEvent& InNewEvent, bool bIsNewEventValid, float DeltaSeconds, FPoseSearchEvent& InOutCurrentEvent);
}; // Size: 0x28

class UPoseSearchFeatureChannel : public UObject
{
    int32 ChannelDataOffset;                                                          // 0x0038 (size: 0x4)
    int32 ChannelCardinality;                                                         // 0x003C (size: 0x4)

}; // Size: 0x40

class UPoseSearchFeatureChannel_Curve : public UPoseSearchFeatureChannel
{
    FName CurveName;                                                                  // 0x0040 (size: 0x8)
    FName SampleRole;                                                                 // 0x0048 (size: 0x8)
    int8 CurveIdx;                                                                    // 0x0050 (size: 0x1)
    float SampleTimeOffset;                                                           // 0x0054 (size: 0x4)
    EInputQueryPose InputQueryPose;                                                   // 0x0058 (size: 0x1)

    float BP_GetCurveValue(const class UAnimInstance* AnimInstance);
}; // Size: 0x60

class UPoseSearchFeatureChannel_Distance : public UPoseSearchFeatureChannel
{
    bool bDefaultWithRootBone;                                                        // 0x0040 (size: 0x1)
    FBoneReference bone;                                                              // 0x0044 (size: 0x10)
    FName SampleRole;                                                                 // 0x0054 (size: 0x8)
    FBoneReference OriginBone;                                                        // 0x005C (size: 0x10)
    FName OriginRole;                                                                 // 0x006C (size: 0x8)
    float MaxDistance;                                                                // 0x0074 (size: 0x4)
    int32 SamplingAttributeId;                                                        // 0x0078 (size: 0x4)
    float SampleTimeOffset;                                                           // 0x007C (size: 0x4)
    float OriginTimeOffset;                                                           // 0x0080 (size: 0x4)
    int8 SchemaBoneIdx;                                                               // 0x0084 (size: 0x1)
    int8 SchemaOriginBoneIdx;                                                         // 0x0085 (size: 0x1)
    EInputQueryPose InputQueryPose;                                                   // 0x0086 (size: 0x1)
    EPermutationTimeType PermutationTimeType;                                         // 0x0087 (size: 0x1)

    float BP_GetDistance(const class UAnimInstance* AnimInstance);
}; // Size: 0x90

class UPoseSearchFeatureChannel_FilterCrashingLegs : public UPoseSearchFeatureChannel
{
    FBoneReference LeftThigh;                                                         // 0x0040 (size: 0x10)
    FBoneReference RightThigh;                                                        // 0x0050 (size: 0x10)
    FBoneReference LeftFoot;                                                          // 0x0060 (size: 0x10)
    FBoneReference RightFoot;                                                         // 0x0070 (size: 0x10)
    FName SampleRole;                                                                 // 0x0080 (size: 0x8)
    float Weight;                                                                     // 0x0088 (size: 0x4)
    int8 LeftThighIdx;                                                                // 0x008C (size: 0x1)
    int8 RightThighIdx;                                                               // 0x008D (size: 0x1)
    int8 LeftFootIdx;                                                                 // 0x008E (size: 0x1)
    int8 RightFootIdx;                                                                // 0x008F (size: 0x1)
    EInputQueryPose InputQueryPose;                                                   // 0x0090 (size: 0x1)
    float AllowedTolerance;                                                           // 0x0094 (size: 0x4)

}; // Size: 0x98

class UPoseSearchFeatureChannel_Group : public UPoseSearchFeatureChannel_GroupBase
{
    TArray<class UPoseSearchFeatureChannel*> SubChannels;                             // 0x0050 (size: 0x10)

}; // Size: 0x60

class UPoseSearchFeatureChannel_GroupBase : public UPoseSearchFeatureChannel
{
    FName SampleRole;                                                                 // 0x0040 (size: 0x8)
    int32 DebugWeightGroupID;                                                         // 0x0048 (size: 0x4)

}; // Size: 0x50

class UPoseSearchFeatureChannel_Heading : public UPoseSearchFeatureChannel
{
    bool bDefaultWithRootBone;                                                        // 0x0040 (size: 0x1)
    FBoneReference bone;                                                              // 0x0044 (size: 0x10)
    FName SampleRole;                                                                 // 0x0054 (size: 0x8)
    FBoneReference OriginBone;                                                        // 0x005C (size: 0x10)
    FName OriginRole;                                                                 // 0x006C (size: 0x8)
    int32 SamplingAttributeId;                                                        // 0x0074 (size: 0x4)
    float SampleTimeOffset;                                                           // 0x0078 (size: 0x4)
    float OriginTimeOffset;                                                           // 0x007C (size: 0x4)
    EHeadingAxis HeadingAxis;                                                         // 0x0080 (size: 0x1)
    int8 SchemaBoneIdx;                                                               // 0x0081 (size: 0x1)
    int8 SchemaOriginBoneIdx;                                                         // 0x0082 (size: 0x1)
    EInputQueryPose InputQueryPose;                                                   // 0x0083 (size: 0x1)
    EComponentStrippingVector ComponentStripping;                                     // 0x0084 (size: 0x1)
    EPermutationTimeType PermutationTimeType;                                         // 0x0085 (size: 0x1)

    FQuat BP_GetWorldRotation(const class UAnimInstance* AnimInstance);
}; // Size: 0x88

class UPoseSearchFeatureChannel_Padding : public UPoseSearchFeatureChannel
{
    int32 PaddingSize;                                                                // 0x0040 (size: 0x4)

}; // Size: 0x48

class UPoseSearchFeatureChannel_PermutationTime : public UPoseSearchFeatureChannel
{
}; // Size: 0x40

class UPoseSearchFeatureChannel_Phase : public UPoseSearchFeatureChannel
{
    FBoneReference bone;                                                              // 0x0040 (size: 0x10)
    FName SampleRole;                                                                 // 0x0050 (size: 0x8)
    int8 SchemaBoneIdx;                                                               // 0x0058 (size: 0x1)
    EInputQueryPose InputQueryPose;                                                   // 0x0059 (size: 0x1)

}; // Size: 0x60

class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel_GroupBase
{
    TArray<FPoseSearchBone> SampledBones;                                             // 0x0050 (size: 0x10)
    TArray<int8> SchemaBoneIdx;                                                       // 0x0060 (size: 0x10)
    EInputQueryPose InputQueryPose;                                                   // 0x0070 (size: 0x1)
    bool bUseCharacterSpaceVelocities;                                                // 0x0071 (size: 0x1)
    EPermutationTimeType PermutationTimeType;                                         // 0x0072 (size: 0x1)
    TArray<class UPoseSearchFeatureChannel*> SubChannels;                             // 0x0078 (size: 0x10)

}; // Size: 0x88

class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{
    bool bDefaultWithRootBone;                                                        // 0x0040 (size: 0x1)
    FBoneReference bone;                                                              // 0x0044 (size: 0x10)
    FName SampleRole;                                                                 // 0x0054 (size: 0x8)
    FBoneReference OriginBone;                                                        // 0x005C (size: 0x10)
    FName OriginRole;                                                                 // 0x006C (size: 0x8)
    int32 SamplingAttributeId;                                                        // 0x0074 (size: 0x4)
    float SampleTimeOffset;                                                           // 0x0078 (size: 0x4)
    float OriginTimeOffset;                                                           // 0x007C (size: 0x4)
    int8 SchemaBoneIdx;                                                               // 0x0080 (size: 0x1)
    int8 SchemaOriginBoneIdx;                                                         // 0x0081 (size: 0x1)
    EInputQueryPose InputQueryPose;                                                   // 0x0082 (size: 0x1)
    EComponentStrippingVector ComponentStripping;                                     // 0x0083 (size: 0x1)
    EPermutationTimeType PermutationTimeType;                                         // 0x0084 (size: 0x1)
    float MaxPositionDistanceSquared;                                                 // 0x0088 (size: 0x4)
    bool bNormalizeDisplacement;                                                      // 0x008C (size: 0x1)

    FVector BP_GetWorldPosition(const class UAnimInstance* AnimInstance);
}; // Size: 0x90

class UPoseSearchFeatureChannel_SamplingTime : public UPoseSearchFeatureChannel
{
    float Weight;                                                                     // 0x0040 (size: 0x4)
    float TimeToMatch;                                                                // 0x0044 (size: 0x4)

}; // Size: 0x48

class UPoseSearchFeatureChannel_TimeToEvent : public UPoseSearchFeatureChannel
{
    float Weight;                                                                     // 0x0040 (size: 0x4)
    int32 SamplingAttributeId;                                                        // 0x0044 (size: 0x4)

    float BP_GetTimeToEvent(const class UAnimInstance* AnimInstance);
}; // Size: 0x50

class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel_GroupBase
{
    TArray<FPoseSearchTrajectorySample> Samples;                                      // 0x0050 (size: 0x10)
    TArray<class UPoseSearchFeatureChannel*> SubChannels;                             // 0x0060 (size: 0x10)

}; // Size: 0x70

class UPoseSearchFeatureChannel_Velocity : public UPoseSearchFeatureChannel
{
    bool bDefaultWithRootBone;                                                        // 0x0040 (size: 0x1)
    FBoneReference bone;                                                              // 0x0044 (size: 0x10)
    FName SampleRole;                                                                 // 0x0054 (size: 0x8)
    FBoneReference OriginBone;                                                        // 0x005C (size: 0x10)
    FName OriginRole;                                                                 // 0x006C (size: 0x8)
    int32 SamplingAttributeId;                                                        // 0x0074 (size: 0x4)
    float SampleTimeOffset;                                                           // 0x0078 (size: 0x4)
    float OriginTimeOffset;                                                           // 0x007C (size: 0x4)
    int8 SchemaBoneIdx;                                                               // 0x0080 (size: 0x1)
    int8 SchemaOriginBoneIdx;                                                         // 0x0081 (size: 0x1)
    EInputQueryPose InputQueryPose;                                                   // 0x0082 (size: 0x1)
    bool bUseCharacterSpaceVelocities;                                                // 0x0083 (size: 0x1)
    bool bNormalize;                                                                  // 0x0084 (size: 0x1)
    EComponentStrippingVector ComponentStripping;                                     // 0x0085 (size: 0x1)
    EPermutationTimeType PermutationTimeType;                                         // 0x0086 (size: 0x1)

    FVector BP_GetWorldVelocity(const class UAnimInstance* AnimInstance);
}; // Size: 0x88

class UPoseSearchHistoryCollectorAnimNodeLibrary : public UBlueprintFunctionLibrary
{

    void SetPoseHistoryNodeTransformTrajectory(const FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, const FTransformTrajectory& Trajectory);
    void GetPoseHistoryNodeTransformTrajectory(const FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, FTransformTrajectory& Trajectory);
    void ConvertToPoseHistoryNodePure(const FAnimNodeReference& Node, FPoseSearchHistoryCollectorAnimNodeReference& PoseSearchHistoryCollectorNode, bool& Result);
    FPoseSearchHistoryCollectorAnimNodeReference ConvertToPoseHistoryNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

class UPoseSearchInteractionAsset : public UMultiAnimAsset
{
    TArray<FPoseSearchInteractionAssetItem> Items;                                    // 0x0028 (size: 0x10)
    float WarpingBankingWeight;                                                       // 0x0038 (size: 0x4)

}; // Size: 0x40

class UPoseSearchInteractionLibrary : public UBlueprintFunctionLibrary
{

    FPoseSearchBlueprintResult MotionMatchInteraction_Pure(TArray<FPoseSearchInteractionAvailability> Availabilities, const class UObject* AnimContext, FName PoseHistoryName, bool bValidateResultAgainstAvailabilities);
    FPoseSearchBlueprintResult MotionMatchInteraction(TArray<FPoseSearchInteractionAvailability> Availabilities, const class UObject* AnimContext, FName PoseHistoryName, bool bValidateResultAgainstAvailabilities);
    FPoseSearchContinuingProperties GetMontageContinuingProperties(class UAnimInstance* AnimInstance);
}; // Size: 0x28

class UPoseSearchInteractionSubsystem : public UTickableWorldSubsystem
{
    TArray<FPoseSearchInteractionAnimContextAvailabilities> AnimContextsAvailabilities; // 0x0040 (size: 0x10)

}; // Size: 0x98

class UPoseSearchLibrary : public UBlueprintFunctionLibrary
{

    void MotionMatch(class UAnimInstance* AnimInstance, TArray<class UObject*> AssetsToSearch, const FName PoseHistoryName, const FPoseSearchContinuingProperties ContinuingProperties, const FPoseSearchFutureProperties Future, FPoseSearchBlueprintResult& Result);
    void IsAnimationAssetLooping(const class UObject* Asset, bool& bIsAssetLooping);
    void GetDatabaseTags(const class UPoseSearchDatabase* Database, TArray<FName>& Tags);
}; // Size: 0x28

class UPoseSearchNormalizationSet : public UDataAsset
{
    TArray<class UPoseSearchDatabase*> Databases;                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

class UPoseSearchSchema : public UDataAsset
{
    class USkeleton* Skeleton;                                                        // 0x0030 (size: 0x8)
    int32 SampleRate;                                                                 // 0x0038 (size: 0x4)
    TArray<FPoseSearchRoledSkeleton> Skeletons;                                       // 0x0040 (size: 0x10)
    TArray<class UPoseSearchFeatureChannel*> Channels;                                // 0x0050 (size: 0x10)
    TArray<class UPoseSearchFeatureChannel*> FinalizedChannels;                       // 0x0060 (size: 0x10)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x0070 (size: 0x8)
    int32 SchemaCardinality;                                                          // 0x0078 (size: 0x4)
    bool bAddDataPadding;                                                             // 0x007C (size: 0x1)
    bool bInjectAdditionalDebugChannels;                                              // 0x007D (size: 0x1)

}; // Size: 0x80

class UPoseSearchTrajectoryLibrary : public UBlueprintFunctionLibrary
{

    void PoseSearchGenerateTransformTrajectoryWithPredictor(TScriptInterface<class IPoseSearchTrajectoryPredictorInterface> InPredictor, float InDeltaTime, FTransformTrajectory& InOutTrajectory, float& InOutDesiredControllerYawLastUpdate, FTransformTrajectory& OutTrajectory, float InHistorySamplingInterval, int32 InTrajectoryHistoryCount, float InPredictionSamplingInterval, int32 InTrajectoryPredictionCount);
    void PoseSearchGenerateTransformTrajectory(const class UObject* InAnimInstance, const FPoseSearchTrajectoryData& InTrajectoryData, float InDeltaTime, FTransformTrajectory& InOutTrajectory, float& InOutDesiredControllerYawLastUpdate, FTransformTrajectory& OutTrajectory, float InHistorySamplingInterval, int32 InTrajectoryHistoryCount, float InPredictionSamplingInterval, int32 InTrajectoryPredictionCount);
    void PoseSearchGeneratePredictorTransformTrajectory(class UObject* InPredictor, const FPoseSearchTrajectoryData& InTrajectoryData, float InDeltaTime, FTransformTrajectory& InOutTrajectory, float& InOutDesiredControllerYawLastUpdate, FTransformTrajectory& OutTrajectory, float InHistorySamplingInterval, int32 InTrajectoryHistoryCount, float InPredictionSamplingInterval, int32 InTrajectoryPredictionCount);
    void HandleTransformTrajectoryWorldCollisionsWithGravity(const class UObject* WorldContextObject, const FTransformTrajectory& InTrajectory, FVector StartingVelocity, bool bApplyGravity, FVector GravityAccel, float FloorCollisionsOffset, FTransformTrajectory& OutTrajectory, FPoseSearchTrajectory_WorldCollisionResults& CollisionResult, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, float MaxObstacleHeight, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void HandleTransformTrajectoryWorldCollisions(const class UObject* WorldContextObject, const class UAnimInstance* AnimInstance, const FTransformTrajectory& InTrajectory, bool bApplyGravity, float FloorCollisionsOffset, FTransformTrajectory& OutTrajectory, FPoseSearchTrajectory_WorldCollisionResults& CollisionResult, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, float MaxObstacleHeight, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime);
    void GetTransformTrajectoryVelocity(const FTransformTrajectory& InTrajectory, float Time1, float Time2, FVector& OutVelocity, bool bExtrapolate);
    FTransform GetTransformTrajectorySampleTransform(const FTransformTrajectorySample& InTrajectorySample);
    void GetTransformTrajectorySampleAtTime(const FTransformTrajectory& InTrajectory, float Time, FTransformTrajectorySample& OutTrajectorySample, bool bExtrapolate);
    void GetTransformTrajectoryAngularVelocity(const FTransformTrajectory& InTrajectory, float Time1, float Time2, FVector& OutAngularVelocity, bool bExtrapolate);
    void DrawTransformTrajectory(const class UObject* WorldContextObject, const FTransformTrajectory& InTrajectory, const float DebugThickness, float HeightOffset);
}; // Size: 0x28

#endif
