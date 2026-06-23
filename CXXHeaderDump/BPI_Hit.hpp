#ifndef UE4SS_SDK_BPI_Hit_HPP
#define UE4SS_SDK_BPI_Hit_HPP

class IBPI_Hit_C : public IInterface
{

    void BPI_InteractStart(Local)(class ABP_FirstPersonCharacter_Main_C* First Person);
    void BPI_InteractEnd();
    void BPI_InteractStart(Server)(class ABP_FirstPersonCharacter_Main_C* First Person);
}; // Size: 0x28

#endif
