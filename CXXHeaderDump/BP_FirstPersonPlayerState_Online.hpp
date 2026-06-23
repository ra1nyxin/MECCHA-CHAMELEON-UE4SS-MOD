#ifndef UE4SS_SDK_BP_FirstPersonPlayerState_Online_HPP
#define UE4SS_SDK_BP_FirstPersonPlayerState_Online_HPP

class ABP_FirstPersonPlayerState_Online_C : public ABP_FirstPersonPlayerState_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    FString CustomPlayerName;                                                         // 0x0388 (size: 0x10)
    FBP_FirstPersonPlayerState_Online_COnNameReplicate OnNameReplicate;               // 0x0398 (size: 0x10)
    void OnNameReplicate(FString Name);
    FBP_FirstPersonPlayerState_Online_CChangeVoiceChatChannel ChangeVoiceChatChannel; // 0x03A8 (size: 0x10)
    void ChangeVoiceChatChannel(int32 NewChannel, const TArray<int32>& RemoveTarget);

    void OnRep_CustomPlayerName();
    void OnDestroySessionComplete_003AED3545F20C424888CCAE2B80C441(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_003AED3545F20C424888CCAE2B80C441(FName SessionName, bool bWasSuccessful);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SetName(Server)(FString CustomPlayerName);
    void ReceiveDestroyed();
    void SetName(Replicate)();
    void Kick();
    void ExecuteUbergraph_BP_FirstPersonPlayerState_Online(int32 EntryPoint);
    void ChangeVoiceChatChannel__DelegateSignature(int32 NewChannel, const TArray<int32>& RemoveTarget);
    void OnNameReplicate__DelegateSignature(FString Name);
}; // Size: 0x3B8

#endif
