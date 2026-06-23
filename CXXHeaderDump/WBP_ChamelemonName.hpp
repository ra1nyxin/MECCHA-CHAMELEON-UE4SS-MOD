#ifndef UE4SS_SDK_WBP_ChamelemonName_HPP
#define UE4SS_SDK_WBP_ChamelemonName_HPP

class UWBP_ChamelemonName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x0348 (size: 0x8)
    class UWidgetAnimation* DeathAnim;                                                // 0x0350 (size: 0x8)
    class ABP_FirstPersonPlayerState_Online_cLeon_C* TargetPlayerState;               // 0x0358 (size: 0x8)
    class ABP_GameState_cLeon_C* As BP Game State C Leon;                             // 0x0360 (size: 0x8)

    void CheckEvent();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void NumUpdate();
    void ExecuteUbergraph_WBP_ChamelemonName(int32 EntryPoint);
}; // Size: 0x368

#endif
