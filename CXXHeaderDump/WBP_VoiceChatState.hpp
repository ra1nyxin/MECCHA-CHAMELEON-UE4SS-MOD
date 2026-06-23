#ifndef UE4SS_SDK_WBP_VoiceChatState_HPP
#define UE4SS_SDK_WBP_VoiceChatState_HPP

class UWBP_VoiceChatState_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_1;                                            // 0x0348 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x0350 (size: 0x8)
    class UBorder* MicrophoneOff;                                                     // 0x0358 (size: 0x8)
    class UImage* Microphone;                                                         // 0x0360 (size: 0x8)
    class UBorder* HeadPhoneOff;                                                      // 0x0368 (size: 0x8)
    class UImage* Headphone;                                                          // 0x0370 (size: 0x8)
    class URedpointVoiceChatComponent* VoiceChatComponent;                            // 0x0378 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* As BP First Person Character;              // 0x0380 (size: 0x8)
    bool BeforeState;                                                                 // 0x0388 (size: 0x1)
    class USoundAttenuation* VoiceChatSoundAtt;                                       // 0x0390 (size: 0x8)
    int32 CurrentChannel;                                                             // 0x0398 (size: 0x4)

    bool SetMicrophoneVolume(float Volume);
    void ChannelCheck(int32 channelToCheck);
    void UpdateVisual();
    void InpActEvt_IA_VoiceChatHearToggle_K2Node_EnhancedInputActionEvent_3(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_VoiceChatHearToggle_K2Node_EnhancedInputActionEvent_2(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_VoiceChatTalkToggle_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_VoiceChatTalkToggle_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void Reset();
    void MovieChange(bool IsLocal);
    void IsCinemaModeCheck();
    void ConnectEvent();
    void PreConstruct(bool IsDesignTime);
    void UpdateEvent();
    void PlayerStateGet();
    void ChannelChange(int32 NewChannel, const TArray<int32>& RemoveTarget);
    void Construct();
    void ExecuteUbergraph_WBP_VoiceChatState(int32 EntryPoint);
}; // Size: 0x39C

#endif
