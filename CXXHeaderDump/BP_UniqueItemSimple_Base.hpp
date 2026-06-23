#ifndef UE4SS_SDK_BP_UniqueItemSimple_Base_HPP
#define UE4SS_SDK_BP_UniqueItemSimple_Base_HPP

class ABP_UniqueItemSimple_Base_C : public ABP_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UBPC_LongInputControl_C* BPC_LongInputControl;                              // 0x0440 (size: 0x8)
    class UAnimMontage* DefaultMontage;                                               // 0x0448 (size: 0x8)
    TSubclassOf<class UBPC_ItemReplicateController_Base_C> ReplicateComp;             // 0x0450 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void OnNotifyEnd_D176954D4D330770DDA8FF83B62F5132(FName NotifyName);
    void OnNotifyBegin_D176954D4D330770DDA8FF83B62F5132(FName NotifyName);
    void OnInterrupted_D176954D4D330770DDA8FF83B62F5132(FName NotifyName);
    void OnBlendOut_D176954D4D330770DDA8FF83B62F5132(FName NotifyName);
    void OnCompleted_D176954D4D330770DDA8FF83B62F5132(FName NotifyName);
    void OnNotifyEnd_1013867E4516BE5E684D02AFC3221F80(FName NotifyName);
    void OnNotifyBegin_1013867E4516BE5E684D02AFC3221F80(FName NotifyName);
    void OnInterrupted_1013867E4516BE5E684D02AFC3221F80(FName NotifyName);
    void OnBlendOut_1013867E4516BE5E684D02AFC3221F80(FName NotifyName);
    void OnCompleted_1013867E4516BE5E684D02AFC3221F80(FName NotifyName);
    void Attack_AC_Remote(double TimeRange, FName ComponentName, double DamageMultiply, double StanMultiply);
    void ReceiveBeginPlay();
    void Shot(bool PressState, double PushTime, class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void SetMeshDatas(bool KeepScale);
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void DefaultMontagePlay();
    void Combo(double TimeRange, FName ComboName);
    void Attack_AC(double TimeRange, FName AttackName, double DamageMultiply, bool MutipleHitPossible, double StanMultiply);
    void CollisionReset();
    void ExecuteUbergraph_BP_UniqueItemSimple_Base(int32 EntryPoint);
}; // Size: 0x458

#endif
