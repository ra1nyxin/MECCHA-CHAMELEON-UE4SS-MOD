#ifndef UE4SS_SDK_WBP_Spectate_cLeon_HPP
#define UE4SS_SDK_WBP_Spectate_cLeon_HPP

class UWBP_Spectate_cLeon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_1;                                            // 0x0348 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_0;                                            // 0x0350 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x0358 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_75;                         // 0x0360 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_11;                         // 0x0368 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x0370 (size: 0x8)
    class UWBP_cLeonToggleSwitch_C* WBP_cLeonToggleSwitch;                            // 0x0378 (size: 0x8)
    class UTextBlock* UserNameWidget;                                                 // 0x0380 (size: 0x8)
    class UVerticalBox* Provocation_1;                                                // 0x0388 (size: 0x8)
    class UVerticalBox* EndFreeCamera;                                                // 0x0390 (size: 0x8)
    class ABP_GameState_cLeon_C* GameState_cLeon;                                     // 0x0398 (size: 0x8)
    int32 CurrentIndex;                                                               // 0x03A0 (size: 0x4)
    FWBP_Spectate_cLeon_COnSelectChangeController OnSelectChangeController;           // 0x03A8 (size: 0x10)
    void OnSelectChangeController(class ABP_FirstPersonPlayerState_Online_cLeon_C* PlayerState, class APawn* Pawn);
    bool IsBackType;                                                                  // 0x03B8 (size: 0x1)

    TArray<class ABP_FirstPersonPlayerState_Online_cLeon_C*> GetSpectateTarget(TArray<class APawn*>& ReturnPawn);
    void SelectChange(int32 AddValue);
    void PreConstruct(bool IsDesignTime);
    void UpdatePlayers();
    void Construct();
    void SwitchFreeCamera(bool ToggleState);
    void ChangeBackType(bool IsBackType);
    void ConstructGameState();
    void ExecuteUbergraph_WBP_Spectate_cLeon(int32 EntryPoint);
    void OnSelectChangeController__DelegateSignature(class ABP_FirstPersonPlayerState_Online_cLeon_C* PlayerState, class APawn* Pawn);
}; // Size: 0x3B9

#endif
