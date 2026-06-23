#ifndef UE4SS_SDK_BP_FirstPersonCharacter_cLeon_Character_Hunter_HPP
#define UE4SS_SDK_BP_FirstPersonCharacter_cLeon_Character_Hunter_HPP

class ABP_FirstPersonCharacter_cLeon_Character_Hunter_C : public ABP_FirstPersonCharacter_cLeon_Character_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C90 (size: 0x8)
    class USceneComponent* GunTop1;                                                   // 0x0C98 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0CA0 (size: 0x8)
    class USkeletalMeshComponent* LocalViewBody;                                      // 0x0CA8 (size: 0x8)
    class UStaticMeshComponent* crown;                                                // 0x0CB0 (size: 0x8)
    class USceneComponent* GunTop;                                                    // 0x0CB8 (size: 0x8)
    class UStaticMeshComponent* Gun1;                                                 // 0x0CC0 (size: 0x8)
    class UStaticMeshComponent* gun;                                                  // 0x0CC8 (size: 0x8)
    FVector StandRelativeCameraLocation;                                              // 0x0CD0 (size: 0x18)
    double GunCoolTime;                                                               // 0x0CE8 (size: 0x8)
    TArray<class ABP_FirstPersonPlayerState_C*> FoundTargetPlayerState;               // 0x0CF0 (size: 0x10)
    TMap<ABP_FirstPersonPlayerState_Online_cLeon_C*, int32> SendTargetInView;         // 0x0D00 (size: 0x50)
    class UMaterialInstanceDynamic* LocalTarget;                                      // 0x0D50 (size: 0x8)

    void CheckViewInPlayers(class ABP_FirstPersonCharacter_cLeon_Character_Survivor_C* TargetCharacter, int32& Rezult);
    void OnRep_FoundTargetPlayerState();
    void InpActEvt_IA_Shot_K2Node_EnhancedInputActionEvent_2(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void OnNotifyEnd_12AC243E438FB95C3F7F978927A1E9CD(FName NotifyName);
    void OnNotifyBegin_12AC243E438FB95C3F7F978927A1E9CD(FName NotifyName);
    void OnInterrupted_12AC243E438FB95C3F7F978927A1E9CD(FName NotifyName);
    void OnBlendOut_12AC243E438FB95C3F7F978927A1E9CD(FName NotifyName);
    void OnCompleted_12AC243E438FB95C3F7F978927A1E9CD(FName NotifyName);
    void InpActEvt_IA_Crouch_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Jump_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void OnNotifyEnd_53A71DDF483CC968C1A61DAF788E875A(FName NotifyName);
    void OnNotifyBegin_53A71DDF483CC968C1A61DAF788E875A(FName NotifyName);
    void OnInterrupted_53A71DDF483CC968C1A61DAF788E875A(FName NotifyName);
    void OnBlendOut_53A71DDF483CC968C1A61DAF788E875A(FName NotifyName);
    void OnCompleted_53A71DDF483CC968C1A61DAF788E875A(FName NotifyName);
    void OnNotifyEnd_B6C494744BD8085F199D4791408CEB6E(FName NotifyName);
    void OnNotifyBegin_B6C494744BD8085F199D4791408CEB6E(FName NotifyName);
    void OnInterrupted_B6C494744BD8085F199D4791408CEB6E(FName NotifyName);
    void OnBlendOut_B6C494744BD8085F199D4791408CEB6E(FName NotifyName);
    void OnCompleted_B6C494744BD8085F199D4791408CEB6E(FName NotifyName);
    void OnNotifyEnd_85995EF044945821EC08CDAD261FDD89(FName NotifyName);
    void OnNotifyBegin_85995EF044945821EC08CDAD261FDD89(FName NotifyName);
    void OnInterrupted_85995EF044945821EC08CDAD261FDD89(FName NotifyName);
    void OnBlendOut_85995EF044945821EC08CDAD261FDD89(FName NotifyName);
    void OnCompleted_85995EF044945821EC08CDAD261FDD89(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void KillPlayer(class ABP_FirstPersonCharacter_cLeon_Character_C* FirstPersonCharacter, class ABP_FirstPersonPlayerState_C* SourcePlayerState);
    void PlayerControllerSetup();
    void SpawnShotEffect(Local)(FVector Endpoint, bool IsHit, FRotator HitRotation, int32 Seed);
    void SpawnShotEffect(Server)(FVector Endpoint, bool IsHit, FRotator HitRotation, int32 Seed);
    void SpawnShotEffect(Client)(FVector Endpoint, bool IsHit, FRotator HitRotation, int32 Seed);
    void ShowCrown();
    void CheckViewInSurvivor();
    void SendToView();
    void AddtoViewDatas(Server)(const TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& PlayerStates, const TArray<int32>& Points);
    void ChangeViewEnd();
    void ChangeViewMode(FName ModeName, bool Quick);
    void AntiChatTrace(FVector End, class ABP_FirstPersonCharacter_cLeon_Character_C* Target);
    void HitSuccess(class ABP_FirstPersonCharacter_cLeon_Character_C* FirstPersonCharacter);
    void ExecuteUbergraph_BP_FirstPersonCharacter_cLeon_Character_Hunter(int32 EntryPoint);
}; // Size: 0xD58

#endif
