#ifndef UE4SS_SDK_BPC_DampingControl_HPP
#define UE4SS_SDK_BPC_DampingControl_HPP

class UBPC_DampingControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    double DampingTime;                                                               // 0x00C0 (size: 0x8)
    double DefaultLinearDamping;                                                      // 0x00C8 (size: 0x8)
    double DefaultAngularDamping;                                                     // 0x00D0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BPC_DampingControl(int32 EntryPoint);
}; // Size: 0xD8

#endif
