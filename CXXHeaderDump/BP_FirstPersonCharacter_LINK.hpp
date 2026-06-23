#ifndef UE4SS_SDK_BP_FirstPersonCharacter_LINK_HPP
#define UE4SS_SDK_BP_FirstPersonCharacter_LINK_HPP

class ABP_FirstPersonCharacter_LINK_C : public ABP_FirstPersonCharacter_Main_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B30 (size: 0x8)
    class UBillboardComponent* ItemDropPoint;                                         // 0x0B38 (size: 0x8)
    class UBPC_LinkCharacterCustomControl_C* BPC_LinkCharacterCustomControl;          // 0x0B40 (size: 0x8)
    class UWidgetComponent* Nameplate;                                                // 0x0B48 (size: 0x8)
    class ULBPC_ComponentDistanceVisualUpdate_C* LBPC_ComponentDistanceVisualUpdate;  // 0x0B50 (size: 0x8)
    class UBPC_LongInputControl_C* BPC_LongInputControl_LeftClick;                    // 0x0B58 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce_2Leg_C* CPP_AC_CustomPhysicsForce_2Leg;          // 0x0B60 (size: 0x8)
    class UAudioCaptureComponent* AudioCapture;                                       // 0x0B68 (size: 0x8)
    class UPhysicsHandleComponent* PhysicsHandle_R;                                   // 0x0B70 (size: 0x8)
    class UBPC_LINK_HandControl_C* BPC_LINK_HandControl_R;                            // 0x0B78 (size: 0x8)
    FTransform HandTransform_R;                                                       // 0x0B80 (size: 0x60)
    double HandWeight_R;                                                              // 0x0BE0 (size: 0x8)
    double MaxHandLength;                                                             // 0x0BE8 (size: 0x8)
    FTransform HandTransform_L;                                                       // 0x0BF0 (size: 0x60)
    double HandWeight_L;                                                              // 0x0C50 (size: 0x8)
    double HandPower;                                                                 // 0x0C58 (size: 0x8)
    class UWBP_LINK_MainUI_C* LINK_MainUI;                                            // 0x0C60 (size: 0x8)
    TArray<class TSubclassOf<UGameplayAbility>> GiveAbilitys;                         // 0x0C68 (size: 0x10)
    class ABP_FirstPersonGameMode_Online_LINK_C* GameMode_LINK;                       // 0x0C78 (size: 0x8)
    bool IsFreeze;                                                                    // 0x0C80 (size: 0x1)
    double AttractionDistance;                                                        // 0x0C88 (size: 0x8)
    class ABP_FirstPersonPlayerState_LINK_C* MyPlayerState_LINK;                      // 0x0C90 (size: 0x8)
    class UMaterialInstanceDynamic* BodyMaterial;                                     // 0x0C98 (size: 0x8)
    double CurrentVoiceScale;                                                         // 0x0CA0 (size: 0x8)
    FTransform DeathPointTransform;                                                   // 0x0CB0 (size: 0x60)
    float Delta Seconds;                                                              // 0x0D10 (size: 0x4)
    double OverDamageValue;                                                           // 0x0D18 (size: 0x8)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x0D20 (size: 0x8)
    class ABP_MiniPenguin_C* MyMiniPenguin;                                           // 0x0D28 (size: 0x8)
    class ABP_TargetPinMain_C* TargetPin;                                             // 0x0D30 (size: 0x8)
    class ABP_FirstPersonPlayerController_LINK_C* As BP First Person Player Controller LINK; // 0x0D38 (size: 0x8)
    double BeforeBaseWeight;                                                          // 0x0D40 (size: 0x8)
    double DefaultHealth;                                                             // 0x0D48 (size: 0x8)
    double RevivalHealth;                                                             // 0x0D50 (size: 0x8)
    bool IsEmoteSelect;                                                               // 0x0D58 (size: 0x1)
    class UWBP_EmoteMenu_C* EmoteMenuWidget;                                          // 0x0D60 (size: 0x8)
    bool CurrentEmotePlay;                                                            // 0x0D68 (size: 0x1)

    void GetIsDeath(bool& IsDeath);
    void GetMoveSpeedMultiply(double& MultiplyValue);
    void CanLook(bool& Rezult);
    void IsBackPackItem(class UObject* Actor, bool& Rezult, FST_ItemCoreDatas& CoreDatas);
    void SetSlot(int32 TargetSlotValue);
    void SetFreeHand();
    void CanSlotChange(bool& Rezult);
    void GetPlayerColor(FColor& MainColor);
    bool IsCanClimbing();
    void ResetAllStates();
    bool CanDash();
    bool IsLive();
    void ReleaseLeftItem();
    void UpdateNameplate(FString playerName);
    bool GetStateValue(FName TargetName);
    void AllWidgetShow();
    void AllWidgetHide();
    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetForceVelocity(class UBPC_LINK_HandControl_C* LINK_HandControl, class USceneComponent* SourcePositionComponent, double power, double DeltaSeconds, FVector& Velocity);
    void RezultCheck(const FHitResult& Hit, bool& Rezult, class AActor*& HitActor, FVector& ImpactPoint, class UPrimitiveComponent*& HitComponent);
    void OnDestroySessionComplete_9519D6EA4746536664CE01A6DA07331D(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_9519D6EA4746536664CE01A6DA07331D(FName SessionName, bool bWasSuccessful);
    void InpActEvt_U_K2Node_InputDebugKeyEvent_11(FKey Key, FInputActionValue ActionValue);
    void OnNotifyEnd_48F7AF4944B2851728DF84BCFBBCFCCA(FName NotifyName);
    void OnNotifyBegin_48F7AF4944B2851728DF84BCFBBCFCCA(FName NotifyName);
    void OnInterrupted_48F7AF4944B2851728DF84BCFBBCFCCA(FName NotifyName);
    void OnBlendOut_48F7AF4944B2851728DF84BCFBBCFCCA(FName NotifyName);
    void OnCompleted_48F7AF4944B2851728DF84BCFBBCFCCA(FName NotifyName);
    void InpActEvt_O_K2Node_InputDebugKeyEvent_10(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_Seven_K2Node_InputDebugKeyEvent_9(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_Five_K2Node_InputDebugKeyEvent_8(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_Six_K2Node_InputDebugKeyEvent_7(FKey Key, FInputActionValue ActionValue);
    void OnJoinSessionComplete_CDC98A21428CD47CDCC078B71D0D8394(FName SessionName, EOnJoinSessionCompleteResult_ Result);
    void OnCallFailed_CDC98A21428CD47CDCC078B71D0D8394(FName SessionName, EOnJoinSessionCompleteResult_ Result);
    void InpActEvt_IA_Pin_K2Node_EnhancedInputActionEvent_7(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_V_K2Node_InputDebugKeyEvent_6(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_M_K2Node_InputDebugKeyEvent_5(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_One_K2Node_InputKeyEvent_7(FKey Key);
    void InpActEvt_Two_K2Node_InputKeyEvent_6(FKey Key);
    void InpActEvt_Three_K2Node_InputKeyEvent_5(FKey Key);
    void InpActEvt_Four_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_L_K2Node_InputDebugKeyEvent_4(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_Ctrl_P_K2Node_InputDebugKeyEvent_3(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_Shift_P_K2Node_InputDebugKeyEvent_2(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_J_K2Node_InputDebugKeyEvent_1(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_K_K2Node_InputDebugKeyEvent_0(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_IA_RotateInput_K2Node_EnhancedInputActionEvent_6(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_RotateInput_K2Node_EnhancedInputActionEvent_5(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_RotateInput_K2Node_EnhancedInputActionEvent_4(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Emote_K2Node_EnhancedInputActionEvent_3(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Emote_K2Node_EnhancedInputActionEvent_2(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Emote_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Move_Default_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_NumPadOne_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_NumPadTwo_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_NumPadThree_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_NumPadFour_K2Node_InputKeyEvent_0(FKey Key);
    void OnDestroySessionComplete_59E542A947E50C239AD252B4B4A3520D(FName SessionName, bool bWasSuccessful);
    void OnCallFailed_59E542A947E50C239AD252B4B4A3520D(FName SessionName, bool bWasSuccessful);
    void Freeze(Server)();
    void Heat(double Value);
    void ConnectSignal(Server)();
    void ChangeWeight(double Value);
    void SetCurrentItem(int32 SlotIndex, FCPP_GameItemData ItemData, FST_ItemCoreDatas CoreData);
    void SetBodyVisibleState(int32 StateIndex);
    void ChangeViewMode(FName ModeName, bool Quick);
    void Freeze(Client)();
    void Grab(bool State);
    void Grab(Client)(bool State);
    void Unzip(Server)(FVector RespawnPosition);
    void Unzip(Client)();
    void ChangeCurrentState(FName StateName);
    void OnLanded_2(const FHitResult& Hit);
    void DamagedAnimation(double DamageValue, bool UnAvoidable);
    void SetHealthValue(LocalClient)(double TargetValue);
    void BndEvt__BP_FirstPersonCharacter_LINK_BPC_LongInputControl_LeftClick_K2Node_ComponentBoundEvent_1_SinglePush__DelegateSignature();
    void BndEvt__BP_FirstPersonCharacter_LINK_BPC_LongInputControl_LeftClick_K2Node_ComponentBoundEvent_2_LongPushStart__DelegateSignature();
    void BndEvt__BP_FirstPersonCharacter_LINK_BPC_LongInputControl_LeftClick_K2Node_ComponentBoundEvent_3_InputEnd__DelegateSignature(double PushTime);
    void OnSessionUserInviteAccepted(bool bWasSuccessful, int32 ControllerId, const FUniqueNetIdRepl& UserId, const FOnlineSessionSearchResultBP& InviteResult);
    void DropInventoryItem();
    void DropInventoryItem(Server)(int32 SlotIndex, FVector OverrideDropLocation, bool ForceNoDrop);
    void AddMainUI();
    void BndEvt__BP_FirstPersonCharacter_LINK_BPC_StaminaGaugeControl_K2Node_ComponentBoundEvent_4_ChangedValue__DelegateSignature(double UpdateValue);
    void OverClimbing();
    void SetHealthValue(Server)(double TargetValue);
    void ChangeStateValue(TEnumAsByte<EN_LINK_PlayerStateValueType::Type> PlayerStateValue, double Value);
    void SetUpEndPlayerState();
    void ReceiveDestroyed();
    void PinToTarget(Server)(FVector Destination, FTransform SpawnTransform);
    void NavigateEnd();
    void InventoryUpdateSignal();
    void ChangeInteractUITickEvent();
    void TargetPositionUpdate(FVector Position_R, FVector Position_L);
    void GeneratePin(FTransform SpawnTransform);
    void DestroyPin();
    void InventoryStackUpdateSignal();
    void SetSpectatingState(bool State);
    void Interact(Server)(class AActor* TargetActor, int32 SlotIndex);
    void ReceiveTick(float DeltaSeconds);
    void AimEvent(bool State);
    void ForceGrab(const class AActor* TargetActor);
    void BndEvt__BP_FirstPersonCharacter_LINK_BPC_LINK_HandControl_R_K2Node_ComponentBoundEvent_0_GrabEnd__DelegateSignature(class UPrimitiveComponent* GrabPrimitive);
    void UpdateBackpackWeight(double BackpackWeight);
    void SetForce(Server)(class UPrimitiveComponent* Primitive, FVector NewVel);
    void ShotEvent(bool State);
    void ReceiveBeginPlay();
    void SelectIndex(TSubclassOf<class ABP_EmoteData_Base_C> EmoteData, int32 Index);
    void EmoteStop();
    void BndEvt__BP_FirstPersonCharacter_LINK_BPC_LinkCharacterCustomControl_K2Node_ComponentBoundEvent_1_OnHeadAccessorieChange__DelegateSignature();
    void ResetPowerValue();
    void ShortageStamina();
    void Kick();
    void SetVoiceScale(Server)(double CurrentVoiceScale);
    void BndEvt__BP_FirstPersonCharacter_LINK_AudioCapture_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature(const float EnvelopeValue);
    void GiveAxe();
    void ExecuteUbergraph_BP_FirstPersonCharacter_LINK(int32 EntryPoint);
}; // Size: 0xD69

#endif
