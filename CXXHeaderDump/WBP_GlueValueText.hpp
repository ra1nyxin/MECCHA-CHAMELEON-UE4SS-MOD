#ifndef UE4SS_SDK_WBP_GlueValueText_HPP
#define UE4SS_SDK_WBP_GlueValueText_HPP

class UWBP_GlueValueText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_UnderGuage_C* WBP_UnderGuage;                                          // 0x0348 (size: 0x8)
    class UTextBlock* MainTextBlock;                                                  // 0x0350 (size: 0x8)

    void SetText(FText InText);
    void SetBarWidth(double Desired Size X);
    void UpdateBarWidth();
    void ExecuteUbergraph_WBP_GlueValueText(int32 EntryPoint);
}; // Size: 0x358

#endif
