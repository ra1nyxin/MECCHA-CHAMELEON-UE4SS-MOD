#ifndef UE4SS_SDK_MoverExamples_HPP
#define UE4SS_SDK_MoverExamples_HPP

#include "MoverExamples_enums.hpp"

struct FFollowPathState : public FMoverDataStructBase
{
}; // Size: 0x28

struct FFollowSplineState : public FMoverDataStructBase
{
}; // Size: 0x10

struct FMoverExampleAbilityInputs : public FMoverDataStructBase
{
    bool bIsDashJustPressed;                                                          // 0x0008 (size: 0x1)
    bool bIsAimPressed;                                                               // 0x0009 (size: 0x1)
    bool bIsVaultJustPressed;                                                         // 0x000A (size: 0x1)
    bool bWantsToStartZiplining;                                                      // 0x000B (size: 0x1)
    bool bWantsToBeCrouched;                                                          // 0x000C (size: 0x1)

}; // Size: 0x10

struct FSplineOffsetRangeInput
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    ESplineOffsetUnit OffsetUnit;                                                     // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FZipliningState : public FMoverDataStructBase
{
}; // Size: 0x18

class AMoverExamplesCharacter : public APawn
{
    class UInputAction* MoveInputAction;                                              // 0x0330 (size: 0x8)
    class UInputAction* LookInputAction;                                              // 0x0338 (size: 0x8)
    class UInputAction* JumpInputAction;                                              // 0x0340 (size: 0x8)
    class UInputAction* FlyInputAction;                                               // 0x0348 (size: 0x8)
    bool bUseBaseRelativeMovement;                                                    // 0x0350 (size: 0x1)
    bool bOrientRotationToMovement;                                                   // 0x0351 (size: 0x1)
    bool bMaintainLastInputOrientation;                                               // 0x0352 (size: 0x1)
    class UCharacterMoverComponent* CharacterMotionComponent;                         // 0x0358 (size: 0x8)
    class UNavMoverComponent* NavMoverComponent;                                      // 0x0360 (size: 0x8)

    void RequestMoveByVelocity(const FVector& DesiredVelocity);
    void RequestMoveByIntent(const FVector& DesiredIntent);
    FMoverInputCmdContext OnProduceInputInBlueprint(float DeltaMs, FMoverInputCmdContext InputCmd);
    class UCharacterMoverComponent* GetMoverComponent();
}; // Size: 0x3E8

class AMoverExamplesGameMode : public AGameMode
{
}; // Size: 0x388

class AMoverExamplesGameState : public AGameState
{
}; // Size: 0x320

class IZipline : public IInterface
{

    class USceneComponent* GetStartComponent();
    class USceneComponent* GetEndComponent();
}; // Size: 0x28

class UFollowPathMode : public UBaseMovementMode
{
    TArray<FInterpControlPoint> ControlPoints;                                        // 0x0070 (size: 0x10)
    EInterpToBehaviourType BehaviourType;                                             // 0x0080 (size: 0x1)
    EFollowPathRotationType RotationType;                                             // 0x0081 (size: 0x1)
    float Duration;                                                                   // 0x0084 (size: 0x4)

}; // Size: 0xA0

class UFollowSplineMode : public UBaseMovementMode
{
    EInterpToBehaviourType BehaviourType;                                             // 0x0070 (size: 0x1)
    EFollowSplineRotationType RotationType;                                           // 0x0071 (size: 0x1)
    bool bOrientMoverToMovement;                                                      // 0x0072 (size: 0x1)
    bool bConstantFollowVelocity;                                                     // 0x0073 (size: 0x1)
    bool StartReveresed;                                                              // 0x0074 (size: 0x1)
    FSplineOffsetRangeInput StartOffset;                                              // 0x0078 (size: 0x8)
    FSplineOffsetRangeInput EndOffset;                                                // 0x0080 (size: 0x8)
    float CustomDurationSecondsOverride;                                              // 0x0088 (size: 0x4)
    class UCurveFloat* InterpolationCurve;                                            // 0x0090 (size: 0x8)
    class USplineComponent* ControlSpline;                                            // 0x0098 (size: 0x8)

    void SetControlSpline(const class AActor* SplineProviderActor, FSplineOffsetRangeInput Offset);
}; // Size: 0xC0

class UMoverExampleAbilityInputsLibrary : public UBlueprintFunctionLibrary
{

    FMoverExampleAbilityInputs GetMoverExampleAbilityInputs(const FMoverDataCollection& FromCollection);
}; // Size: 0x28

class UMoverExamplesPhysicsCharacterMoverComponent : public UPhysicsCharacterMoverComponent
{
}; // Size: 0x510

class UZiplineEndTransition : public UBaseMovementModeTransition
{
    FName AutoExitToMode;                                                             // 0x0040 (size: 0x8)

}; // Size: 0x48

class UZiplineStartTransition : public UBaseMovementModeTransition
{
    FName ZipliningModeName;                                                          // 0x0040 (size: 0x8)

}; // Size: 0x48

class UZipliningMode : public UBaseMovementMode
{
    float MaxSpeed;                                                                   // 0x0070 (size: 0x4)

}; // Size: 0x78

#endif
