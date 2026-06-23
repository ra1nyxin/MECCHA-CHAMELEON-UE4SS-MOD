#ifndef UE4SS_SDK_WBP_RadialMenuParts_HPP
#define UE4SS_SDK_WBP_RadialMenuParts_HPP

class UWBP_RadialMenuParts_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* WeightText;                                                     // 0x0348 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x0350 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0358 (size: 0x8)
    class UWidgetAnimation* ItemAnimation;                                            // 0x0360 (size: 0x8)
    double MaxCount;                                                                  // 0x0368 (size: 0x8)
    double MarginDegrees;                                                             // 0x0370 (size: 0x8)
    double ImageAngle;                                                                // 0x0378 (size: 0x8)
    bool IsEmpty;                                                                     // 0x0380 (size: 0x1)
    FLinearColor NonSelectColor;                                                      // 0x0384 (size: 0x10)
    FLinearColor SelectColor;                                                         // 0x0394 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void SetSelectState(bool State);
    void SetData(FST_ItemCoreDatas Data);
    void SetCentorText(FText InText, FLinearColor Specified Color);
    void ExecuteUbergraph_WBP_RadialMenuParts(int32 EntryPoint);
}; // Size: 0x3A4

#endif
