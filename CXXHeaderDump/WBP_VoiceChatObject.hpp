#ifndef UE4SS_SDK_WBP_VoiceChatObject_HPP
#define UE4SS_SDK_WBP_VoiceChatObject_HPP

class UWBP_VoiceChatObject_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_60;                                                   // 0x0348 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0350 (size: 0x8)
    FText TargetText;                                                                 // 0x0358 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_VoiceChatObject(int32 EntryPoint);
}; // Size: 0x368

#endif
