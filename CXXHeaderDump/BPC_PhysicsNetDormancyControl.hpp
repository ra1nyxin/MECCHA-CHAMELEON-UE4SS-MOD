#ifndef UE4SS_SDK_BPC_PhysicsNetDormancyControl_HPP
#define UE4SS_SDK_BPC_PhysicsNetDormancyControl_HPP

class UBPC_PhysicsNetDormancyControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)

    void ReceiveBeginPlay();
    void Wake(class UPrimitiveComponent* WakingComponent, FName BoneName);
    void Sleep(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    void SleepCall();
    void SimulatePhysicsCheck();
    void ExecuteUbergraph_BPC_PhysicsNetDormancyControl(int32 EntryPoint);
}; // Size: 0xC0

#endif
