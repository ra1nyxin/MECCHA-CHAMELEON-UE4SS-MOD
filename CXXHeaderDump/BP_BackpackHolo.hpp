#ifndef UE4SS_SDK_BP_BackpackHolo_HPP
#define UE4SS_SDK_BP_BackpackHolo_HPP

class ABP_BackpackHolo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* TraceCharacter;                            // 0x02B8 (size: 0x8)
    bool CanSpawn;                                                                    // 0x02C0 (size: 0x1)
    TArray<class AActor*> Actors to Ignore;                                           // 0x02C8 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_BackpackHolo(int32 EntryPoint);
}; // Size: 0x2D8

#endif
