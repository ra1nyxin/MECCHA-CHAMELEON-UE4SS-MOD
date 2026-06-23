#ifndef UE4SS_SDK_BP_LINK_Manequin_HPP
#define UE4SS_SDK_BP_LINK_Manequin_HPP

class ABP_LINK_Manequin_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBPC_LinkCharacterCustomControl_C* BPC_LinkCharacterCustomControl;          // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02B8 (size: 0x8)
    int32 PlayerIndex;                                                                // 0x02C0 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LINK_Manequin(int32 EntryPoint);
}; // Size: 0x2C4

#endif
