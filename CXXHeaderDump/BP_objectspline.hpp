#ifndef UE4SS_SDK_BP_objectspline_HPP
#define UE4SS_SDK_BP_objectspline_HPP

class ABP_objectspline_C : public AActor
{
    class USplineComponent* Spline;                                                   // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    class UStaticMesh* Pipe;                                                          // 0x02B8 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x02C0 (size: 0x8)
    double mesh_l;                                                                    // 0x02C8 (size: 0x8)
    FRotator meshRotation;                                                            // 0x02D0 (size: 0x18)
    double mesh space;                                                                // 0x02E8 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2F0

#endif
