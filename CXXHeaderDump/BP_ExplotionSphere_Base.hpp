#ifndef UE4SS_SDK_BP_ExplotionSphere_Base_HPP
#define UE4SS_SDK_BP_ExplotionSphere_Base_HPP

class ABP_ExplotionSphere_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02B0 (size: 0x8)
    class USphereComponent* ExplotionRadius;                                          // 0x02B8 (size: 0x8)
    double ImpluseScale;                                                              // 0x02C0 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_ExplotionSphere_Base_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem);
    void ExecuteUbergraph_BP_ExplotionSphere_Base(int32 EntryPoint);
}; // Size: 0x2C8

#endif
