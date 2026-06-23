#ifndef UE4SS_SDK_BPC_RayPositions_HPP
#define UE4SS_SDK_BPC_RayPositions_HPP

class UBPC_RayPositions_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    TArray<FTransform> ChildRelativeTransform;                                        // 0x00C0 (size: 0x10)
    class AActor* OwnerActor;                                                         // 0x00D0 (size: 0x8)

    void SetUpTransforms();
    void GetRayPositions(TArray<FVector>& VectorArray);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPC_RayPositions(int32 EntryPoint);
}; // Size: 0xD8

#endif
