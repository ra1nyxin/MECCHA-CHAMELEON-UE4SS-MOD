#ifndef UE4SS_SDK_WBP_Spectate_HPP
#define UE4SS_SDK_WBP_Spectate_HPP

class UWBP_Spectate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_2;                                            // 0x0348 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_1;                                            // 0x0350 (size: 0x8)
    class UWidgetSwitcher* UINavSwitcher;                                             // 0x0358 (size: 0x8)
    TArray<class ABP_FirstPersonCharacter_Main_C*> PlayerClass;                       // 0x0360 (size: 0x10)
    class ABP_FirstPersonCharacter_Main_C* As BP First Person Character;              // 0x0370 (size: 0x8)
    int32 MaxSectionCount;                                                            // 0x0378 (size: 0x4)

    void InpActEvt_IA_Spectate_Left_K2Node_EnhancedInputActionEvent_1(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void InpActEvt_IA_Spectate_Right_K2Node_EnhancedInputActionEvent_0(FInputActionValue ActionValue, float ElapsedTime, float TriggeredTime, const class UInputAction* SourceAction);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_Spectate(int32 EntryPoint);
}; // Size: 0x37C

#endif
