#ifndef UE4SS_SDK_BP_EEYAN_Arrow_HPP
#define UE4SS_SDK_BP_EEYAN_Arrow_HPP

class ABP_EEYAN_Arrow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x02B0 (size: 0x8)
    class UWBP_SelectEEYAN_C* MyWidget;                                               // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void DeleteCall();
    void ExecuteUbergraph_BP_EEYAN_Arrow(int32 EntryPoint);
}; // Size: 0x2C0

#endif
