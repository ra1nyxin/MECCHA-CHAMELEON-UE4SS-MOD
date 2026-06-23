#ifndef UE4SS_SDK_BP_CameraWireSpline_HPP
#define UE4SS_SDK_BP_CameraWireSpline_HPP

class ABP_CameraWireSpline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02B0 (size: 0x8)
    class USplineComponent* Spline2;                                                  // 0x02B8 (size: 0x8)
    class AActor* AttachToActor;                                                      // 0x02C0 (size: 0x8)

    void SplineSet();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CameraWireSpline(int32 EntryPoint);
}; // Size: 0x2C8

#endif
