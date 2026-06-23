#ifndef UE4SS_SDK_BP_ElectricFan_HPP
#define UE4SS_SDK_BP_ElectricFan_HPP

class ABP_ElectricFan_C : public ABP_CopyActorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UStaticMeshComponent* ElectricFan_Base_mesh;                                // 0x0468 (size: 0x8)
    class UAudioComponent* Multimedia_Internet_CD-Rom_Flash_Click_Multiple_18;        // 0x0470 (size: 0x8)
    class UNiagaraComponent* N_WindTrail;                                             // 0x0478 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0480 (size: 0x8)
    class USphereComponent* WindRadius;                                               // 0x0488 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0490 (size: 0x8)
    double WindLength;                                                                // 0x0498 (size: 0x8)
    double WindPower;                                                                 // 0x04A0 (size: 0x8)
    class AActor* ParentActor;                                                        // 0x04A8 (size: 0x8)
    bool NonParent;                                                                   // 0x04B0 (size: 0x1)
    double MaxSpeed;                                                                  // 0x04B8 (size: 0x8)
    double HitDistance;                                                               // 0x04C0 (size: 0x8)

    void SetWindTrailSize(double Distance);
    void MaxSpeedControl(class AActor* TargetActor, double& MultiplyPower);
    void BehindCheck(FVector B, bool& IsBehind);
    double GetAttenuation(FVector v1, double power);
    void ReceiveBeginPlay();
    void Check();
    void DestroyVAT();
    void SetTimeStopState(bool State);
    void ExecuteUbergraph_BP_ElectricFan(int32 EntryPoint);
}; // Size: 0x4C8

#endif
