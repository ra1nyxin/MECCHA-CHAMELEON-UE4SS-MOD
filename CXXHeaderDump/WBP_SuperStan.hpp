#ifndef UE4SS_SDK_WBP_SuperStan_HPP
#define UE4SS_SDK_WBP_SuperStan_HPP

class UWBP_SuperStan_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0348 (size: 0x8)
    class UWidgetAnimation* PlayAnim;                                                 // 0x0350 (size: 0x8)

    void Construct();
    void End();
    void ExecuteUbergraph_WBP_SuperStan(int32 EntryPoint);
}; // Size: 0x358

#endif
