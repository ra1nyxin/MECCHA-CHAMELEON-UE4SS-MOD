#ifndef UE4SS_SDK_BP_PlayerController_cLeon_HPP
#define UE4SS_SDK_BP_PlayerController_cLeon_HPP

class ABP_PlayerController_cLeon_C : public ABP_FirstPersonPlayerController_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0768 (size: 0x8)
    class URuntimePaintRelayComponent* RuntimePaintRelay;                             // 0x0770 (size: 0x8)
    class UWBP_cLeonMain_C* MainWidget;                                               // 0x0778 (size: 0x8)
    double CameraFadeValue;                                                           // 0x0780 (size: 0x8)
    bool IsCanPenteration;                                                            // 0x0788 (size: 0x1)
    FBP_PlayerController_cLeon_CCanPenterationUpdate CanPenterationUpdate;            // 0x0790 (size: 0x10)
    void CanPenterationUpdate(bool IsCanPenteration);
    FBP_PlayerController_cLeon_CNamePlateVisibilityChange NamePlateVisibilityChange;  // 0x07A0 (size: 0x10)
    void NamePlateVisibilityChange(bool Visibility);
    bool IsPlayMovie;                                                                 // 0x07B0 (size: 0x1)
    bool WatchRankingVisibility;                                                      // 0x07B1 (size: 0x1)
    bool GlobalNameplateVisibility;                                                   // 0x07B2 (size: 0x1)
    bool YYEAN_Activate;                                                              // 0x07B3 (size: 0x1)
    class ABP_EEYAN_Arrow_C* EEYAN_Arrow;                                             // 0x07B8 (size: 0x8)
    class AActor* CurrentSelectActor;                                                 // 0x07C0 (size: 0x8)
    FBP_PlayerController_cLeon_CEeyan eeyan;                                          // 0x07C8 (size: 0x10)
    void EEYAN(FString Name);

    class AActor* NearSurvivor_IgnoreSelf(const FVector& Location, const FVector& Direction, float& OutDotProduct);
    void GetPawnCentorLocation(FVector& ReturnLocation);
    void InpActEvt_Three_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_Six_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_U_K2Node_InputDebugKeyEvent_0(FKey Key, FInputActionValue ActionValue);
    void InpActEvt_G_K2Node_InputKeyEvent_0(FKey Key);
    void AddMainWidgets();
    void TeleportMovie();
    void Finish();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void CameraReset();
    void OnNamePlateVisibilityChange(bool Visibility);
    void EEYAN_State(bool State);
    void ExecuteUbergraph_BP_PlayerController_cLeon(int32 EntryPoint);
    void EEYAN__DelegateSignature(FString Name);
    void NamePlateVisibilityChange__DelegateSignature(bool Visibility);
    void CanPenterationUpdate__DelegateSignature(bool IsCanPenteration);
}; // Size: 0x7D8

#endif
