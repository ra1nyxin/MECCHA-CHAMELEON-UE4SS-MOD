#ifndef UE4SS_SDK_LBPC_LockOn_HPP
#define UE4SS_SDK_LBPC_LockOn_HPP

class ULBPC_LockOn_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UWidgetComponent* WidgetComp;                                               // 0x0248 (size: 0x8)
    bool NowLockOnState;                                                              // 0x0250 (size: 0x1)
    bool EnableLockOn;                                                                // 0x0251 (size: 0x1)

    void LockOnWidgetState(bool State);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_LBPC_LockOn(int32 EntryPoint);
}; // Size: 0x252

#endif
