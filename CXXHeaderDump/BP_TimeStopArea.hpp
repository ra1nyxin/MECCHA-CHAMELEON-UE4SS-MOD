#ifndef UE4SS_SDK_BP_TimeStopArea_HPP
#define UE4SS_SDK_BP_TimeStopArea_HPP

class ABP_TimeStopArea_C : public ABP_CopyActorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0468 (size: 0x8)
    class UNiagaraComponent* Centor1;                                                 // 0x0470 (size: 0x8)
    class UStaticMeshComponent* Clock_Base_mesh;                                      // 0x0478 (size: 0x8)
    class UNiagaraComponent* Centor;                                                  // 0x0480 (size: 0x8)
    class UBillboardComponent* RayPoint_Sub_3;                                        // 0x0488 (size: 0x8)
    class UBillboardComponent* RayPoint_Sub_4;                                        // 0x0490 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0498 (size: 0x8)

    void TimeReStart(class AActor* Actor);
    void TimeStop(class AActor* Actor);
    void ReceiveBeginPlay();
    void BndEvt__BP_TimeStopArea_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Check();
    void DestroyVAT();
    void BndEvt__BP_TimeStopArea_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void TimerUpdate();
    void SetTimeStopState(bool State);
    void ExecuteUbergraph_BP_TimeStopArea(int32 EntryPoint);
}; // Size: 0x4A0

#endif
