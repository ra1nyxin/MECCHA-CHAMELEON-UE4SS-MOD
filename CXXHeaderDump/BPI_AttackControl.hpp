#ifndef UE4SS_SDK_BPI_AttackControl_HPP
#define UE4SS_SDK_BPI_AttackControl_HPP

class IBPI_AttackControl_C : public IInterface
{

    void Attack_AC_Remote(double TimeRange, FName ComponentName, double DamageMultiply, double StanMultiply);
    void Combo(double TimeRange, FName ComboName);
    void Attack_AC(double TimeRange, FName AttackName, double DamageMultiply, bool MutipleHitPossible, double StanMultiply);
    void CollisionReset();
}; // Size: 0x28

#endif
