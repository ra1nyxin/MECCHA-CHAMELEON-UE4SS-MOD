#ifndef UE4SS_SDK_BP_SpectatePawn_cLeon_HPP
#define UE4SS_SDK_BP_SpectatePawn_cLeon_HPP

class ABP_SpectatePawn_cLeon_C : public ASpectatorPawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0358 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0360 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* SpectateTarget;                            // 0x0368 (size: 0x8)
    class UWBP_Spectate_cLeon_C* SpectateWidget;                                      // 0x0370 (size: 0x8)
    class AController* SelfController;                                                // 0x0378 (size: 0x8)
    bool Current Name Plate Visibility;                                               // 0x0380 (size: 0x1)
    int32 NamePlateVisibilityType;                                                    // 0x0384 (size: 0x4)
    bool IsFreeCamera;                                                                // 0x0388 (size: 0x1)
    class ABP_PlayerController_cLeon_C* As BP Player Controller C Leon;               // 0x0390 (size: 0x8)
    class UFloatingPawnMovement* FloatingPawn;                                        // 0x0398 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* MyMainBody;                                // 0x03A0 (size: 0x8)
    bool CanBackBody;                                                                 // 0x03A8 (size: 0x1)
    class ABP_GameState_cLeon_C* As BP Game State C Leon;                             // 0x03B0 (size: 0x8)

    void OnRep_CanBackBody();
    void OnRep_SelfController();
    void InpActEvt_IA_Shot_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_Two_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_Four_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_RightMouseButton_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Five_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_One_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void SpectateTargetChange(class ABP_FirstPersonPlayerState_Online_cLeon_C* PlayerState, class APawn* Pawn);
    void ReceivePossessed(class AController* NewController);
    void Setup();
    void NamePlateUpdate();
    void SwitchNamePlateVisibility();
    void FreeCameraChange();
    void MiniReplicateMovement();
    void SetLocation(FVector NewLocation);
    void BackBody();
    void ProvocationRemote(class ABP_FirstPersonCharacter_cLeon_Character_C* Target);
    void ExecuteUbergraph_BP_SpectatePawn_cLeon(int32 EntryPoint);
}; // Size: 0x3B8

#endif
