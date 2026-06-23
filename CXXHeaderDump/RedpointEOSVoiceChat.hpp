#ifndef UE4SS_SDK_RedpointEOSVoiceChat_HPP
#define UE4SS_SDK_RedpointEOSVoiceChat_HPP

struct FRedpointOutputSoundEffectSubmixSettings
{
}; // Size: 0x70

class URedpointCompressAudioTestFilesCommandlet : public UCommandlet
{
}; // Size: 0x80

class URedpointHardwareDeviceIdExternalEndpointSettings : public UAudioEndpointSettingsBase
{
}; // Size: 0x48

class URedpointOutputSoundEffectSubmixPreset : public USoundEffectSubmixPreset
{
    FRedpointOutputSoundEffectSubmixSettings Settings;                                // 0x0100 (size: 0x70)

}; // Size: 0x170

class URedpointSoundSubmix : public USoundSubmix
{
}; // Size: 0x248

class URedpointVoiceChatSoundWave : public USoundWave
{
}; // Size: 0x460

#endif
