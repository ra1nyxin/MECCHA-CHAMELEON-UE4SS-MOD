#ifndef UE4SS_SDK_WBP_ConfigSound_HPP
#define UE4SS_SDK_WBP_ConfigSound_HPP

class UWBP_ConfigSound_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_TextSE;                                           // 0x0348 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_SE;                                               // 0x0350 (size: 0x8)
    class UWBP_ConfigItem_C* WBP_ConfigItem;                                          // 0x0358 (size: 0x8)
    class UWBP_SettingSlider_C* WBP_BGM;                                              // 0x0360 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0368 (size: 0x8)
    class UScrollBox* ScrollBox_0;                                                    // 0x0370 (size: 0x8)
    class UWidget* Before Widget;                                                     // 0x0378 (size: 0x8)
    class UBP_ConfigSaveGame_C* As BP Config Save Game;                               // 0x0380 (size: 0x8)
    class UBPGI_Main_C* As BPGI Main;                                                 // 0x0388 (size: 0x8)

    void ScreenTypeSettingsUpdate();
    void DeleteConfigWidget();
    void Construct();
    void ApplySettings();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ConfigSound_WBP_SE_K2Node_ComponentBoundEvent_0_UpdateSettingValue__DelegateSignature();
    void BndEvt__WBP_ConfigSound_WBP_TextSE_K2Node_ComponentBoundEvent_1_UpdateSettingValue__DelegateSignature();
    void BndEvt__WBP_ConfigSound_WBP_BGM_K2Node_ComponentBoundEvent_2_UpdateSettingValue__DelegateSignature();
    void ExecuteUbergraph_WBP_ConfigSound(int32 EntryPoint);
}; // Size: 0x390

#endif
