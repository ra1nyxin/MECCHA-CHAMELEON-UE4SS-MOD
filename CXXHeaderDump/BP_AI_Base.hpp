#ifndef UE4SS_SDK_BP_AI_Base_HPP
#define UE4SS_SDK_BP_AI_Base_HPP

class ABP_AI_Base_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0650 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0658 (size: 0x8)
    class UBillboardComponent* CentorPosition;                                        // 0x0660 (size: 0x8)
    class UBillboardComponent* SubPosition;                                           // 0x0668 (size: 0x8)
    class USphereComponent* AttackArea;                                               // 0x0670 (size: 0x8)
    FTransform DefaultTransform;                                                      // 0x0680 (size: 0x60)
    bool NotShot;                                                                     // 0x06E0 (size: 0x1)
    double DefaultHeight;                                                             // 0x06E8 (size: 0x8)
    double NormalizeScale;                                                            // 0x06F0 (size: 0x8)
    double TimeDiff;                                                                  // 0x06F8 (size: 0x8)
    TSubclassOf<class UABP_Penguin_C> As ABP Penguin;                                 // 0x0700 (size: 0x8)
    bool Trace;                                                                       // 0x0708 (size: 0x1)
    class ABP_FirstPersonCharacter_Main_C* As BP First Person Character;              // 0x0710 (size: 0x8)
    FTransform FirstTransform;                                                        // 0x0720 (size: 0x60)
    bool AnimationNow;                                                                // 0x0780 (size: 0x1)
    bool StanNow;                                                                     // 0x0781 (size: 0x1)
    bool EnableParry;                                                                 // 0x0782 (size: 0x1)
    bool BarrierNow;                                                                  // 0x0783 (size: 0x1)
    bool AvoidanceCoolDown;                                                           // 0x0784 (size: 0x1)
    double DashSpeed;                                                                 // 0x0788 (size: 0x8)
    double DefaultDashSpeed;                                                          // 0x0790 (size: 0x8)
    TMap<int32, double> SppedMultiply_Difficulty;                                     // 0x0798 (size: 0x50)
    double DefautAcceleration;                                                        // 0x07E8 (size: 0x8)

    void IsAttackNow(bool& State);
    void IsBattleMode(bool& bool);
    void GetAvoidanceRotation(FRotator& Rotation);
    void IsAiming(bool& IsAiming, int32& SuccessCount);
    void GetCopyClass(class UStaticMeshComponent* CentorComponent, TSubclassOf<class ABP_CopyActorBase_C>& Class, double& Scale, FVector& DefaultScale);
    void GetCentorPosition(TArray<FVector>& CentorPosition);
    void GetActorInfo(FTransform& DefaultTransform, bool& Not In Shot, FVector& CentorPosition, bool& IsPenguin, TEnumAsByte<ENUM_ActorType::Type>& ActorType, bool& NonInPhoto);
    void RestartAI();
    void SoptAI();
    void OnNotifyEnd_0618DEBD4A5929F3CACAEAA199FA94CD(FName NotifyName);
    void OnNotifyBegin_0618DEBD4A5929F3CACAEAA199FA94CD(FName NotifyName);
    void OnInterrupted_0618DEBD4A5929F3CACAEAA199FA94CD(FName NotifyName);
    void OnBlendOut_0618DEBD4A5929F3CACAEAA199FA94CD(FName NotifyName);
    void OnCompleted_0618DEBD4A5929F3CACAEAA199FA94CD(FName NotifyName);
    void OnNotifyEnd_2220D7D146417860FF48A29DEC6C51FA(FName NotifyName);
    void OnNotifyBegin_2220D7D146417860FF48A29DEC6C51FA(FName NotifyName);
    void OnInterrupted_2220D7D146417860FF48A29DEC6C51FA(FName NotifyName);
    void OnBlendOut_2220D7D146417860FF48A29DEC6C51FA(FName NotifyName);
    void OnCompleted_2220D7D146417860FF48A29DEC6C51FA(FName NotifyName);
    void OnNotifyEnd_7F7A9BDF48B2C2D2332A36937C7AF329(FName NotifyName);
    void OnNotifyBegin_7F7A9BDF48B2C2D2332A36937C7AF329(FName NotifyName);
    void OnInterrupted_7F7A9BDF48B2C2D2332A36937C7AF329(FName NotifyName);
    void OnBlendOut_7F7A9BDF48B2C2D2332A36937C7AF329(FName NotifyName);
    void OnCompleted_7F7A9BDF48B2C2D2332A36937C7AF329(FName NotifyName);
    void OnNotifyEnd_D66390244B1D26971A66C6879A2B7B30(FName NotifyName);
    void OnNotifyBegin_D66390244B1D26971A66C6879A2B7B30(FName NotifyName);
    void OnInterrupted_D66390244B1D26971A66C6879A2B7B30(FName NotifyName);
    void OnBlendOut_D66390244B1D26971A66C6879A2B7B30(FName NotifyName);
    void OnCompleted_D66390244B1D26971A66C6879A2B7B30(FName NotifyName);
    void ReceiveBeginPlay();
    void SetActorInfo(FVector ToPosition, class USceneComponent* Comp);
    void InAngleOfView(bool InState, double DeltaTime, TEnumAsByte<ENUM_CameraMode::Type> CameraMode);
    void Delete();
    void View In Out Function(int32 Stencil Value);
    void Reverse(FTransform NewPosition, FVector HitNormal);
    void Fire();
    void Fire End();
    void ReceiveDestroyed();
    void Attack();
    void Fix();
    void SetStrafing(bool IsStrafing, TEnumAsByte<EN_StrafingDirection::Type> Direction);
    void StanEvent();
    void PlayPenguinVoice();
    void CoolDownEnd();
    void PlayAvoidanceAnimation();
    void Set Difficulty(int32 Value);
    void ExecuteUbergraph_BP_AI_Base(int32 EntryPoint);
}; // Size: 0x7F0

#endif
