#ifndef UE4SS_SDK_BPC_ItemReplicateController_Base_HPP
#define UE4SS_SDK_BPC_ItemReplicateController_Base_HPP

class UBPC_ItemReplicateController_Base_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class ABP_ItemBase_C* OwnerItem;                                                  // 0x00C0 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* OwnerCharacter;                            // 0x00C8 (size: 0x8)
    TSubclassOf<class ABP_ItemBase_C> TargetClass;                                    // 0x00D0 (size: 0x8)
    int32 SelfSlotIndex;                                                              // 0x00D8 (size: 0x4)

    void OnRep_OwnerCharacter();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void DestroySelf(class AActor* DestroyedActor);
    void UseItem(Server)(bool State);
    void UseItem(Replicate)(bool State);
    void UseItem(Local)(bool State);
    void RightItemUpdate();
    void UpdateOwnerItem();
    void CharacterReplicated();
    void ExecuteUbergraph_BPC_ItemReplicateController_Base(int32 EntryPoint);
}; // Size: 0xDC

#endif
