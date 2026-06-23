#ifndef UE4SS_SDK_BP_FirstPersonGameMode_HPP
#define UE4SS_SDK_BP_FirstPersonGameMode_HPP

class ABP_FirstPersonGameMode_C : public AMyGameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0358 (size: 0x8)
    class UWBP_Pause_C* UIPause;                                                      // 0x0360 (size: 0x8)
    FBP_FirstPersonGameMode_CDeleteUI DeleteUI;                                       // 0x0368 (size: 0x10)
    void DeleteUI();

    void InpActEvt_IA_Pause_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_Tab_K2Node_InputDebugKeyEvent_0(FKey Key, FInputActionValue ActionValue);
    void ReceiveBeginPlay();
    void InteractSignal(class ABP_FirstPersonCharacter_Main_C* Character, class AActor* Actor);
    void ExecuteUbergraph_BP_FirstPersonGameMode(int32 EntryPoint);
    void DeleteUI__DelegateSignature();
}; // Size: 0x378

#endif
