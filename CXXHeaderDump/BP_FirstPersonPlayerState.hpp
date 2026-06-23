#ifndef UE4SS_SDK_BP_FirstPersonPlayerState_HPP
#define UE4SS_SDK_BP_FirstPersonPlayerState_HPP

class ABP_FirstPersonPlayerState_C : public APlayerState
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0360 (size: 0x8)
    class UBPC_InventoryController_C* BPC_InventoryController;                        // 0x0368 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0370 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* TargetCharacter;                           // 0x0378 (size: 0x8)

    void ReceiveCopyProperties(class APlayerState* NewPlayerState);
    void ReceiveBeginPlay();
    void Initialization(class ABP_FirstPersonCharacter_Main_C* Character);
    void ChangeParamater(flaot)(FName Name, double Value);
    void ExecuteUbergraph_BP_FirstPersonPlayerState(int32 EntryPoint);
}; // Size: 0x380

#endif
