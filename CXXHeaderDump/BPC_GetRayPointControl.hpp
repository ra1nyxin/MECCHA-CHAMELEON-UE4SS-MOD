#ifndef UE4SS_SDK_BPC_GetRayPointControl_HPP
#define UE4SS_SDK_BPC_GetRayPointControl_HPP

class UBPC_GetRayPointControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    TArray<class USceneComponent*> PointComponents;                                   // 0x00C0 (size: 0x10)
    class USceneComponent* RootPointComponent;                                        // 0x00D0 (size: 0x8)

    void GetRayPoints(TArray<FVector>& Vectors);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPC_GetRayPointControl(int32 EntryPoint);
}; // Size: 0xD8

#endif
