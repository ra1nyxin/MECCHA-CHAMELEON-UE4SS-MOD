#ifndef UE4SS_SDK_BP_EnvironmentSystem_Tree1_HPP
#define UE4SS_SDK_BP_EnvironmentSystem_Tree1_HPP

class ABP_EnvironmentSystem_Tree1_C : public ABP_EnvironmentSystem_DamagedSpawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    bool LogState;                                                                    // 0x0368 (size: 0x1)

    void UserConstructionScript();
    void SpawnMaterial();
    void ReplicateEvent();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_EnvironmentSystem_Tree1(int32 EntryPoint);
}; // Size: 0x369

#endif
