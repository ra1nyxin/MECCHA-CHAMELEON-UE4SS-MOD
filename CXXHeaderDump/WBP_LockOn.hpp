#ifndef UE4SS_SDK_WBP_LockOn_HPP
#define UE4SS_SDK_WBP_LockOn_HPP

class UWBP_LockOn_C : public UUserWidget
{
    class UTextBlock* SubText;                                                        // 0x0340 (size: 0x8)
    class UTextBlock* MainNumber_2;                                                   // 0x0348 (size: 0x8)
    class UTextBlock* MainNumber_1;                                                   // 0x0350 (size: 0x8)
    class UTextBlock* MainNumber_0;                                                   // 0x0358 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0360 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0368 (size: 0x8)
    class UTextBlock* ChargeSpeedText;                                                // 0x0370 (size: 0x8)
    class UWidgetAnimation* LockOnShow;                                               // 0x0378 (size: 0x8)
    class UCurveLinearColor* HealthColorAtlas;                                        // 0x0380 (size: 0x8)
    bool BeforeVisibleState;                                                          // 0x0388 (size: 0x1)
    double LockOnScale;                                                               // 0x0390 (size: 0x8)

    void SetMultiplyValue(double Value);
    void ValueVisible(bool State);
    void SetColor(double Value);
    void SetValue(FString StringValue);
}; // Size: 0x398

#endif
