#ifndef UE4SS_SDK_BP_PenBoxUnder_HPP
#define UE4SS_SDK_BP_PenBoxUnder_HPP

class ABP_PenBoxUnder_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBillboardComponent* BindPosition;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    TArray<class TSubclassOf<AActor>> SpawnItem;                                      // 0x02C0 (size: 0x10)
    TMap<class TSubclassOf<AActor>, class FTransform> SpawnItemWithAddTransform;      // 0x02D0 (size: 0x50)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PenBoxUnder(int32 EntryPoint);
}; // Size: 0x320

#endif
