#ifndef UE4SS_SDK_WBP_StormCountDown_HPP
#define UE4SS_SDK_WBP_StormCountDown_HPP

class UWBP_StormCountDown_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TimeText;                                                       // 0x0348 (size: 0x8)
    class UImage* Image_39;                                                           // 0x0350 (size: 0x8)

    void SetTime(int32 Time);
    void ExecuteUbergraph_WBP_StormCountDown(int32 EntryPoint);
}; // Size: 0x358

#endif
