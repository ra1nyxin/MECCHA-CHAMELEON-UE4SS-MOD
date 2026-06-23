#ifndef UE4SS_SDK_BPC_GlobalTimeControl_HPP
#define UE4SS_SDK_BPC_GlobalTimeControl_HPP

class UBPC_GlobalTimeControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void SlowTime(double Drutaion, double Multiply, bool ControlPitch);
    void TimeReset();
    void ExecuteUbergraph_BPC_GlobalTimeControl(int32 EntryPoint);
}; // Size: 0xC0

#endif
