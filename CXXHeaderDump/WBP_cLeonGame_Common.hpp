#ifndef UE4SS_SDK_WBP_cLeonGame_Common_HPP
#define UE4SS_SDK_WBP_cLeonGame_Common_HPP

class UWBP_cLeonGame_Common_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UVerticalBox* NamePlates;                                                   // 0x0348 (size: 0x8)
    class ABP_GameState_cLeon_C* As BP Game State C Leon;                             // 0x0350 (size: 0x8)
    TArray<class UWBP_ChamelemonName_C*> Names;                                       // 0x0358 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void UpdateNamePlates();
    void ExecuteUbergraph_WBP_cLeonGame_Common(int32 EntryPoint);
}; // Size: 0x368

#endif
