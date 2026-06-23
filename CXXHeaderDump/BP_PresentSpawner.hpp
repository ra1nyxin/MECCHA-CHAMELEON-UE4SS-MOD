#ifndef UE4SS_SDK_BP_PresentSpawner_HPP
#define UE4SS_SDK_BP_PresentSpawner_HPP

class ABP_PresentSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x02B8 (size: 0x8)
    class USkeletalMeshComponent* Gift_Spawner;                                       // 0x02C0 (size: 0x8)
    bool OverlapState;                                                                // 0x02C8 (size: 0x1)
    TArray<class ABP_GoalHouse_C*> QueueHouse;                                        // 0x02D0 (size: 0x10)
    TSet<ABP_GoalHouse_C*> QueuedHouses;                                              // 0x02E0 (size: 0x50)
    TArray<class AActor*> SpawnedGiftBox;                                             // 0x0330 (size: 0x10)
    class ABP_FirstPersonGameMode_Online_LINK_C* As BP First Person Game Mode Online LINK; // 0x0340 (size: 0x8)

    void IsHouseAllGoal(bool& AllGoal);
    void UpdateOverlapState();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void AddQueue(const class ABP_GoalHouse_C*& HouseActor);
    void DestroyActor(class AActor* DestroyedActor);
    void GoadGiftBox(class AActor* GiftBox);
    void CleanUp();
    void ExecuteUbergraph_BP_PresentSpawner(int32 EntryPoint);
}; // Size: 0x348

#endif
