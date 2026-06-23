#ifndef UE4SS_SDK_BP_IceRefrigerator_HPP
#define UE4SS_SDK_BP_IceRefrigerator_HPP

class ABP_IceRefrigerator_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UNiagaraComponent* Niagara1;                                                // 0x02B0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02B8 (size: 0x8)
    class USphereComponent* IceArea;                                                  // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    TArray<class AActor*> Out Actors;                                                 // 0x02D8 (size: 0x10)
    bool InstanceClear;                                                               // 0x02E8 (size: 0x1)

    void OnRep_Out Actors();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_IceRefrigerator(int32 EntryPoint);
}; // Size: 0x2E9

#endif
