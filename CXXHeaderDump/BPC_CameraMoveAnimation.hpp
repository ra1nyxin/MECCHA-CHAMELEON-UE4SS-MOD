#ifndef UE4SS_SDK_BPC_CameraMoveAnimation_HPP
#define UE4SS_SDK_BPC_CameraMoveAnimation_HPP

class UBPC_CameraMoveAnimation_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x00C0 (size: 0x8)
    double Right;                                                                     // 0x00C8 (size: 0x8)
    double Front;                                                                     // 0x00D0 (size: 0x8)
    FRotator Rotation;                                                                // 0x00D8 (size: 0x18)
    double BeofreRoll;                                                                // 0x00F0 (size: 0x8)
    double CurrentRoll;                                                               // 0x00F8 (size: 0x8)
    bool ToTarget;                                                                    // 0x0100 (size: 0x1)
    double LerpValue;                                                                 // 0x0108 (size: 0x8)
    double AnimationTime;                                                             // 0x0110 (size: 0x8)
    double DefaultFOV;                                                                // 0x0118 (size: 0x8)
    class UCurveFloat* Curve;                                                         // 0x0120 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void AnimationStart(double Front, double Right, double Time);
    void ExecuteUbergraph_BPC_CameraMoveAnimation(int32 EntryPoint);
}; // Size: 0x128

#endif
