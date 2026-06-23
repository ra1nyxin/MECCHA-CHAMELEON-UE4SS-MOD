#ifndef UE4SS_SDK_WBP_DamagedOutLine_HPP
#define UE4SS_SDK_WBP_DamagedOutLine_HPP

class UWBP_DamagedOutLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0348 (size: 0x8)
    class UWidgetAnimation* Damaged;                                                  // 0x0350 (size: 0x8)

    void Construct();
    void AnimationEnd();
    void ExecuteUbergraph_WBP_DamagedOutLine(int32 EntryPoint);
}; // Size: 0x358

#endif
