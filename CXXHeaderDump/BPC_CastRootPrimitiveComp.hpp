#ifndef UE4SS_SDK_BPC_CastRootPrimitiveComp_HPP
#define UE4SS_SDK_BPC_CastRootPrimitiveComp_HPP

class UBPC_CastRootPrimitiveComp_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* PrimitiveComp;                                         // 0x00C0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPC_CastRootPrimitiveComp(int32 EntryPoint);
}; // Size: 0xC8

#endif
