#ifndef UE4SS_SDK_WBP_LINK_StaminaBar_HPP
#define UE4SS_SDK_WBP_LINK_StaminaBar_HPP

class UWBP_LINK_StaminaBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class USizeBox* SizeBox_91;                                                       // 0x0348 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0350 (size: 0x8)
    class UBorder* Border_20;                                                         // 0x0358 (size: 0x8)
    class UWidgetAnimation* ShowWidget;                                               // 0x0360 (size: 0x8)
    class UWidgetAnimation* HideWidget;                                               // 0x0368 (size: 0x8)
    double DefaultBarSize;                                                            // 0x0370 (size: 0x8)
    double CurrentValue;                                                              // 0x0378 (size: 0x8)
    bool CurrentVisibleState;                                                         // 0x0380 (size: 0x1)

    void SetBarSize(double NewValue);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_LINK_StaminaBar(int32 EntryPoint);
}; // Size: 0x381

#endif
