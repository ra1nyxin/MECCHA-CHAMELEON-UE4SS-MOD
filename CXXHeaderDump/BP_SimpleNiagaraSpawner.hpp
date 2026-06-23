#ifndef UE4SS_SDK_BP_SimpleNiagaraSpawner_HPP
#define UE4SS_SDK_BP_SimpleNiagaraSpawner_HPP

class ABP_SimpleNiagaraSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02B0 (size: 0x8)
    class UNiagaraSystem* System Template;                                            // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SimpleNiagaraSpawner(int32 EntryPoint);
}; // Size: 0x2C0

#endif
