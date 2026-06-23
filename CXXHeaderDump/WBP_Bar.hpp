#ifndef UE4SS_SDK_WBP_Bar_HPP
#define UE4SS_SDK_WBP_Bar_HPP

class UWBP_Bar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* SubBarImage;                                                        // 0x0348 (size: 0x8)
    class UImage* MainBarImage;                                                       // 0x0350 (size: 0x8)
    class UImage* BGBarImage;                                                         // 0x0358 (size: 0x8)
    FLinearColor MainColor;                                                           // 0x0360 (size: 0x10)
    FLinearColor SubColor;                                                            // 0x0370 (size: 0x10)
    double BGPadding;                                                                 // 0x0380 (size: 0x8)
    class UMaterialInstanceDynamic* MainBarMaterialInstance;                          // 0x0388 (size: 0x8)
    class UMaterialInstanceDynamic* SubBarMaterialInstance;                           // 0x0390 (size: 0x8)
    double DefaultMainValue;                                                          // 0x0398 (size: 0x8)
    class UCurveLinearColor* ColorCurve;                                              // 0x03A0 (size: 0x8)
    bool UseCurveColor;                                                               // 0x03A8 (size: 0x1)

    void SetSubBarValue(double Value);
    void SetMainBarValue(double Value);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_Bar(int32 EntryPoint);
}; // Size: 0x3A9

#endif
