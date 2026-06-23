#ifndef UE4SS_SDK_BP_EnviromentSystem_log_HPP
#define UE4SS_SDK_BP_EnviromentSystem_log_HPP

class ABP_EnviromentSystem_log_C : public ABP_EnvironmentSystem_DamagedSpawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0368 (size: 0x8)
    class UBillboardComponent* SpawnPosition2;                                        // 0x0370 (size: 0x8)
    class UBillboardComponent* SpawnPosition1;                                        // 0x0378 (size: 0x8)

    void ReceiveBeginPlay();
    void SpawnMaterial();
    void ExecuteUbergraph_BP_EnviromentSystem_log(int32 EntryPoint);
}; // Size: 0x380

#endif
