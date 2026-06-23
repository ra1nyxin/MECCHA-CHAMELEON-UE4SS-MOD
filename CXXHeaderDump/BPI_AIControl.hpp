#ifndef UE4SS_SDK_BPI_AIControl_HPP
#define UE4SS_SDK_BPI_AIControl_HPP

class IBPI_AIControl_C : public IInterface
{

    void IsAttackNow(bool& State);
    void SetStrafing(bool IsStrafing, TEnumAsByte<EN_StrafingDirection::Type> Direction);
    void IsBattleMode(bool& bool);
    void PlayAvoidanceAnimation();
    void GetAvoidanceRotation(FRotator& Rotation);
    void IsAiming(bool& IsAiming, int32& SuccessCount);
}; // Size: 0x28

#endif
