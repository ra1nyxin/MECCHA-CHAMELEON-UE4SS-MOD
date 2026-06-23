#ifndef UE4SS_SDK_BP_SnowBall_Under_HPP
#define UE4SS_SDK_BP_SnowBall_Under_HPP

class ABP_SnowBall_Under_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBillboardComponent* SnowBallSpawnPosition;                                 // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_SnowBall_Under(int32 EntryPoint);
}; // Size: 0x2C0

#endif
