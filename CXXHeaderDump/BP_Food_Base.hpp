#ifndef UE4SS_SDK_BP_Food_Base_HPP
#define UE4SS_SDK_BP_Food_Base_HPP

class ABP_Food_Base_C : public ABP_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0440 (size: 0x8)
    double NowDamageMultiply;                                                         // 0x0448 (size: 0x8)
    double NowStanDamageMultiply;                                                     // 0x0450 (size: 0x8)
    bool DamageEnableState;                                                           // 0x0458 (size: 0x1)
    FName Damage Name;                                                                // 0x045C (size: 0x8)
    double Damage Value;                                                              // 0x0468 (size: 0x8)
    TSet<AActor*> HitActors;                                                          // 0x0470 (size: 0x50)
    TArray<class UPrimitiveComponent*> CollisionPrimitives;                           // 0x04C0 (size: 0x10)
    class UAnimMontage* DefaultMontage;                                               // 0x04D0 (size: 0x8)
    bool EatDelay;                                                                    // 0x04D8 (size: 0x1)
    double kcal;                                                                      // 0x04E0 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void ApplyDamage(class UObject* OtherActor, FHitResult Sweep Result);
    void OnNotifyEnd_1EE8139B44BEF7533BB7DA8825C05C72(FName NotifyName);
    void OnNotifyBegin_1EE8139B44BEF7533BB7DA8825C05C72(FName NotifyName);
    void OnInterrupted_1EE8139B44BEF7533BB7DA8825C05C72(FName NotifyName);
    void OnBlendOut_1EE8139B44BEF7533BB7DA8825C05C72(FName NotifyName);
    void OnCompleted_1EE8139B44BEF7533BB7DA8825C05C72(FName NotifyName);
    void OnNotifyEnd_AB8CFA264FD7DA0BDDFF52A4E41377D1(FName NotifyName);
    void OnNotifyBegin_AB8CFA264FD7DA0BDDFF52A4E41377D1(FName NotifyName);
    void OnInterrupted_AB8CFA264FD7DA0BDDFF52A4E41377D1(FName NotifyName);
    void OnBlendOut_AB8CFA264FD7DA0BDDFF52A4E41377D1(FName NotifyName);
    void OnCompleted_AB8CFA264FD7DA0BDDFF52A4E41377D1(FName NotifyName);
    void CollisionReset();
    void Attack_AC(double TimeRange, FName AttackName, double DamageMultiply, bool MutipleHitPossible, double StanMultiply);
    void Combo(double TimeRange, FName ComboName);
    void Attack_AC_Remote(double TimeRange, FName ComponentName, double DamageMultiply, double StanMultiply);
    void ReceiveBeginPlay();
    void Shot(bool PressState, double PushTime, class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void SetMeshDatas(bool KeepScale);
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void DefaultMontagePlay();
    void UseItem();
    void ExecuteUbergraph_BP_Food_Base(int32 EntryPoint);
}; // Size: 0x4E8

#endif
