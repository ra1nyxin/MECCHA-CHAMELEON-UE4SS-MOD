#ifndef UE4SS_SDK_WBP_SettingVoiceInputDevice_HPP
#define UE4SS_SDK_WBP_SettingVoiceInputDevice_HPP

class UWBP_SettingVoiceInputDevice_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_OptionBox_VoiceInputOrOutputDevice_C* WBP_OptionBox_VoiceInputOrOutputDevice; // 0x0348 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0350 (size: 0x8)
    class UBorder* Border_62;                                                         // 0x0358 (size: 0x8)
    float SliderValue;                                                                // 0x0360 (size: 0x4)
    FWBP_SettingVoiceInputDevice_CUpdateScreenSetting UpdateScreenSetting;            // 0x0368 (size: 0x10)
    void UpdateScreenSetting();
    FName SaveValueKey;                                                               // 0x0378 (size: 0x8)
    FString AppendText;                                                               // 0x0380 (size: 0x10)
    double MaxValue;                                                                  // 0x0390 (size: 0x8)
    FText SplitText;                                                                  // 0x0398 (size: 0x10)
    class UBP_ConfigSaveGame_C* As BP Config Save Game;                               // 0x03A8 (size: 0x8)
    FText MainText;                                                                   // 0x03B0 (size: 0x10)
    TArray<FText> OverrideTextArray;                                                  // 0x03C0 (size: 0x10)
    double StepValue;                                                                 // 0x03D0 (size: 0x8)
    bool FirstSettingsEnd;                                                            // 0x03D8 (size: 0x1)
    class UMaterialInterface* BGMaterial;                                             // 0x03E0 (size: 0x8)
    FWBP_SettingVoiceInputDevice_CUpdateSettingValue UpdateSettingValue;              // 0x03E8 (size: 0x10)
    void UpdateSettingValue();
    bool IsMonoSpace;                                                                 // 0x03F8 (size: 0x1)
    float Monospaced Width;                                                           // 0x03FC (size: 0x4)
    int32 MinTextCount;                                                               // 0x0400 (size: 0x4)
    TArray<FString> Device Ids;                                                       // 0x0408 (size: 0x10)

    void Get_ConfigItem_Text_1_Text_0();
    void ApplySetting();
    void ExecuteUbergraph_WBP_SettingVoiceInputDevice(int32 EntryPoint);
    void UpdateSettingValue__DelegateSignature();
    void UpdateScreenSetting__DelegateSignature();
}; // Size: 0x418

#endif
