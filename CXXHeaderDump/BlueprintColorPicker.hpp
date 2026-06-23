#ifndef UE4SS_SDK_BlueprintColorPicker_HPP
#define UE4SS_SDK_BlueprintColorPicker_HPP

class UColorPicker : public UWidget
{
    FColorPickerOnColorChanged OnColorChanged;                                        // 0x0168 (size: 0x10)
    void OnColorChanged(const FLinearColor& NewColor);
    FColorPickerOnContextMenuCloseRequested OnContextMenuCloseRequested;              // 0x0178 (size: 0x10)
    void OnContextMenuCloseRequested();
    FColorPickerOnMetallicRoughnessChanged OnMetallicRoughnessChanged;                // 0x0188 (size: 0x10)
    void OnMetallicRoughnessChanged(float NewMetallic, float NewRoughness);
    FColorPickerOnMaterialSampled OnMaterialSampled;                                  // 0x0198 (size: 0x10)
    void OnMaterialChanged(const FLinearColor& NewColor, float NewMetallic, float NewRoughness);
    FLinearColor InitialColor;                                                        // 0x01A8 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x01B8 (size: 0x10)
    bool bShowInline;                                                                 // 0x01C8 (size: 0x1)
    bool bUseAlpha;                                                                   // 0x01C9 (size: 0x1)
    bool bForContextMenu;                                                             // 0x01CA (size: 0x1)
    bool bShowOkCancelButtons;                                                        // 0x01CB (size: 0x1)
    float Metallic;                                                                   // 0x01CC (size: 0x4)
    float Roughness;                                                                  // 0x01D0 (size: 0x4)
    FText MetallicLabel;                                                              // 0x01D8 (size: 0x10)
    FText RoughnessLabel;                                                             // 0x01E8 (size: 0x10)
    bool bOverwriteColorOnSample;                                                     // 0x01F8 (size: 0x1)
    class UMaterialInterface* MetallicRoughnessSampleMaterial;                        // 0x0200 (size: 0x8)
    bool bUseExactGBufferReadback;                                                    // 0x0208 (size: 0x1)
    float MaxGBufferSamplesPerSecond;                                                 // 0x020C (size: 0x4)
    bool bShowGBufferEyedropper;                                                      // 0x0210 (size: 0x1)
    FLinearColor EyedropperBackgroundColor;                                           // 0x0214 (size: 0x10)
    FSlateBrush EyedropperIcon;                                                       // 0x0230 (size: 0xB0)
    FText EyedropperButtonText;                                                       // 0x02E0 (size: 0x10)
    class UTextureRenderTarget2D* PixelInspectorBufferFinalColor;                     // 0x0428 (size: 0x10)
    class UTextureRenderTarget2D* PixelInspectorBufferSceneColor;                     // 0x0438 (size: 0x10)
    class UTextureRenderTarget2D* PixelInspectorBufferHDR;                            // 0x0448 (size: 0x10)
    class UTextureRenderTarget2D* PixelInspectorBufferBCDEF;                          // 0x0458 (size: 0x10)
    class UTextureRenderTarget2D* CachedSamplingRT;                                   // 0x0478 (size: 0x8)
    class AActor* CachedSamplingActor;                                                // 0x0480 (size: 0x8)
    class USceneCaptureComponent2D* CachedSamplingComponent;                          // 0x0488 (size: 0x8)

    void StopGBufferSampling(bool bCommit);
    void StartGBufferSampling();
    bool SampleViewportGBuffer(class UObject* WorldContextObject, FVector2D ScreenPosition, FLinearColor& OutBaseColor, float& OutMetallic, float& OutRoughness, class UMaterialInterface* OptionalMetallicRoughnessMaterial);
    bool SampleViewportAtCursorAndApply();
    void OnMetallicRoughnessChanged__DelegateSignature(float NewMetallic, float NewRoughness);
    void OnMaterialChanged__DelegateSignature(const FLinearColor& NewColor, float NewMetallic, float NewRoughness);
    void OnContextMenuCloseRequested__DelegateSignature();
    void OnColorChanged__DelegateSignature(const FLinearColor& NewColor);
    bool IsGBufferSamplingActive();
    void ApplySampledValues(const FLinearColor& SampledColor, float SampledMetallic, float SampledRoughness);
}; // Size: 0x490

#endif
