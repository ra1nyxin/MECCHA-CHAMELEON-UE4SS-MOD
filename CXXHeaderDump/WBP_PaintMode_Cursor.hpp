#ifndef UE4SS_SDK_WBP_PaintMode_Cursor_HPP
#define UE4SS_SDK_WBP_PaintMode_Cursor_HPP

class UWBP_PaintMode_Cursor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_PaintCursor_C* WBP_PaintCursor;                                        // 0x0348 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_11;                                           // 0x0350 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_10;                                           // 0x0358 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_9;                                            // 0x0360 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_8;                                            // 0x0368 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_7;                                            // 0x0370 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_6;                                            // 0x0378 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_5;                                            // 0x0380 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_4;                                            // 0x0388 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_3;                                            // 0x0390 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_2;                                            // 0x0398 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_1;                                            // 0x03A0 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x03A8 (size: 0x8)
    class UWBP_PaintOptionButton_C* WBP_ImageHoverButton_1;                           // 0x03B0 (size: 0x8)
    class UWBP_PaintOptionButton_C* WBP_ImageHoverButton;                             // 0x03B8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_4;                          // 0x03C0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_3;                          // 0x03C8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_2;                          // 0x03D0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_1;                          // 0x03D8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x03E0 (size: 0x8)
    class UWBP_cLeonToggleSwitch_C* WBP_cLeonToggleSwitchShadow;                      // 0x03E8 (size: 0x8)
    class UImage* Image_250;                                                          // 0x03F0 (size: 0x8)
    class UImage* Image_105;                                                          // 0x03F8 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0400 (size: 0x8)
    class UHorizontalBox* ColorPickerSpawnArea;                                       // 0x0408 (size: 0x8)
    FVector2D DefaultPosition;                                                        // 0x0410 (size: 0x10)
    bool IsPaintViewLock;                                                             // 0x0420 (size: 0x1)
    FName CurrentViewportMode;                                                        // 0x0424 (size: 0x8)
    class ABP_FirstPersonCharacter_cLeon_Character_C* As BP First Person Character C Leon; // 0x0430 (size: 0x8)
    class UColorPicker* SpawnedColorPicker;                                           // 0x0438 (size: 0x8)

    void PaintViewLookUpdate();
    void SetCursorPosition(FVector2D SetValue);
    void GetViewportPosition(FVector2D& Positon);
    void AddCursorPosition(FVector2D AddValue);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_PaintMode_Cursor_WBP_ImageHoverButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature();
    void ColorChanged(const FLinearColor& NewColor);
    void MetallicOrRoughnessChanged(float NewMetallic, float NewRoughness);
    void ColorPick();
    void ColorPickKeep(bool State, bool Commit);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ShadowState(bool ToggleState);
    void ExecuteUbergraph_WBP_PaintMode_Cursor(int32 EntryPoint);
}; // Size: 0x440

#endif
