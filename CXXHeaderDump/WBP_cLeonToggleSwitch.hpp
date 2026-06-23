#ifndef UE4SS_SDK_WBP_cLeonToggleSwitch_HPP
#define UE4SS_SDK_WBP_cLeonToggleSwitch_HPP

class UWBP_cLeonToggleSwitch_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_11;                                           // 0x0348 (size: 0x8)
    class UWidgetAnimation* ToggleOff;                                                // 0x0350 (size: 0x8)
    bool ToggleState;                                                                 // 0x0358 (size: 0x1)
    FName Button Name;                                                                // 0x035C (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void SetToggleState(bool ToggleState);
    void ExecuteUbergraph_WBP_cLeonToggleSwitch(int32 EntryPoint);
}; // Size: 0x364

#endif
