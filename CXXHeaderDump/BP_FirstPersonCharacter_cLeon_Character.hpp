#ifndef UE4SS_SDK_BP_FirstPersonCharacter_cLeon_Character_HPP
#define UE4SS_SDK_BP_FirstPersonCharacter_cLeon_Character_HPP

class ABP_FirstPersonCharacter_cLeon_Character_C : public ABP_FirstPersonCharacter_Main_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B30 (size: 0x8)
    class UNetworkPhysicsSettingsComponent* NetworkPhysicsSettings;                   // 0x0B38 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0B40 (size: 0x8)
    class UWidgetComponent* Nameplate;                                                // 0x0B48 (size: 0x8)
    class ULBPC_ComponentDistanceVisualUpdate_C* LBPC_ComponentDistanceVisualUpdate;  // 0x0B50 (size: 0x8)
    class UDynamicCapsuleHeightControlComponent* DynamicCapsuleHeightControl;         // 0x0B58 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0B60 (size: 0x8)
    class URuntimePaintableComponent* RuntimePaintable;                               // 0x0B68 (size: 0x8)
    class UScreenSpaceBrushQuery* ScreenSpaceBrushQuery;                              // 0x0B70 (size: 0x8)
    bool IsPaintViewLock;                                                             // 0x0B78 (size: 0x1)
    bool IsPaintMode;                                                                 // 0x0B79 (size: 0x1)
    FVector2D PaintCameraDistanceRange;                                               // 0x0B80 (size: 0x10)
    FName CurrentViewportMode;                                                        // 0x0B90 (size: 0x8)
    class UWBP_PaintMode_Cursor_C* PaintModeWidget;                                   // 0x0B98 (size: 0x8)
    class ABP_BrushPlane_C* BrushPlane;                                               // 0x0BA0 (size: 0x8)
    FLinearColor CurrentPaintColor;                                                   // 0x0BA8 (size: 0x10)
    FVector2D BrushRadiusRange;                                                       // 0x0BB8 (size: 0x10)
    FVector2D PreLocation;                                                            // 0x0BC8 (size: 0x10)
    class ABP_PlayerController_cLeon_C* PlayerController_cLeon;                       // 0x0BD8 (size: 0x8)
    bool IsViewDefeultFPS;                                                            // 0x0BE0 (size: 0x1)
    FVector2D BrushMetallicAndRoughness;                                              // 0x0BE8 (size: 0x10)
    bool IsBrushing;                                                                  // 0x0BF8 (size: 0x1)
    bool CompleteInitialize;                                                          // 0x0BF9 (size: 0x1)
    class UWBP_EmoteMenu_C* Emote Menu Widget;                                        // 0x0C00 (size: 0x8)
    bool IsEmoteSelect;                                                               // 0x0C08 (size: 0x1)
    TArray<FST_ItemCoreDatas> EmoteCoreDatas;                                         // 0x0C10 (size: 0x10)
    class UAnimMontage* CurrentPlayEmote;                                             // 0x0C20 (size: 0x8)
    bool CanEmote;                                                                    // 0x0C28 (size: 0x1)
    bool BodyShadow;                                                                  // 0x0C29 (size: 0x1)
    bool IsHunter;                                                                    // 0x0C2A (size: 0x1)
    bool UseKeepCamera;                                                               // 0x0C2B (size: 0x1)
    bool IsLiveSelf;                                                                  // 0x0C2C (size: 0x1)
    class ABP_GameState_cLeon_C* Game State C Leon;                                   // 0x0C30 (size: 0x8)
    class ABP_FirstPersonPlayerState_Online_cLeon_C* LastMyPlayerState;               // 0x0C38 (size: 0x8)
    bool BodyVisibility;                                                              // 0x0C40 (size: 0x1)
    bool LocalFound;                                                                  // 0x0C41 (size: 0x1)
    double CurrentRadius;                                                             // 0x0C48 (size: 0x8)
    bool HideBlock;                                                                   // 0x0C50 (size: 0x1)
    bool CurrentNamePlateVisibility;                                                  // 0x0C51 (size: 0x1)
    int32 NamePlateVisibilityType;                                                    // 0x0C54 (size: 0x4)
    FSlateColor NamePlateColor;                                                       // 0x0C58 (size: 0x14)
    FVector2D BrushSizeChangeStartPos;                                                // 0x0C70 (size: 0x10)
    class ABP_SpectatePawn_cLeon_C* CurrentSpectatePawn;                              // 0x0C80 (size: 0x8)
    bool CanFreeSpectate;                                                             // 0x0C88 (size: 0x1)
    bool CurrentLocalAlpha;                                                           // 0x0C89 (size: 0x1)
    bool CanMove;                                                                     // 0x0C8A (size: 0x1)

    void GetMoveSpeedMultiply(double& MultiplyValue);
    void SetAlpha(bool IsVisibile);
    void AlpahUpdate();
    void OnRep_BodyVisibility();
    bool CanDash();
    void OnRep_BodyShadow();
    void ProduceInput(int32 SimTimeMs, FMoverInputCmdContext& InputCmdResult);
    void OnRep_AnimationIndex();
    void PaintViewLookUpdate();
    void Zoom(double PlusValue);
    void CanLook(bool& Rezult);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_23(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Zoom_K2Node_EnhancedInputActionEvent_22(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Zoom_K2Node_EnhancedInputActionEvent_21(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Zoom_K2Node_EnhancedInputActionEvent_20(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_KeepRotation_K2Node_EnhancedInputActionEvent_19(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_KeepRotation_K2Node_EnhancedInputActionEvent_18(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_KeepRotation_K2Node_EnhancedInputActionEvent_17(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_ZoomWheel_K2Node_EnhancedInputActionEvent_16(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Jump_K2Node_EnhancedInputActionEvent_15(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Jump_K2Node_EnhancedInputActionEvent_14(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Jump_K2Node_EnhancedInputActionEvent_13(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_PaintStart_K2Node_EnhancedInputActionEvent_12(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_Zero_K2Node_InputDebugKeyEvent_1(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_B_K2Node_InputDebugKeyEvent_0(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_IA_Emote_K2Node_EnhancedInputActionEvent_11(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Emote_K2Node_EnhancedInputActionEvent_10(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Emote_K2Node_EnhancedInputActionEvent_9(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_PaintShot_K2Node_EnhancedInputActionEvent_8(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_ColorPick_K2Node_EnhancedInputActionEvent_7(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_ColorPick_K2Node_EnhancedInputActionEvent_6(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_ColorPick_K2Node_EnhancedInputActionEvent_5(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_4(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_3(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Dash_K2Node_EnhancedInputActionEvent_2(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Shadow_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Provocation_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_Two_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Five_K2Node_InputKeyEvent_0(FKey Key);
    void BndEvt__BP_FirstPersonCharacter_cLeon_Character_ExtendedPhysicsCharacterMoverComponent_K2Node_ComponentBoundEvent_0_Mover_OnStanceChanged__DelegateSignature(EStanceMode OldStance, EStanceMode NewStance);
    void CustomCrouch(Client)(double Height, bool Is Crouching Input);
    void SetIsClimbing(bool IsClimbing);
    void CustomCrouch(Server)(double Height, bool Is Crouching Input);
    void DeltaUpdate();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveRestarted();
    void DeathPlayer();
    void PlayerControllerSetup();
    void ChangeViewMode(FName ModeName, bool Quick);
    void SelectEmote(TSubclassOf<class ABP_EmoteData_Base_C> EmoteData, int32 Index);
    void PaintTick();
    void SetCastShadow(bool BodyShadow);
    void SetCastShadow(Server)(bool BodyShadow);
    void PaintModeCancel();
    void DashCancel();
    void ShowDeathWidget();
    void ClosePaintMode();
    void ReceiveDestroyed();
    void Ragdoll();
    void SetStencilValue(Game)(int32 StencilValue);
    void BindName(FString Name);
    void NamePlateUpdate();
    void CloseEmoteWheel();
    void Provocation(Server)();
    void Provocation(Client)();
    void SetupPlayerState();
    void ShowAllSurvivors(Local)(const TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*>& LivePlayerStates);
    void Provocation(Local)();
    void PastDecal(int32 DecalIndex);
    void SpawnDeathSplash();
    void SwitchNamePlateVisibility();
    void PlayTeleportMovie(LocalClient)();
    void CameraReset();
    void ForceShowBody();
    void GoToSpectate(bool CanBackSpectate);
    void GameEndMoveStop();
    void GameEndResetState(bool IsLive);
    void ResetRagdoll();
    void SetStencilValue(Force)(int32 StencilValue);
    void EEYANChange();
    void ExecuteUbergraph_BP_FirstPersonCharacter_cLeon_Character(int32 EntryPoint);
}; // Size: 0xC8B

#endif
