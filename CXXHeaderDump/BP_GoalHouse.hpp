#ifndef UE4SS_SDK_BP_GoalHouse_HPP
#define UE4SS_SDK_BP_GoalHouse_HPP

class ABP_GoalHouse_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* lease;                                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* woodbox2;                                             // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* woodbox1;                                             // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* woodbox;                                              // 0x02C8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02D0 (size: 0x8)
    class UBoxComponent* BoundSizeCheck;                                              // 0x02D8 (size: 0x8)
    class UBoxComponent* ChimneyLocation;                                             // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E8 (size: 0x8)
    bool HouseState;                                                                  // 0x02F0 (size: 0x1)
    FBP_GoalHouse_CGoalGiftBox GoalGiftBox;                                           // 0x02F8 (size: 0x10)
    void GoalGiftBox(class AActor* GiftBox);

    void SetHouseActiveState(bool State);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__BP_GoalHouse_ChimneyLocation_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TargetActivate();
    void SetHouseState(Replicate)(bool State);
    void ExecuteUbergraph_BP_GoalHouse(int32 EntryPoint);
    void GoalGiftBox__DelegateSignature(class AActor* GiftBox);
}; // Size: 0x308

#endif
