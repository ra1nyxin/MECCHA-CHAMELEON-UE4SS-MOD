#ifndef UE4SS_SDK_WBP_CentorCharge_HPP
#define UE4SS_SDK_WBP_CentorCharge_HPP

class UWBP_CentorCharge_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_26;                                                           // 0x0348 (size: 0x8)
    double DefaultValue;                                                              // 0x0350 (size: 0x8)
    bool IsCurrentPlayLoop;                                                           // 0x0358 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void SetValue(float Value);
    void PlayChargeSound();
    void ExecuteUbergraph_WBP_CentorCharge(int32 EntryPoint);
}; // Size: 0x359

#endif
