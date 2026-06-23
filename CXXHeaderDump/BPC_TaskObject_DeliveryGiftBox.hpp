#ifndef UE4SS_SDK_BPC_TaskObject_DeliveryGiftBox_HPP
#define UE4SS_SDK_BPC_TaskObject_DeliveryGiftBox_HPP

class UBPC_TaskObject_DeliveryGiftBox_C : public UBPC_TaskObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0110 (size: 0x8)
    int32 TargetNum;                                                                  // 0x0118 (size: 0x4)
    TArray<class ABP_GoalHouse_C*> Out Actors;                                        // 0x0120 (size: 0x10)

    void TaskStart();
    void GoalGiftBox(class AActor* GiftBox);
    void ExecuteUbergraph_BPC_TaskObject_DeliveryGiftBox(int32 EntryPoint);
}; // Size: 0x130

#endif
