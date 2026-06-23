#ifndef UE4SS_SDK_WBP_OptionBox_VoiceInputOrOutputDevice_HPP
#define UE4SS_SDK_WBP_OptionBox_VoiceInputOrOutputDevice_HPP

class UWBP_OptionBox_VoiceInputOrOutputDevice_C : public UWBP_NavOptionBox_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09D8 (size: 0x8)
    bool IsInputDevice;                                                               // 0x09E0 (size: 0x1)
    TArray<FString> DeviceIDs;                                                        // 0x09E8 (size: 0x10)

    void OnValueChangeEvent();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_OptionBox_VoiceInputOrOutputDevice(int32 EntryPoint);
}; // Size: 0x9F8

#endif
