#ifndef UE4SS_SDK_BP_EnvironmentSystem_Bush_HPP
#define UE4SS_SDK_BP_EnvironmentSystem_Bush_HPP

class ABP_EnvironmentSystem_Bush_C : public ABP_EnvironmentSystem_DamagedSpawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UBillboardComponent* SpawnPosition4;                                        // 0x0368 (size: 0x8)
    class UBillboardComponent* SpawnPosition3;                                        // 0x0370 (size: 0x8)
    class UBillboardComponent* SpawnPosition2;                                        // 0x0378 (size: 0x8)
    class UBillboardComponent* SpawnPosition1;                                        // 0x0380 (size: 0x8)

    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_EnvironmentSystem_Bush(int32 EntryPoint);
}; // Size: 0x388

#endif
