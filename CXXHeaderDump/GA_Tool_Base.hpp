#ifndef UE4SS_SDK_GA_Tool_Base_HPP
#define UE4SS_SDK_GA_Tool_Base_HPP

class UGA_Tool_Base_C : public UGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UAnimMontage* Montage;                                                      // 0x03B0 (size: 0x8)
    bool IsFirstAttack;                                                               // 0x03B8 (size: 0x1)

    void EventReceived_1C4DAC504023E166C4A361AD9FA20411(FGameplayEventData Payload);
    void OnCancelled_9E7A34EE47C91FC2089049BA43913140();
    void OnInterrupted_9E7A34EE47C91FC2089049BA43913140();
    void OnBlendOut_9E7A34EE47C91FC2089049BA43913140();
    void OnBlendedIn_9E7A34EE47C91FC2089049BA43913140();
    void OnCompleted_9E7A34EE47C91FC2089049BA43913140();
    void Send To Server();
    void K2_ActivateAbility();
    void ExecuteUbergraph_GA_Tool_Base(int32 EntryPoint);
}; // Size: 0x3B9

#endif
