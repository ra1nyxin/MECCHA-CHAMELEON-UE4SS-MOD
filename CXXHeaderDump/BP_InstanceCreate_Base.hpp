#ifndef UE4SS_SDK_BP_InstanceCreate_Base_HPP
#define UE4SS_SDK_BP_InstanceCreate_Base_HPP

class ABP_InstanceCreate_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh; // 0x02B0 (size: 0x8)
    FST_InstanceGroupDatas InstanceDatas;                                             // 0x02B8 (size: 0x20)

    void ReceiveBeginPlay();
    void InstancePack();
    void ExecuteUbergraph_BP_InstanceCreate_Base(int32 EntryPoint);
}; // Size: 0x2D8

#endif
