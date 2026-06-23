#ifndef UE4SS_SDK_BPI_Spectate_HPP
#define UE4SS_SDK_BPI_Spectate_HPP

class IBPI_Spectate_C : public IInterface
{

    void SetupSpectateNameplate(class ABP_FirstPersonCharacter_Main_C* Character);
    void ViewChange(class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void GetCustomPlayerName(FString& playerName);
}; // Size: 0x28

#endif
