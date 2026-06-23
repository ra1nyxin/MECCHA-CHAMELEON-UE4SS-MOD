#ifndef UE4SS_SDK_Mover_HPP
#define UE4SS_SDK_Mover_HPP

#include "Mover_enums.hpp"

struct FApplyVelocityEffect : public FInstantMovementEffect
{
    FVector VelocityToApply;                                                          // 0x0008 (size: 0x18)
    bool bAdditiveVelocity;                                                           // 0x0020 (size: 0x1)
    FName ForceMovementMode;                                                          // 0x0024 (size: 0x8)

}; // Size: 0x30

struct FApplyVelocityPhysicsEffect : public FInstantMovementEffect
{
    FVector VelocityToApply;                                                          // 0x0008 (size: 0x18)
    bool bAdditiveVelocity;                                                           // 0x0020 (size: 0x1)
    FName ForceMovementMode;                                                          // 0x0024 (size: 0x8)

}; // Size: 0x30

struct FAsyncTeleportEffect : public FTeleportEffect
{
}; // Size: 0x40

struct FCharacterDefaultInputs : public FMoverDataStructBase
{
    EMoveInputType MoveInputType;                                                     // 0x0008 (size: 0x1)
    FVector MoveInput;                                                                // 0x0010 (size: 0x18)
    FVector OrientationIntent;                                                        // 0x0028 (size: 0x18)
    FRotator ControlRotation;                                                         // 0x0040 (size: 0x18)
    FName SuggestedMovementMode;                                                      // 0x0058 (size: 0x8)
    bool bUsingMovementBase;                                                          // 0x0060 (size: 0x1)
    class UPrimitiveComponent* MovementBase;                                          // 0x0068 (size: 0x8)
    FName MovementBaseBoneName;                                                       // 0x0070 (size: 0x8)
    bool bIsJumpJustPressed;                                                          // 0x0078 (size: 0x1)
    bool bIsJumpPressed;                                                              // 0x0079 (size: 0x1)

}; // Size: 0x80

struct FComputeCombinedVelocityParams
{
    float DeltaSeconds;                                                               // 0x0000 (size: 0x4)
    FVector InitialVelocity;                                                          // 0x0008 (size: 0x18)
    FVector MoveDirectionIntent;                                                      // 0x0020 (size: 0x18)
    float MaxSpeed;                                                                   // 0x0038 (size: 0x4)
    float TurningBoost;                                                               // 0x003C (size: 0x4)
    float Friction;                                                                   // 0x0040 (size: 0x4)
    float Deceleration;                                                               // 0x0044 (size: 0x4)
    float Acceleration;                                                               // 0x0048 (size: 0x4)
    FVector ExternalAcceleration;                                                     // 0x0050 (size: 0x18)
    float OverallMaxSpeed;                                                            // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FComputeVelocityParams
{
    float DeltaSeconds;                                                               // 0x0000 (size: 0x4)
    FVector InitialVelocity;                                                          // 0x0008 (size: 0x18)
    FVector MoveDirectionIntent;                                                      // 0x0020 (size: 0x18)
    float MaxSpeed;                                                                   // 0x0038 (size: 0x4)
    float TurningBoost;                                                               // 0x003C (size: 0x4)
    float Friction;                                                                   // 0x0040 (size: 0x4)
    float Deceleration;                                                               // 0x0044 (size: 0x4)
    float Acceleration;                                                               // 0x0048 (size: 0x4)
    FVector MoveInput;                                                                // 0x0050 (size: 0x18)
    EMoveInputType MoveInputType;                                                     // 0x0068 (size: 0x1)
    bool bUseAccelerationForVelocityMove;                                             // 0x0069 (size: 0x1)

}; // Size: 0x70

struct FFloorCheckResult
{
    uint8 bBlockingHit;                                                               // 0x0000 (size: 0x1)
    uint8 bWalkableFloor;                                                             // 0x0000 (size: 0x1)
    uint8 bLineTrace;                                                                 // 0x0000 (size: 0x1)
    float LineDist;                                                                   // 0x0004 (size: 0x4)
    float FloorDist;                                                                  // 0x0008 (size: 0x4)
    FHitResult HitResult;                                                             // 0x0010 (size: 0x100)

}; // Size: 0x110

struct FFloorResultData : public FMoverDataStructBase
{
    FFloorCheckResult FloorResult;                                                    // 0x0008 (size: 0x110)

}; // Size: 0x118

struct FFreeMoveParams
{
    EMoveInputType MoveInputType;                                                     // 0x0000 (size: 0x1)
    FVector MoveInput;                                                                // 0x0008 (size: 0x18)
    FRotator OrientationIntent;                                                       // 0x0020 (size: 0x18)
    FVector PriorVelocity;                                                            // 0x0038 (size: 0x18)
    FRotator PriorOrientation;                                                        // 0x0050 (size: 0x18)
    float MaxSpeed;                                                                   // 0x0068 (size: 0x4)
    float Acceleration;                                                               // 0x006C (size: 0x4)
    float Deceleration;                                                               // 0x0070 (size: 0x4)
    float TurningBoost;                                                               // 0x0074 (size: 0x4)
    float TurningRate;                                                                // 0x0078 (size: 0x4)
    float DeltaSeconds;                                                               // 0x007C (size: 0x4)
    FQuat WorldToGravityQuat;                                                         // 0x0080 (size: 0x20)
    bool bUseAccelerationForVelocityMove;                                             // 0x00A0 (size: 0x1)

}; // Size: 0xB0

struct FGroundMoveParams
{
    EMoveInputType MoveInputType;                                                     // 0x0000 (size: 0x1)
    FVector MoveInput;                                                                // 0x0008 (size: 0x18)
    FRotator OrientationIntent;                                                       // 0x0020 (size: 0x18)
    FVector PriorVelocity;                                                            // 0x0038 (size: 0x18)
    FRotator PriorOrientation;                                                        // 0x0050 (size: 0x18)
    float MaxSpeed;                                                                   // 0x0068 (size: 0x4)
    float Acceleration;                                                               // 0x006C (size: 0x4)
    float Deceleration;                                                               // 0x0070 (size: 0x4)
    float Friction;                                                                   // 0x0074 (size: 0x4)
    float TurningRate;                                                                // 0x0078 (size: 0x4)
    float TurningBoost;                                                               // 0x007C (size: 0x4)
    FVector GroundNormal;                                                             // 0x0080 (size: 0x18)
    float DeltaSeconds;                                                               // 0x0098 (size: 0x4)
    FVector UpDirection;                                                              // 0x00A0 (size: 0x18)
    FQuat WorldToGravityQuat;                                                         // 0x00C0 (size: 0x20)
    bool bUseAccelerationForVelocityMove;                                             // 0x00E0 (size: 0x1)

}; // Size: 0xF0

struct FInstantMovementEffect
{
}; // Size: 0x8

struct FJumpImpulseEffect : public FInstantMovementEffect
{
    float UpwardsSpeed;                                                               // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FLandedEventData : public FMoverSimulationEventData
{
}; // Size: 0x118

struct FLayeredMoveBase
{
    EMoveMixMode MixMode;                                                             // 0x0008 (size: 0x1)
    uint8 Priority;                                                                   // 0x0009 (size: 0x1)
    float DurationMs;                                                                 // 0x000C (size: 0x4)
    float StartSimTimeMs;                                                             // 0x0010 (size: 0x4)
    FLayeredMoveFinishVelocitySettings FinishVelocitySettings;                        // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FLayeredMoveFinishVelocitySettings
{
    FVector SetVelocity;                                                              // 0x0000 (size: 0x18)
    float ClampVelocity;                                                              // 0x0018 (size: 0x4)
    ELayeredMoveFinishVelocityMode FinishVelocityMode;                                // 0x001C (size: 0x1)

}; // Size: 0x20

struct FLayeredMoveGroup
{
    FVector ResidualVelocity;                                                         // 0x0000 (size: 0x18)
    float ResidualClamping;                                                           // 0x0038 (size: 0x4)
    bool bApplyResidualVelocity;                                                      // 0x003C (size: 0x1)

}; // Size: 0x40

struct FLayeredMove_AnimRootMotion : public FLayeredMoveBase
{
    class UAnimMontage* Montage;                                                      // 0x0038 (size: 0x8)
    float StartingMontagePosition;                                                    // 0x0040 (size: 0x4)
    float PlayRate;                                                                   // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FLayeredMove_JumpImpulseOverDuration : public FLayeredMoveBase
{
    float UpwardsSpeed;                                                               // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FLayeredMove_JumpTo : public FLayeredMoveBase
{
    float JumpDistance;                                                               // 0x0038 (size: 0x4)
    float JumpHeight;                                                                 // 0x003C (size: 0x4)
    bool bUseActorRotation;                                                           // 0x0040 (size: 0x1)
    FRotator JumpRotation;                                                            // 0x0048 (size: 0x18)
    class UCurveVector* PathOffsetCurve;                                              // 0x0060 (size: 0x8)
    class UCurveFloat* TimeMappingCurve;                                              // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FLayeredMove_Launch : public FLayeredMoveBase
{
    FVector LaunchVelocity;                                                           // 0x0038 (size: 0x18)
    FName ForceMovementMode;                                                          // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FLayeredMove_LinearVelocity : public FLayeredMoveBase
{
    FVector Velocity;                                                                 // 0x0038 (size: 0x18)
    class UCurveFloat* MagnitudeOverTime;                                             // 0x0050 (size: 0x8)
    uint8 SettingsFlags;                                                              // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FLayeredMove_MoveTo : public FLayeredMoveBase
{
    FVector StartLocation;                                                            // 0x0038 (size: 0x18)
    FVector TargetLocation;                                                           // 0x0050 (size: 0x18)
    bool bRestrictSpeedToExpected;                                                    // 0x0068 (size: 0x1)
    class UCurveVector* PathOffsetCurve;                                              // 0x0070 (size: 0x8)
    class UCurveFloat* TimeMappingCurve;                                              // 0x0078 (size: 0x8)

}; // Size: 0x80

struct FLayeredMove_MoveToDynamic : public FLayeredMove_MoveTo
{
    class AActor* LocationActor;                                                      // 0x0080 (size: 0x8)

}; // Size: 0x88

struct FLayeredMove_MultiJump : public FLayeredMoveBase
{
    int32 MaximumInAirJumps;                                                          // 0x0038 (size: 0x4)
    float UpwardsSpeed;                                                               // 0x003C (size: 0x4)
    int32 JumpsInAirRemaining;                                                        // 0x0040 (size: 0x4)
    float TimeOfLastJumpMS;                                                           // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FLayeredMove_RadialImpulse : public FLayeredMoveBase
{
    FVector Location;                                                                 // 0x0038 (size: 0x18)
    class AActor* LocationActor;                                                      // 0x0050 (size: 0x8)
    float Radius;                                                                     // 0x0058 (size: 0x4)
    float Magnitude;                                                                  // 0x005C (size: 0x4)
    bool bIsPush;                                                                     // 0x0060 (size: 0x1)
    bool bNoVerticalVelocity;                                                         // 0x0061 (size: 0x1)
    class UCurveFloat* DistanceFalloff;                                               // 0x0068 (size: 0x8)
    class UCurveFloat* MagnitudeOverTime;                                             // 0x0070 (size: 0x8)
    bool bUseFixedWorldDirection;                                                     // 0x0078 (size: 0x1)
    FRotator FixedWorldDirection;                                                     // 0x0080 (size: 0x18)

}; // Size: 0x98

struct FLayeredMove_RootMotionAttribute : public FLayeredMoveBase
{
    bool bConstrainWorldRotToMovementPlane;                                           // 0x0038 (size: 0x1)

}; // Size: 0xC0

struct FMovementModeChangedEventData : public FMoverSimulationEventData
{
}; // Size: 0x20

struct FMovementModeTickEndState
{
    float RemainingMs;                                                                // 0x0000 (size: 0x4)
    FName NextModeName;                                                               // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FMovementModifierBase
{
    float DurationMs;                                                                 // 0x0008 (size: 0x4)
    float StartSimTimeMs;                                                             // 0x000C (size: 0x4)
    FMovementModifierHandle LocalModifierHandle;                                      // 0x0010 (size: 0x2)

}; // Size: 0x18

struct FMovementModifierGroup
{
}; // Size: 0x20

struct FMovementModifierHandle
{
}; // Size: 0x2

struct FMovementRecord
{
}; // Size: 0x48

struct FMovementSettingsInputs : public FMoverDataStructBase
{
    float MaxSpeed;                                                                   // 0x0008 (size: 0x4)
    float Acceleration;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMovementSubstep
{
}; // Size: 0x28

struct FMoverAIInputs : public FMoverDataStructBase
{
    FVector RVOVelocityDelta;                                                         // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FMoverAuxStateContext
{
    FMoverDataCollection AuxStateCollection;                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMoverDataCollection
{
}; // Size: 0x10

struct FMoverDataPersistence
{
    class UScriptStruct* RequiredType;                                                // 0x0000 (size: 0x8)
    bool bCopyFromPriorFrame;                                                         // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FMoverDataStructBase
{
}; // Size: 0x8

struct FMoverDefaultSyncState : public FMoverDataStructBase
{
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FRotator Orientation;                                                             // 0x0020 (size: 0x18)
    FVector Velocity;                                                                 // 0x0038 (size: 0x18)
    FVector MoveDirectionIntent;                                                      // 0x0050 (size: 0x18)
    TWeakObjectPtr<class UPrimitiveComponent> MovementBase;                           // 0x0068 (size: 0x8)
    FName MovementBaseBoneName;                                                       // 0x0070 (size: 0x8)
    FVector MovementBasePos;                                                          // 0x0078 (size: 0x18)
    FQuat MovementBaseQuat;                                                           // 0x0090 (size: 0x20)

}; // Size: 0xB0

struct FMoverDynamicBasedMovementTickFunction : public FTickFunction
{
}; // Size: 0x38

struct FMoverInputCmdContext
{
    FMoverDataCollection InputCollection;                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMoverLaunchInputs : public FMoverDataStructBase
{
    FVector LaunchVelocity;                                                           // 0x0008 (size: 0x18)
    EMoverLaunchVelocityMode Mode;                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FMoverOnImpactParams
{
    FName MovementModeName;                                                           // 0x0000 (size: 0x8)
    FHitResult HitResult;                                                             // 0x0008 (size: 0x100)
    FVector AttemptedMoveDelta;                                                       // 0x0108 (size: 0x18)

}; // Size: 0x120

struct FMoverPredictTrajectoryParams
{
    int32 NumPredictionSamples;                                                       // 0x0000 (size: 0x4)
    float SecondsPerSample;                                                           // 0x0004 (size: 0x4)
    bool bUseVisualComponentRoot;                                                     // 0x0008 (size: 0x1)
    bool bDisableGravity;                                                             // 0x0009 (size: 0x1)
    TOptional<FMoverSyncState> OptionalStartSyncState;                                // 0x0010 (size: 0x80)
    TOptional<FMoverAuxStateContext> OptionalStartAuxState;                           // 0x0090 (size: 0x18)
    TArray<FMoverInputCmdContext> OptionalInputCmds;                                  // 0x00A8 (size: 0x10)

}; // Size: 0xB8

struct FMoverSimulationEventData
{
}; // Size: 0x10

struct FMoverStandaloneApplyStateTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FMoverStandaloneProduceInputTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FMoverStandaloneSimulateMovementTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FMoverSyncState
{
    FName MovementMode;                                                               // 0x0000 (size: 0x8)
    FLayeredMoveGroup LayeredMoves;                                                   // 0x0008 (size: 0x40)
    FMovementModifierGroup MovementModifiers;                                         // 0x0048 (size: 0x20)
    FMoverDataCollection SyncStateCollection;                                         // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FMoverTickEndData
{
    FMoverSyncState SyncState;                                                        // 0x0000 (size: 0x78)
    FMoverAuxStateContext AuxState;                                                   // 0x0078 (size: 0x10)
    FMovementModeTickEndState MovementEndState;                                       // 0x0088 (size: 0xC)

}; // Size: 0xE0

struct FMoverTickStartData
{
    FMoverInputCmdContext InputCmd;                                                   // 0x0000 (size: 0x10)
    FMoverSyncState SyncState;                                                        // 0x0010 (size: 0x78)
    FMoverAuxStateContext AuxState;                                                   // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FMoverTimeStep
{
    int32 ServerFrame;                                                                // 0x0000 (size: 0x4)
    float BaseSimTimeMs;                                                              // 0x0004 (size: 0x4)
    float StepMs;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FMovingComponentSet
{
    TWeakObjectPtr<class USceneComponent> UpdatedComponent;                           // 0x0000 (size: 0x8)
    TWeakObjectPtr<class UPrimitiveComponent> UpdatedPrimitive;                       // 0x0008 (size: 0x8)
    TWeakObjectPtr<class UMoverComponent> MoverComponent;                             // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FMutablePathedMovementProperties
{
    int32 MovementStartFrame;                                                         // 0x0000 (size: 0x4)
    bool bIsInReverse;                                                                // 0x0004 (size: 0x1)
    bool bIsJointEnabled;                                                             // 0x0005 (size: 0x1)
    EPathedPhysicsPlaybackBehavior PlaybackBehavior;                                  // 0x0006 (size: 0x1)
    FTransform PathOrigin;                                                            // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FNetworkPhysicsMoverInputs : public FNetworkPhysicsData
{
    FMoverInputCmdContext InputCmdContext;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNetworkPhysicsMoverState : public FNetworkPhysicsData
{
    FMoverSyncState SyncStateContext;                                                 // 0x0028 (size: 0x78)

}; // Size: 0xA0

struct FPathedPhysicsMovementInputs : public FMoverDataStructBase
{
    FMutablePathedMovementProperties Props;                                           // 0x0010 (size: 0x70)

}; // Size: 0x80

struct FPathedPhysicsMovementState : public FMoverDataStructBase
{
    float LastStopPlaybackTime;                                                       // 0x0008 (size: 0x4)
    float CurrentProgress;                                                            // 0x000C (size: 0x4)
    FMutablePathedMovementProperties MutableProps;                                    // 0x0010 (size: 0x70)

}; // Size: 0x80

struct FPhysicsStanceModifier : public FStanceModifier
{
}; // Size: 0x20

struct FPlanarConstraint
{
    bool bConstrainToPlane;                                                           // 0x0000 (size: 0x1)
    FVector PlaneConstraintNormal;                                                    // 0x0008 (size: 0x18)
    FVector PlaneConstraintOrigin;                                                    // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FPointMovementPathPoint
{
    EPointMovementLocationBasis Basis;                                                // 0x0000 (size: 0x1)
    FVector Location;                                                                 // 0x0008 (size: 0x18)

}; // Size: 0x40

struct FProposedMove
{
    FName PreferredMode;                                                              // 0x0000 (size: 0x8)
    FVector DirectionIntent;                                                          // 0x0008 (size: 0x18)
    FVector LinearVelocity;                                                           // 0x0020 (size: 0x18)
    FRotator AngularVelocity;                                                         // 0x0038 (size: 0x18)
    uint8 bHasDirIntent;                                                              // 0x0050 (size: 0x1)
    EMoveMixMode MixMode;                                                             // 0x0051 (size: 0x1)

}; // Size: 0x58

struct FRelativeBaseInfo
{
    TWeakObjectPtr<class UPrimitiveComponent> MovementBase;                           // 0x0000 (size: 0x8)
    FName BoneName;                                                                   // 0x0008 (size: 0x8)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0030 (size: 0x20)
    FVector ContactLocalPosition;                                                     // 0x0050 (size: 0x18)

}; // Size: 0x70

struct FSimulationTickParams
{
    FMovingComponentSet MovingComps;                                                  // 0x0000 (size: 0x18)
    class UMoverBlackboard* SimBlackboard;                                            // 0x0018 (size: 0x8)
    FMoverTickStartData StartState;                                                   // 0x0020 (size: 0x98)
    FMoverTimeStep TimeStep;                                                          // 0x00B8 (size: 0x10)
    FProposedMove ProposedMove;                                                       // 0x00C8 (size: 0x58)

}; // Size: 0x120

struct FSplinePathPatternPointData
{
    float SplinePointKey;                                                             // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FStanceModifier : public FMovementModifierBase
{
}; // Size: 0x20

struct FSwimmingControlSettings
{
    float CancelCrouchImmersionDepth;                                                 // 0x0000 (size: 0x4)
    float DBNOSwimImmersionDepth;                                                     // 0x0004 (size: 0x4)
    float MaxAcceleration;                                                            // 0x0008 (size: 0x4)
    float MaxAccelerationSprinting;                                                   // 0x000C (size: 0x4)
    float BrakingDeceleration;                                                        // 0x0010 (size: 0x4)
    float MaxNormalSpeed;                                                             // 0x0014 (size: 0x4)
    float MaxSprintSpeed;                                                             // 0x0018 (size: 0x4)
    float MinSprintJumpSpeed;                                                         // 0x001C (size: 0x4)
    float SprintJumpAirAccelAngleLimit;                                               // 0x0020 (size: 0x4)
    float SprintRetriggerDelay;                                                       // 0x0024 (size: 0x4)
    float SprintDelayAfterFiring;                                                     // 0x0028 (size: 0x4)
    float MaxTargetingSpeed;                                                          // 0x002C (size: 0x4)
    float BackwardsSpeedMultiplier;                                                   // 0x0030 (size: 0x4)
    float BackwardsSpeedCosAngle;                                                     // 0x0034 (size: 0x4)
    float AngledSpeedMultiplier;                                                      // 0x0038 (size: 0x4)
    float AngledSpeedCosAngle;                                                        // 0x003C (size: 0x4)
    float Friction;                                                                   // 0x0040 (size: 0x4)
    float FrictionSprinting;                                                          // 0x0044 (size: 0x4)
    float FrictionDirectionChangeDot;                                                 // 0x0048 (size: 0x4)
    float FrictionDirectionChangeMultiplier;                                          // 0x004C (size: 0x4)
    float MaxSpeedUp;                                                                 // 0x0050 (size: 0x4)
    float MaxSpeedDown;                                                               // 0x0054 (size: 0x4)
    float MaxHorizontalEntrySpeed;                                                    // 0x0058 (size: 0x4)
    float WaterForceMultiplier;                                                       // 0x005C (size: 0x4)
    float WaterForceSecondMultiplier;                                                 // 0x0060 (size: 0x4)
    float MaxWaterForce;                                                              // 0x0064 (size: 0x4)
    float WaterVelocityDepthForMax;                                                   // 0x0068 (size: 0x4)
    float WaterVelocityMinMultiplier;                                                 // 0x006C (size: 0x4)
    float WaterSimMaxTimeStep;                                                        // 0x0070 (size: 0x4)
    float WaterSimSubStepTime;                                                        // 0x0074 (size: 0x4)
    float BobbingMaxForce;                                                            // 0x0078 (size: 0x4)
    float BobbingIdealDepthTolerance;                                                 // 0x007C (size: 0x4)
    float BobbingFrictionDown;                                                        // 0x0080 (size: 0x4)
    float BobbingExpDragDown;                                                         // 0x0084 (size: 0x4)
    float BobbingFrictionDownSubmerged;                                               // 0x0088 (size: 0x4)
    float BobbingExpDragDownSubmerged;                                                // 0x008C (size: 0x4)
    float BobbingFrictionUp;                                                          // 0x0090 (size: 0x4)
    float BobbingExpDragUp;                                                           // 0x0094 (size: 0x4)
    float BobbingFrictionMultiplier;                                                  // 0x0098 (size: 0x4)
    float BobbingExpDragMultiplier;                                                   // 0x009C (size: 0x4)
    float BoostDragMultiplier;                                                        // 0x00A0 (size: 0x4)
    float JumpMultiplier;                                                             // 0x00A4 (size: 0x4)

}; // Size: 0xA8

struct FTeleportEffect : public FInstantMovementEffect
{
    FVector TargetLocation;                                                           // 0x0008 (size: 0x18)
    bool bUseActorRotation;                                                           // 0x0020 (size: 0x1)
    FRotator TargetRotation;                                                          // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FTrajectorySampleInfo
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)
    FVector LinearVelocity;                                                           // 0x0060 (size: 0x18)
    FVector InstantaneousAcceleration;                                                // 0x0078 (size: 0x18)
    FRotator AngularVelocity;                                                         // 0x0090 (size: 0x18)
    float SimTimeMs;                                                                  // 0x00A8 (size: 0x4)

}; // Size: 0xB0

struct FTransitionEvalResult
{
    FName NextMode;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FUpdateWaterSplineDataParams
{
    float TargetImmersionDepth;                                                       // 0x0000 (size: 0x4)
    float WaterVelocityDepthForMax;                                                   // 0x0004 (size: 0x4)
    float WaterVelocityMinMultiplier;                                                 // 0x0008 (size: 0x4)
    FVector PlayerVelocity;                                                           // 0x0010 (size: 0x18)
    FVector PlayerLocation;                                                           // 0x0028 (size: 0x18)
    float CapsuleHalfHeight;                                                          // 0x0040 (size: 0x4)

}; // Size: 0x48

struct FWaterCheckResult
{
    uint8 bSwimmableVolume;                                                           // 0x0000 (size: 0x1)
    FHitResult HitResult;                                                             // 0x0008 (size: 0x100)
    FWaterFlowSplineData WaterSplineData;                                             // 0x0108 (size: 0xE8)

}; // Size: 0x1F0

struct FWaterFlowSplineData
{
}; // Size: 0xE8

struct FWaterMoveParams
{
    EMoveInputType MoveInputType;                                                     // 0x0000 (size: 0x1)
    FVector MoveInput;                                                                // 0x0008 (size: 0x18)
    FRotator OrientationIntent;                                                       // 0x0020 (size: 0x18)
    FVector PriorVelocity;                                                            // 0x0038 (size: 0x18)
    FRotator PriorOrientation;                                                        // 0x0050 (size: 0x18)
    float MaxSpeed;                                                                   // 0x0068 (size: 0x4)
    float Acceleration;                                                               // 0x006C (size: 0x4)
    float Deceleration;                                                               // 0x0070 (size: 0x4)
    float Friction;                                                                   // 0x0074 (size: 0x4)
    float TurningRate;                                                                // 0x0078 (size: 0x4)
    float TurningBoost;                                                               // 0x007C (size: 0x4)
    float DeltaSeconds;                                                               // 0x0080 (size: 0x4)
    FVector MoveAcceleration;                                                         // 0x0088 (size: 0x18)
    float MoveSpeed;                                                                  // 0x00A0 (size: 0x4)
    FQuat WorldToGravityQuat;                                                         // 0x00B0 (size: 0x20)

}; // Size: 0xD0

class IMovementSettingsInterface : public IInterface
{
}; // Size: 0x28

class IMoverBackendLiaisonInterface : public IInterface
{
}; // Size: 0x28

class IMoverInputProducerInterface : public IInterface
{

    void ProduceInput(int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult);
}; // Size: 0x28

class IPhysicsCharacterMovementModeInterface : public IInterface
{
}; // Size: 0x28

class ITurnGeneratorInterface : public IInterface
{

    FRotator GetTurn(FRotator TargetOrientation, const FMoverTickStartData& FullStartState, const FMoverDefaultSyncState& MoverState, const FMoverTimeStep& TimeStep, const FProposedMove& ProposedMove, class UMoverBlackboard* SimBlackboard);
}; // Size: 0x28

class UAirMovementUtils : public UBlueprintFunctionLibrary
{

    float TryMoveToFallAlongSurface(const FMovingComponentSet& MovingComps, const FVector& Delta, float PctOfDeltaToMove, const FQuat Rotation, const FVector& Normal, FHitResult& Hit, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult, FMovementRecord& MoveRecord);
    float TestFallingMoveAlongHitSurface(const FMovingComponentSet& MovingComps, const FVector& OriginalMoveDelta, const FVector& LocationAtHit, const FQuat& TargetRotation, bool bHandleImpact, float FloorSweepDistance, float MaxWalkSlopeCosine, FHitResult& InOutHit, FFloorCheckResult& OutFloorResult, FMovementRecord& InOutMoveRecord);
    bool IsValidLandingSpot(const FMovingComponentSet& MovingComps, const FVector& Location, const FHitResult& Hit, float FloorSweepDistance, float MaxWalkSlopeCosine, FFloorCheckResult& OutFloorResult);
    FProposedMove ComputeControlledFreeMove(const FFreeMoveParams& InParams);
}; // Size: 0x28

class UArcRotationPattern : public UPathedMovementPatternBase
{
    float RotationArcAngle;                                                           // 0x0050 (size: 0x4)
    FVector RotationAxis;                                                             // 0x0058 (size: 0x18)

}; // Size: 0x70

class UAsyncFallingMode : public UBaseMovementMode
{
    FAsyncFallingModeOnLanded OnLanded;                                               // 0x0070 (size: 0x10)
    void Mover_OnLanded(const FName& NextMovementModeName, const FHitResult& HitResult);
    bool bCancelVerticalSpeedOnLanding;                                               // 0x0080 (size: 0x1)
    float AirControlPercentage;                                                       // 0x0084 (size: 0x4)
    float FallingDeceleration;                                                        // 0x0088 (size: 0x4)
    float OverTerminalSpeedFallingDeceleration;                                       // 0x008C (size: 0x4)
    float TerminalMovementPlaneSpeed;                                                 // 0x0090 (size: 0x4)
    bool bShouldClampTerminalVerticalSpeed;                                           // 0x0094 (size: 0x1)
    float VerticalFallingDeceleration;                                                // 0x0098 (size: 0x4)
    float TerminalVerticalSpeed;                                                      // 0x009C (size: 0x4)

    void ProcessLanded(const FFloorCheckResult& FloorResult, FVector& Velocity, FRelativeBaseInfo& BaseInfo, FMoverTickEndData& TickEndData);
}; // Size: 0xA8

class UAsyncFlyingMode : public UBaseMovementMode
{
    bool bRespectDistanceOverWalkableSurfaces;                                        // 0x0070 (size: 0x1)

}; // Size: 0x80

class UAsyncMovementUtils : public UBlueprintFunctionLibrary
{

    float TestSlidingMoveAlongHitSurface(const FMovingComponentSet& MovingComps, const FVector& OriginalMoveDelta, const FVector& LocationAtHit, const FQuat& TargetRotation, FHitResult& InOutHit, FMovementRecord& InOutMoveRecord);
    bool TestDepenetratingMove(const FMovingComponentSet& MovingComps, const FVector& StartLocation, const FVector& TargetLocation, const FQuat& StartRotation, const FQuat& TargetRotation, bool bShouldSweep, FHitResult& OutHit, FMovementRecord& InOutMoveRecord);
}; // Size: 0x28

class UAsyncNavWalkingMode : public UBaseMovementMode
{
    bool bSweepWhileNavWalking;                                                       // 0x0070 (size: 0x1)
    bool bProjectNavMeshWalking;                                                      // 0x0071 (size: 0x1)
    float NavMeshProjectionHeightScaleUp;                                             // 0x0074 (size: 0x4)
    float NavMeshProjectionHeightScaleDown;                                           // 0x0078 (size: 0x4)
    float NavMeshProjectionInterval;                                                  // 0x007C (size: 0x4)
    float NavMeshProjectionInterpSpeed;                                               // 0x0080 (size: 0x4)
    EOffNavMeshBehavior BehaviorOffNavMesh;                                           // 0x0084 (size: 0x1)
    bool bSlideAlongNavMeshEdge;                                                      // 0x0085 (size: 0x1)
    float NavMeshProjectionTimer;                                                     // 0x0088 (size: 0x4)
    uint8 bProjectNavMeshOnBothWorldChannels;                                         // 0x00C8 (size: 0x1)
    class UObject* TurnGenerator;                                                     // 0x00D0 (size: 0x8)

    void SetTurnGeneratorClass(UClass* TurnGeneratorClass);
    class UObject* GetTurnGenerator();
}; // Size: 0xE0

class UAsyncWalkingMode : public UBaseMovementMode
{
    EStaticFloorCheckPolicy FloorCheckPolicy;                                         // 0x0070 (size: 0x1)
    class UObject* TurnGenerator;                                                     // 0x0078 (size: 0x8)

    void SetTurnGeneratorClass(UClass* TurnGeneratorClass);
    class UObject* GetTurnGenerator();
}; // Size: 0x88

class UBaseMovementMode : public UObject
{
    TArray<class UClass*> SharedSettingsClasses;                                      // 0x0028 (size: 0x10)
    TArray<class UBaseMovementModeTransition*> Transitions;                           // 0x0038 (size: 0x10)
    FGameplayTagContainer GameplayTags;                                               // 0x0048 (size: 0x20)
    bool bSupportsAsync;                                                              // 0x0068 (size: 0x1)

    void SimulationTick(const FSimulationTickParams& Params, FMoverTickEndData& OutputState);
    void K2_OnUnregistered();
    void K2_OnRegistered(const FName ModeName);
    void K2_OnDeactivated();
    void K2_OnActivated();
    class UMoverComponent* K2_GetMoverComponent();
    void GenerateMove(const FMoverTickStartData& StartState, const FMoverTimeStep& TimeStep, FProposedMove& OutProposedMove);
}; // Size: 0x70

class UBaseMovementModeTransition : public UObject
{
    TArray<class UClass*> SharedSettingsClasses;                                      // 0x0028 (size: 0x10)
    bool bAllowModeReentry;                                                           // 0x0038 (size: 0x1)
    bool bFirstSubStepOnly;                                                           // 0x0039 (size: 0x1)
    bool bSupportsAsync;                                                              // 0x003A (size: 0x1)

    void Trigger(const FSimulationTickParams& Params);
    void K2_OnUnregistered();
    void K2_OnRegistered();
    class UMoverComponent* K2_GetMoverComponent();
    FTransitionEvalResult Evaluate(const FSimulationTickParams& Params);
}; // Size: 0x40

class UBasedMovementUtils : public UBlueprintFunctionLibrary
{

    bool TransformWorldRotatorToBased(const class UPrimitiveComponent* MovementBase, const FName BoneName, FRotator WorldSpaceRotator, FRotator& OutLocalRotator);
    bool TransformWorldLocationToBased(const class UPrimitiveComponent* MovementBase, const FName BoneName, FVector WorldSpaceLocation, FVector& OutLocalLocation);
    bool TransformWorldDirectionToBased(const class UPrimitiveComponent* MovementBase, const FName BoneName, FVector WorldSpaceDirection, FVector& OutLocalDirection);
    void TransformRotatorToWorld(FQuat BaseQuat, FRotator LocalRotator, FRotator& OutWorldSpaceRotator);
    void TransformRotatorToLocal(FQuat BaseQuat, FRotator WorldSpaceRotator, FRotator& OutLocalRotator);
    void TransformLocationToWorld(FVector BasePos, FQuat BaseQuat, FVector LocalLocation, FVector& OutLocationWorldSpace);
    void TransformLocationToLocal(FVector BasePos, FQuat BaseQuat, FVector WorldSpaceLocation, FVector& OutLocalLocation);
    void TransformDirectionToWorld(FQuat BaseQuat, FVector LocalDirection, FVector& OutDirectionWorldSpace);
    void TransformDirectionToLocal(FQuat BaseQuat, FVector WorldSpaceDirection, FVector& OutLocalDirection);
    bool TransformBasedRotatorToWorld(const class UPrimitiveComponent* MovementBase, const FName BoneName, FRotator LocalRotator, FRotator& OutWorldSpaceRotator);
    bool TransformBasedLocationToWorld(const class UPrimitiveComponent* MovementBase, const FName BoneName, FVector LocalLocation, FVector& OutLocationWorldSpace);
    bool TransformBasedDirectionToWorld(const class UPrimitiveComponent* MovementBase, const FName BoneName, FVector LocalDirection, FVector& OutDirectionWorldSpace);
    bool IsBaseSimulatingPhysics(const class UPrimitiveComponent* MovementBase);
    bool IsADynamicBase(const class UPrimitiveComponent* MovementBase);
    bool GetMovementBaseTransform(const class UPrimitiveComponent* MovementBase, const FName BoneName, FVector& OutLocation, FQuat& OutQuat);
}; // Size: 0x28

class UBlueprintableTurnGenerator : public UObject
{
}; // Size: 0x30

class UCharacterMoverComponent : public UMoverComponent
{
    FCharacterMoverComponentOnStanceChanged OnStanceChanged;                          // 0x04E8 (size: 0x10)
    void Mover_OnStanceChanged(EStanceMode OldStance, EStanceMode NewStance);
    uint8 bWantsToCrouch;                                                             // 0x04FA (size: 0x1)
    uint8 bHandleJump;                                                                // 0x04FA (size: 0x1)
    uint8 bHandleStanceChanges;                                                       // 0x04FA (size: 0x1)

    void UnCrouch();
    void SetHandleStanceChanges(bool bInHandleStanceChanges);
    void SetHandleJump(bool bInHandleJump);
    void OnMoverPreSimulationTick(const FMoverTimeStep& TimeStep, const FMoverInputCmdContext& InputCmd);
    bool Jump();
    bool IsSwimming();
    bool IsSlopeSliding();
    bool IsOnGround();
    bool IsFlying();
    bool IsFalling();
    bool IsCrouching();
    bool IsAirborne();
    bool GetHandleStanceChanges();
    bool GetHandleJump();
    void Crouch();
    bool CanCrouch();
    bool CanActorJump();
}; // Size: 0x500

class UCommonLegacyMovementSettings : public UObject
{
    bool bShouldRemainVertical;                                                       // 0x0030 (size: 0x1)
    FName GroundMovementModeName;                                                     // 0x0034 (size: 0x8)
    FName AirMovementModeName;                                                        // 0x003C (size: 0x8)
    FName SwimmingMovementModeName;                                                   // 0x0044 (size: 0x8)
    float MaxWalkSlopeCosine;                                                         // 0x004C (size: 0x4)
    float FloorSweepDistance;                                                         // 0x0050 (size: 0x4)
    float MaxStepHeight;                                                              // 0x0054 (size: 0x4)
    float MaxSpeed;                                                                   // 0x0058 (size: 0x4)
    bool bUseAccelerationForVelocityMove;                                             // 0x005C (size: 0x1)
    float GroundFriction;                                                             // 0x0060 (size: 0x4)
    uint8 bUseSeparateBrakingFriction;                                                // 0x0064 (size: 0x1)
    float BrakingFriction;                                                            // 0x0068 (size: 0x4)
    float BrakingFrictionFactor;                                                      // 0x006C (size: 0x4)
    float Deceleration;                                                               // 0x0070 (size: 0x4)
    float Acceleration;                                                               // 0x0074 (size: 0x4)
    float TurningRate;                                                                // 0x0078 (size: 0x4)
    float TurningBoost;                                                               // 0x007C (size: 0x4)
    bool bIgnoreBaseRotation;                                                         // 0x0080 (size: 0x1)
    float JumpUpwardsSpeed;                                                           // 0x0084 (size: 0x4)
    float SwimmingStartImmersionDepth;                                                // 0x0088 (size: 0x4)
    float SwimmingIdealImmersionDepth;                                                // 0x008C (size: 0x4)
    float SwimmingStopImmersionDepth;                                                 // 0x0090 (size: 0x4)

}; // Size: 0x98

class UEllipticalMovementPathPattern : public UPathedMovementPatternBase
{
    float RadiusX;                                                                    // 0x0050 (size: 0x4)
    float RadiusY;                                                                    // 0x0054 (size: 0x4)
    float OriginAngle;                                                                // 0x0058 (size: 0x4)
    float UsableArcAngle;                                                             // 0x005C (size: 0x4)
    FRotator EllipsePlaneRotation;                                                    // 0x0060 (size: 0x18)

}; // Size: 0x78

class UExactDampedTurnGenerator : public UObject
{
    float HalfLifeSeconds;                                                            // 0x0030 (size: 0x4)

}; // Size: 0x38

class UFallingMode : public UBaseMovementMode
{
    FFallingModeOnLanded OnLanded;                                                    // 0x0070 (size: 0x10)
    void Mover_OnLanded(const FName& NextMovementModeName, const FHitResult& HitResult);
    bool bCancelVerticalSpeedOnLanding;                                               // 0x0080 (size: 0x1)
    float AirControlPercentage;                                                       // 0x0084 (size: 0x4)
    float FallingDeceleration;                                                        // 0x0088 (size: 0x4)
    float OverTerminalSpeedFallingDeceleration;                                       // 0x008C (size: 0x4)
    float TerminalMovementPlaneSpeed;                                                 // 0x0090 (size: 0x4)
    bool bShouldClampTerminalVerticalSpeed;                                           // 0x0094 (size: 0x1)
    float VerticalFallingDeceleration;                                                // 0x0098 (size: 0x4)
    float TerminalVerticalSpeed;                                                      // 0x009C (size: 0x4)

    void ProcessLanded(const FFloorCheckResult& FloorResult, FVector& Velocity, FRelativeBaseInfo& BaseInfo, FMoverTickEndData& TickEndData);
}; // Size: 0xA8

class UFloorQueryUtils : public UBlueprintFunctionLibrary
{

    bool IsHitSurfaceWalkable(const FHitResult& Hit, const FVector& UpDirection, float MaxWalkSlopeCosine);
}; // Size: 0x28

class UFlyingMode : public UBaseMovementMode
{
    bool bRespectDistanceOverWalkableSurfaces;                                        // 0x0070 (size: 0x1)

}; // Size: 0x80

class UGroundMovementUtils : public UBlueprintFunctionLibrary
{

    float TryWalkToSlideAlongSurface(const FMovingComponentSet& MovingComps, const FVector& Delta, float PctOfDeltaToMove, const FQuat Rotation, const FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord, float MaxWalkSlopeCosine, float MaxStepHeight);
    FVector TestMoveToAdjustToFloor(const FMovingComponentSet& MovingComps, const FVector& Location, const FQuat& Rotation, float MaxWalkSlopeCosine, FFloorCheckResult& InOutCurrentFloor, FMovementRecord& InOutMoveRecord);
    float TestGroundedMoveAlongHitSurface(const FMovingComponentSet& MovingComps, const FVector& OriginalMoveDelta, const FVector& LocationAtHit, const FQuat& TargetRotation, bool bHandleImpact, float MaxStepHeight, float MaxWalkSlopeCosine, FHitResult& InOutHit, FMovementRecord& InOutMoveRecord);
    FVector ComputeDeflectedMoveOntoRamp(const FVector& OrigMoveDelta, const FVector& UpDirection, const FHitResult& RampHitResult, float MaxWalkSlopeCosine, const bool bHitFromLineTrace);
    FProposedMove ComputeControlledGroundMove(const FGroundMoveParams& InParams);
    bool CanStepUpOnHitSurface(const FHitResult& Hit);
}; // Size: 0x28

class UImmediateMovementModeTransition : public UBaseMovementModeTransition
{
}; // Size: 0x48

class ULinearTurnGenerator : public UObject
{
    float HeadingRate;                                                                // 0x0030 (size: 0x4)
    float PitchRate;                                                                  // 0x0034 (size: 0x4)
    float RollRate;                                                                   // 0x0038 (size: 0x4)

}; // Size: 0x40

class ULookAtRotationPattern : public UPathedMovementPatternBase
{
    FVector RelativeLookAtLocation;                                                   // 0x0050 (size: 0x18)

    void SetRelativeLookAtLocation(const FVector& RelativeLookAt);
    void SetLookAtLocation(const FVector& LookAt);
}; // Size: 0x68

class UMotionWarpingMoverAdapter : public UMotionWarpingBaseAdapter
{
    class UMoverComponent* TargetMoverComp;                                           // 0x0038 (size: 0x8)

}; // Size: 0x40

class UMovementMixer : public UObject
{
}; // Size: 0x30

class UMovementModeStateMachine : public UObject
{
    TMap<class FName, class UBaseMovementMode*> Modes;                                // 0x0028 (size: 0x50)
    class UImmediateMovementModeTransition* QueuedModeTransition;                     // 0x0088 (size: 0x8)

}; // Size: 0x2B8

class UMovementRecordUtils : public UBlueprintFunctionLibrary
{

    void K2_SetDeltaSeconds(FMovementRecord& OutMovementRecord, float DeltaSeconds);
    FVector K2_GetTotalMoveDelta(const FMovementRecord& MovementRecord);
    FVector K2_GetRelevantVelocity(const FMovementRecord& MovementRecord);
    FVector K2_GetRelevantMoveDelta(const FMovementRecord& MovementRecord);
}; // Size: 0x28

class UMovementUtils : public UBlueprintFunctionLibrary
{

    bool TrySafeMoveUpdatedComponentNoMovementRecord(const FMovingComponentSet& MovingComps, const FVector& Delta, const FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport);
    bool TrySafeMoveUpdatedComponent(const FMovingComponentSet& MovingComps, const FVector& Delta, const FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, FMovementRecord& MoveRecord);
    float TrySafeMoveAndSlideUpdatedComponentNoMovementRecord(const FMovingComponentSet& MovingComps, const FVector& Delta, const FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, bool bSlideAlongSurface);
    float TrySafeMoveAndSlideUpdatedComponent(const FMovingComponentSet& MovingComps, const FVector& Delta, const FQuat& NewRotation, bool bSweep, FHitResult& OutHit, ETeleportType Teleport, FMovementRecord& MoveRecord, bool bSlideAlongSurface);
    float TryMoveToSlideAlongSurfaceNoMovementRecord(const FMovingComponentSet& MovingComps, const FVector& Delta, float PctOfDeltaToMove, const FQuat Rotation, const FVector& Normal, FHitResult& Hit, bool bHandleImpact);
    float TryMoveToSlideAlongSurface(const FMovingComponentSet& MovingComps, const FVector& Delta, float PctOfDeltaToMove, const FQuat Rotation, const FVector& Normal, FHitResult& Hit, bool bHandleImpact, FMovementRecord& MoveRecord);
    bool TestEncroachmentAndAdjust(const class UMoverComponent* MoverComp, FVector TestLocation, FRotator TestRotation, FVector& OutProposedAdjustment);
    bool TestEncroachment(const class UMoverComponent* MoverComp, FVector TestLocation, FRotator TestRotation);
    FVector ProjectToGravityFloor(const FVector& Vector, const FVector& UpDirection);
    bool IsExceedingMaxSpeed(const FVector& Velocity, float InMaxSpeed);
    bool IsAngularVelocityZero(const FRotator& AngularVelocity);
    FVector GetGravityVerticalComponent(const FVector& Vector, const FVector& UpDirection);
    bool FindTeleportSpot(const class UMoverComponent* MoverComp, FVector& TestLocation, FRotator TestRotation);
    FVector DeduceUpDirectionFromGravity(const FVector& GravityAcceleration);
    FVector ConstrainToPlane(const FVector& Vector, const FPlane& MovementPlane, bool bMaintainMagnitude);
    FVector ComputeVelocityFromPositions(const FVector& FromPos, const FVector& ToPos, float DeltaSeconds);
    FVector ComputeVelocityFromGravity(const FVector& GravityAccel, float DeltaSeconds);
    FVector ComputeVelocity(const FComputeVelocityParams& InParams);
    FVector ComputeSlideDelta(const FMovingComponentSet& MovingComps, const FVector& Delta, const float PctOfDeltaToMove, const FVector& Normal, const FHitResult& Hit);
    FVector ComputeDirectionIntent(const FVector& MoveInput, EMoveInputType MoveInputType, float MaxSpeed);
    FVector ComputeCombinedVelocity(const FComputeCombinedVelocityParams& InParams);
    FRotator ComputeAngularVelocity(const FRotator& From, const FRotator& To, const FQuat& WorldToGravity, float DeltaSeconds, float TurningRateLimit);
    bool CanEscapeGravity(const FVector& PriorVelocity, const FVector& NewVelocity, const FVector& GravityAccel, float DeltaSeconds);
    FRotator ApplyGravityToOrientationIntent(const FRotator& IntendedOrientation, const FQuat& WorldToGravity, bool bStayVertical);
}; // Size: 0x28

class UMoverBlackboard : public UObject
{
}; // Size: 0x80

class UMoverComponent : public UActorComponent
{
    FMoverComponentOnPreSimulationTick OnPreSimulationTick;                           // 0x00B8 (size: 0x10)
    void Mover_OnPreSimTick(const FMoverTimeStep& TimeStep, const FMoverInputCmdContext& InputCmd);
    FMoverComponentOnPostMovement OnPostMovement;                                     // 0x00C8 (size: 0x10)
    void Mover_OnPostMovement(const FMoverTimeStep& TimeStep, FMoverSyncState& SyncState, FMoverAuxStateContext& AuxState);
    FMoverComponentOnPostSimulationTick OnPostSimulationTick;                         // 0x00D8 (size: 0x10)
    void Mover_OnPostSimTick(const FMoverTimeStep& TimeStep);
    FMoverComponentOnPostSimulationRollback OnPostSimulationRollback;                 // 0x00E8 (size: 0x10)
    void Mover_OnPostSimRollback(const FMoverTimeStep& CurrentTimeStep, const FMoverTimeStep& ExpungedTimeStep);
    FMoverComponentOnMovementModeChanged OnMovementModeChanged;                       // 0x00F8 (size: 0x10)
    void Mover_OnMovementModeChanged(const FName& PreviousMovementModeName, const FName& NewMovementModeName);
    FMoverComponentOnPostFinalize OnPostFinalize;                                     // 0x0108 (size: 0x10)
    void Mover_OnPostFinalize(const FMoverSyncState& SyncState, const FMoverAuxStateContext& AuxState);
    TSubclassOf<class UActorComponent> BackendClass;                                  // 0x0128 (size: 0x8)
    TMap<class FName, class UBaseMovementMode*> MovementModes;                        // 0x0130 (size: 0x50)
    FName StartingMovementMode;                                                       // 0x0180 (size: 0x8)
    TArray<class UBaseMovementModeTransition*> Transitions;                           // 0x0188 (size: 0x10)
    TArray<FMoverDataPersistence> PersistentSyncStateDataTypes;                       // 0x0198 (size: 0x10)
    class UObject* InputProducer;                                                     // 0x01A8 (size: 0x8)
    class UMovementMixer* MovementMixer;                                              // 0x01B0 (size: 0x8)
    FMoverComponentOnPreMovement OnPreMovement;                                       // 0x01D8 (size: 0x10)
    void Mover_OnPreMovement(const FMoverTimeStep& TimeStep, const FMoverInputCmdContext& InputCmd, const FMoverSyncState& SyncState, const FMoverAuxStateContext& AuxState);
    class USceneComponent* UpdatedComponent;                                          // 0x01F0 (size: 0x8)
    class UPrimitiveComponent* UpdatedCompAsPrimitive;                                // 0x01F8 (size: 0x8)
    class USceneComponent* PrimaryVisualComponent;                                    // 0x0200 (size: 0x8)
    TScriptInterface<class IMoverBackendLiaisonInterface> BackendLiaisonComp;         // 0x03D0 (size: 0x10)
    class UMovementModeStateMachine* ModeFSM;                                         // 0x0418 (size: 0x8)
    class UMoverBlackboard* SimBlackboard;                                            // 0x0420 (size: 0x8)
    TArray<class UObject*> SharedSettings;                                            // 0x0428 (size: 0x10)
    FVector GravityAccelOverride;                                                     // 0x0438 (size: 0x18)
    FPlanarConstraint PlanarConstraint;                                               // 0x0450 (size: 0x38)
    EMoverSmoothingMode SmoothingMode;                                                // 0x0488 (size: 0x1)
    bool bHasGravityOverride;                                                         // 0x0489 (size: 0x1)
    bool bUseDeferredGroupMovement;                                                   // 0x048A (size: 0x1)
    FQuat WorldToGravityTransform;                                                    // 0x0490 (size: 0x20)
    FQuat GravityToWorldTransform;                                                    // 0x04B0 (size: 0x20)
    bool bSupportsKinematicBasedMovement;                                             // 0x04D0 (size: 0x1)

    void UnbindProcessGeneratedMovement();
    bool TryGetFloorCheckHitResult(FHitResult& OutHitResult);
    void SetUseDeferredGroupMovement(bool bEnable);
    void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
    void SetPrimaryVisualComponent(class USceneComponent* SceneComponent);
    void SetPlanarConstraint(const FPlanarConstraint& InConstraint);
    void SetGravityOverride(bool bOverrideGravity, FVector GravityAcceleration);
    void SetBaseVisualComponentTransform(const FTransform& ComponentTransform);
    bool RemoveMovementMode(FName ModeName);
    void RemoveGameplayTags(const FGameplayTagContainer& TagsToRemove);
    void RemoveGameplayTag(FGameplayTag TagToRemove);
    void QueueNextMode(FName DesiredModeName, bool bShouldReenter);
    void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
    void OnBeginOverlap(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    FMovementModifierHandle K2_QueueMovementModifier(const int32& MoveAsRawData);
    void K2_QueueLayeredMove(const int32& MoveAsRawData);
    void K2_QueueInstantMovementEffect(const int32& EffectAsRawData);
    void K2_FindMovementModifier(FMovementModifierHandle ModifierHandle, bool& bFoundModifier, int32& TargetAsRawBytes);
    void K2_FindActiveLayeredMove(bool& DidSucceed, int32& TargetAsRawBytes);
    bool IsUsingDeferredGroupMovement();
    bool IsModifierActiveOrQueued(const FMovementModifierHandle& ModifierHandle);
    bool HasValidCachedState();
    bool HasValidCachedInputCmd();
    bool HasGameplayTagInState(const FMoverSyncState& SyncState, FGameplayTag TagToFind, bool bExactMatch);
    bool HasGameplayTag(FGameplayTag TagToFind, bool bExactMatch);
    void HandleImpact(FMoverOnImpactParams& ImpactParams);
    FVector GetVelocity();
    FVector GetUpDirection();
    class USceneComponent* GetUpdatedComponent();
    FRotator GetTargetOrientation();
    FMoverSyncState GetSyncState();
    class UMoverBlackboard* GetSimBlackboard();
    class USceneComponent* GetPrimaryVisualComponent();
    TArray<FTrajectorySampleInfo> GetPredictedTrajectory(FMoverPredictTrajectoryParams PredictionParams);
    FPlanarConstraint GetPlanarConstraint();
    FName GetMovementModeName();
    class UBaseMovementMode* GetMovementMode();
    FVector GetMovementIntent();
    FName GetMovementBaseBoneName();
    class UPrimitiveComponent* GetMovementBase();
    FMoverTimeStep GetLastTimeStep();
    FMoverInputCmdContext GetLastInputCmd();
    FVector GetGravityAcceleration();
    TArray<FTrajectorySampleInfo> GetFutureTrajectory(float FutureSeconds, float SamplesPerSecond);
    FTransform GetBaseVisualComponentTransform();
    class UObject* FindSharedSettings_Mutable_BP(UClass* SharedSetting);
    class UObject* FindSharedSettings_BP(UClass* SharedSetting);
    class UBaseMovementMode* FindMovementModeByName(FName MovementModeName);
    class UBaseMovementMode* FindMovementMode(TSubclassOf<class UBaseMovementMode> MovementMode);
    void CancelModifierFromHandle(FMovementModifierHandle ModifierHandle);
    void BindProcessGeneratedMovement(FBindProcessGeneratedMovementProcessGeneratedMovementEvent ProcessGeneratedMovementEvent);
    bool AddMovementModeFromObject(FName ModeName, class UBaseMovementMode* MovementMode);
    class UBaseMovementMode* AddMovementModeFromClass(FName ModeName, TSubclassOf<class UBaseMovementMode> MovementMode);
    void AddGameplayTags(const FGameplayTagContainer& TagsToAdd);
    void AddGameplayTag(FGameplayTag TagToAdd);
}; // Size: 0x4F0

class UMoverDataCollectionLibrary : public UBlueprintFunctionLibrary
{

    void K2_GetDataFromCollection(bool& DidSucceed, const FMoverDataCollection& Collection, int32& TargetAsRawBytes);
    void K2_AddDataToCollection(FMoverDataCollection& Collection, const int32& SourceAsRawBytes);
    void ClearDataFromCollection(FMoverDataCollection& Collection);
}; // Size: 0x28

class UMoverDataModelBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetMoveIntent(FCharacterDefaultInputs& Inputs, const FVector& WorldDirectionIntent);
    FVector GetVelocityFromSyncState(const FMoverDefaultSyncState& SyncState);
    FRotator GetOrientationFromSyncState(const FMoverDefaultSyncState& SyncState);
    FVector GetMoveDirectionIntentFromSyncState(const FMoverDefaultSyncState& SyncState);
    FVector GetMoveDirectionIntentFromInputs(const FCharacterDefaultInputs& Inputs);
    FVector GetLocationFromSyncState(const FMoverDefaultSyncState& SyncState);
}; // Size: 0x28

class UMoverDebugComponent : public UActorComponent
{
    float LookaheadSeconds;                                                           // 0x00B8 (size: 0x4)
    int32 LookaheadSamplesPerSecond;                                                  // 0x00BC (size: 0x4)
    bool bShowTrajectory;                                                             // 0x00C0 (size: 0x1)
    bool bShowTrail;                                                                  // 0x00C1 (size: 0x1)
    bool bShowCorrections;                                                            // 0x00C2 (size: 0x1)
    float HistoryTrackingSeconds;                                                     // 0x00C4 (size: 0x4)
    int32 HistorySamplesPerSecond;                                                    // 0x00C8 (size: 0x4)

    void SetHistoryTracking(float SecondsToTrack, float SamplesPerSecond);
    void OnMovementSimTick(const FMoverTimeStep& TimeStep);
    void OnMovementSimRollback(const FMoverTimeStep& NewTimeStep, const FMoverTimeStep& InvalidatedTimeStep);
    void OnHistoryTrackingRollback(const FMoverTimeStep& NewTimeStep, const FMoverTimeStep& InvalidatedTimeStep);
    TArray<FTrajectorySampleInfo> GetPastTrajectory();
}; // Size: 0x130

class UMoverDeveloperSettings : public UDeveloperSettingsBackedByCVars
{
    int32 MaxTimesToRefundSubstep;                                                    // 0x0038 (size: 0x4)

}; // Size: 0x40

class UMoverNetworkPhysicsLiaisonComponent : public UMoverNetworkPhysicsLiaisonComponentBase
{
}; // Size: 0x290

class UMoverNetworkPhysicsLiaisonComponentBase : public UActorComponent
{
    class UNetworkPhysicsComponent* NetworkPhysicsComponent;                          // 0x0148 (size: 0x8)

    void HandleOwningPawnControllerChanged_Server(class APawn* OwnerPawn, class AController* OldController, class AController* NewController);
    void HandleComponentPhysicsStateChanged(class UPrimitiveComponent* ChangedComponent, EComponentPhysicsStateChange StateChange);
}; // Size: 0x280

class UMoverNetworkPredictionLiaisonComponent : public UNetworkPredictionComponent
{
}; // Size: 0x290

class UMoverPathedPhysicsLiaisonComponent : public UMoverNetworkPhysicsLiaisonComponentBase
{

    void HandleMovementModeChanged(const FName& OldModeName, const FName& NewModeName);
}; // Size: 0x5A0

class UMoverSimulation : public UObject
{
    class UMoverBlackboard* Blackboard;                                               // 0x0028 (size: 0x8)

    class UMoverBlackboard* GetBlackboard_Mutable();
    class UMoverBlackboard* GetBlackboard();
}; // Size: 0x30

class UMoverStandaloneLiaisonComponent : public UActorComponent
{
    bool bUseAsyncProduceInput;                                                       // 0x00C0 (size: 0x1)
    bool bUseAsyncMovementSimulationTick;                                             // 0x00C1 (size: 0x1)

    void SetUseAsyncProduceInput(bool bUseAsyncInputProduction);
    void SetUseAsyncMovementSimulationTick(bool bUseAsyncMovementSim);
    void SetEnableProduceInput(bool bEnableInputProduction);
    void OnControllerChanged(class APawn* Pawn, class AController* OldController, class AController* NewController);
    bool GetUseAsyncProduceInput();
    bool GetUseAsyncMovementSimulationTick();
    bool GetEnableProduceInput();
    void AddTickDependency(class UActorComponent* OtherComponent, EMoverTickDependencyOrder TickOrder, EMoverTickPhase TickPhase);
}; // Size: 0x390

class UMoverTrajectoryPredictor : public UObject
{

    void Setup(class UMoverComponent* InMoverComponent);
}; // Size: 0x38

class UNavMoverComponent : public UActorComponent
{
    FNavAgentProperties NavAgentProps;                                                // 0x00C0 (size: 0x38)
    FMovementProperties MovementState;                                                // 0x00F8 (size: 0x1)
    FNavMovementProperties NavMovementProperties;                                     // 0x00FC (size: 0x8)
    class UObject* PathFollowingComp;                                                 // 0x0148 (size: 0x8)
    TWeakObjectPtr<class UMoverComponent> MoverComponent;                             // 0x0150 (size: 0x8)

    bool IsSwimming();
    FVector GetVelocityForNavMovement();
    float GetMaxSpeedForNavMovement();
    bool ConsumeNavMovementData(FVector& OutMoveInputIntent, FVector& OutMoveInputVelocity);
}; // Size: 0x158

class UNavWalkingMode : public UBaseMovementMode
{
    bool bSweepWhileNavWalking;                                                       // 0x0070 (size: 0x1)
    bool bProjectNavMeshWalking;                                                      // 0x0071 (size: 0x1)
    float NavMeshProjectionHeightScaleUp;                                             // 0x0074 (size: 0x4)
    float NavMeshProjectionHeightScaleDown;                                           // 0x0078 (size: 0x4)
    float NavMeshProjectionInterval;                                                  // 0x007C (size: 0x4)
    float NavMeshProjectionInterpSpeed;                                               // 0x0080 (size: 0x4)
    EOffNavMeshBehavior BehaviorOffNavMesh;                                           // 0x0084 (size: 0x1)
    bool bSlideAlongNavMeshEdge;                                                      // 0x0085 (size: 0x1)
    float NavMeshProjectionTimer;                                                     // 0x0088 (size: 0x4)
    class UNavMoverComponent* NavMoverComponent;                                      // 0x00B0 (size: 0x8)
    uint8 bProjectNavMeshOnBothWorldChannels;                                         // 0x00C8 (size: 0x1)
    class UObject* TurnGenerator;                                                     // 0x00D0 (size: 0x8)

    void SetTurnGeneratorClass(UClass* TurnGeneratorClass);
    class UObject* GetTurnGenerator();
}; // Size: 0xE8

class UNullMovementMode : public UBaseMovementMode
{
}; // Size: 0x70

class UPathedMovementPatternBase : public UObject
{
    uint8 TranslationMasks;                                                           // 0x0028 (size: 0x1)
    uint8 RotationMasks;                                                              // 0x0029 (size: 0x1)
    uint8 ScaleMasks;                                                                 // 0x002A (size: 0x1)
    bool bStartAfterPreviousPattern;                                                  // 0x002B (size: 0x1)
    float StartAtPathProgress;                                                        // 0x002C (size: 0x4)
    float EndAtPathProgress;                                                          // 0x0030 (size: 0x4)
    int32 NumLoopsPerPath;                                                            // 0x0034 (size: 0x4)
    EPathedPhysicsPlaybackBehavior PerLoopBehavior;                                   // 0x0038 (size: 0x1)
    bool bOrientComponentToPath;                                                      // 0x0039 (size: 0x1)
    EAlphaBlendOption Easing;                                                         // 0x003A (size: 0x1)
    class UCurveFloat* CustomEasingCurve;                                             // 0x0040 (size: 0x8)
    bool bDebugDrawPattern;                                                           // 0x0048 (size: 0x1)
    FColor PatternDebugDrawColor;                                                     // 0x004C (size: 0x4)

}; // Size: 0x50

class UPathedPhysicsDebugDrawComponent : public UDebugDrawComponent
{
    class UMeshComponent* ProgressPreviewMeshComp;                                    // 0x05D0 (size: 0x8)

}; // Size: 0x5E0

class UPathedPhysicsMovementMode : public UBaseMovementMode
{
    bool bUseJointConstraint;                                                         // 0x0070 (size: 0x1)
    FConstraintProfileProperties JointConstraintProperties;                           // 0x0078 (size: 0x160)
    TOptional<EPathedPhysicsPlaybackBehavior> PlaybackBehaviorOverride;               // 0x01D8 (size: 0x2)
    float OneWayTripDuration;                                                         // 0x01DC (size: 0x4)
    TArray<class UPathedMovementPatternBase*> PathPatterns;                           // 0x01E0 (size: 0x10)
    EAlphaBlendOption Easing;                                                         // 0x01F0 (size: 0x1)
    class UCurveFloat* CustomEasingCurve;                                             // 0x01F8 (size: 0x8)
    bool bDebugDrawAggregatePath;                                                     // 0x0288 (size: 0x1)
    bool bAllowPatternDebugDrawing;                                                   // 0x0289 (size: 0x1)
    FColor PathDebugDrawColor;                                                        // 0x028C (size: 0x4)

    void SetUseJointConstraint(bool bUseJoint);
    void SetPathDuration_BeginPlayOnly(float NewDuration);
    class UPathedMovementPatternBase* BP_FindPattern(TSubclassOf<class UPathedMovementPatternBase> PatternType);
}; // Size: 0x290

class UPathedPhysicsMoverComponent : public UMoverComponent
{
    bool bAutoMoveOnSpawn;                                                            // 0x04E8 (size: 0x1)
    EPathedPhysicsPlaybackBehavior DefaultPlaybackBehavior;                           // 0x04E9 (size: 0x1)
    float MovementStartDelay;                                                         // 0x04EC (size: 0x4)
    class UMoverPathedPhysicsLiaisonComponent* PathedPhysicsLiaison;                  // 0x04F0 (size: 0x8)
    bool bDisplayProgressPreviewMesh;                                                 // 0x04F8 (size: 0x1)
    float PreviewMeshProgress;                                                        // 0x04FC (size: 0x4)
    class UMaterialInterface* ProgressPreviewMeshMaterial;                            // 0x0500 (size: 0x8)
    class UPathedPhysicsDebugDrawComponent* DebugDrawComp;                            // 0x0508 (size: 0x8)

    void SetPlaybackDirection(bool bPlayForward);
    void SetPathOriginTransform(const FTransform& NewPathOrigin);
    void SetIsMoving(bool bShouldMove);
    void SetDefaultPlaybackBehavior(EPathedPhysicsPlaybackBehavior PlaybackBehavior);
    bool IsMoving();
    bool IsJointEnabled();
    bool IsInReverse();
    FTransform GetPathOriginTransform();
    EPathedPhysicsPlaybackBehavior GetDefaultPlaybackBehavior();
}; // Size: 0x510

class UPhysicsCharacterMoverComponent : public UCharacterMoverComponent
{

    void OnMoverPreMovement(const FMoverTimeStep& TimeStep, const FMoverInputCmdContext& InputCmd, const FMoverSyncState& SyncState, const FMoverAuxStateContext& AuxState);
    void OnMoverPostSimulationTick(const FMoverTimeStep& TimeStep);
}; // Size: 0x510

class UPhysicsDrivenFallingMode : public UFallingMode
{
    float TwistTorqueLimit;                                                           // 0x00B0 (size: 0x4)
    float SwingTorqueLimit;                                                           // 0x00B4 (size: 0x4)
    TOptional<float> TargetHeightOverride;                                            // 0x00B8 (size: 0x8)
    float QueryRadius;                                                                // 0x00C0 (size: 0x4)

}; // Size: 0xC8

class UPhysicsDrivenFlyingMode : public UFlyingMode
{
    float TwistTorqueLimit;                                                           // 0x0088 (size: 0x4)
    float SwingTorqueLimit;                                                           // 0x008C (size: 0x4)

}; // Size: 0x90

class UPhysicsDrivenSwimmingMode : public USwimmingMode
{
    TOptional<float> TargetHeightOverride;                                            // 0x0130 (size: 0x8)
    float QueryRadius;                                                                // 0x0138 (size: 0x4)

}; // Size: 0x140

class UPhysicsDrivenWalkingMode : public UWalkingMode
{
    float RadialForceLimit;                                                           // 0x0090 (size: 0x4)
    float FrictionForceLimit;                                                         // 0x0094 (size: 0x4)
    float TwistTorqueLimit;                                                           // 0x0098 (size: 0x4)
    float SwingTorqueLimit;                                                           // 0x009C (size: 0x4)
    TOptional<float> TargetHeightOverride;                                            // 0x00A0 (size: 0x8)
    float QueryRadius;                                                                // 0x00A8 (size: 0x4)
    float GroundDamping;                                                              // 0x00AC (size: 0x4)
    float FractionalRadialForceLimitScaling;                                          // 0x00B0 (size: 0x4)
    float FractionalGroundReaction;                                                   // 0x00B4 (size: 0x4)
    float FractionalDownwardVelocityToTarget;                                         // 0x00B8 (size: 0x4)
    float MaxUnsupportedTimeBeforeFalling;                                            // 0x00BC (size: 0x4)
    bool bHandleVerticalLandingSeparately;                                            // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UPhysicsJumpCheck : public UBaseMovementModeTransition
{
    float JumpUpwardsSpeed;                                                           // 0x0040 (size: 0x4)
    float FractionalGroundReactionImpulse;                                            // 0x0044 (size: 0x4)
    FName TransitionToMode;                                                           // 0x0048 (size: 0x8)

}; // Size: 0x50

class UPhysicsLaunchCheck : public UBaseMovementModeTransition
{
    FName TransitionToMode;                                                           // 0x0040 (size: 0x8)

}; // Size: 0x48

class UPhysicsMoverManager : public UWorldSubsystem
{
}; // Size: 0x58

class UPlanarConstraintUtils : public UBlueprintFunctionLibrary
{

    void SetPlaneConstraintOrigin(FPlanarConstraint& Constraint, FVector PlaneOrigin);
    void SetPlanarConstraintNormal(FPlanarConstraint& Constraint, FVector PlaneNormal);
    void SetPlanarConstraintEnabled(FPlanarConstraint& Constraint, bool bEnabled);
    FVector ConstrainNormalToPlane(const FPlanarConstraint& Constraint, FVector Normal);
    FVector ConstrainLocationToPlane(const FPlanarConstraint& Constraint, FVector Location);
    FVector ConstrainDirectionToPlane(const FPlanarConstraint& Constraint, FVector Direction, bool bMaintainMagnitude);
}; // Size: 0x28

class UPlayMoverMontageCallbackProxy : public UPlayMontageCallbackProxy
{

    void OnMoverMontageEnded(FName IgnoredNotifyName);
    class UPlayMoverMontageCallbackProxy* CreateProxyObjectForPlayMoverMontage(class UMoverComponent* InMoverComponent, class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);
}; // Size: 0xA8

class UPointMovementPathPattern : public UPathedMovementPatternBase
{
    TArray<FPointMovementPathPoint> PathPoints;                                       // 0x0050 (size: 0x10)

}; // Size: 0x68

class USplineMovementPathPattern : public UPathedMovementPatternBase
{
    float LowerBound;                                                                 // 0x0050 (size: 0x4)
    float UpperBound;                                                                 // 0x0054 (size: 0x4)
    bool bOffsetsModifyDuration;                                                      // 0x0058 (size: 0x1)
    bool bApplySplineScaling;                                                         // 0x0059 (size: 0x1)
    FComponentReference SplineComponentRef;                                           // 0x0060 (size: 0x28)
    class USplineComponent* SplineComp;                                               // 0x0088 (size: 0x8)

}; // Size: 0x90

class UStanceSettings : public UObject
{
    float CrouchingMaxAcceleration;                                                   // 0x0030 (size: 0x4)
    float CrouchingMaxSpeed;                                                          // 0x0034 (size: 0x4)
    float CrouchHalfHeight;                                                           // 0x0038 (size: 0x4)
    float CrouchedEyeHeight;                                                          // 0x003C (size: 0x4)

}; // Size: 0x40

class USwimmingMode : public UBaseMovementMode
{
    FSwimmingControlSettings SurfaceSwimmingWaterControlSettings;                     // 0x0070 (size: 0xA8)

}; // Size: 0x128

class UWalkingMode : public UBaseMovementMode
{
    EStaticFloorCheckPolicy FloorCheckPolicy;                                         // 0x0070 (size: 0x1)
    class UObject* TurnGenerator;                                                     // 0x0078 (size: 0x8)

    void SetTurnGeneratorClass(UClass* TurnGeneratorClass);
    class UObject* GetTurnGenerator();
}; // Size: 0x88

class UWaterMovementUtils : public UBlueprintFunctionLibrary
{

    void UpdateWaterSplineData(const FUpdateWaterSplineDataParams& UpdateWaterSplineDataParams, FWaterCheckResult& WaterCheckResult);
    FProposedMove ComputeControlledWaterMove(const FWaterMoveParams& InParams);
}; // Size: 0x28

#endif
