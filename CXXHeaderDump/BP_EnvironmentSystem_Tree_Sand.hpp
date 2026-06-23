#ifndef UE4SS_SDK_BP_EnvironmentSystem_Tree_Sand_HPP
#define UE4SS_SDK_BP_EnvironmentSystem_Tree_Sand_HPP

class ABP_EnvironmentSystem_Tree_Sand_C : public ABP_EnvironmentSystem_DamagedSpawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)

    void SpawnMaterial();
    void ReplicateEvent();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_EnvironmentSystem_Tree_Sand(int32 EntryPoint);
}; // Size: 0x368

#endif
