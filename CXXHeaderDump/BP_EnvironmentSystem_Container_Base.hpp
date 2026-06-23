#ifndef UE4SS_SDK_BP_EnvironmentSystem_Container_Base_HPP
#define UE4SS_SDK_BP_EnvironmentSystem_Container_Base_HPP

class ABP_EnvironmentSystem_Container_Base_C : public ABP_EnvironmentSystem_DamagedSpawn_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    FVector BoundSize;                                                                // 0x0368 (size: 0x18)
    TSoftObjectPtr<UBP_RBD_VAT_DataAssets_C> VATData Asset;                           // 0x0380 (size: 0x28)

    void UserConstructionScript();
    void SpawnMaterial();
    void ReplicateEvent();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_EnvironmentSystem_Container_Base(int32 EntryPoint);
}; // Size: 0x3A8

#endif
