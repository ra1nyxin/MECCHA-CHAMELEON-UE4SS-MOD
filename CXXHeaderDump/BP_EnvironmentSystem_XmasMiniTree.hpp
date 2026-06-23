#ifndef UE4SS_SDK_BP_EnvironmentSystem_XmasMiniTree_HPP
#define UE4SS_SDK_BP_EnvironmentSystem_XmasMiniTree_HPP

class ABP_EnvironmentSystem_XmasMiniTree_C : public ABP_EnvironmentSystem_DamagedSpawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UStaticMeshComponent* treeice;                                              // 0x0368 (size: 0x8)

    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_EnvironmentSystem_XmasMiniTree(int32 EntryPoint);
}; // Size: 0x370

#endif
