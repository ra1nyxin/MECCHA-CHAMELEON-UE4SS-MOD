#ifndef UE4SS_SDK_DeviceComponent_HPP
#define UE4SS_SDK_DeviceComponent_HPP

class UDeviceComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    FDeviceComponent_CSignal signal;                                                  // 0x00C0 (size: 0x10)
    void Signal(FST_EventValue SignalValue);
    TArray<class AActor*> SignalActors;                                               // 0x00D0 (size: 0x10)
    FDeviceComponent_COnSignal OnSignal;                                              // 0x00E0 (size: 0x10)
    void OnSignal(FST_EventValue SignalValue);
    TEnumAsByte<EN_DeviceOnlineMode::Type> DeviceOnlineMode;                          // 0x00F0 (size: 0x1)

    void ReceiveBeginPlay();
    void Send To Signal(FST_EventValue SignalValue);
    void Recive Bind(class UDeviceComponent_C* DeviceComp);
    void Bind End();
    void OnSignal_Event(FST_EventValue SignalValue);
    void CallSignal(Server)(FST_EventValue SignalValue);
    void CallSignal(Client)(FST_EventValue SignalValue);
    void CallSignal(Replicate)(FST_EventValue SignalValue);
    void ExecuteUbergraph_DeviceComponent(int32 EntryPoint);
    void OnSignal__DelegateSignature(FST_EventValue SignalValue);
    void Signal__DelegateSignature(FST_EventValue SignalValue);
}; // Size: 0xF1

#endif
