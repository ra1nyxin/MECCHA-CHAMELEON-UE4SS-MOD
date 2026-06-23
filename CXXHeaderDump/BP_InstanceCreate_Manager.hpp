#ifndef UE4SS_SDK_BP_InstanceCreate_Manager_HPP
#define UE4SS_SDK_BP_InstanceCreate_Manager_HPP

class ABP_InstanceCreate_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TArray<class TSubclassOf<ABP_GrowParts_Base_C>> TargetClass;                      // 0x02B8 (size: 0x10)
    TMap<class UStaticMesh*, class FST_InstanceGroupDatas> MeshDatas;                 // 0x02C8 (size: 0x50)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_InstanceCreate_Manager(int32 EntryPoint);
}; // Size: 0x318

#endif
