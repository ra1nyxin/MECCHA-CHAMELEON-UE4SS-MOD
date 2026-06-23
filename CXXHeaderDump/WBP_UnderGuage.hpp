#ifndef UE4SS_SDK_WBP_UnderGuage_HPP
#define UE4SS_SDK_WBP_UnderGuage_HPP

class UWBP_UnderGuage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Front;                                                              // 0x0348 (size: 0x8)
    class UImage* Background;                                                         // 0x0350 (size: 0x8)
    double HealthValue;                                                               // 0x0358 (size: 0x8)

    void SetWidth(double Desired Size X);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_UnderGuage(int32 EntryPoint);
}; // Size: 0x360

#endif
