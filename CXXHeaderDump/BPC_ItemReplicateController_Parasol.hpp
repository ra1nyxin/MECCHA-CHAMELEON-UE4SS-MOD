#ifndef UE4SS_SDK_BPC_ItemReplicateController_Parasol_HPP
#define UE4SS_SDK_BPC_ItemReplicateController_Parasol_HPP

class UBPC_ItemReplicateController_Parasol_C : public UBPC_ItemReplicateController_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E0 (size: 0x8)
    class UPrimitiveComponent* AddForceTarget;                                        // 0x00E8 (size: 0x8)
    double MinDropSpeed;                                                              // 0x00F0 (size: 0x8)
    bool IsUsedItem;                                                                  // 0x00F8 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void UseItem(Replicate)(bool State);
    void UseItem(Server)(bool State);
    void UseItem(Local)(bool State);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void AddForceNoDrop();
    void ForceClose();
    void OpenParasol(Server)();
    void OpenParasol(Replicate)();
    void ExecuteUbergraph_BPC_ItemReplicateController_Parasol(int32 EntryPoint);
}; // Size: 0xF9

#endif
