#ifndef UE4SS_SDK_BPI_ItemUse_HPP
#define UE4SS_SDK_BPI_ItemUse_HPP

class IBPI_ItemUse_C : public IInterface
{

    void Reload(bool PressState);
    bool MS_IsInView(class AActor* Actor);
    void Reset();
    void Change();
    void Aim(bool PressState);
    void Shot(bool PressState, double PushTime, class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
}; // Size: 0x28

#endif
