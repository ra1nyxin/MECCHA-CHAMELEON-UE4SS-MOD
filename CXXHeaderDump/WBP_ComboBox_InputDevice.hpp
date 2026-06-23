#ifndef UE4SS_SDK_WBP_ComboBox_InputDevice_HPP
#define UE4SS_SDK_WBP_ComboBox_InputDevice_HPP

class UWBP_ComboBox_InputDevice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox;                                      // 0x0348 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0350 (size: 0x8)
    class UBorder* Border_62;                                                         // 0x0358 (size: 0x8)
    FWBP_ComboBox_InputDevice_CUpdateScreenSetting UpdateScreenSetting;               // 0x0360 (size: 0x10)
    void UpdateScreenSetting();
    TArray<FString> InputDevices;                                                     // 0x0370 (size: 0x10)
    class UBP_ConfigSaveGame_C* As BP Config Save Game;                               // 0x0380 (size: 0x8)
    class UBPGI_Main_C* Game Instance;                                                // 0x0388 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Update Config Item();
    void ApplySetting();
    void BndEvt__WBP_ComboBox_InputDevice_WBP_NavOptionBox_K2Node_ComponentBoundEvent_0_OnValueChangedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ComboBox_InputDevice(int32 EntryPoint);
    void UpdateScreenSetting__DelegateSignature();
}; // Size: 0x390

#endif
