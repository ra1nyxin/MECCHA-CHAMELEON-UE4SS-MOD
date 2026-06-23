#ifndef UE4SS_SDK_WBP_Boost_HPP
#define UE4SS_SDK_WBP_Boost_HPP

class UWBP_Boost_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0348 (size: 0x8)
    class UWidgetAnimation* Boost;                                                    // 0x0350 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void EndEvent();
    void ExecuteUbergraph_WBP_Boost(int32 EntryPoint);
}; // Size: 0x358

#endif
