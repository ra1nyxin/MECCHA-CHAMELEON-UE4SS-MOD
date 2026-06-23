#ifndef UE4SS_SDK_BlendStack_HPP
#define UE4SS_SDK_BlendStack_HPP

#include "BlendStack_enums.hpp"

struct FAnimNode_BlendStack : public FAnimNode_BlendStack_Standalone
{
    class UAnimationAsset* AnimationAsset;                                            // 0x00C0 (size: 0x8)
    float AnimationTime;                                                              // 0x00C8 (size: 0x4)
    float ActivationDelayTime;                                                        // 0x00CC (size: 0x4)
    bool bLoop;                                                                       // 0x00D0 (size: 0x1)
    bool bMirrored;                                                                   // 0x00D1 (size: 0x1)
    float WantedPlayRate;                                                             // 0x00D4 (size: 0x4)
    float BlendTime;                                                                  // 0x00D8 (size: 0x4)
    float MaxAnimationDeltaTime;                                                      // 0x00DC (size: 0x4)
    class UBlendProfile* BlendProfile;                                                // 0x00E0 (size: 0x8)
    EAlphaBlendOption BlendOption;                                                    // 0x00E8 (size: 0x1)
    EBlendStack_BlendspaceUpdateMode BlendspaceUpdateMode;                            // 0x00E9 (size: 0x1)
    FVector BlendParameters;                                                          // 0x00F0 (size: 0x18)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x0108 (size: 0x8)
    float BlendParametersDeltaThreshold;                                              // 0x0110 (size: 0x4)
    bool bUseInertialBlend;                                                           // 0x0114 (size: 0x1)
    FName InertialBlendNodeTag;                                                       // 0x0118 (size: 0x8)
    bool bResetOnBecomingRelevant;                                                    // 0x0120 (size: 0x1)

}; // Size: 0x140

struct FAnimNode_BlendStackInput : public FAnimNode_Base
{
    int32 SampleIndex;                                                                // 0x0010 (size: 0x4)
    int32 BlendStackAllocationIndex;                                                  // 0x0014 (size: 0x4)
    bool bOverridePlayRate;                                                           // 0x0018 (size: 0x1)
    float PlayRate;                                                                   // 0x001C (size: 0x4)

}; // Size: 0x28

struct FAnimNode_BlendStack_Standalone : public FAnimNode_AssetPlayerBase
{
    TArray<FPoseLink> PerSampleGraphPoseLinks;                                        // 0x0048 (size: 0x10)
    TArray<FBlendStackAnimPlayer> AnimPlayers;                                        // 0x0060 (size: 0x10)
    bool bShouldFilterNotifies;                                                       // 0x0070 (size: 0x1)
    class UObject* StitchDatabase;                                                    // 0x0078 (size: 0x8)
    float StitchBlendTime;                                                            // 0x0080 (size: 0x4)
    float StitchBlendMaxCost;                                                         // 0x0084 (size: 0x4)
    int32 MaxActiveBlends;                                                            // 0x0088 (size: 0x4)
    bool bStoreBlendedPose;                                                           // 0x008C (size: 0x1)
    float NotifyRecencyTimeOut;                                                       // 0x00B0 (size: 0x4)
    float MaxBlendInTimeToOverrideAnimation;                                          // 0x00B4 (size: 0x4)
    float PlayerDepthBlendInTimeMultiplier;                                           // 0x00B8 (size: 0x4)

}; // Size: 0xC0

struct FBlendStackAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

struct FBlendStackAnimPlayer
{
    FAnimNode_SequencePlayer_Standalone SequencePlayerNode;                           // 0x0020 (size: 0x98)
    FAnimNode_BlendSpacePlayer_Standalone BlendSpacePlayerNode;                       // 0x00B8 (size: 0x90)
    FAnimNode_Mirror_Standalone MirrorNode;                                           // 0x0148 (size: 0x60)

}; // Size: 0x390

struct FBlendStackInputAnimNodeReference : public FAnimNodeReference
{
}; // Size: 0x10

class UBlendStackAnimNodeLibrary : public UBlueprintFunctionLibrary
{

    bool IsCurrentAssetLooping(const FBlendStackAnimNodeReference& BlendStackNode);
    bool GetCurrentBlendStackAnimIsActive(const FAnimNodeReference& Node);
    float GetCurrentBlendStackAnimAssetTime(const FAnimNodeReference& Node);
    class UMirrorDataTable* GetCurrentBlendStackAnimAssetMirrorTable(const FAnimNodeReference& Node);
    bool GetCurrentBlendStackAnimAssetMirrored(const FAnimNodeReference& Node);
    class UAnimationAsset* GetCurrentBlendStackAnimAsset(const FAnimNodeReference& Node);
    float GetCurrentAssetTimeRemaining(const FBlendStackAnimNodeReference& BlendStackNode);
    float GetCurrentAssetTime(const FBlendStackAnimNodeReference& BlendStackNode);
    class UAnimationAsset* GetCurrentAsset(const FBlendStackAnimNodeReference& BlendStackNode);
    void ForceBlendNextUpdate(const FBlendStackAnimNodeReference& BlendStackNode);
    void ConvertToBlendStackNodePure(const FAnimNodeReference& Node, FBlendStackAnimNodeReference& BlendStackNode, bool& Result);
    FBlendStackAnimNodeReference ConvertToBlendStackNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    void BlendToWithSettings(const FAnimUpdateContext& Context, const FBlendStackAnimNodeReference& BlendStackNode, class UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, class UBlendProfile* BlendProfile, EAlphaBlendOption BlendOption, bool bInertialBlend, FVector BlendParameters, float WantedPlayRate, float ActivationDelay);
    void BlendTo(const FAnimUpdateContext& Context, const FBlendStackAnimNodeReference& BlendStackNode, class UAnimationAsset* AnimationAsset, float AnimationTime, bool bLoop, bool bMirrored, float BlendTime, FVector BlendParameters, float WantedPlayRate, float ActivationDelay);
}; // Size: 0x28

class UBlendStackInputAnimNodeLibrary : public UBlueprintFunctionLibrary
{

    void GetProperties(const FBlendStackInputAnimNodeReference& BlendStackInputNode, class UAnimationAsset*& AnimationAsset, float& AccumulatedTime);
    void ConvertToBlendStackInputNodePure(const FAnimNodeReference& Node, FBlendStackInputAnimNodeReference& BlendStackInputNode, bool& Result);
    FBlendStackInputAnimNodeReference ConvertToBlendStackInputNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
}; // Size: 0x28

#endif
