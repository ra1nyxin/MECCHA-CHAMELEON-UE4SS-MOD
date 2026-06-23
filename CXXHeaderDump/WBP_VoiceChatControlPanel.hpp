#ifndef UE4SS_SDK_WBP_VoiceChatControlPanel_HPP
#define UE4SS_SDK_WBP_VoiceChatControlPanel_HPP

class UWBP_VoiceChatControlPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_SettingVoiceInputDevice_C* WBP_SettingVoiceInputDevice;                // 0x0348 (size: 0x8)
    class UScrollBox* ScrollBox_52;                                                   // 0x0350 (size: 0x8)
    TArray<FUniqueNetIdRepl> BoxTarget;                                               // 0x0358 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_WBP_VoiceChatControlPanel(int32 EntryPoint);
}; // Size: 0x368

#endif
