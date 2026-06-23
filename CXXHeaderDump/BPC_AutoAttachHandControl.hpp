#ifndef UE4SS_SDK_BPC_AutoAttachHandControl_HPP
#define UE4SS_SDK_BPC_AutoAttachHandControl_HPP

class UBPC_AutoAttachHandControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    FST_HandControlDatas ReplicateData;                                               // 0x00C0 (size: 0x60)

    void Grab();
    void OnRep_ReplicateData();
    void ReceiveBeginPlay();
    void DestroySelf();
    void ExecuteUbergraph_BPC_AutoAttachHandControl(int32 EntryPoint);
}; // Size: 0x120

#endif
