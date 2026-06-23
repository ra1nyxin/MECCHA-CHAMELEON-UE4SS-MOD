#ifndef UE4SS_SDK_BP_GizmoVisual_HPP
#define UE4SS_SDK_BP_GizmoVisual_HPP

class ABP_GizmoVisual_C : public AActor
{
    class UStaticMeshComponent* GizmoX;                                               // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* GizmoY;                                               // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)

    void AddRotation(FVector2D AddValue);
}; // Size: 0x2C0

#endif
