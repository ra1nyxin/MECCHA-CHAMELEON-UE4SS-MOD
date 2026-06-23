#ifndef UE4SS_SDK_BPC_PowerDispersion_HPP
#define UE4SS_SDK_BPC_PowerDispersion_HPP

class UBPC_PowerDispersion_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* PrimitiveComp;                                         // 0x00C0 (size: 0x8)
    TArray<class ABP_Glue_CustomPhysics_C*> AdjacentGlues;                            // 0x00C8 (size: 0x10)

    void ReceiveBeginPlay();
    void Dispersion(FVector PowerPosition, double power, class AActor* SourceActor);
    void ExecuteUbergraph_BPC_PowerDispersion(int32 EntryPoint);
}; // Size: 0xD8

#endif
