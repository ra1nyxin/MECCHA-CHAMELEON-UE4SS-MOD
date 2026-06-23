#ifndef UE4SS_SDK_WBP_ConfigItem_HPP
#define UE4SS_SDK_WBP_ConfigItem_HPP

class UWBP_ConfigItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox;                                      // 0x0348 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0350 (size: 0x8)
    class UBorder* Border_62;                                                         // 0x0358 (size: 0x8)
    TEnumAsByte<Enum_ConfigItem::Type> configItem;                                    // 0x0360 (size: 0x1)
    float Frame Rate Limit;                                                           // 0x0364 (size: 0x4)
    int32 Anti Aliasing Quality;                                                      // 0x0368 (size: 0x4)
    int32 Texture Quality;                                                            // 0x036C (size: 0x4)
    TArray<int32> FlameRateArray_0;                                                   // 0x0370 (size: 0x10)
    int32 Shdow Quality;                                                              // 0x0380 (size: 0x4)
    int32 Global Illumination Quality;                                                // 0x0384 (size: 0x4)
    int32 Reflection Quality;                                                         // 0x0388 (size: 0x4)
    int32 Shading Quality;                                                            // 0x038C (size: 0x4)
    int32 Visual Effect Quality;                                                      // 0x0390 (size: 0x4)
    int32 Post Processing Quality;                                                    // 0x0394 (size: 0x4)
    int32 Overall Scalability Level;                                                  // 0x0398 (size: 0x4)
    int32 Audio Quality Level;                                                        // 0x039C (size: 0x4)
    bool ConfingMinValue;                                                             // 0x03A0 (size: 0x1)
    FVector2D BeforePos;                                                              // 0x03A8 (size: 0x10)
    bool VsyncState;                                                                  // 0x03B8 (size: 0x1)
    FText SettingStrings;                                                             // 0x03C0 (size: 0x10)
    class UMaterialInterface* BGMaterial;                                             // 0x03D0 (size: 0x8)
    int32 MinIndex;                                                                   // 0x03D8 (size: 0x4)

    void RemoveMin(FText SourceText, FText& ReturnText);
    void UpdateVSyncState(int32 LimitIndex);
    void UpdateAudio Quality Level(int32 LimitIndex);
    void UpdateOverall Scalability Level(int32 LimitIndex);
    void UpdatePost Processing Quality(int32 LimitIndex);
    void UpdateVisualEffectQuality(int32 LimitIndex);
    void UpdateReflectionQuality(int32 LimitIndex);
    void UpdateGlobal Illumination(int32 LimitIndex);
    void UpdateShadowQuality(int32 LimitIndex);
    void UpdateShadingQuality(int32 LimitIndex);
    void SetVarValue(int32 inInt);
    void UpdateTextureQuality(int32 LimitIndex);
    void UpdateAntiAliasingQuality(int32 LimitIndex);
    void UpdateFrameRate(int32 LimitIndex);
    void UpdateConfigValue();
    void ApplySetting();
    void PreConstruct(bool IsDesignTime);
    void Update Config Item();
    void BndEvt__WBP_ConfigItem_WBP_NavOptionBox_K2Node_ComponentBoundEvent_0_OnValueChangedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_ConfigItem(int32 EntryPoint);
}; // Size: 0x3DC

#endif
