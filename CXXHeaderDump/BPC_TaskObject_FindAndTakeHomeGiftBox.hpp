#ifndef UE4SS_SDK_BPC_TaskObject_FindAndTakeHomeGiftBox_HPP
#define UE4SS_SDK_BPC_TaskObject_FindAndTakeHomeGiftBox_HPP

class UBPC_TaskObject_FindAndTakeHomeGiftBox_C : public UBPC_TaskObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0110 (size: 0x8)
    int32 TargetNum;                                                                  // 0x0118 (size: 0x4)
    TArray<class ABP_GoalHouse_C*> Out Actors;                                        // 0x0120 (size: 0x10)
    TArray<class AActor*> Generated Actors;                                           // 0x0130 (size: 0x10)

    void TaskStart();
    void GeneratedActor(class AActor* GeneratedActor);
    void GoalActor(class AActor* Actor);
    void ExecuteUbergraph_BPC_TaskObject_FindAndTakeHomeGiftBox(int32 EntryPoint);
}; // Size: 0x140

#endif
