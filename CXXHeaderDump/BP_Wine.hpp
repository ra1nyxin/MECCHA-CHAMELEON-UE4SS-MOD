#ifndef UE4SS_SDK_BP_Wine_HPP
#define UE4SS_SDK_BP_Wine_HPP

class ABP_Wine_C : public ABP_ItemBase_C
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

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void ApplyDamage(class UObject* OtherActor, FHitResult Sweep Result);
    void OnNotifyEnd_21535C9142AC0105AED557A0ED37C34F(FName NotifyName);
    void OnNotifyBegin_21535C9142AC0105AED557A0ED37C34F(FName NotifyName);
    void OnInterrupted_21535C9142AC0105AED557A0ED37C34F(FName NotifyName);
    void OnBlendOut_21535C9142AC0105AED557A0ED37C34F(FName NotifyName);
    void OnCompleted_21535C9142AC0105AED557A0ED37C34F(FName NotifyName);
    void OnNotifyEnd_62D71E2A4546ADF8B88CE08928DE1DB6(FName NotifyName);
    void OnNotifyBegin_62D71E2A4546ADF8B88CE08928DE1DB6(FName NotifyName);
    void OnInterrupted_62D71E2A4546ADF8B88CE08928DE1DB6(FName NotifyName);
    void OnBlendOut_62D71E2A4546ADF8B88CE08928DE1DB6(FName NotifyName);
    void OnCompleted_62D71E2A4546ADF8B88CE08928DE1DB6(FName NotifyName);
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
    void ExecuteUbergraph_BP_Wine(int32 EntryPoint);
}; // Size: 0x4D1

#endif
