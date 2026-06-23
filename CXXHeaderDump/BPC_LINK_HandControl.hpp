#ifndef UE4SS_SDK_BPC_LINK_HandControl_HPP
#define UE4SS_SDK_BPC_LINK_HandControl_HPP

class UBPC_LINK_HandControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* As BP First Person Character LINK;         // 0x00C0 (size: 0x8)
    class AActor* BindActor;                                                          // 0x00C8 (size: 0x8)
    FVector LocalAttachPosition;                                                      // 0x00D0 (size: 0x18)
    class UPrimitiveComponent* BindPrimitive;                                         // 0x00E8 (size: 0x8)
    FRotator LocalAttachRotation;                                                     // 0x00F0 (size: 0x18)
    double Distance;                                                                  // 0x0108 (size: 0x8)
    FVector AttachWorldPosition;                                                      // 0x0110 (size: 0x18)
    double MaxForce;                                                                  // 0x0128 (size: 0x8)
    class UPhysicsHandleComponent* Handle Component;                                  // 0x0130 (size: 0x8)
    double AttachDistance;                                                            // 0x0138 (size: 0x8)
    double power;                                                                     // 0x0140 (size: 0x8)
    double AddDamping;                                                                // 0x0148 (size: 0x8)
    FVector BeforeVector;                                                             // 0x0150 (size: 0x18)
    double SoftRadius;                                                                // 0x0168 (size: 0x8)
    class UBPC_FindNearConnectPoint_C* FindNearConnectPoint;                          // 0x0170 (size: 0x8)
    FBPC_LINK_HandControl_CChangeWeightValue ChangeWeightValue;                       // 0x0178 (size: 0x10)
    void ChangeWeightValue(double Value);
    class UCharacterMovementComponent* CharacterComp;                                 // 0x0188 (size: 0x8)
    FVector2D RollAndPitch;                                                           // 0x0190 (size: 0x10)
    bool IsPickNow;                                                                   // 0x01A0 (size: 0x1)
    FRotator GrabStartCameraRotation;                                                 // 0x01A8 (size: 0x18)
    class ABP_GizmoVisual_C* GizmoActor;                                              // 0x01C0 (size: 0x8)
    class ULBPC_ReplicatePrimitiveParamaters_C* ReplicatePrimitiveParamaters;         // 0x01C8 (size: 0x8)
    double MaxHandleDistance;                                                         // 0x01D0 (size: 0x8)
    double KeepHandleValue;                                                           // 0x01D8 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce* OwnerCustomPhysicsForce;                        // 0x01E0 (size: 0x8)
    double HorizontalDistance;                                                        // 0x01E8 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce* TargetCustomPhysicsForce;                       // 0x01F0 (size: 0x8)
    double CurrentTargetWeight;                                                       // 0x01F8 (size: 0x8)
    FVector2D ClampHeight;                                                            // 0x0200 (size: 0x10)
    double MinDistance;                                                               // 0x0210 (size: 0x8)
    FBPC_LINK_HandControl_CGrabEnd GrabEnd;                                           // 0x0218 (size: 0x10)
    void GrabEnd(class UPrimitiveComponent* GrabPrimitive);
    class UNiagaraComponent* LineNiagara;                                             // 0x0228 (size: 0x8)
    double ChargePower;                                                               // 0x0230 (size: 0x8)
    bool IsCharge;                                                                    // 0x0238 (size: 0x1)
    class UNiagaraComponent* ThrowNiagara;                                            // 0x0240 (size: 0x8)
    class ABP_ThrowTrailMesh_C* ThrowTrail;                                           // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* PrimitiveMaterialInstance;                        // 0x0250 (size: 0x8)
    class UBPC_AutoAttachHandControl_C* CurrentReplicateAttachComp;                   // 0x0258 (size: 0x8)
    FVector ThrowVelocity;                                                            // 0x0260 (size: 0x18)

    void GetGrabItem(class AActor*& BindActor);
    void GetHeightPosition(FVector& Location);
    void SearchLoop(class AActor* SearchTarget);
    void RidingLoopCheck(bool& Rezult);
    void OnRep_CurrentTargetWeight();
    bool IsGrab();
    void SetDamping(class UPrimitiveComponent* Primitive, bool State);
    void SetHandle(class UPhysicsHandleComponent* Handle Component);
    void GetWorldAttachPosition(FVector& WorldPositon, FRotator& worldRotation);
    void TargetPositionUpdate(class UPhysicsHandleComponent* HandleComponent, FVector position);
    void SetHandPositionValues(FTransform& TrasnformVariable, double& WeightVariable);
    void CurrentWeightUpdate(double Value);
    void SetHandle(Character)(class AActor* TargetActor, FVector AttachPoistion, class UPrimitiveComponent* BindPrimitive, double AttachDistance, FRotator LocalAttachRotation, FRotator Rotation, class UCharacterMovementComponent* CharacterComp);
    void SetMovement(Client)(class UCharacterMovementComponent* CharacterMovementComp, TEnumAsByte<EMovementMode> MovementMode);
    void AddRollAndPitch(FVector2D InputValue);
    void AddRollAndPitch(Server)(FVector2D RollAndPitch);
    void SetHandleItem(Client)(class AActor* TargetActor, FVector AttachPoistion, class UPrimitiveComponent* BindPrimitive, double AttachDistance, FRotator LocalAttachRotation, FRotator Rotation, double HorizontalDistance);
    void ReceiveBeginPlay();
    void ResetRotation();
    void SetGizmoVisibility(bool bNewVisibility);
    void ThrowSound();
    void QuickRotation();
    void SetHandleItemServer(class AActor* TargetActor, FVector AttachPoistion, class UPrimitiveComponent* BindPrimitive, double AttachDistance, FRotator LocalAttachRotation, FRotator Rotation);
    void DetachHandleItem(Client)(FVector Vel, FVector AngVel);
    void SetHandleItem(Server)(class AActor* TargetActor, FVector AttachPoistion, class UPrimitiveComponent* BindPrimitive, double AttachDistance, FRotator LocalAttachRotation, FRotator Rotation, FRotator CameraRotation);
    void ReceiveTick(float DeltaSeconds);
    void AddImpulse(FVector ForceVelocity);
    void SetHandleItem(class AActor* TargetActor, FVector AttachPoistion, FRotator StartRotation, class UPrimitiveComponent* TargetComponent, FVector StartPosition, double KeepDistance, FRotator CameraRotation);
    void AddforceForServer(FVector Force, FVector Location);
    void DetachHandleItem(Server)(FVector Vel, FVector AngVel, bool IsThrow);
    void DetachHandleItem(bool IsThrow);
    void ExecuteUbergraph_BPC_LINK_HandControl(int32 EntryPoint);
    void GrabEnd__DelegateSignature(class UPrimitiveComponent* GrabPrimitive);
    void ChangeWeightValue__DelegateSignature(double Value);
}; // Size: 0x278

#endif
