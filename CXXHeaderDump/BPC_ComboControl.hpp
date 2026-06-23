#ifndef UE4SS_SDK_BPC_ComboControl_HPP
#define UE4SS_SDK_BPC_ComboControl_HPP

class UBPC_ComboControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class USkeletalMeshComponent* TargetMesh;                                         // 0x00C0 (size: 0x8)
    int32 CurrentComboIndex;                                                          // 0x00C8 (size: 0x4)
    TArray<class UAnimMontage*> Montages;                                             // 0x00D0 (size: 0x10)
    FName CurrentState;                                                               // 0x00E0 (size: 0x8)
    FBPC_ComboControl_COnStateChange OnStateChange;                                   // 0x00E8 (size: 0x10)
    void OnStateChange(FName StateName);
    class APawn* Target Character;                                                    // 0x00F8 (size: 0x8)
    class UBPC_PlayMontageOnline_C* MontageOnline;                                    // 0x0100 (size: 0x8)
    TArray<FName> UniqueEvent;                                                        // 0x0108 (size: 0x10)
    FBPC_ComboControl_COnUniqueEvent OnUniqueEvent;                                   // 0x0118 (size: 0x10)
    void OnUniqueEvent(FName EventName);

    void CanCombo(bool& CanCombo);
    void OnNotifyEnd_160FEEFC429FDD0964C81A82DBE63440(FName NotifyName);
    void OnNotifyBegin_160FEEFC429FDD0964C81A82DBE63440(FName NotifyName);
    void OnInterrupted_160FEEFC429FDD0964C81A82DBE63440(FName NotifyName);
    void OnBlendOut_160FEEFC429FDD0964C81A82DBE63440(FName NotifyName);
    void OnCompleted_160FEEFC429FDD0964C81A82DBE63440(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void Setup(class APawn* TargetCharacter);
    void ComboStart();
    void StateChange(FName NewState);
    void LoopInput(bool bEnabled);
    void ExecuteUbergraph_BPC_ComboControl(int32 EntryPoint);
    void OnUniqueEvent__DelegateSignature(FName EventName);
    void OnStateChange__DelegateSignature(FName StateName);
}; // Size: 0x128

#endif
