#ifndef UE4SS_SDK_WBP_VoiceChatLists_HPP
#define UE4SS_SDK_WBP_VoiceChatLists_HPP

class UWBP_VoiceChatLists_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox_19;                                               // 0x0348 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void VoiceStateUpdate();
    void ExecuteUbergraph_WBP_VoiceChatLists(int32 EntryPoint);
}; // Size: 0x350

#endif
