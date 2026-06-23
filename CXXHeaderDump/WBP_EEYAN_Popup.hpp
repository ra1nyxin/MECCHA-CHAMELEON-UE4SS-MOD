#ifndef UE4SS_SDK_WBP_EEYAN_Popup_HPP
#define UE4SS_SDK_WBP_EEYAN_Popup_HPP

class UWBP_EEYAN_Popup_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_44;                                                   // 0x0348 (size: 0x8)
    class UImage* Image_39;                                                           // 0x0350 (size: 0x8)
    class UWidgetAnimation* StartAnim;                                                // 0x0358 (size: 0x8)
    class UWidgetAnimation* EndAnim;                                                  // 0x0360 (size: 0x8)
    FString Name;                                                                     // 0x0368 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void End();
    void ExecuteUbergraph_WBP_EEYAN_Popup(int32 EntryPoint);
}; // Size: 0x378

#endif
