#ifndef UE4SS_SDK_GA_Hand_HPP
#define UE4SS_SDK_GA_Hand_HPP

class UGA_Hand_C : public UGameplayAbility
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)

    void OnCancelled_D984D1104BE6D38FAE2461A31D0E051A();
    void OnInterrupted_D984D1104BE6D38FAE2461A31D0E051A();
    void OnBlendOut_D984D1104BE6D38FAE2461A31D0E051A();
    void OnBlendedIn_D984D1104BE6D38FAE2461A31D0E051A();
    void OnCompleted_D984D1104BE6D38FAE2461A31D0E051A();
    void K2_ActivateAbility();
    void ExecuteUbergraph_GA_Hand(int32 EntryPoint);
}; // Size: 0x3B0

#endif
