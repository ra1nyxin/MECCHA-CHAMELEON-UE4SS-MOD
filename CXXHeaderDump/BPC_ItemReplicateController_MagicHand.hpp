#ifndef UE4SS_SDK_BPC_ItemReplicateController_MagicHand_HPP
#define UE4SS_SDK_BPC_ItemReplicateController_MagicHand_HPP

class UBPC_ItemReplicateController_MagicHand_C : public UBPC_ItemReplicateController_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E0 (size: 0x8)
    class UPrimitiveComponent* AddForceTarget;                                        // 0x00E8 (size: 0x8)
    class ABP_MagicHandGrabArea_C* GrabAreaActor;                                     // 0x00F0 (size: 0x8)
    double GrabLength;                                                                // 0x00F8 (size: 0x8)
    double GrabRadius;                                                                // 0x0100 (size: 0x8)
    FVector GrabCentorPosition;                                                       // 0x0108 (size: 0x18)

    void OnNotifyEnd_DE6FBB4444253A46022144A98AE44FAE(FName NotifyName);
    void OnNotifyBegin_DE6FBB4444253A46022144A98AE44FAE(FName NotifyName);
    void OnInterrupted_DE6FBB4444253A46022144A98AE44FAE(FName NotifyName);
    void OnBlendOut_DE6FBB4444253A46022144A98AE44FAE(FName NotifyName);
    void OnCompleted_DE6FBB4444253A46022144A98AE44FAE(FName NotifyName);
    void ReceiveBeginPlay();
    void UseItem(Replicate)(bool State);
    void UseItem(Server)(bool State);
    void UseItem(Local)(bool State);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void CharacterReplicated();
    void ReceiveTick(float DeltaSeconds);
    void Grab(Replicate)(FVector CentorLocation);
    void Grab(Server)(FVector CentorLocation);
    void ExecuteUbergraph_BPC_ItemReplicateController_MagicHand(int32 EntryPoint);
}; // Size: 0x120

#endif
