#ifndef UE4SS_SDK_WBP_Compass_HPP
#define UE4SS_SDK_WBP_Compass_HPP

class UWBP_Compass_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_28;                                                   // 0x0348 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_Compass(int32 EntryPoint);
}; // Size: 0x350

#endif
