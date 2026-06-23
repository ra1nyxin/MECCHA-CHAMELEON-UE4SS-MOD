#ifndef UE4SS_SDK_WBP_SelectEEYAN_HPP
#define UE4SS_SDK_WBP_SelectEEYAN_HPP

class UWBP_SelectEEYAN_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x0348 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x0350 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0358 (size: 0x8)
    class UWidgetAnimation* Default;                                                  // 0x0360 (size: 0x8)
    class UWidgetAnimation* Delete;                                                   // 0x0368 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_SelectEEYAN(int32 EntryPoint);
}; // Size: 0x370

#endif
