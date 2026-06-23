#ifndef UE4SS_SDK_MoverTests_HPP
#define UE4SS_SDK_MoverTests_HPP

struct FTestCustomLayeredMove : public FLayeredMoveBase
{
    FVector LaunchVelocity;                                                           // 0x0038 (size: 0x18)
    FName ForceMovementMode;                                                          // 0x0050 (size: 0x8)

}; // Size: 0x58

#endif
