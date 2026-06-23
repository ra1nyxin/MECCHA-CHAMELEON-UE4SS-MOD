#ifndef UE4SS_SDK_BP_DamageTool_Base_V2_HPP
#define UE4SS_SDK_BP_DamageTool_Base_V2_HPP

class ABP_DamageTool_Base_V2_C : public ABP_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UBPC_LongInputControl_C* BPC_LongInputControl;                              // 0x0440 (size: 0x8)
    class UBPC_ComboControl_C* BPC_ComboControl;                                      // 0x0448 (size: 0x8)
    double NowDamageMultiply;                                                         // 0x0450 (size: 0x8)
    double NowStanDamageMultiply;                                                     // 0x0458 (size: 0x8)
    bool DamageEnableState;                                                           // 0x0460 (size: 0x1)
    FName Damage Name;                                                                // 0x0464 (size: 0x8)
    double Damage Value;                                                              // 0x0470 (size: 0x8)
    TSet<AActor*> HitActors;                                                          // 0x0478 (size: 0x50)
    TArray<class UPrimitiveComponent*> CollisionPrimitives;                           // 0x04C8 (size: 0x10)
    class UAnimMontage* DefaultMontage;                                               // 0x04D8 (size: 0x8)
    class UBPC_ComboControl_C* LocalComboControl;                                     // 0x04E0 (size: 0x8)
    class ABP_ReplicateEventController_C* ReplicateEventController;                   // 0x04E8 (size: 0x8)
    double ShotRange;                                                                 // 0x04F0 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void ApplyDamage(class UObject* OtherActor, FHitResult Sweep Result);
    void OnNotifyEnd_09216A5F450F81DD4AA575987ACD9FD6(FName NotifyName);
    void OnNotifyBegin_09216A5F450F81DD4AA575987ACD9FD6(FName NotifyName);
    void OnInterrupted_09216A5F450F81DD4AA575987ACD9FD6(FName NotifyName);
    void OnBlendOut_09216A5F450F81DD4AA575987ACD9FD6(FName NotifyName);
    void OnCompleted_09216A5F450F81DD4AA575987ACD9FD6(FName NotifyName);
    void OnNotifyEnd_F05B6598419A998A4627419382E250E0(FName NotifyName);
    void OnNotifyBegin_F05B6598419A998A4627419382E250E0(FName NotifyName);
    void OnInterrupted_F05B6598419A998A4627419382E250E0(FName NotifyName);
    void OnBlendOut_F05B6598419A998A4627419382E250E0(FName NotifyName);
    void OnCompleted_F05B6598419A998A4627419382E250E0(FName NotifyName);
    void CollisionReset();
    void Attack_AC(double TimeRange, FName AttackName, double DamageMultiply, bool MutipleHitPossible, double StanMultiply);
    void Combo(double TimeRange, FName ComboName);
    void Attack_AC_Remote(double TimeRange, FName ComponentName, double DamageMultiply, double StanMultiply);
    void ReceiveBeginPlay();
    void Shot(bool PressState, double PushTime, class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void SetMeshDatas(bool KeepScale);
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void DefaultMontagePlay();
    void BndEvt__BP_DamageTool_Base_V2_BPC_ComboControl_K2Node_ComponentBoundEvent_1_OnUniqueEvent__DelegateSignature(FName EventName);
    void ExecuteUbergraph_BP_DamageTool_Base_V2(int32 EntryPoint);
}; // Size: 0x4F8

#endif
