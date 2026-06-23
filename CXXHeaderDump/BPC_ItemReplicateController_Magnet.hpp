#ifndef UE4SS_SDK_BPC_ItemReplicateController_Magnet_HPP
#define UE4SS_SDK_BPC_ItemReplicateController_Magnet_HPP

class UBPC_ItemReplicateController_Magnet_C : public UBPC_ItemReplicateController_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E0 (size: 0x8)
    class UPrimitiveComponent* AddForceTarget;                                        // 0x00E8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void UseItem(Replicate)(bool State);
    void UseItem(Server)(bool State);
    void SetForceTarget(class UPrimitiveComponent* AddForceTarget);
    void UseItem(Local)(bool State);
    void ExecuteUbergraph_BPC_ItemReplicateController_Magnet(int32 EntryPoint);
}; // Size: 0xF0

#endif
