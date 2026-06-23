#ifndef UE4SS_SDK_BP_Online_SelfControler_HPP
#define UE4SS_SDK_BP_Online_SelfControler_HPP

class ABP_Online_SelfControler_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    class UWBP_Pause_C* UIPause;                                                      // 0x02B8 (size: 0x8)
    bool CurrentPaused;                                                               // 0x02C0 (size: 0x1)
    class UUserWidget* Option;                                                        // 0x02C8 (size: 0x8)
    bool CanPause;                                                                    // 0x02D0 (size: 0x1)

    void InpActEvt_IA_Pause_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void Return();
    void ReceiveBeginPlay();
    void CloseSettings();
    void ExecuteUbergraph_BP_Online_SelfControler(int32 EntryPoint);
}; // Size: 0x2D1

#endif
