#ifndef UE4SS_SDK_BP_ContainerGenerater_HPP
#define UE4SS_SDK_BP_ContainerGenerater_HPP

class ABP_ContainerGenerater_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    int32 SpawnNum;                                                                   // 0x02B8 (size: 0x4)
    TArray<class TSubclassOf<ABP_EnvironmentSystem_Container_Base_C>> Containers;     // 0x02C0 (size: 0x10)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ContainerGenerater(int32 EntryPoint);
}; // Size: 0x2D0

#endif
