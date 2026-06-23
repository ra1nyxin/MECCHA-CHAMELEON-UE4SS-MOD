#ifndef UE4SS_SDK_BP_KeepArea_HPP
#define UE4SS_SDK_BP_KeepArea_HPP

class ABP_KeepArea_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02B0 (size: 0x8)
    TArray<class AActor*> DefaultActors;                                              // 0x02B8 (size: 0x10)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void RemoveOverlapType();
    void ExecuteUbergraph_BP_KeepArea(int32 EntryPoint);
}; // Size: 0x2C8

#endif
