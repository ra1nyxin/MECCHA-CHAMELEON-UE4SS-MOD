#ifndef UE4SS_SDK_ChaosMover_HPP
#define UE4SS_SDK_ChaosMover_HPP

#include "ChaosMover_enums.hpp"

struct FChaosCharacterApplyVelocityEffect : public FInstantMovementEffect
{
    FVector VelocityOrImpulseToApply;                                                 // 0x0008 (size: 0x18)
    EChaosMoverVelocityEffectMode Mode;                                               // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FChaosMoverCharacterSimState : public FMoverDataStructBase
{
    FVector TargetDeltaPosition;                                                      // 0x0008 (size: 0x18)
    float TargetDeltaFacing;                                                          // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FChaosMoverLaunchInputs : public FMoverDataStructBase
{
    FVector LaunchVelocityOrImpulse;                                                  // 0x0008 (size: 0x18)
    EChaosMoverVelocityEffectMode Mode;                                               // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FChaosMoverSimulationDefaultInputs : public FMoverDataStructBase
{
    FVector UpDir;                                                                    // 0x00A0 (size: 0x18)
    FVector Gravity;                                                                  // 0x00B8 (size: 0x18)
    float PhysicsObjectGravity;                                                       // 0x00E8 (size: 0x4)
    float PawnCollisionHalfHeight;                                                    // 0x00EC (size: 0x4)
    float PawnCollisionRadius;                                                        // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FNetworkChaosMoverInputData : public FNetworkPhysicsData
{
    FMoverInputCmdContext InputCmdContext;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNetworkChaosMoverStateData : public FNetworkPhysicsData
{
    FMoverSyncState SyncState;                                                        // 0x0028 (size: 0x78)

}; // Size: 0xA0

struct FSwimmingSettings
{
    float MaxSpeedUp;                                                                 // 0x0000 (size: 0x4)
    float MaxSpeedDown;                                                               // 0x0004 (size: 0x4)
    float WaterVelocityDepthForMax;                                                   // 0x0008 (size: 0x4)
    float WaterVelocityMinMultiplier;                                                 // 0x000C (size: 0x4)
    float MaxWaterForce;                                                              // 0x0010 (size: 0x4)
    float WaterForceMultiplier;                                                       // 0x0014 (size: 0x4)
    float WaterForceSecondMultiplier;                                                 // 0x0018 (size: 0x4)
    float BobbingMaxForce;                                                            // 0x001C (size: 0x4)
    float BobbingIdealDepthTolerance;                                                 // 0x0020 (size: 0x4)
    float BobbingFrictionDown;                                                        // 0x0024 (size: 0x4)
    float BobbingExpDragDown;                                                         // 0x0028 (size: 0x4)
    float BobbingFrictionDownSubmerged;                                               // 0x002C (size: 0x4)
    float BobbingExpDragDownSubmerged;                                                // 0x0030 (size: 0x4)
    float BobbingFrictionUp;                                                          // 0x0034 (size: 0x4)
    float BobbingExpDragUp;                                                           // 0x0038 (size: 0x4)
    float BobbingFrictionMultiplier;                                                  // 0x003C (size: 0x4)
    float BobbingExpDragMultiplier;                                                   // 0x0040 (size: 0x4)

}; // Size: 0x44

class IChaosCharacterConstraintMovementModeInterface : public IInterface
{
}; // Size: 0x28

class IChaosCharacterMovementModeInterface : public IInterface
{

    bool ShouldCharacterRemainUpright();
    float GetTargetHeight();
    float GetMaxWalkSlopeCosine();
    float GetGroundQueryRadius();
}; // Size: 0x28

class IChaosPathedMovementModeInterface : public IInterface
{
}; // Size: 0x28

class UChaosCharacterFallingCheck : public UChaosMovementModeTransition
{
    FName TransitionToFallingMode;                                                    // 0x0048 (size: 0x8)
    float MaxUnsupportedTimeBeforeFalling;                                            // 0x0050 (size: 0x4)

}; // Size: 0x60

class UChaosCharacterJumpCheck : public UChaosMovementModeTransition
{
    float JumpUpwardsSpeed;                                                           // 0x0048 (size: 0x4)
    float FractionalGroundReactionImpulse;                                            // 0x004C (size: 0x4)
    FName TransitionToMode;                                                           // 0x0050 (size: 0x8)

}; // Size: 0x58

class UChaosCharacterLandingCheck : public UChaosMovementModeTransition
{
    float SwimmingStartImmersionDepth;                                                // 0x0048 (size: 0x4)
    float FloorDistanceTolerance;                                                     // 0x004C (size: 0x4)
    FName TransitionToGroundMode;                                                     // 0x0050 (size: 0x8)

}; // Size: 0x58

class UChaosCharacterLaunchCheck : public UChaosMovementModeTransition
{
    FName TransitionToMode;                                                           // 0x0048 (size: 0x8)

}; // Size: 0x50

class UChaosCharacterMovementMode : public UChaosMovementMode
{
    float RadialForceLimit;                                                           // 0x0098 (size: 0x4)
    float TwistTorqueLimit;                                                           // 0x009C (size: 0x4)
    float SwingTorqueLimit;                                                           // 0x00A0 (size: 0x4)
    bool bShouldCharacterRemainUpright;                                               // 0x00A4 (size: 0x1)
    TOptional<float> TargetHeightOverride;                                            // 0x00A8 (size: 0x8)
    TOptional<float> QueryRadiusOverride;                                             // 0x00B0 (size: 0x8)

}; // Size: 0xC0

class UChaosCharacterMoverComponent : public UCharacterMoverComponent
{
    FChaosCharacterMoverComponentOnLanded OnLanded;                                   // 0x0500 (size: 0x10)
    void ChaosMover_OnLanded(const FName& NextMovementModeName, const FHitResult& HitResult);

    void Launch(const FVector& VelocityOrImpulse, EChaosMoverVelocityEffectMode Mode);
}; // Size: 0x650

class UChaosCharacterWaterCheck : public UChaosMovementModeTransition
{
    float WaterModeStartImmersionDepth;                                               // 0x0048 (size: 0x4)
    float WaterModeStopImmersionDepth;                                                // 0x004C (size: 0x4)
    FName WaterModeName;                                                              // 0x0050 (size: 0x8)
    FName GroundModeName;                                                             // 0x0058 (size: 0x8)
    FName AirModeName;                                                                // 0x0060 (size: 0x8)

}; // Size: 0x68

class UChaosFallingMode : public UChaosCharacterMovementMode
{
    bool bCancelVerticalSpeedOnLanding;                                               // 0x00C0 (size: 0x1)
    float AirControlPercentage;                                                       // 0x00C4 (size: 0x4)
    float FallingDeceleration;                                                        // 0x00C8 (size: 0x4)
    float OverTerminalSpeedFallingDeceleration;                                       // 0x00CC (size: 0x4)
    float TerminalMovementPlaneSpeed;                                                 // 0x00D0 (size: 0x4)
    bool bShouldClampTerminalVerticalSpeed;                                           // 0x00D4 (size: 0x1)
    float VerticalFallingDeceleration;                                                // 0x00D8 (size: 0x4)
    float TerminalVerticalSpeed;                                                      // 0x00DC (size: 0x4)

}; // Size: 0xE0

class UChaosFlyingMode : public UChaosCharacterMovementMode
{
}; // Size: 0xC0

class UChaosGroundMovementUtils : public UBlueprintFunctionLibrary
{

    FVector ComputeLocalGroundVelocity_Internal(const FVector& position, const FFloorCheckResult& FloorResult);
}; // Size: 0x28

class UChaosMovementMode : public UBaseMovementMode
{
    EChaosMoverIgnoredCollisionMode IgnoredCollisionMode;                             // 0x0070 (size: 0x1)

    class UChaosMoverSimulation* GetSimulation();
}; // Size: 0x80

class UChaosMovementModeTransition : public UBaseMovementModeTransition
{

    class UChaosMoverSimulation* GetSimulation_Mutable();
    class UChaosMoverSimulation* GetSimulation();
}; // Size: 0x48

class UChaosMoverBackendComponent : public UActorComponent
{
    class UNetworkPhysicsComponent* NetworkPhysicsComponent;                          // 0x00C0 (size: 0x8)
    class UNullMovementMode* NullMovementMode;                                        // 0x00C8 (size: 0x8)
    class UImmediateMovementModeTransition* ImmediateModeTransition;                  // 0x00D0 (size: 0x8)
    class UChaosMoverSimulation* Simulation;                                          // 0x00D8 (size: 0x8)

    void HandleUpdatedComponentPhysicsStateChanged(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
    void HandleOwningPawnControllerChanged_Server(class APawn* OwnerPawn, class AController* OldController, class AController* NewController);
}; // Size: 0x508

class UChaosMoverSimulation : public UMoverSimulation
{

    void K2_QueueInstantMovementEffect(const int32& EffectAsRawData);
    FMoverDataCollection GetLocalSimInput_Mutable();
    FMoverDataCollection GetLocalSimInput();
    FMoverDataCollection GetDebugSimData();
    class UBaseMovementMode* GetCurrentMovementMode();
    class UBaseMovementMode* FindMovementModeByName(const FName& Name);
}; // Size: 0x210

class UChaosMoverSubsystem : public UWorldSubsystem
{
}; // Size: 0x58

class UChaosSwimmingMode : public UChaosCharacterMovementMode
{
    float SwimmingIdealImmersionDepth;                                                // 0x00C0 (size: 0x4)
    FSwimmingSettings SurfaceSwimmingWaterControlSettings;                            // 0x00C4 (size: 0x44)

}; // Size: 0x110

class UChaosWalkingMode : public UChaosCharacterMovementMode
{
    float GroundDamping;                                                              // 0x00C0 (size: 0x4)
    float FrictionForceLimit;                                                         // 0x00C4 (size: 0x4)
    float FractionalRadialForceLimitScaling;                                          // 0x00C8 (size: 0x4)
    float FractionalGroundReaction;                                                   // 0x00CC (size: 0x4)
    float FractionalDownwardVelocityToTarget;                                         // 0x00D0 (size: 0x4)

}; // Size: 0xD8

class USharedChaosCharacterMovementSettings : public UObject
{
    float Deceleration;                                                               // 0x0030 (size: 0x4)
    float Acceleration;                                                               // 0x0034 (size: 0x4)
    float TurningRate;                                                                // 0x0038 (size: 0x4)
    float TurningBoost;                                                               // 0x003C (size: 0x4)
    float MaxSpeed;                                                                   // 0x0040 (size: 0x4)
    bool bUseAccelerationForVelocityMove;                                             // 0x0044 (size: 0x1)
    float GroundFriction;                                                             // 0x0048 (size: 0x4)
    uint8 bUseSeparateBrakingFriction;                                                // 0x004C (size: 0x1)
    float BrakingFriction;                                                            // 0x0050 (size: 0x4)
    float BrakingFrictionFactor;                                                      // 0x0054 (size: 0x4)
    float MaxStepHeight;                                                              // 0x0058 (size: 0x4)
    FName DefaultFallingMode;                                                         // 0x005C (size: 0x8)
    float MaxWalkableSlopeAngle;                                                      // 0x0064 (size: 0x4)

    void SetMaxWalkableSlopeAngle(float Value);
}; // Size: 0x70

#endif
