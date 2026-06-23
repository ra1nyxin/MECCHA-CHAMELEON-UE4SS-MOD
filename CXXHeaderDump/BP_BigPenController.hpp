#ifndef UE4SS_SDK_BP_BigPenController_HPP
#define UE4SS_SDK_BP_BigPenController_HPP

class ABP_BigPenController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BigPenController(int32 EntryPoint);
}; // Size: 0x3D0

#endif
