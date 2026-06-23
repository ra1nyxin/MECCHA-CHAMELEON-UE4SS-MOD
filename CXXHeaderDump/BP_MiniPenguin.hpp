#ifndef UE4SS_SDK_BP_MiniPenguin_HPP
#define UE4SS_SDK_BP_MiniPenguin_HPP

class ABP_MiniPenguin_C : public AMoverExamplesCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UBPC_LinkCharacterCustomControl_C* BPC_LinkCharacterCustomControl;          // 0x03F0 (size: 0x8)
    class UWidgetComponent* Weight;                                                   // 0x03F8 (size: 0x8)
    class ULBPC_ComponentDistanceVisualUpdate_C* LBPC_ComponentDistanceVisualUpdate1; // 0x0400 (size: 0x8)
    class UWidgetComponent* Nameplate;                                                // 0x0408 (size: 0x8)
    class ULBPC_ComponentDistanceVisualUpdate_C* LBPC_ComponentDistanceVisualUpdate;  // 0x0410 (size: 0x8)
    class UNetworkPhysicsSettingsComponent* NetworkPhysicsSettings;                   // 0x0418 (size: 0x8)
    class UNavMoverComponent* NavMover;                                               // 0x0420 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce_2Leg_C* CPP_AC_CustomPhysicsForce_2Leg;          // 0x0428 (size: 0x8)
    class UBPC_ReplicateAnimBPState_C* BPC_ReplicateAnimBPState;                      // 0x0430 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0438 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0440 (size: 0x8)
    class UExtendedPhysicsCharacterMoverComponent_C* ExtendedPhysicsCharacterMoverComponent; // 0x0448 (size: 0x8)
    bool NavigateNow;                                                                 // 0x0450 (size: 0x1)
    FBP_MiniPenguin_COnNavigateEnd OnNavigateEnd;                                     // 0x0458 (size: 0x10)
    void OnNavigateEnd();
    double CurrentWeight;                                                             // 0x0468 (size: 0x8)
    class ABP_LinkGoalPosition_C* CurrentRespawnPoint;                                // 0x0470 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* OwnerCharacter;                            // 0x0478 (size: 0x8)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void OnRep_CurrentWeight();
    void SetWeight(double Weight);
    void IsJumpCheck(bool& Rezult);
    void OnFail_2E03163741D00CB8BA20B8B51BD49E43(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_2E03163741D00CB8BA20B8B51BD49E43(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void GoToPosition(FVector Destination);
    void Jump(FVector Destination);
    void JumpLoop();
    void NavigateEndEvent();
    void Respawn(FVector Location);
    void StopMove();
    void ExecuteUbergraph_BP_MiniPenguin(int32 EntryPoint);
    void OnNavigateEnd__DelegateSignature();
}; // Size: 0x480

#endif
