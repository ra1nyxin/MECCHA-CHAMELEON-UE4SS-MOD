#ifndef UE4SS_SDK_WBP_DAY_HPP
#define UE4SS_SDK_WBP_DAY_HPP

class UWBP_DAY_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_32;                                                   // 0x0348 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0358 (size: 0x8)
    class UWidgetAnimation* day1;                                                     // 0x0360 (size: 0x8)
    class UWidgetAnimation* day2;                                                     // 0x0368 (size: 0x8)
    class UWidgetAnimation* day3;                                                     // 0x0370 (size: 0x8)
    int32 PlayDayNumber;                                                              // 0x0378 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void EndEvent();
    void ExecuteUbergraph_WBP_DAY(int32 EntryPoint);
}; // Size: 0x37C

#endif
