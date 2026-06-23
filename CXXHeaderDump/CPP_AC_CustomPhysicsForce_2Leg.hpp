#ifndef UE4SS_SDK_CPP_AC_CustomPhysicsForce_2Leg_HPP
#define UE4SS_SDK_CPP_AC_CustomPhysicsForce_2Leg_HPP

class UCPP_AC_CustomPhysicsForce_2Leg_C : public UCPP_AC_CustomPhysicsForce
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UCapsuleComponent* BaseCapsule;                                             // 0x0250 (size: 0x8)
    double Weight;                                                                    // 0x0258 (size: 0x8)
    class UPhysicalMaterial* HitPhysMat;                                              // 0x0260 (size: 0x8)

    void SetTouchPointDatas();
    TMap<class UPrimitiveComponent*, class FVector> ResetHitPointDatas();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SweepCheck();
    void ExecuteUbergraph_CPP_AC_CustomPhysicsForce_2Leg(int32 EntryPoint);
}; // Size: 0x268

#endif
