#ifndef UE4SS_SDK_Enemy_AI_Base_HPP
#define UE4SS_SDK_Enemy_AI_Base_HPP

class AEnemy_AI_Base_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    class UAIPerceptionComponent* AIPerception;                                       // 0x0658 (size: 0x8)
    class UStaticMeshComponent* BoundBox;                                             // 0x0660 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_SuperArmorGaugeControl;             // 0x0668 (size: 0x8)
    class UBPC_CustomFocus_C* BPC_CustomFocus;                                        // 0x0670 (size: 0x8)
    class UDeviceComponent_C* DeviceComponent;                                        // 0x0678 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0680 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_StaminaGaugeControlSub;             // 0x0688 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_StaminaGaugeControl;                // 0x0690 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_HPGaugeControlSub;                  // 0x0698 (size: 0x8)
    class UBPC_CharacterStatusGaugeControl_C* BPC_HPGaugeControl;                     // 0x06A0 (size: 0x8)
    class UBPC_GetRayPointControl_C* BPC_GetRayPointControl;                          // 0x06A8 (size: 0x8)
    class UBPC_ForceMoveCharacter_C* BPC_ForceMoveCharacter;                          // 0x06B0 (size: 0x8)
    class UBPC_MovementModeControl_C* BPC_MovementModeControl;                        // 0x06B8 (size: 0x8)
    class UMotionWarpingComponent* MotionWarping;                                     // 0x06C0 (size: 0x8)
    class UBPC_AIMoveControl_C* BPC_AIMoveControl;                                    // 0x06C8 (size: 0x8)
    class UBPC_AttackCollisionControl_C* BPC_AttackCollisionControl;                  // 0x06D0 (size: 0x8)
    class UStaticMeshComponent* WireEndPosition;                                      // 0x06D8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x06E0 (size: 0x8)
    class USphereComponent* AttackArea;                                               // 0x06E8 (size: 0x8)
    float DeathOverride_OverrideTime_8A1E254D46002C9BD4AA90B66300852E;                // 0x06F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DeathOverride__Direction_8A1E254D46002C9BD4AA90B66300852E; // 0x06F4 (size: 0x1)
    class UTimelineComponent* DeathOverride;                                          // 0x06F8 (size: 0x8)
    FText EnemyName;                                                                  // 0x0700 (size: 0x10)
    TEnumAsByte<EN_EnemyType::Type> EnemyType;                                        // 0x0710 (size: 0x1)
    FTransform DefaultTransform;                                                      // 0x0720 (size: 0x60)
    bool NotShot;                                                                     // 0x0780 (size: 0x1)
    double DefaultHeight;                                                             // 0x0788 (size: 0x8)
    double NormalizeScale;                                                            // 0x0790 (size: 0x8)
    double TimeDiff;                                                                  // 0x0798 (size: 0x8)
    TSubclassOf<class UABP_Penguin_C> As ABP Penguin;                                 // 0x07A0 (size: 0x8)
    bool BattleMode;                                                                  // 0x07A8 (size: 0x1)
    class ABP_FirstPersonCharacter_Main_C* As BP First Person Character;              // 0x07B0 (size: 0x8)
    FTransform FirstTransform;                                                        // 0x07C0 (size: 0x60)
    bool AnimationNow;                                                                // 0x0820 (size: 0x1)
    bool AvoidanceCoolDown;                                                           // 0x0821 (size: 0x1)
    double DashSpeed;                                                                 // 0x0828 (size: 0x8)
    double DefaultDashSpeed;                                                          // 0x0830 (size: 0x8)
    TMap<int32, double> SppedMultiply_Difficulty;                                     // 0x0838 (size: 0x50)
    double DefautAcceleration;                                                        // 0x0888 (size: 0x8)
    bool Can Strafing;                                                                // 0x0890 (size: 0x1)
    double FaintValue;                                                                // 0x0898 (size: 0x8)
    double MaxFaintValue;                                                             // 0x08A0 (size: 0x8)
    bool IsDown;                                                                      // 0x08A8 (size: 0x1)
    FName Body Name;                                                                  // 0x08AC (size: 0x8)
    bool IsFinisher;                                                                  // 0x08B4 (size: 0x1)
    FEnemy_AI_Base_CAttackEndEvent AttackEndEvent;                                    // 0x08B8 (size: 0x10)
    void AttackEndEvent();
    TArray<class UMaterialInstance*> DeathOverrideMaterials;                          // 0x08C8 (size: 0x10)
    double Health;                                                                    // 0x08D8 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> PastaDynamicMaterials;                    // 0x08E0 (size: 0x10)
    int32 TeamIndex;                                                                  // 0x08F0 (size: 0x4)
    bool IsStrafing;                                                                  // 0x08F4 (size: 0x1)
    double ReciveDamageValue;                                                         // 0x08F8 (size: 0x8)
    class UWBP_LockOn_C* LockOnUI;                                                    // 0x0900 (size: 0x8)
    double MaxHealth;                                                                 // 0x0908 (size: 0x8)
    double Add Multiply;                                                              // 0x0910 (size: 0x8)
    FEnemy_AI_Base_CThrowEvent ThrowEvent;                                            // 0x0918 (size: 0x10)
    void ThrowEvent(TEnumAsByte<EN_ThrowState::Type> ThrowState);
    bool HeadTrance;                                                                  // 0x0928 (size: 0x1)
    FEnemy_AI_Base_CAttackCancel AttackCancel;                                        // 0x0930 (size: 0x10)
    void AttackCancel();
    bool DamageActive;                                                                // 0x0940 (size: 0x1)
    FEnemy_AI_Base_CDamagedEvent DamagedEvent;                                        // 0x0948 (size: 0x10)
    void DamagedEvent(TEnumAsByte<EN_DamageType::Type> DamageType);
    double BaseRadius;                                                                // 0x0958 (size: 0x8)
    bool BeforeLockOnVisible;                                                         // 0x0960 (size: 0x1)
    int32 BeforeValue;                                                                // 0x0964 (size: 0x4)
    class UMaterialInstanceDynamic* ScratchMaterial;                                  // 0x0968 (size: 0x8)
    FVector BloodSize;                                                                // 0x0970 (size: 0x18)
    int32 MaxBloodCount;                                                              // 0x0988 (size: 0x4)
    double RelativeScale;                                                             // 0x0990 (size: 0x8)
    bool VisibleBodyCollisions;                                                       // 0x0998 (size: 0x1)
    double BaseDamageValue;                                                           // 0x09A0 (size: 0x8)
    double DamageMultiply;                                                            // 0x09A8 (size: 0x8)
    bool IsStan;                                                                      // 0x09B0 (size: 0x1)
    class UAnimMontage* ParryStanAnimation;                                           // 0x09B8 (size: 0x8)
    float NearAttackCooldown;                                                         // 0x09C0 (size: 0x4)
    class UAnimMontage* DefaultStanAnimation;                                         // 0x09C8 (size: 0x8)
    class UAnimMontage* SuperStanAnimation;                                           // 0x09D0 (size: 0x8)
    double ParryStanTime;                                                             // 0x09D8 (size: 0x8)
    double DefaultStanTime;                                                           // 0x09E0 (size: 0x8)
    bool CanOverrideStan;                                                             // 0x09E8 (size: 0x1)
    float WarpTick;                                                                   // 0x09EC (size: 0x4)
    double WarpSpeed;                                                                 // 0x09F0 (size: 0x8)
    class UWidgetComponent* LockOnWidget;                                             // 0x09F8 (size: 0x8)
    class UDataTable* AttackDatas;                                                    // 0x0A00 (size: 0x8)
    TArray<FName> AttackNames;                                                        // 0x0A08 (size: 0x10)
    FST_AttackDatas NowAttackDatas;                                                   // 0x0A18 (size: 0x50)
    bool IsDeath;                                                                     // 0x0A68 (size: 0x1)
    double SuperStanTime;                                                             // 0x0A70 (size: 0x8)
    class UWBP_HealthAndStaminaBar_C* HealthAndStaminaWidget;                         // 0x0A78 (size: 0x8)
    double DefaultSuperArmor;                                                         // 0x0A80 (size: 0x8)
    double ArmorHealTime;                                                             // 0x0A88 (size: 0x8)
    double ParryStaminaCallValueRaito;                                                // 0x0A90 (size: 0x8)
    FEnemy_AI_Base_CParry Parry;                                                      // 0x0A98 (size: 0x10)
    void Parry();
    FEnemy_AI_Base_CSuperStan SuperStan;                                              // 0x0AA8 (size: 0x10)
    void SuperStan();
    FEnemy_AI_Base_CDeath Death;                                                      // 0x0AB8 (size: 0x10)
    void Death();
    double ReciveDamageMultiply;                                                      // 0x0AC8 (size: 0x8)
    double ReciveStaminaMultiply;                                                     // 0x0AD0 (size: 0x8)
    double StunnedDamageMultiply;                                                     // 0x0AD8 (size: 0x8)
    double MaxStamina;                                                                // 0x0AE0 (size: 0x8)
    class UDataTable* AttackChangeDatas;                                              // 0x0AE8 (size: 0x8)
    double PhaseChangeHealth;                                                         // 0x0AF0 (size: 0x8)
    TArray<FName> UsedAttackDatas;                                                    // 0x0AF8 (size: 0x10)
    int32 MaxDuplicateCount;                                                          // 0x0B08 (size: 0x4)
    bool IsInvincible;                                                                // 0x0B0C (size: 0x1)
    int32 PhaseChangeCount;                                                           // 0x0B10 (size: 0x4)
    TArray<FName> CustomAttackNames;                                                  // 0x0B18 (size: 0x10)
    bool ForceBeginStop;                                                              // 0x0B28 (size: 0x1)
    int32 CurrentDiffculty;                                                           // 0x0B2C (size: 0x4)
    bool BeforeBarVisibleState;                                                       // 0x0B30 (size: 0x1)

    void GetParryState(bool& State);
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void IsAttackNow(bool& State);
    void IsBattleMode(bool& bool);
    void GetAvoidanceRotation(FRotator& Rotation);
    void IsAiming(bool& IsAiming, int32& SuccessCount);
    void GetCopyClass(class UStaticMeshComponent* CentorComponent, TSubclassOf<class ABP_CopyActorBase_C>& Class, double& Scale, FVector& DefaultScale);
    void GetCentorPosition(TArray<FVector>& CentorPosition);
    void GetActorInfo(FTransform& DefaultTransform, bool& Not In Shot, FVector& CentorPosition, bool& IsPenguin, TEnumAsByte<ENUM_ActorType::Type>& ActorType, bool& NonInPhoto);
    void AttackNamesControl(FName AttackName);
    void PhaseChangeCheck(FString Comment, bool& PhaseChange);
    bool IsPhaseChangeWait();
    void StaminaWearDown(double WearDownValue, bool SlowDamage, bool IsParry);
    void DestroyLockOnSystems();
    void AttackDataTableSetup();
    void SetUpBlackBoardValue();
    void StrafingStateChange(bool IsStrafing, TEnumAsByte<EN_StrafingDirection::Type> Direction);
    void AIState(bool State);
    void RestartAI();
    void StopAI();
    void UserConstructionScript();
    void DeathOverride__FinishedFunc();
    void DeathOverride__UpdateFunc();
    void OnNotifyEnd_F892FC25472E66E809047FB1FBA2DF9B(FName NotifyName);
    void OnNotifyBegin_F892FC25472E66E809047FB1FBA2DF9B(FName NotifyName);
    void OnInterrupted_F892FC25472E66E809047FB1FBA2DF9B(FName NotifyName);
    void OnBlendOut_F892FC25472E66E809047FB1FBA2DF9B(FName NotifyName);
    void OnCompleted_F892FC25472E66E809047FB1FBA2DF9B(FName NotifyName);
    void OnNotifyEnd_4A4808B74EBDDEC087B4E1937DA87E3F(FName NotifyName);
    void OnNotifyBegin_4A4808B74EBDDEC087B4E1937DA87E3F(FName NotifyName);
    void OnInterrupted_4A4808B74EBDDEC087B4E1937DA87E3F(FName NotifyName);
    void OnBlendOut_4A4808B74EBDDEC087B4E1937DA87E3F(FName NotifyName);
    void OnCompleted_4A4808B74EBDDEC087B4E1937DA87E3F(FName NotifyName);
    void OnNotifyEnd_67E598DC4C1E9C3A96AB859FA2C2113E(FName NotifyName);
    void OnNotifyBegin_67E598DC4C1E9C3A96AB859FA2C2113E(FName NotifyName);
    void OnInterrupted_67E598DC4C1E9C3A96AB859FA2C2113E(FName NotifyName);
    void OnBlendOut_67E598DC4C1E9C3A96AB859FA2C2113E(FName NotifyName);
    void OnCompleted_67E598DC4C1E9C3A96AB859FA2C2113E(FName NotifyName);
    void OnNotifyEnd_78247E4C4C86921A63612294DED648BA(FName NotifyName);
    void OnNotifyBegin_78247E4C4C86921A63612294DED648BA(FName NotifyName);
    void OnInterrupted_78247E4C4C86921A63612294DED648BA(FName NotifyName);
    void OnBlendOut_78247E4C4C86921A63612294DED648BA(FName NotifyName);
    void OnCompleted_78247E4C4C86921A63612294DED648BA(FName NotifyName);
    void OnNotifyEnd_C770FE1A4556A10A1DF7C19398AB17C4(FName NotifyName);
    void OnNotifyBegin_C770FE1A4556A10A1DF7C19398AB17C4(FName NotifyName);
    void OnInterrupted_C770FE1A4556A10A1DF7C19398AB17C4(FName NotifyName);
    void OnBlendOut_C770FE1A4556A10A1DF7C19398AB17C4(FName NotifyName);
    void OnCompleted_C770FE1A4556A10A1DF7C19398AB17C4(FName NotifyName);
    void OnNotifyEnd_DE3366654C5E4918D44FCBA3E1FFFDE1(FName NotifyName);
    void OnNotifyBegin_DE3366654C5E4918D44FCBA3E1FFFDE1(FName NotifyName);
    void OnInterrupted_DE3366654C5E4918D44FCBA3E1FFFDE1(FName NotifyName);
    void OnBlendOut_DE3366654C5E4918D44FCBA3E1FFFDE1(FName NotifyName);
    void OnCompleted_DE3366654C5E4918D44FCBA3E1FFFDE1(FName NotifyName);
    void OnNotifyEnd_31AC38724CA60DE73382B0A8157A6526(FName NotifyName);
    void OnNotifyBegin_31AC38724CA60DE73382B0A8157A6526(FName NotifyName);
    void OnInterrupted_31AC38724CA60DE73382B0A8157A6526(FName NotifyName);
    void OnBlendOut_31AC38724CA60DE73382B0A8157A6526(FName NotifyName);
    void OnCompleted_31AC38724CA60DE73382B0A8157A6526(FName NotifyName);
    void OnNotifyEnd_1DFAA9FF4C0513B576788988F3746C0F(FName NotifyName);
    void OnNotifyBegin_1DFAA9FF4C0513B576788988F3746C0F(FName NotifyName);
    void OnInterrupted_1DFAA9FF4C0513B576788988F3746C0F(FName NotifyName);
    void OnBlendOut_1DFAA9FF4C0513B576788988F3746C0F(FName NotifyName);
    void OnCompleted_1DFAA9FF4C0513B576788988F3746C0F(FName NotifyName);
    void OnNotifyEnd_BD4416DA4F8495B4F0081A86FA9C4192(FName NotifyName);
    void OnNotifyBegin_BD4416DA4F8495B4F0081A86FA9C4192(FName NotifyName);
    void OnInterrupted_BD4416DA4F8495B4F0081A86FA9C4192(FName NotifyName);
    void OnBlendOut_BD4416DA4F8495B4F0081A86FA9C4192(FName NotifyName);
    void OnCompleted_BD4416DA4F8495B4F0081A86FA9C4192(FName NotifyName);
    void Combo(double TimeRange, FName ComboName);
    void ThrowState(TEnumAsByte<EN_ThrowState::Type> ThrowState);
    void AttackNotify(int32 ID);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void Reverse(FTransform NewPosition, FVector HitNormal);
    void Delete();
    void ReceiveBeginPlay();
    void SetActorInfo(FVector ToPosition, class USceneComponent* Comp);
    void View In Out Function(int32 Stencil Value);
    void ReceiveDestroyed();
    void Fix();
    void CoolDownEnd();
    void PlayAvoidanceAnimation();
    void Set Difficulty(int32 Value);
    void Change Movement(bool Value);
    void DownTime();
    void Damage Effect(double DamageRatio);
    void Avoid(bool State);
    void DeathEvent();
    void SetStrafing(bool IsStrafing, TEnumAsByte<EN_StrafingDirection::Type> Direction);
    void InAngleOfView(bool InState, double DeltaTime, TEnumAsByte<ENUM_CameraMode::Type> CameraMode);
    void AttackReset();
    void DamageState(bool Active);
    void BndEvt__Enemy_AI_Base_CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void DamagedRedBody();
    void Attack_AC(double TimeRange, FName AttackName, double DamageMultiply, bool MutipleHitPossible, double StanMultiply);
    void BndEvt__BP_Enemy_AI_Hamburger_Base_BPC_AttackCollisionControl_K2Node_ComponentBoundEvent_1_HitEvent__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Stan(double Time, TEnumAsByte<EN_StanType::Type> StanType);
    void UnStan();
    void UpdateWarpPoint();
    void UserDatasAttackControl(FST_AttackDatas AttackDatas, FName AttackName);
    void BndEvt__Enemy_AI_Base_BPC_AIMoveControl_K2Node_ComponentBoundEvent_2_MoveEndSignal__DelegateSignature(TEnumAsByte<EPathFollowingResult::Type> OutPutRezult, FName AttackName);
    void AnimComboBlock();
    void Attack(TEnumAsByte<AttackType::Type> AttackType);
    void DamageCall(double AddValue);
    void HealthSubAnimation();
    void BndEvt__Enemy_AI_Base_BPC_HealthGaugeControl_K2Node_ComponentBoundEvent_3_ChangedValue__DelegateSignature(double UpdateValue);
    void BndEvt__Enemy_AI_Base_BPC_HealthGaugeControlSub_K2Node_ComponentBoundEvent_4_ChangedValue__DelegateSignature(double UpdateValue);
    void StaminaCall(double AddValue);
    void StaminSubGaugeStart();
    void BndEvt__Enemy_AI_Base_BPC_StaminaGaugeControl_K2Node_ComponentBoundEvent_9_ChangedValue__DelegateSignature(double UpdateValue);
    void BndEvt__Enemy_AI_Base_BPC_StaminaGaugeControlSub_K2Node_ComponentBoundEvent_10_ChangedValue__DelegateSignature(double UpdateValue);
    void BndEvt__Enemy_AI_Base_BPC_StaminaGaugeControl_K2Node_ComponentBoundEvent_3_ChangeAnimationEnd__DelegateSignature();
    void BndEvt__Enemy_AI_Base_DeviceComponent_K2Node_ComponentBoundEvent_4_OnSignal__DelegateSignature(FST_EventValue SignalValue);
    void StaminaDamage(double Value);
    void SuperArmorCall(double AddValue);
    void ViewCheck();
    void PhaseChange();
    void UnStanTimerReset();
    void Attack_AC_Remote(double TimeRange, FName ComponentName, double DamageMultiply, double StanMultiply);
    void CollisionReset();
    void CustomAttack(FName AttackName);
    void BndEvt__Enemy_AI_Base_AIPerception_K2Node_ComponentBoundEvent_7_PerceptionUpdatedDelegate__DelegateSignature(const TArray<class AActor*>& UpdatedActors);
    void BossBarReset();
    void ExecuteUbergraph_Enemy_AI_Base(int32 EntryPoint);
    void Death__DelegateSignature();
    void SuperStan__DelegateSignature();
    void Parry__DelegateSignature();
    void DamagedEvent__DelegateSignature(TEnumAsByte<EN_DamageType::Type> DamageType);
    void AttackCancel__DelegateSignature();
    void ThrowEvent__DelegateSignature(TEnumAsByte<EN_ThrowState::Type> ThrowState);
    void AttackEndEvent__DelegateSignature();
}; // Size: 0xB31

#endif
