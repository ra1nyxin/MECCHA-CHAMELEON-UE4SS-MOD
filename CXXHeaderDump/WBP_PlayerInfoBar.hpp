#ifndef UE4SS_SDK_WBP_PlayerInfoBar_HPP
#define UE4SS_SDK_WBP_PlayerInfoBar_HPP

class UWBP_PlayerInfoBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* ValueText;                                                      // 0x0348 (size: 0x8)
    class UImage* MainVar_R;                                                          // 0x0350 (size: 0x8)
    class UImage* MainVar_L;                                                          // 0x0358 (size: 0x8)
    class UImage* Icon;                                                               // 0x0360 (size: 0x8)
    class UTexture2D* IconTexture;                                                    // 0x0368 (size: 0x8)
    FText DefaultValueText;                                                           // 0x0370 (size: 0x10)
    double DefaultWidth;                                                              // 0x0380 (size: 0x8)
    double ScaleMultiplyer;                                                           // 0x0388 (size: 0x8)
    double CurrentValue;                                                              // 0x0390 (size: 0x8)
    FSlateColor MainColor;                                                            // 0x0398 (size: 0x14)
    bool FlipBar;                                                                     // 0x03AC (size: 0x1)
    double CurrentAnimationValue;                                                     // 0x03B0 (size: 0x8)
    double TickDeltaTime;                                                             // 0x03B8 (size: 0x8)
    double DiffValue;                                                                 // 0x03C0 (size: 0x8)
    class UMaterialInstanceDynamic* BarMaterial;                                      // 0x03C8 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void SetValue(double Value);
    void Add Event();
    void ExecuteUbergraph_WBP_PlayerInfoBar(int32 EntryPoint);
}; // Size: 0x3D0

#endif
