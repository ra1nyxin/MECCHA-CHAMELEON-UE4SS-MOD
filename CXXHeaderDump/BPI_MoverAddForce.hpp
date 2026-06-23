#ifndef UE4SS_SDK_BPI_MoverAddForce_HPP
#define UE4SS_SDK_BPI_MoverAddForce_HPP

class IBPI_MoverAddForce_C : public IInterface
{

    void AddForce(Mover)(FVector Velocity, EMoverLaunchVelocityMode Mode);
}; // Size: 0x28

#endif
