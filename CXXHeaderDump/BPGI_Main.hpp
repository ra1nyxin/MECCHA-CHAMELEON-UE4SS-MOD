#ifndef UE4SS_SDK_BPGI_Main_HPP
#define UE4SS_SDK_BPGI_Main_HPP

class UBPGI_Main_C : public URedpointGameInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    double CursorSpeed;                                                               // 0x0230 (size: 0x8)
    FString InputDeviceName;                                                          // 0x0238 (size: 0x10)
    class ULINK_ServerSaveData_C* LINK_ServerSaveData;                                // 0x0248 (size: 0x8)
    class UBP_Online_SaveData_C* CreatedSaveGame;                                     // 0x0250 (size: 0x8)
    bool CloudSaveSuccess;                                                            // 0x0258 (size: 0x1)
    FBPGI_Main_CCloudSaveSyncState CloudSaveSyncState;                                // 0x0260 (size: 0x10)
    void CloudSaveSyncState(bool Rezult);
    bool CloudSaveCheck;                                                              // 0x0270 (size: 0x1)

    void UpdateSettings();
    void OnWriteUserFileCanceled_0646E9BD4A18BBF176FCAEA43F9771E1(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnWriteUserFileProgress64_0646E9BD4A18BBF176FCAEA43F9771E1(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnWriteUserFileComplete_0646E9BD4A18BBF176FCAEA43F9771E1(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnCallFailed_0646E9BD4A18BBF176FCAEA43F9771E1(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnWriteUserFileCanceled_0646E9BD4A18BBF176FCAEA44F5EA191(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnWriteUserFileProgress64_0646E9BD4A18BBF176FCAEA44F5EA191(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnWriteUserFileComplete_0646E9BD4A18BBF176FCAEA44F5EA191(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnCallFailed_0646E9BD4A18BBF176FCAEA44F5EA191(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename, int64 BytesWritten);
    void OnReadUserFileComplete_4473CEAA43FDA8DFD02079B1F2500B1B(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    void OnCallFailed_4473CEAA43FDA8DFD02079B1F2500B1B(bool bWasSuccessful, const FUniqueNetIdRepl& UserId, FString Filename);
    void ReceiveInit();
    void CloudSaveSync();
    void ExecuteUbergraph_BPGI_Main(int32 EntryPoint);
    void CloudSaveSyncState__DelegateSignature(bool Rezult);
}; // Size: 0x271

#endif
