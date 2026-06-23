#ifndef UE4SS_SDK_WBP_CentorText_HPP
#define UE4SS_SDK_WBP_CentorText_HPP

class UWBP_CentorText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_30;                                                   // 0x0348 (size: 0x8)
    class UWidgetAnimation* ShowAnimation;                                            // 0x0350 (size: 0x8)
    FString Text;                                                                     // 0x0358 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Finish();
    void ExecuteUbergraph_WBP_CentorText(int32 EntryPoint);
}; // Size: 0x368

#endif
