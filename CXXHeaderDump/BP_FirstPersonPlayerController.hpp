#ifndef UE4SS_SDK_BP_FirstPersonPlayerController_HPP
#define UE4SS_SDK_BP_FirstPersonPlayerController_HPP

class ABP_FirstPersonPlayerController_C : public AUINavController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0748 (size: 0x8)
    TArray<class UWidget*> AllWidgets;                                                // 0x0750 (size: 0x10)
    class UWBP_CentorInteract_C* Centor Interact;                                     // 0x0760 (size: 0x8)

    void SetAllWidgetVisibility(bool IsShow);
    void ReceiveBeginPlay();
    void OnRootWidgetRemoved();
    void OnRootWidgetAdded();
    void AddMainWidgets();
    void SendToText(FString MainText, int32 Index);
    void ExecuteUbergraph_BP_FirstPersonPlayerController(int32 EntryPoint);
}; // Size: 0x768

#endif
