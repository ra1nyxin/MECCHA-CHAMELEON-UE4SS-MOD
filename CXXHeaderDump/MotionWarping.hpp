#ifndef UE4SS_SDK_MotionWarping_HPP
#define UE4SS_SDK_MotionWarping_HPP

#include "MotionWarping_enums.hpp"

struct FAttributeBasedRootMotionComponentPrePhysicsTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FMotionDeltaTrack
{
    TArray<FTransform> BoneTransformTrack;                                            // 0x0000 (size: 0x10)
    TArray<FVector> DeltaTranslationTrack;                                            // 0x0010 (size: 0x10)
    TArray<FRotator> DeltaRotationTrack;                                              // 0x0020 (size: 0x10)
    FVector TotalTranslation;                                                         // 0x0030 (size: 0x18)
    FRotator TotalRotation;                                                           // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FMotionDeltaTrackContainer
{
    TArray<FMotionDeltaTrack> Tracks;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMotionWarpingTarget
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FRotator Rotation;                                                                // 0x0020 (size: 0x18)
    TWeakObjectPtr<class USceneComponent> Component;                                  // 0x0038 (size: 0x8)
    FName BoneName;                                                                   // 0x0040 (size: 0x8)
    bool bFollowComponent;                                                            // 0x0048 (size: 0x1)
    EWarpTargetLocationOffsetDirection LocationOffsetDirection;                       // 0x0049 (size: 0x1)
    FVector LocationOffset;                                                           // 0x0050 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0068 (size: 0x18)
    TWeakObjectPtr<class AActor> AvatarActor;                                         // 0x0080 (size: 0x8)

}; // Size: 0xE0

struct FMotionWarpingUpdateContext
{
    TWeakObjectPtr<class UAnimSequenceBase> Animation;                                // 0x0000 (size: 0x8)
    float PreviousPosition;                                                           // 0x0008 (size: 0x4)
    float CurrentPosition;                                                            // 0x000C (size: 0x4)
    float Weight;                                                                     // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    float DeltaSeconds;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FMotionWarpingWindowData
{
    class UAnimNotifyState_MotionWarping* AnimNotify;                                 // 0x0000 (size: 0x8)
    float StartTime;                                                                  // 0x0008 (size: 0x4)
    float EndTime;                                                                    // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSwitchOffConditionData
{
    FName WarpTargetName;                                                             // 0x0000 (size: 0x8)
    TArray<class UMotionWarpingSwitchOffCondition*> SwitchOffConditions;              // 0x0008 (size: 0x10)

}; // Size: 0x18

class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{
    class URootMotionModifier* RootMotionModifier;                                    // 0x0030 (size: 0x8)

    void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
    class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
}; // Size: 0x38

class UAttributeBasedRootMotionComponent : public UActorComponent
{
    bool bEnableRootMotion;                                                           // 0x00B8 (size: 0x1)
    EAttributeBasedRootMotionMode Mode;                                               // 0x00BC (size: 0x4)
    TWeakObjectPtr<class ACharacter> CharacterOwner;                                  // 0x00F0 (size: 0x8)

}; // Size: 0x1A0

class UDEPRECATED_RootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{
}; // Size: 0x340

class UMotionWarpingBaseAdapter : public UObject
{
}; // Size: 0x38

class UMotionWarpingCharacterAdapter : public UMotionWarpingBaseAdapter
{
}; // Size: 0x40

class UMotionWarpingComponent : public UActorComponent
{
    bool bSearchForWindowsInAnimsWithinMontages;                                      // 0x00B8 (size: 0x1)
    FMotionWarpingComponentOnPreUpdate OnPreUpdate;                                   // 0x00C0 (size: 0x10)
    void MotionWarpingPreUpdate(class UMotionWarpingComponent* MotionWarpingComp);
    class UMotionWarpingBaseAdapter* OwnerAdapter;                                    // 0x00D0 (size: 0x8)
    TArray<class URootMotionModifier*> Modifiers;                                     // 0x00D8 (size: 0x10)
    TArray<FMotionWarpingTarget> WarpTargets;                                         // 0x00E8 (size: 0x10)
    TArray<FSwitchOffConditionData> SwitchOffConditions;                              // 0x00F8 (size: 0x10)

    int32 RemoveWarpTargets(const TArray<FName>& WarpTargetNames);
    int32 RemoveWarpTarget(FName WarpTargetName);
    int32 RemoveAllWarpTargets();
    void DisableAllRootMotionModifiers();
    void AddSwitchOffCondition(FName WarpTargetName, class UMotionWarpingSwitchOffCondition* Condition);
    void AddOrUpdateWarpTargetFromTransform(FName WarpTargetName, FTransform TargetTransform);
    void AddOrUpdateWarpTargetFromLocationAndRotation(FName WarpTargetName, FVector TargetLocation, FRotator TargetRotation);
    void AddOrUpdateWarpTargetFromLocation(FName WarpTargetName, FVector TargetLocation);
    void AddOrUpdateWarpTargetFromComponent(FName WarpTargetName, const class USceneComponent* Component, FName BoneName, bool bFollowComponent, EWarpTargetLocationOffsetDirection LocationOffsetDirection, FVector LocationOffset, FRotator RotationOffset);
    void AddOrUpdateWarpTarget(const FMotionWarpingTarget& WarpTarget);
}; // Size: 0x108

class UMotionWarpingSwitchOffAngleToTargetCondition : public UMotionWarpingSwitchOffCondition
{
    ESwitchOffConditionAngleOp Operator;                                              // 0x0048 (size: 0x1)
    float Angle;                                                                      // 0x004C (size: 0x4)
    bool bIgnoreZAxis;                                                                // 0x0050 (size: 0x1)

    class UMotionWarpingSwitchOffAngleToTargetCondition* CreateSwitchOffAngleToTargetCondition(class AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, ESwitchOffConditionAngleOp InOperator, float InAngle, bool bInIgnoreZAxis, bool bInUseWarpTargetAsTargetLocation, class AActor* InTargetActor);
}; // Size: 0x58

class UMotionWarpingSwitchOffBlueprintableCondition : public UMotionWarpingSwitchOffCondition
{

    class UMotionWarpingSwitchOffBlueprintableCondition* CreateSwitchOffBlueprintableCondition(class AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, TSubclassOf<class UMotionWarpingSwitchOffBlueprintableCondition> InBlueprintableCondition, bool bInUseWarpTargetAsTargetLocation, class AActor* InTargetActor);
    FString BP_ExtraDebugInfo(const class AActor* InOwnerActor, const class AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation);
    bool BP_Check(const class AActor* InOwnerActor, const class AActor* InTargetActor, FVector InTargetLocation, bool bInUseWarpTargetAsTargetLocation);
}; // Size: 0x48

class UMotionWarpingSwitchOffCompositeCondition : public UMotionWarpingSwitchOffCondition
{
    class UMotionWarpingSwitchOffCondition* SwitchOffConditionA;                      // 0x0048 (size: 0x8)
    ESwitchOffConditionCompositeOp LogicOperator;                                     // 0x0050 (size: 0x1)
    class UMotionWarpingSwitchOffCondition* SwitchOffConditionB;                      // 0x0058 (size: 0x8)

    class UMotionWarpingSwitchOffCompositeCondition* CreateSwitchOffCompositeCondition(class AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, class UMotionWarpingSwitchOffCondition*& InSwitchOffConditionA, ESwitchOffConditionCompositeOp InLogicOperator, class UMotionWarpingSwitchOffCondition*& InSwitchOffConditionB, bool bInUseWarpTargetAsTargetLocation, class AActor* InTargetActor);
}; // Size: 0x60

class UMotionWarpingSwitchOffCondition : public UObject
{
    bool bUseWarpTargetAsTargetLocation;                                              // 0x0028 (size: 0x1)
    ESwitchOffConditionEffect Effect;                                                 // 0x0029 (size: 0x1)
    class AActor* OwnerActor;                                                         // 0x0030 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0038 (size: 0x8)

}; // Size: 0x48

class UMotionWarpingSwitchOffDistanceCondition : public UMotionWarpingSwitchOffCondition
{
    ESwitchOffConditionDistanceOp Operator;                                           // 0x0048 (size: 0x1)
    ESwitchOffConditionDistanceAxesType AxesType;                                     // 0x0049 (size: 0x1)
    float Distance;                                                                   // 0x004C (size: 0x4)

    class UMotionWarpingSwitchOffDistanceCondition* CreateSwitchOffDistanceCondition(class AActor*& InOwnerActor, ESwitchOffConditionEffect InEffect, ESwitchOffConditionDistanceOp InOperator, float InDistance, bool InbUseWarpTargetAsTargetLocation, class AActor* InTargetActor);
}; // Size: 0x50

class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{

    void GetMotionWarpingWindowsFromAnimation(const class UAnimSequenceBase* Animation, TArray<FMotionWarpingWindowData>& OutWindows);
    void GetMotionWarpingWindowsForWarpTargetFromAnimation(const class UAnimSequenceBase* Animation, FName WarpTargetName, TArray<FMotionWarpingWindowData>& OutWindows);
    FTransform ExtractRootMotionFromAnimation(const class UAnimSequenceBase* Animation, float StartTime, float EndTime);
    void ExtractBoneTransformFromAnimationAtTime(const class UAnimInstance* AnimInstance, const class UAnimSequenceBase* Animation, float Time, bool bExtractRootMotion, FName BoneName, bool bLocalSpace, FTransform& OutTransform);
}; // Size: 0x28

class URootMotionModifier : public UObject
{
    TWeakObjectPtr<class UAnimSequenceBase> Animation;                                // 0x0028 (size: 0x8)
    float StartTime;                                                                  // 0x0030 (size: 0x4)
    float EndTime;                                                                    // 0x0034 (size: 0x4)
    float PreviousPosition;                                                           // 0x0038 (size: 0x4)
    float CurrentPosition;                                                            // 0x003C (size: 0x4)
    float Weight;                                                                     // 0x0040 (size: 0x4)
    float PlayRate;                                                                   // 0x0044 (size: 0x4)
    FTransform StartTransform;                                                        // 0x0050 (size: 0x60)
    float ActualStartTime;                                                            // 0x00B0 (size: 0x4)
    FTransform TotalRootMotionWithinWindow;                                           // 0x00C0 (size: 0x60)
    FRootMotionModifierOnActivateDelegate OnActivateDelegate;                         // 0x0120 (size: 0x10)
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    FRootMotionModifierOnUpdateDelegate OnUpdateDelegate;                             // 0x0130 (size: 0x10)
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    FRootMotionModifierOnDeactivateDelegate OnDeactivateDelegate;                     // 0x0140 (size: 0x10)
    void OnRootMotionModifierDelegate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* RootMotionModifier);
    ERootMotionModifierState State;                                                   // 0x0150 (size: 0x1)

}; // Size: 0x160

class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{
    bool bWarpIKBones;                                                                // 0x0338 (size: 0x1)
    TArray<FName> IKBones;                                                            // 0x0340 (size: 0x10)
    FTransform CachedMeshTransform;                                                   // 0x0350 (size: 0x60)
    FTransform CachedMeshRelativeTransform;                                           // 0x03B0 (size: 0x60)
    FTransform CachedRootMotion;                                                      // 0x0410 (size: 0x60)
    FAnimSequenceTrackContainer Result;                                               // 0x0470 (size: 0x20)

}; // Size: 0x490

class URootMotionModifier_Scale : public URootMotionModifier
{
    FVector Scale;                                                                    // 0x0158 (size: 0x18)

    class URootMotionModifier_Scale* AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FVector InScale);
}; // Size: 0x170

class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{
    float MaxSpeedClampRatio;                                                         // 0x0338 (size: 0x4)

    class URootMotionModifier_SkewWarp* AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, const class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, FName InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, FTransform InWarpPointAnimTransform, FName InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, EMotionWarpRotationMethod InRotationMethod, float InWarpRotationTimeMultiplier, float InWarpMaxRotationRate);
}; // Size: 0x340

class URootMotionModifier_Warp : public URootMotionModifier
{
    FName WarpTargetName;                                                             // 0x0158 (size: 0x8)
    EWarpPointAnimProvider WarpPointAnimProvider;                                     // 0x0160 (size: 0x1)
    FTransform WarpPointAnimTransform;                                                // 0x0170 (size: 0x60)
    FName WarpPointAnimBoneName;                                                      // 0x01D0 (size: 0x8)
    bool bWarpTranslation;                                                            // 0x01D8 (size: 0x1)
    bool bIgnoreZAxis;                                                                // 0x01D9 (size: 0x1)
    bool bWarpToFeetLocation;                                                         // 0x01DA (size: 0x1)
    EAlphaBlendOption AddTranslationEasingFunc;                                       // 0x01DB (size: 0x1)
    class UCurveFloat* AddTranslationEasingCurve;                                     // 0x01E0 (size: 0x8)
    bool bWarpRotation;                                                               // 0x01E8 (size: 0x1)
    EMotionWarpRotationType RotationType;                                             // 0x01E9 (size: 0x1)
    EMotionWarpRotationMethod RotationMethod;                                         // 0x01EA (size: 0x1)
    bool bSubtractRemainingRootMotion;                                                // 0x01EB (size: 0x1)
    float WarpRotationTimeMultiplier;                                                 // 0x01EC (size: 0x4)
    float WarpMaxRotationRate;                                                        // 0x01F0 (size: 0x4)
    FTransform CachedTargetTransform;                                                 // 0x0200 (size: 0x60)
    FTransform RootMotionRemainingAfterNotify;                                        // 0x0260 (size: 0x60)

}; // Size: 0x340

#endif
