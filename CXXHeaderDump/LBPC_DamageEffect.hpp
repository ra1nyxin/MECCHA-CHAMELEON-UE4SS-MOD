#ifndef UE4SS_SDK_LBPC_DamageEffect_HPP
#define UE4SS_SDK_LBPC_DamageEffect_HPP

class ULBPC_DamageEffect_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    double DefaultDamageValue;                                                        // 0x0248 (size: 0x8)
    class UNiagaraComponent* NiagaraSystem;                                           // 0x0250 (size: 0x8)
    double CureentDamageValue;                                                        // 0x0258 (size: 0x8)

    void SetDamage(double Multiply);
    void ReceiveBeginPlay();
    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
    void SpawnStateChange(bool State);
    void ExecuteUbergraph_LBPC_DamageEffect(int32 EntryPoint);
}; // Size: 0x260

#endif
