#ifndef UE4SS_SDK_UniversalVoiceChatPro_HPP
#define UE4SS_SDK_UniversalVoiceChatPro_HPP

#include "UniversalVoiceChatPro_enums.hpp"

class APlayerVoiceChatActor : public AActor
{
    class USceneComponent* RootSceneComponent;                                        // 0x02A8 (size: 0x8)
    class UMicrophoneSpeakComponent* MicrophoneSpeakComponent;                        // 0x02B0 (size: 0x8)
    class APlayerState* ownerPlayerState;                                             // 0x02B8 (size: 0x8)
    int32 idVoiceChat;                                                                // 0x02C0 (size: 0x4)
    FString playerName;                                                               // 0x02C8 (size: 0x10)
    bool IsMicrophoneOn;                                                              // 0x02D8 (size: 0x1)
    float voiceVolume;                                                                // 0x02DC (size: 0x4)
    TArray<int32> radioChannelSubscribed;                                             // 0x02E0 (size: 0x10)
    FString pathToAttenuationAsset;                                                   // 0x02F0 (size: 0x10)
    FString pathToSourceChainEffectAsset;                                             // 0x0300 (size: 0x10)
    bool ServerPerformAntiCheat;                                                      // 0x0310 (size: 0x1)
    bool AntiCheatAllowUseProximity;                                                  // 0x0311 (size: 0x1)
    bool AntiCheatAllowUseGlobal;                                                     // 0x0312 (size: 0x1)
    float AntiCheatMaxProximityRange;                                                 // 0x0314 (size: 0x4)
    FPlayerVoiceChatActorOnPlayerNameReceived OnPlayerNameReceived;                   // 0x0318 (size: 0x10)
    void PlayerNameReceived(FString Name);
    FPlayerVoiceChatActorOnIsMicrophoneOnReceived OnIsMicrophoneOnReceived;           // 0x0328 (size: 0x10)
    void PlayerMicrophoneOnReceived(bool IsMicrophoneOn);

    void setOverrideLocallySourceEffectPath(bool enableSourceEffect, bool overrideLocally, FString _pathToSourceEffectAsset);
    void setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, FString _pathToAttenuationAsset);
    void setLocallyMultiplierVolume(float multiplierVolume);
    void ServerSetSourceChainEffect(bool enableSourceChainEffect, FString _pathToSourceChainEffect);
    void ServerSetMaxProximityRange(float _maxProximityRange);
    void ServerSetAttenuation(bool enableAttenuation, FString _pathToAttenuationAsset);
    void ServerSetAllowUseProximity(bool _allowUseRange);
    void ServerSetAllowUseGlobal(bool _allowUseGlobal);
    void ServerRemoveChannel(int32 channelToRemove);
    void ServerAddChannel(int32 channelToAdd);
    void RPCServerUpdatePosAudioComp(FVector worldPos, FRotator worldRotation);
    void RPCClientSetSourceChainEffectPath(FString _pathToSourceChainEffectAsset);
    void RPCClientSetPlayerName(FString Name);
    void RPCClientSetMicrophoneVolume(float Volume);
    void RPCClientSetIsMicrophoneOn(bool _isMicrophoneOn);
    void RPCClientSetAttenuationPath(FString _attenuationPath);
    void RPCClientAskRemoveChannel(int32 channelToRemove);
    void RPCClientAskAddChannel(int32 channelToAdd);
    void RepNotifyVoiceVolume();
    void RepNotifySourceEffectAsset();
    void RepNotifyPlayerName();
    void RepNotifyMicComp();
    void RepNotifyIsMicrophoneOn();
    void RepNotifyAttenuationAsset();
    void PlayerNameReceived__DelegateSignature(FString Name);
    void PlayerMicrophoneOnReceived__DelegateSignature(bool IsMicrophoneOn);
    void muteAudio(bool isMute);
    bool IsMicrophoneComponentValid();
    float getLocallyMultiplierVolume();
    void DelegateEndPlayOwner(class AActor* act, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
}; // Size: 0x338

class UAudioCaptureAndroid : public UBlueprintFunctionLibrary
{

    void AndroidMicrophoneStop(class UMicrophoneSpeakComponent* callbackComp);
    bool AndroidMicrophoneStart(class UMicrophoneSpeakComponent* callbackComp, int32 sampleRateToUse);
    bool AndroidHasPermission();
    void AndroidAskPermission();
}; // Size: 0x28

class UMicrophoneSpeakComponent : public UActorComponent
{
    FMicrophoneSpeakComponentOnDataMicrophoneReceived OnDataMicrophoneReceived;       // 0x00B8 (size: 0x10)
    void DataMicrophoneReceived(const TArray<uint8>& Data);
    FMicrophoneSpeakComponentOnMicrophoneVolumeReceived OnMicrophoneVolumeReceived;   // 0x00C8 (size: 0x10)
    void MicrophoneVolumeReceived(float Volume);
    float latestVolume;                                                               // 0x00F8 (size: 0x4)
    class UAudioComponent* VoiceAudioComponent;                                       // 0x0138 (size: 0x8)
    class USoundWaveProcedural* VoiceSoundWaveProcedural;                             // 0x0140 (size: 0x8)

    bool startSpeaking(bool _shouldHearMyOwnVoice, bool IsGlobal, TArray<int32> radioChannel, bool useRange, float MaxRange);
    void SetVoiceVolume(float Volume);
    void setSourceChainEffectAssetPath(bool enableSourceChainEffect, FString _pathToSourceChainEffect);
    void setOverrideLocallySourceEffectPath(bool enableSourceEffect, bool overrideLocally, FString _pathToSourceEffectAsset);
    void setOverrideLocallyAttenuationPath(bool enableAttenuation, bool overrideLocally, FString _pathToAttenuationAsset);
    void setLocallyMultiplierVolume(float multiplierVolume);
    void setAttenuationAssetPath(bool enableAttenuation, FString _pathToAttenuationAsset);
    void RPCServerBroadcastVoiceData(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    void RPCReceiveVoiceFromServer(class UMicrophoneSpeakComponent* compToOutputVoice, const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    void RPCClientTransmitVoiceData(const TArray<uint8>& Data, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec, bool _isGlobal, const TArray<int32>& _radioChannel, bool _useRange, float _maxRange);
    void payloadReceivedVoiceData(const TArray<uint8>& dataEncoded, int32 SampleRate, int32 NumChannels, int32 PCMSize, int32 opusFramePerSec);
    void muteAudio(bool _isMuted);
    void MicrophoneVolumeReceived__DelegateSignature(float Volume);
    bool isPlayingAudioVoice();
    bool initAudioResources(int32 voiceSampleRate, int32 _voiceNumChannels, int32 opusFramesPerSec);
    float getLocallyMultiplierVolume();
    void endSpeaking();
    void DataMicrophoneReceived__DelegateSignature(const TArray<uint8>& Data);
}; // Size: 0x268

class UUniversalVoiceChat : public UBlueprintFunctionLibrary
{

    bool VoiceChatWasInitAudioVoiceChatQuality();
    void VoiceChatUseAndroidCommunicationMode(bool use);
    bool VoiceChatStopSpeak();
    bool VoiceChatStartSpeakTeamArray(bool _shouldHearMyOwnVoice, bool IsGlobal, TArray<int32> radioChannel, bool useProximity, float maxProximityRange);
    bool VoiceChatStartSpeak(bool _shouldHearMyOwnVoice, bool IsGlobal, int32 radioChannel, bool useProximity, float maxProximityRange);
    void VoiceChatSetThresholdSendData(float thresholdSendData);
    bool VoiceChatSetSourceChainEffectPath(bool enableSourceChainEffect, FString _pathToSourceChainEffectAsset);
    void VoiceChatSetSomeoneOverrideLocallySourceEffectPath(const class UObject* WorldContextObject, bool enableSourceEffect, bool overrideLocally, FString _pathToSourceEffectAsset, class APlayerState* playerToOverride);
    void VoiceChatSetSomeoneOverrideLocallyAttenuationPath(const class UObject* WorldContextObject, bool enableAttenuation, bool overrideLocally, FString _pathToAttenuationAsset, class APlayerState* playerToOverride);
    void VoiceChatSetSomeoneLocallyMultiplierVolume(const class UObject* WorldContextObject, float multiplierVolume, class APlayerState* playerToOverride);
    void VoiceChatSetRawMicrophoneGain(float Gain);
    bool VoiceChatSetPlayerName(FString Name);
    void VoiceChatSetMuteAllPlayers(bool _muteAll);
    bool VoiceChatSetMicrophoneVolume(float Volume);
    void VoiceChatSetHardwareAudioInput(FString audioInputDeviceName);
    void VoiceChatSetGlobalVolume(float globalVolume);
    void VoiceChatSetDefaultTickRateUpdateLocation(float tickRate);
    bool VoiceChatSetAttenuationPath(bool enableAttenuation, FString _attenuationPath);
    bool VoiceChatRemoveChannel(int32 channelToRemove);
    void VoiceChatLocalMuteSomeone(const class UObject* WorldContextObject, class APlayerState* playerToMute, bool shouldMute);
    bool VoiceChatLocalIsMutedSomeone(const class UObject* WorldContextObject, class APlayerState* playerToCheckMute);
    bool VoiceChatIsSpeaking();
    bool VoiceChatInitAudioVoiceChatQuality(int32 _sampleRate, int32 _numChannels, EOpusFramePerSec _opusFramePerSec);
    bool VoiceChatHasMicrophonePermission();
    float VoiceChatGetSomeoneLocallyMultiplierVolume(const class UObject* WorldContextObject, class APlayerState* playerToOverride);
    class APlayerVoiceChatActor* VoiceChatGetMyLocalPlayerVoiceChat();
    bool VoiceChatGetMuteAllPlayers();
    float VoiceChatGetMicrophoneRuntimeVolumeFromPlayerState(const class UObject* WorldContextObject, class APlayerState* fromPlayerState);
    void VoiceChatGetAudioDevicesList(TArray<FString>& OutDevices);
    class APlayerVoiceChatActor* VoiceChatGetActorFromPlayerState(const class UObject* WorldContextObject, class APlayerState* fromPlayerState);
    bool VoiceChatEnableShouldHearMyOwnVoice(bool Enable);
    bool VoiceChatCheckRegisteredToChannel(int32 channelToCheck);
    void VoiceChatAskMicrophonePermission();
    bool VoiceChatAddChannel(int32 channelToAdd);
    void RegisterCallbackNewVoiceChatActor(const FRegisterCallbackNewVoiceChatActorDelegate& Delegate);
    void RegisterCallbackMyVoiceChatActorReady(const FRegisterCallbackMyVoiceChatActorReadyDelegate& Delegate);
    void RegisterCallbackDeleteVoiceChatActor(const FRegisterCallbackDeleteVoiceChatActorDelegate& Delegate);
    bool IsMyPlayerVoiceChatActorReady();
}; // Size: 0x28

#endif
