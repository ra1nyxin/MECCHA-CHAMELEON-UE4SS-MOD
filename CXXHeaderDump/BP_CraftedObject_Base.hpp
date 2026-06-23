#ifndef UE4SS_SDK_BP_CraftedObject_Base_HPP
#define UE4SS_SDK_BP_CraftedObject_Base_HPP

class ABP_CraftedObject_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBPC_PhysicsNetDormancyControl_C* BPC_PhysicsNetDormancyControl;            // 0x02B0 (size: 0x8)
    class UBPC_CollisionSound_C* BPC_CollisionSound;                                  // 0x02B8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02C0 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce* CPP_AC_CustomPhysicsForce;                      // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    FST_ItemCoreDatas Core Datas;                                                     // 0x02D8 (size: 0x70)
    class ABP_FirstPersonCharacter_LINK_C* ForceGrabTarget;                           // 0x0348 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void GetParentCharacter(class ABP_FirstPersonCharacter_Main_C*& FirstPersonCharacter);
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    void OnRep_ForceGrabTarget();
    void DropItem(FVector Force Vector, FVector CentorPosition);
    void SetMeshDatas(bool KeepScale);
    void InteractItem();
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void UpdateCoreDatas(const FST_ItemCoreDatas CoreDatas);
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void ReceiveBeginPlay();
    void ForceGrab();
    void SetForceGrabTarget(class ABP_FirstPersonCharacter_LINK_C* ForceGrabTarget);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_CraftedObject_Base(int32 EntryPoint);
}; // Size: 0x350

#endif
