#ifndef UE4SS_SDK_BPC_LongInputControl_HPP
#define UE4SS_SDK_BPC_LongInputControl_HPP

class UBPC_LongInputControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    FBPC_LongInputControl_CInputEnd InputEnd;                                         // 0x00C0 (size: 0x10)
    void InputEnd(double PushTime);
    double PushTime;                                                                  // 0x00D0 (size: 0x8)
    double TimeOutTime;                                                               // 0x00D8 (size: 0x8)
    double SinglePushTime;                                                            // 0x00E0 (size: 0x8)
    FBPC_LongInputControl_CSinglePush SinglePush;                                     // 0x00E8 (size: 0x10)
    void SinglePush();
    FBPC_LongInputControl_CLongPushStart LongPushStart;                               // 0x00F8 (size: 0x10)
    void LongPushStart();
    bool CurrentInputState;                                                           // 0x0108 (size: 0x1)

    void PushState(bool State);
    void ReceiveTick(float DeltaSeconds);
    void LongPushStartEvent();
    void ClearPushCountTimer();
    void ExecuteUbergraph_BPC_LongInputControl(int32 EntryPoint);
    void LongPushStart__DelegateSignature();
    void SinglePush__DelegateSignature();
    void InputEnd__DelegateSignature(double PushTime);
}; // Size: 0x109

#endif
