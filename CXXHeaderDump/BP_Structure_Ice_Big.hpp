#ifndef UE4SS_SDK_BP_Structure_Ice_Big_HPP
#define UE4SS_SDK_BP_Structure_Ice_Big_HPP

class ABP_Structure_Ice_Big_C : public ABP_Structure_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C8 (size: 0x8)
    TArray<class UStaticMesh*> RandomMesh;                                            // 0x02D0 (size: 0x10)

    void ReceiveBeginPlay();
    void Generate();
    void ExecuteUbergraph_BP_Structure_Ice_Big(int32 EntryPoint);
}; // Size: 0x2E0

#endif
