#ifndef UE4SS_SDK_WBP_FPSCounter_HPP
#define UE4SS_SDK_WBP_FPSCounter_HPP

class UWBP_FPSCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* CounterText;                                                    // 0x0348 (size: 0x8)
    class UBorder* Border_63;                                                         // 0x0350 (size: 0x8)
    TArray<double> StackFPSValue;                                                     // 0x0358 (size: 0x10)
    int32 MaxCount;                                                                   // 0x0368 (size: 0x4)
    FVector2D GraphScale;                                                             // 0x0370 (size: 0x10)

    void CreatePaints(TArray<FVector2D>& Points);
    void OnPaint(FPaintContext& Context);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_FPSCounter(int32 EntryPoint);
}; // Size: 0x380

#endif
