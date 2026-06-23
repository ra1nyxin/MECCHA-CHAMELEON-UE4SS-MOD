#ifndef UE4SS_SDK_WBP_SpectateNameplate_HPP
#define UE4SS_SDK_WBP_SpectateNameplate_HPP

class UWBP_SpectateNameplate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x0348 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* PlayerCharacter;                           // 0x0350 (size: 0x8)
    FName NewVar;                                                                     // 0x0358 (size: 0x8)

    void GetCustomPlayerName(FString& playerName);
    void PreConstruct(bool IsDesignTime);
    void ViewChange(class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void SetupSpectateNameplate(class ABP_FirstPersonCharacter_Main_C* Character);
    void ExecuteUbergraph_WBP_SpectateNameplate(int32 EntryPoint);
}; // Size: 0x360

#endif
