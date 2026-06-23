#ifndef UE4SS_SDK_BP_CinemaDevice_HPP
#define UE4SS_SDK_BP_CinemaDevice_HPP

class ABP_CinemaDevice_C : public ABP_DeviceBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02F8 (size: 0x8)
    TEnumAsByte<EN_CinemaPlayMode::Type> PlayMode;                                    // 0x0300 (size: 0x1)
    class ALevelSequenceActor* Level Sequenc Actor;                                   // 0x0308 (size: 0x8)
    class ULevelSequence* Level Sequenc ;                                             // 0x0310 (size: 0x8)
    bool BeginPlay;                                                                   // 0x0318 (size: 0x1)
    bool DoOneceSignal;                                                               // 0x0319 (size: 0x1)
    int32 SetFrame;                                                                   // 0x031C (size: 0x4)
    bool FrameRangeV2;                                                                // 0x0320 (size: 0x1)
    FVector2D FrameRange;                                                             // 0x0328 (size: 0x10)
    bool WidgetAutoHide;                                                              // 0x0338 (size: 0x1)
    bool WidgetAutoShow;                                                              // 0x0339 (size: 0x1)

    void PlayDeviceSequence(class UMovieSceneSequencePlayer* LevelSequence, TEnumAsByte<EN_CinemaPlayMode::Type> PlayMode);
    void BndEvt__BP_CinemaDevice_DeviceComonent_K2Node_ComponentBoundEvent_0_OnSignal__DelegateSignature(FST_EventValue SignalValue);
    void SequenceEnd();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_CinemaDevice(int32 EntryPoint);
}; // Size: 0x33A

#endif
