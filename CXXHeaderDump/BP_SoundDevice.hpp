#ifndef UE4SS_SDK_BP_SoundDevice_HPP
#define UE4SS_SDK_BP_SoundDevice_HPP

class ABP_SoundDevice_C : public ABP_DeviceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02F8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0300 (size: 0x8)
    class USoundBase* SoundAsset;                                                     // 0x0308 (size: 0x8)
    TEnumAsByte<EN_SoundPlayType::Type> PlayType;                                     // 0x0310 (size: 0x1)
    double FadeInTime;                                                                // 0x0318 (size: 0x8)
    double FadeOutTime;                                                               // 0x0320 (size: 0x8)
    bool NowPlayState;                                                                // 0x0328 (size: 0x1)
    class USoundAttenuation* 減衰設定;                                                    // 0x0330 (size: 0x8)

    void UserConstructionScript();
    void BndEvt__BP_SoundDevice_DeviceComonent_K2Node_ComponentBoundEvent_0_OnSignal__DelegateSignature(FST_EventValue SignalValue);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SoundDevice(int32 EntryPoint);
}; // Size: 0x338

#endif
