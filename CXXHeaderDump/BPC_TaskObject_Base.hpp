#ifndef UE4SS_SDK_BPC_TaskObject_Base_HPP
#define UE4SS_SDK_BPC_TaskObject_Base_HPP

class UBPC_TaskObject_Base_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    FBPC_TaskObject_Base_CTaskClear TaskClear;                                        // 0x00C0 (size: 0x10)
    void TaskClear();
    FBPC_TaskObject_Base_CTaskStateUpdate TaskStateUpdate;                            // 0x00D0 (size: 0x10)
    void TaskStateUpdate(double Progress);
    int32 TaskIndex;                                                                  // 0x00E0 (size: 0x4)
    int32 CurrentProgress;                                                            // 0x00E4 (size: 0x4)
    int32 Sum Progress;                                                               // 0x00E8 (size: 0x4)
    FString TaskKey;                                                                  // 0x00F0 (size: 0x10)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x0100 (size: 0x8)
    bool TaskClearState;                                                              // 0x0108 (size: 0x1)

    void TaskStart();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BPC_TaskObject_Base(int32 EntryPoint);
    void TaskStateUpdate__DelegateSignature(double Progress);
    void TaskClear__DelegateSignature();
}; // Size: 0x109

#endif
