#ifndef UE4SS_SDK_BPC_FreezeActor_HPP
#define UE4SS_SDK_BPC_FreezeActor_HPP

class UBPC_FreezeActor_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BPC_FreezeActor(int32 EntryPoint);
}; // Size: 0xC0

#endif
