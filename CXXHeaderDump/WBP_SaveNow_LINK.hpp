#ifndef UE4SS_SDK_WBP_SaveNow_LINK_HPP
#define UE4SS_SDK_WBP_SaveNow_LINK_HPP

class UWBP_SaveNow_LINK_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0348 (size: 0x8)
    class UWidgetAnimation* SaveStart;                                                // 0x0350 (size: 0x8)
    class UWidgetAnimation* SaveEnd;                                                  // 0x0358 (size: 0x8)

    void SetText(FText Text, int32 Index);
    void SetColor(FLinearColor Color, int32 Index);
    void Construct();
    void PlayAnimationMessage(bool IsForward, int32 Index);
    void ExecuteUbergraph_WBP_SaveNow_LINK(int32 EntryPoint);
}; // Size: 0x360

#endif
