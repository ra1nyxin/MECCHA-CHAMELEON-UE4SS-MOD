#ifndef UE4SS_SDK_BP_FirstPersonCharacter_Main_HPP
#define UE4SS_SDK_BP_FirstPersonCharacter_Main_HPP

class ABP_FirstPersonCharacter_Main_C : public AMoverExamplesCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UBPC_NearInteract_C* BPC_NearInteract;                                      // 0x03F0 (size: 0x8)
    class UExtendedPhysicsCharacterMoverComponent_C* ExtendedPhysicsCharacterMoverComponent; // 0x03F8 (size: 0x8)
    class USphereComponent* HeadPosition;                                             // 0x0400 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0408 (size: 0x8)
    class UCapsuleComponent* OverapCollision;                                         // 0x0410 (size: 0x8)
    class USkeletalMeshComponent* Mesh;                                               // 0x0418 (size: 0x8)
    class UCapsuleComponent* BodyCapsule;                                             // 0x0420 (size: 0x8)
    class UCameraComponent* FirstPersonCamera;                                        // 0x0428 (size: 0x8)
    class UBPC_PlayMontageOnline_C* BPC_PlayMontageOnline;                            // 0x0430 (size: 0x8)
    class UAbilitySystemComponent* AbilitySystem;                                     // 0x0438 (size: 0x8)
    class UBPC_CameraShake_C* BPC_CameraShake;                                        // 0x0440 (size: 0x8)
    class UBPC_GlobalTimeControl_C* BPC_GlobalTimeControl;                            // 0x0448 (size: 0x8)
    class UBPC_CameraMoveAnimation_C* BPC_CameraMoveAnimation;                        // 0x0450 (size: 0x8)
    class UBPC_ForceMoveCharacter_C* BPC_ForceMoveCharacter;                          // 0x0458 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_StaminaGauge_Sub;                   // 0x0460 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_StaminaGaugeControl;                // 0x0468 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_HPGaugeControl_Sub;                 // 0x0470 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_HPGaugeControl;                     // 0x0478 (size: 0x8)
    class UMotionWarpingComponent* MotionWarping;                                     // 0x0480 (size: 0x8)
    class UBPC_LongInputControl_C* BPC_LongInputControlAvoidDash;                     // 0x0488 (size: 0x8)
    class USkeletalMeshComponent* HandBone;                                           // 0x0490 (size: 0x8)
    class UBPC_LockOnSystem_C* BPC_LockOnSystem;                                      // 0x0498 (size: 0x8)
    class UStaticMeshComponent* LeftItemPositon_3;                                    // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* LeftItemPositon_2;                                    // 0x04A8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x04B0 (size: 0x8)
    class UStaticMeshComponent* LeftItemPositon_1;                                    // 0x04B8 (size: 0x8)
    class UStaticMeshComponent* RightItemPositon;                                     // 0x04C0 (size: 0x8)
    class USkeletalMeshComponent* FirstPersonMesh;                                    // 0x04C8 (size: 0x8)
    float CameraAnimation_Distance_05B0408D493659BD1FE6F5A5EB370C8D;                  // 0x04D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> CameraAnimation__Direction_05B0408D493659BD1FE6F5A5EB370C8D; // 0x04D4 (size: 0x1)
    class UTimelineComponent* CameraAnimation;                                        // 0x04D8 (size: 0x8)
    FVector ItemShake_ShakeTimeLine_EA9295D3497E5FCC1E3EE3B91B604507;                 // 0x04E0 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> ItemShake__Direction_EA9295D3497E5FCC1E3EE3B91B604507; // 0x04F8 (size: 0x1)
    class UTimelineComponent* ItemShake;                                              // 0x0500 (size: 0x8)
    class AActor* HaveActor_R;                                                        // 0x0508 (size: 0x8)
    double InteractLength;                                                            // 0x0510 (size: 0x8)
    class AActor* HaveActor_L;                                                        // 0x0518 (size: 0x8)
    class AActor* CurrentSelectActor;                                                 // 0x0520 (size: 0x8)
    double Release Force;                                                             // 0x0528 (size: 0x8)
    TArray<class AActor*> Enable Photo In Actors;                                     // 0x0530 (size: 0x10)
    bool IsInteract;                                                                  // 0x0540 (size: 0x1)
    class UUI_config_C* UIConfig;                                                     // 0x0548 (size: 0x8)
    double MouseSensitivity;                                                          // 0x0550 (size: 0x8)
    bool BeforeSelect;                                                                // 0x0558 (size: 0x1)
    class UBP_SaveGame_C* As BP Save Game;                                            // 0x0560 (size: 0x8)
    class AActor* Hit Actor;                                                          // 0x0568 (size: 0x8)
    class UWBP_CentorInteract_C* CentorInteract;                                      // 0x0570 (size: 0x8)
    class UWBP_Aim_C* W_Aim;                                                          // 0x0578 (size: 0x8)
    bool IsAim;                                                                       // 0x0580 (size: 0x1)
    TArray<class AActor*> EnableShotActors;                                           // 0x0588 (size: 0x10)
    TArray<class ABP_PhotoAnimation_C*> ShotedPhotos;                                 // 0x0598 (size: 0x10)
    bool InputLock;                                                                   // 0x05A8 (size: 0x1)
    bool FirstTeleport;                                                               // 0x05A9 (size: 0x1)
    bool Dead;                                                                        // 0x05AA (size: 0x1)
    bool Invincible;                                                                  // 0x05AB (size: 0x1)
    double DefaultSpeed;                                                              // 0x05B0 (size: 0x8)
    bool CinematicNow;                                                                // 0x05B8 (size: 0x1)
    FBP_FirstPersonCharacter_Main_CDeathCallEvent DeathCallEvent;                     // 0x05C0 (size: 0x10)
    void DeathCallEvent();
    double ShakeValue;                                                                // 0x05D0 (size: 0x8)
    FVector DfaultRightPosition;                                                      // 0x05D8 (size: 0x18)
    double ShakeRotationValue;                                                        // 0x05F0 (size: 0x8)
    double DashMultiply;                                                              // 0x05F8 (size: 0x8)
    bool DashInputNow;                                                                // 0x0600 (size: 0x1)
    FVector DfaultLeftPosition;                                                       // 0x0608 (size: 0x18)
    int32 FootStepChange;                                                             // 0x0620 (size: 0x4)
    int32 Difficulty;                                                                 // 0x0624 (size: 0x4)
    TArray<class AActor*> HaveActors_L;                                               // 0x0628 (size: 0x10)
    bool CameraUI_Visible;                                                            // 0x0638 (size: 0x1)
    double Health;                                                                    // 0x0640 (size: 0x8)
    double MaxHealthValue;                                                            // 0x0648 (size: 0x8)
    double ChangeBeforeHealth;                                                        // 0x0650 (size: 0x8)
    double MoveSpeedMultiply;                                                         // 0x0658 (size: 0x8)
    TArray<class AActor*> EnableShotActors_Before;                                    // 0x0660 (size: 0x10)
    double IsInViewCheckLate;                                                         // 0x0670 (size: 0x8)
    int32 RemainAvoid;                                                                // 0x0678 (size: 0x4)
    bool EnableMovement;                                                              // 0x067C (size: 0x1)
    bool IsTalkNow;                                                                   // 0x067D (size: 0x1)
    bool EnableInteract;                                                              // 0x067E (size: 0x1)
    double GlobalSpeed;                                                               // 0x0680 (size: 0x8)
    bool UIHideState;                                                                 // 0x0688 (size: 0x1)
    double AutoHealStartTime;                                                         // 0x0690 (size: 0x8)
    double AutoHealValue;                                                             // 0x0698 (size: 0x8)
    TMap<TEnumAsByte<EPhysicalSurface>, USoundBase*> FootStepAudios;                  // 0x06A0 (size: 0x50)
    bool ParryState;                                                                  // 0x06F0 (size: 0x1)
    bool GuardState;                                                                  // 0x06F1 (size: 0x1)
    FBP_FirstPersonCharacter_Main_CStanCallEvent StanCallEvent;                       // 0x06F8 (size: 0x10)
    void StanCallEvent(bool StanState);
    bool StanNow;                                                                     // 0x0708 (size: 0x1)
    bool IsDebugPlayer;                                                               // 0x0709 (size: 0x1)
    class UWBP_Debug_C* FPSWidget;                                                    // 0x0710 (size: 0x8)
    bool IsAvoid;                                                                     // 0x0718 (size: 0x1)
    double AvoidTime;                                                                 // 0x0720 (size: 0x8)
    class UBPGI_Main_C* Game Instance;                                                // 0x0728 (size: 0x8)
    FBP_FirstPersonCharacter_Main_CAvoid Avoid;                                       // 0x0730 (size: 0x10)
    void Avoid();
    FBP_FirstPersonCharacter_Main_CLockOn LockOn;                                     // 0x0740 (size: 0x10)
    void LockOn();
    double DefaultMaxWalkSpeed;                                                       // 0x0750 (size: 0x8)
    FBP_FirstPersonCharacter_Main_CDamagedEvent DamagedEvent;                         // 0x0758 (size: 0x10)
    void DamagedEvent(double DamageValue);
    bool IsParrySuccess;                                                              // 0x0768 (size: 0x1)
    FBP_FirstPersonCharacter_Main_CModeChange ModeChange;                             // 0x0770 (size: 0x10)
    void ModeChange();
    FBP_FirstPersonCharacter_Main_CInputShot InputShot;                               // 0x0780 (size: 0x10)
    void InputShot();
    double DefaultMoveMultiply;                                                       // 0x0790 (size: 0x8)
    bool DashNow;                                                                     // 0x0798 (size: 0x1)
    FTransform CameraTransform;                                                       // 0x07A0 (size: 0x60)
    class ABP_FirstPersonGameMode_V2_C*  First Person Game Mode;                      // 0x0800 (size: 0x8)
    class ABP_FirstPersonPlayerState_C* MyPlayerState;                                // 0x0808 (size: 0x8)
    class UAnimMontage* JumpAnimation;                                                // 0x0810 (size: 0x8)
    class UAnimMontage* LandedAnimation;                                              // 0x0818 (size: 0x8)
    FTransform Relative Camera Trasnform;                                             // 0x0820 (size: 0x60)
    double TPS_CameraDistance;                                                        // 0x0880 (size: 0x8)
    FName CurrentViewMode;                                                            // 0x0888 (size: 0x8)
    bool IsFreeLook;                                                                  // 0x0890 (size: 0x1)
    FBP_FirstPersonCharacter_Main_CBlockMovementModeChange BlockMovementModeChange;   // 0x0898 (size: 0x10)
    void BlockMovementModeChange();
    FBP_FirstPersonCharacter_Main_CLook Look;                                         // 0x08A8 (size: 0x10)
    void Look(FVector2D InputValue);
    bool AutoShowWidget;                                                              // 0x08B8 (size: 0x1)
    bool IsLook;                                                                      // 0x08B9 (size: 0x1)
    float DefaultJumpSpeed;                                                           // 0x08BC (size: 0x4)
    bool IsClimbingInput;                                                             // 0x08C0 (size: 0x1)
    bool IsClimbing;                                                                  // 0x08C1 (size: 0x1)
    double ClimbingSpeed;                                                             // 0x08C8 (size: 0x8)
    class USceneComponent* LINK_RotationTargetComp;                                   // 0x08D0 (size: 0x8)
    TArray<class ABP_FirstPersonCharacter_Main_C*> PlayerClass;                       // 0x08D8 (size: 0x10)
    bool ToggleClimb;                                                                 // 0x08E8 (size: 0x1)
    class UWidget* SpectateWidget;                                                    // 0x08F0 (size: 0x8)
    FTransform FirstMeshComponentTransform;                                           // 0x0900 (size: 0x60)
    FTransform SpringComponentTransform;                                              // 0x0960 (size: 0x60)
    bool IsSpectating;                                                                // 0x09C0 (size: 0x1)
    double ClimbingStamina;                                                           // 0x09C8 (size: 0x8)
    double ClimbingStartStamina;                                                      // 0x09D0 (size: 0x8)
    bool CanAvoid;                                                                    // 0x09D8 (size: 0x1)
    FVector CurrentMovementVelocity;                                                  // 0x09E0 (size: 0x18)
    TMap<class FName, class TSoftObjectPtr<UTexture2D>> CentorSoftTextures;           // 0x09F8 (size: 0x50)
    bool PlayFootStepAuto;                                                            // 0x0A48 (size: 0x1)
    double BoostSpeed;                                                                // 0x0A50 (size: 0x8)
    double MaxBoostSpeed;                                                             // 0x0A58 (size: 0x8)
    bool FallingCall;                                                                 // 0x0A60 (size: 0x1)
    bool JumpCall;                                                                    // 0x0A61 (size: 0x1)
    FVector AddForceVelocity(Mover);                                                  // 0x0A68 (size: 0x18)
    EMoverLaunchVelocityMode AddForceMode(Mover);                                     // 0x0A80 (size: 0x1)
    bool IsIceFoot;                                                                   // 0x0A81 (size: 0x1)
    double ClimbJumpCoolTime;                                                         // 0x0A88 (size: 0x8)
    bool IsCameraFreeRotation;                                                        // 0x0A90 (size: 0x1)
    FRotator CurrentControlRotation;                                                  // 0x0A98 (size: 0x18)
    FVector ClimbEndVelocity;                                                         // 0x0AB0 (size: 0x18)
    double ClimbingKeepTime;                                                          // 0x0AC8 (size: 0x8)
    class ABP_FirstPersonPlayerController_C* FirstPersonPlayerController;             // 0x0AD0 (size: 0x8)
    bool UseClimbing;                                                                 // 0x0AD8 (size: 0x1)
    class AController* MyController;                                                  // 0x0AE0 (size: 0x8)
    double ViewPitch;                                                                 // 0x0AE8 (size: 0x8)
    bool HeadRotationLock;                                                            // 0x0AF0 (size: 0x1)
    bool BodyTraceCameraRotation;                                                     // 0x0AF1 (size: 0x1)
    double DashStamina;                                                               // 0x0AF8 (size: 0x8)
    bool UseNearInteract;                                                             // 0x0B00 (size: 0x1)
    FVector PreRotateVector;                                                          // 0x0B08 (size: 0x18)
    bool KeepRotator;                                                                 // 0x0B20 (size: 0x1)
    bool Is Crouching Input;                                                          // 0x0B21 (size: 0x1)
    float CrouchingHeight;                                                            // 0x0B24 (size: 0x4)
    float DefaultCapsuleHeight;                                                       // 0x0B28 (size: 0x4)
    bool IsCrouching;                                                                 // 0x0B2C (size: 0x1)
    bool IsPossessed;                                                                 // 0x0B2D (size: 0x1)
    bool DontSendCameraPitch;                                                         // 0x0B2E (size: 0x1)

    void GetCharacterMoverComp(class UCharacterMoverComponent*& CharacterMoverComponent);
    bool GetStateValue(FName TargetName);
    void GetParentCharacter(class ABP_FirstPersonCharacter_Main_C*& FirstPersonCharacter);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void GetParryState(bool& State);
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void look spead(FText& slook pead);
    void OnRep_IsPossessed();
    void OnRep_ViewPitch();
    void ConvertTransfrom();
    void OnRep_MyController();
    bool IsCanQuickJump();
    void ClimbingEndForce();
    void GetMoveSpeedMultiply(double& MultiplyValue);
    void CanLook(bool& Rezult);
    void CanSlotChange(bool& Rezult);
    void SetCentorIconAndText(FText InputText, FName ImageKey, bool State, FVector2D OverrideImageSize);
    void UpdateCentorUI();
    void ResetAllStates();
    bool CanDash();
    bool IsLive();
    void ResetBodyAndCamera();
    bool IsCanJumpClimbing();
    bool IsCanClimbing();
    void SetGravity(bool bOverrideGravity, FVector GravityAcceleration);
    void GetMaxWalkSpeed(float& MaxSpeed);
    FMoverInputCmdContext OnProduceInputInBlueprint(float DeltaMs, FMoverInputCmdContext InputCmd);
    void SetJumpSpeed(float Jump Upwards Speed);
    void SetMovementMode(FName MovementName);
    void StopMovement();
    void SetWalkSpeed(double WalkSpeed);
    void SetAllActionState(bool State);
    void SetEnableMovement(bool State);
    void ClimbTrace(double ClimbHeight, FVector& HeightLocation, FVector& WallNormal, bool& Rezult);
    void SetRelativeLocation(class AActor* TargetActor, FRotator RelativeRotation, FVector DeltaLocation);
    void ItemSet(bool Silence, FCPP_GameItemData ItemData, FST_ItemCoreDatas CoreDatas, int32 SlotIndex);
    void AddSaveKey(int32 AddValue);
    void GetAvoidXY(double& ReturnValue_Y, double& ReturnValue_X);
    void DropLeftHandItems(bool FirePhoto);
    void HideCentorUI();
    void AttachToActor();
    void ItemArrayUpdate(bool& InPhoto);
    FTransform MakeShakeTransform(FVector InVec, FRotator InRot, FVector DefaultPositoin);
    void Movement(float X_Value, float Y_Value, double Z_Value);
    void Load and Setting Apply();
    void TalkEnd();
    void TalkStart(bool IsViewFree, bool IsMoveFree, bool IsInteractFree);
    void LimitPhotoCheck();
    void ReleaseLeftItem();
    void LeftDestroy();
    void ShowCentorUI();
    void HideCameraUI();
    void ShowCameraUI();
    void AllWidgetShow();
    void SetUIHideState(bool State);
    void AllWidgetHide();
    FVector2D CentorOffset(FVector2D InVec, FVector2D InVec2);
    void InteractSet(class AActor* InputObject, bool Silence);
    void AttachHandBoneActor(class AActor* Target, FRotator RelativeRotation, FVector RelativeTransform, bool SlideMode, class AActor*& ExportActor);
    void AttachHandActor(class USceneComponent* Mesh, class AActor* Target, FRotator RelativeRotation, FVector RelativeTransform, bool SlideMode, class AActor*& ExportActor);
    void ResetSelectOutLine(bool Reset);
    void ItemShake__FinishedFunc();
    void ItemShake__UpdateFunc();
    void ItemShake__FootStepTrac__EventFunc();
    void CameraAnimation__FinishedFunc();
    void CameraAnimation__UpdateFunc();
    void InpActEvt_IA_Interact_K2Node_EnhancedInputActionEvent_21(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Release_K2Node_EnhancedInputActionEvent_20(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_SlotChange_K2Node_EnhancedInputActionEvent_19(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Aim_K2Node_EnhancedInputActionEvent_18(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Aim_K2Node_EnhancedInputActionEvent_17(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Aim_Release_K2Node_EnhancedInputActionEvent_16(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_Ctrl_R_K2Node_InputDebugKeyEvent_8(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_IA_Shot_K2Node_EnhancedInputActionEvent_15(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Shot_K2Node_EnhancedInputActionEvent_14(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_Y_K2Node_InputDebugKeyEvent_7(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_13(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_12(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_11(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_10(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_Ctrl+Alt+Shift_R_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_IA_ModeChange_K2Node_EnhancedInputActionEvent_9(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_H_K2Node_InputDebugKeyEvent_6(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_N_K2Node_InputDebugKeyEvent_5(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_I_K2Node_InputDebugKeyEvent_4(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_T_K2Node_InputDebugKeyEvent_3(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_Ctrl+Alt+Shift_T_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Y_K2Node_InputDebugKeyEvent_2(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_Ctrl+Alt+Shift_Y_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Ctrl+Alt+Shift_U_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_U_K2Node_InputDebugKeyEvent_1(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_IA_Reload_K2Node_EnhancedInputActionEvent_8(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Reload_K2Node_EnhancedInputActionEvent_7(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_O_K2Node_InputDebugKeyEvent_0(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_IA_LockOn_K2Node_EnhancedInputActionEvent_6(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Jump_K2Node_EnhancedInputActionEvent_5(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Jump_K2Node_EnhancedInputActionEvent_4(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Move_Default_K2Node_EnhancedInputActionEvent_3(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Move_Default_K2Node_EnhancedInputActionEvent_2(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Move_Default_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Look_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void SlotChange(Server)(int32 SlotValue);
    void ReceiveBeginPlay();
    void InventoryUpdateSignal();
    void Interact(class AActor* Actor);
    void InteractItem();
    void SetMeshDatas(bool KeepScale);
    void DropItem(FVector Force Vector, FVector CentorPosition);
    void DeathEvent(TEnumAsByte<DeathType::Type> DeathType, class AActor* Bind Asset);
    void DeathUIShowAndAwait();
    void ItemShakeStart();
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void UpdateCoreDatas(const FST_ItemCoreDatas CoreDatas);
    void Interact(Server)(class AActor* TargetActor, int32 SlotIndex);
    void DeleteActor(class AActor* Actor);
    void AddActor(class AActor* Actor);
    void DamagedAnimation(double DamageValue, bool UnAvoidable);
    void ReleaseRightItem();
    void AutoHealStart();
    void SetIsCrouching(Server)(bool IsCrouching);
    void AutoHeal();
    void SetIsCrouching(bool IsCrouching);
    void Attack_AC_Remote(double TimeRange, FName ComponentName, double DamageMultiply, double StanMultiply);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void DashStateUpdate();
    void Combo(double TimeRange, FName ComboName);
    void CollisionReset();
    void Attack_AC(double TimeRange, FName AttackName, double DamageMultiply, bool MutipleHitPossible, double StanMultiply);
    void BndEvt__BP_FirstPersonCharacter_BPC_HPGaugeControl_K2Node_ComponentBoundEvent_0_ChangedValue__DelegateSignature(double UpdateValue);
    void HPBarSubAnimation();
    void BndEvt__BP_FirstPersonCharacter_BPC_HPGaugeControl_Sub_K2Node_ComponentBoundEvent_3_ChangedValue__DelegateSignature(double UpdateValue);
    void Item Enter(class ABP_ItemBase_C* SendItem);
    void BndEvt__BP_FirstPersonCharacter_BPC_StaminaGaugeControl_K2Node_ComponentBoundEvent_2_ChangedValue__DelegateSignature(double UpdateValue);
    void StaminaSubAnimation();
    void BndEvt__BP_FirstPersonCharacter_BPC_StaminaGauge_Sub_K2Node_ComponentBoundEvent_4_ChangedValue__DelegateSignature(double UpdateValue);
    void StaminaUpdate(double AddValue, double AnimationTime, double SubAnimationTime);
    void Stan(double StanTime);
    void StanEnd();
    void BndEvt__BP_FirstPersonCharacter_BPC_StaminaGaugeControl_K2Node_ComponentBoundEvent_5_ChangeAnimationEnd__DelegateSignature();
    void SetIceMode(bool IceState);
    void BndEvt__BP_FirstPersonCharacter_BPC_LongInputControlAvoidDash_K2Node_ComponentBoundEvent_7_LongPushStart__DelegateSignature();
    void BndEvt__BP_FirstPersonCharacter_BPC_LongInputControlAvoidDash_K2Node_ComponentBoundEvent_8_InputEnd__DelegateSignature(double PushTime);
    void InventoryStackUpdateSignal();
    void DashStateChage(bool State);
    void ShotEvent(bool State);
    void CameraPitch(double ViewPitch);
    void ReceiveTick(float DeltaSeconds);
    void AimEvent(bool State);
    void InteractGimmick(Server)(class UObject* ターゲット, class ABP_FirstPersonCharacter_Main_C* First Person);
    void InteractGimmick(Client)(class UObject* ターゲット, class ABP_FirstPersonCharacter_Main_C* First Person);
    void ServerCamaraTick();
    void SetMovementMode(Server)(TEnumAsByte<EMovementMode> NewMovementMode, bool StopMovement);
    void SetWarpTargetLocation(FName WarpTargetName, FVector TargetLocation);
    void ChangeViewMode(FName ModeName, bool Quick);
    void OnLanded_1(const FHitResult& Hit);
    void ClimbingStart();
    void SetFreeLook(bool State);
    void SetClimbingState(Server)(bool State);
    void SetSpectatingState(bool State);
    void StaminaDamage(double Value);
    void ClimbingForce();
    void ClimbingFinish(bool IsEndJump);
    void ClimbingEndJump();
    void ReplicateVelocity(FVector NewVel);
    void ChangeSpectatingPlayer(class ABP_FirstPersonCharacter_Main_C* Character);
    void OnSyncedPlayerState();
    void ClimbingValue(double DeltaTime);
    void AvoidEnd();
    void SetHealthValue(Server)(double TargetValue);
    void SetUpEndPlayerState();
    void ChangeInteractUITickEvent();
    void DamagedAnimation(Owner)(double DamageValue, bool UnAvoidable);
    void PlaySound(Owner)(class USoundBase* Sound);
    void ReplicateLaunch(FVector Launch Velocity);
    void Boost(double BoostValue, float Time);
    void BoostEnd();
    void AddForce(Mover)(FVector Velocity, EMoverLaunchVelocityMode Mode);
    void ShortageStamina();
    void SetCurrentItem(int32 SlotIndex, FCPP_GameItemData ItemData, FST_ItemCoreDatas CoreData);
    void ReceiveRestarted();
    void ReceivePossessed(class AController* NewController);
    void PlayerControllerSetup();
    void BeginSetup();
    void SetCameraFreeRotation(bool Value);
    void SetCameraFreeRotation(Server)(bool Value);
    void ChangeViewEnd();
    void BndEvt__BP_FirstPersonCharacter_BPC_LongInputControlAvoidDash_K2Node_ComponentBoundEvent_6_SinglePush__DelegateSignature();
    void Recharge();
    void ViewResetCheck();
    void ExecuteUbergraph_BP_FirstPersonCharacter_Main(int32 EntryPoint);
    void Look__DelegateSignature(FVector2D InputValue);
    void BlockMovementModeChange__DelegateSignature();
    void InputShot__DelegateSignature();
    void ModeChange__DelegateSignature();
    void DamagedEvent__DelegateSignature(double DamageValue);
    void LockOn__DelegateSignature();
    void Avoid__DelegateSignature();
    void StanCallEvent__DelegateSignature(bool StanState);
    void DeathCallEvent__DelegateSignature();
}; // Size: 0xB2F

#endif
