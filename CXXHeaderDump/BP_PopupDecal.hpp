#ifndef UE4SS_SDK_BP_PopupDecal_HPP
#define UE4SS_SDK_BP_PopupDecal_HPP

class ABP_PopupDecal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02B0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02B8 (size: 0x8)
    int32 DecalIndex;                                                                 // 0x02C0 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_PopupDecal(int32 EntryPoint);
}; // Size: 0x2C4

#endif
