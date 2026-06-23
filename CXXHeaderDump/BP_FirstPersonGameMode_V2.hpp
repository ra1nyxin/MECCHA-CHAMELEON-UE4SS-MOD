#ifndef UE4SS_SDK_BP_FirstPersonGameMode_V2_HPP
#define UE4SS_SDK_BP_FirstPersonGameMode_V2_HPP

class ABP_FirstPersonGameMode_V2_C : public AMyGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    class UWBP_Pause_C* UIPause;                                                      // 0x0360 (size: 0x8)
    FBP_FirstPersonGameMode_V2_CDeleteUI DeleteUI;                                    // 0x0368 (size: 0x10)
    void DeleteUI();
    TArray<class AController*> ActivePlayers;                                         // 0x0378 (size: 0x10)
    TArray<class AController*> SpawnedControllers;                                    // 0x0388 (size: 0x10)
    FBP_FirstPersonGameMode_V2_CUpdateSpawnControllers UpdateSpawnControllers;        // 0x0398 (size: 0x10)
    void UpdateSpawnControllers();
    bool UseVoiceChat;                                                                // 0x03A8 (size: 0x1)
    class USoundAttenuation* VoiceChatSoundAtt;                                       // 0x03B0 (size: 0x8)

    void MakeUpdateGamePhaseSettings(FString GamePhaseName, FOnlineSessionSettingsBP& StructOut);
    void MakeUpdateCanJoinSettings(bool JoinState, FOnlineSessionSettingsBP& StructOut);
    void SetupVoiceChatPlayer(class AActor* Owner);
    void MakeUpdaeNumPlayerSettings(int32 NewConnectionNum, FOnlineSessionSettingsBP& StructOut);
    void UpdateSpawnedControllers();
    void CheckBindItem(class ABP_FirstPersonCharacter_Main_C* Character, class AActor* Actor);
    void OnUpdateSessionComplete_DE97626F47E9317836E9DF84671CB5B8(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_DE97626F47E9317836E9DF84671CB5B8(FName SessionName, bool bWasSuccessful);
    void OnUpdateSessionComplete_0B8BFF2042E91A2A39DAD2BE5940BD84(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_0B8BFF2042E91A2A39DAD2BE5940BD84(FName SessionName, bool bWasSuccessful);
    void OnUpdateSessionComplete_4C3FEC454ACE9E1456DA7DAD80AB4E11(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_4C3FEC454ACE9E1456DA7DAD80AB4E11(FName SessionName, bool bWasSuccessful);
    void ReceiveBeginPlay();
    void K2_PostLogin(class APlayerController* NewPlayer);
    void K2_OnLogout(class AController* ExitingController);
    void Spawn(class AController* Controller);
    void UpdateSessionPlayerNum();
    void UpdateJoinState(bool JoinState);
    void NumUpdateDelay();
    void UpdateGamePhaseSession(FString GamePhaseName);
    void DelayUpdate();
    void ExecuteUbergraph_BP_FirstPersonGameMode_V2(int32 EntryPoint);
    void UpdateSpawnControllers__DelegateSignature();
    void DeleteUI__DelegateSignature();
}; // Size: 0x3B8

#endif
