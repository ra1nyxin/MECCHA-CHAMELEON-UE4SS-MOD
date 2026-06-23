#ifndef UE4SS_SDK_GA_MontageClear_HPP
#define UE4SS_SDK_GA_MontageClear_HPP

class UGA_MontageClear_C : public UGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)

    void OnCancelled_795C47B248738638E80CD9A84449D35B();
    void OnInterrupted_795C47B248738638E80CD9A84449D35B();
    void OnBlendOut_795C47B248738638E80CD9A84449D35B();
    void OnBlendedIn_795C47B248738638E80CD9A84449D35B();
    void OnCompleted_795C47B248738638E80CD9A84449D35B();
    void K2_ActivateAbility();
    void ExecuteUbergraph_GA_MontageClear(int32 EntryPoint);
}; // Size: 0x3B0

#endif
