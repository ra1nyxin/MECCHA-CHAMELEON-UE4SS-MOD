#ifndef UE4SS_SDK_BP_BrushPlane_HPP
#define UE4SS_SDK_BP_BrushPlane_HPP

class ABP_BrushPlane_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UAudioComponent* PaintingAudio;                                             // 0x02B0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* OutMaterial;                                      // 0x02D0 (size: 0x8)
    class UMaterialInstanceDynamic* InnnerMaterial;                                   // 0x02D8 (size: 0x8)
    class URuntimePaintableComponent* BrushBindTarget;                                // 0x02E0 (size: 0x8)
    double SizeBias;                                                                  // 0x02E8 (size: 0x8)
    class ABP_FirstPersonCharacter_cLeon_Character_C* OwnerCharacter;                 // 0x02F0 (size: 0x8)
    bool Is Brushing;                                                                 // 0x02F8 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_BrushPlane(int32 EntryPoint);
}; // Size: 0x2F9

#endif
