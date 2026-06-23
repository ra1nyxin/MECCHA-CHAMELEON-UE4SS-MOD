#ifndef UE4SS_SDK_BP_FirstPersonPlayerState_Online_cLeon_HPP
#define UE4SS_SDK_BP_FirstPersonPlayerState_Online_cLeon_HPP

class ABP_FirstPersonPlayerState_Online_cLeon_C : public ABP_FirstPersonPlayerState_Online_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03B8 (size: 0x8)
    bool ModState;                                                                    // 0x03C0 (size: 0x1)
    class ABP_PlayerController_cLeon_C* As BP Player Controller C Leon;               // 0x03C8 (size: 0x8)
    int32 EEYANPoint;                                                                 // 0x03D0 (size: 0x4)
    class UBP_Online_SaveData_C* As BP Online Save Data;                              // 0x03D8 (size: 0x8)
    int32 CurrentEEYAN_Point;                                                         // 0x03E0 (size: 0x4)
    FBP_FirstPersonPlayerState_Online_cLeon_CEEYANChange EEYANChange;                 // 0x03E8 (size: 0x10)
    void EEYANChange();

    void OnRep_CurrentEEYAN_Point();
    void OnWriteUserFileCanceled_0646E9BD4A18BBF176FCAEA4EB4F18EF(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnWriteUserFileProgress64_0646E9BD4A18BBF176FCAEA4EB4F18EF(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnWriteUserFileComplete_0646E9BD4A18BBF176FCAEA4EB4F18EF(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnCallFailed_0646E9BD4A18BBF176FCAEA4EB4F18EF(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void ReceiveBeginPlay();
    void SetModState(bool ModState);
    void GiveEEYAN(class ABP_FirstPersonPlayerState_Online_cLeon_C* PlayerState);
    void ReciveEEYAN(class ABP_FirstPersonPlayerState_Online_cLeon_C* Source);
    void WriteEEYANPoint();
    void UpdateEEYANPoint(Local)(int32 CurrentEEYAN_Point);
    void UpdateEEYANPoint(Server)(int32 CurrentEEYAN_Point);
    void ExecuteUbergraph_BP_FirstPersonPlayerState_Online_cLeon(int32 EntryPoint);
    void EEYANChange__DelegateSignature();
}; // Size: 0x3F8

#endif
