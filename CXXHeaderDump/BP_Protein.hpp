#ifndef UE4SS_SDK_BP_Protein_HPP
#define UE4SS_SDK_BP_Protein_HPP

class ABP_Protein_C : public ABP_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    double NowDamageMultiply;                                                         // 0x0440 (size: 0x8)
    double NowStanDamageMultiply;                                                     // 0x0448 (size: 0x8)
    bool DamageEnableState;                                                           // 0x0450 (size: 0x1)
    FName Damage Name;                                                                // 0x0454 (size: 0x8)
    double Damage Value;                                                              // 0x0460 (size: 0x8)
    TSet<AActor*> HitActors;                                                          // 0x0468 (size: 0x50)
    TArray<class UPrimitiveComponent*> CollisionPrimitives;                           // 0x04B8 (size: 0x10)
    class UAnimMontage* DefaultMontage;                                               // 0x04C8 (size: 0x8)
    bool EatDelay;                                                                    // 0x04D0 (size: 0x1)
    double kcal;                                                                      // 0x04D8 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void ApplyDamage(class UObject* OtherActor, FHitResult Sweep Result);
    void OnNotifyEnd_8C09DE9F41762B9037D01C9BF92CC68C(FName NotifyName);
    void OnNotifyBegin_8C09DE9F41762B9037D01C9BF92CC68C(FName NotifyName);
    void OnInterrupted_8C09DE9F41762B9037D01C9BF92CC68C(FName NotifyName);
    void OnBlendOut_8C09DE9F41762B9037D01C9BF92CC68C(FName NotifyName);
    void OnCompleted_8C09DE9F41762B9037D01C9BF92CC68C(FName NotifyName);
    void OnNotifyEnd_B624065C408A21AB39805CBF1EDA7D0B(FName NotifyName);
    void OnNotifyBegin_B624065C408A21AB39805CBF1EDA7D0B(FName NotifyName);
    void OnInterrupted_B624065C408A21AB39805CBF1EDA7D0B(FName NotifyName);
    void OnBlendOut_B624065C408A21AB39805CBF1EDA7D0B(FName NotifyName);
    void OnCompleted_B624065C408A21AB39805CBF1EDA7D0B(FName NotifyName);
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
    void ExecuteUbergraph_BP_Protein(int32 EntryPoint);
}; // Size: 0x4E0

#endif
