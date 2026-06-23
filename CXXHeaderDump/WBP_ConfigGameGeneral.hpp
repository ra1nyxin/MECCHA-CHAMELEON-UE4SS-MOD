#ifndef UE4SS_SDK_WBP_ConfigGameGeneral_HPP
#define UE4SS_SDK_WBP_ConfigGameGeneral_HPP

class UWBP_ConfigGameGeneral_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_SettingSlider_Sencibility;                        // 0x0348 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_SettingSlider_Difficulty;                         // 0x0350 (size: 0x8)
    class UWBP_ComboBox_InputDevice_C* WBP_ComboBox_InputDevice;                      // 0x0358 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0360 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0368 (size: 0x8)
    class UWidget* Before Widget;                                                     // 0x0370 (size: 0x8)
    class UBP_ConfigSaveGame_C* As BP Config Save Game;                               // 0x0378 (size: 0x8)
    class UBPGI_Main_C* As BPGI Main;                                                 // 0x0380 (size: 0x8)

    void ScreenTypeSettingsUpdate();
    void DeleteConfigWidget();
    void Construct();
    void ApplySettings();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ConfigGameGeneral_WBP_SettingSlider_Sencibility_K2Node_ComponentBoundEvent_0_UpdateSettingValue__DelegateSignature();
    void ExecuteUbergraph_WBP_ConfigGameGeneral(int32 EntryPoint);
}; // Size: 0x388

#endif
