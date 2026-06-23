#ifndef UE4SS_SDK_BPI_AI_Attack_HPP
#define UE4SS_SDK_BPI_AI_Attack_HPP

class IBPI_AI_Attack_C : public IInterface
{

    void AttackNotify(int32 ID);
    void AttackReset();
    void ThrowState(TEnumAsByte<EN_ThrowState::Type> ThrowState);
    void DamageState(bool Active);
    void Avoid(bool State);
    void Attack(TEnumAsByte<AttackType::Type> AttackType);
}; // Size: 0x28

#endif
