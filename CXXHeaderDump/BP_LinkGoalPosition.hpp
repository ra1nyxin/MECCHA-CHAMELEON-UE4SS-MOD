#ifndef UE4SS_SDK_BP_LinkGoalPosition_HPP
#define UE4SS_SDK_BP_LinkGoalPosition_HPP

class ABP_LinkGoalPosition_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UNiagaraComponent* NI_Beacon;                                               // 0x02B0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* falgswitch;                                           // 0x02C0 (size: 0x8)
    class UBillboardComponent* RespawnPointPosition2;                                 // 0x02C8 (size: 0x8)
    class UBillboardComponent* RespawnPointPosition1;                                 // 0x02D0 (size: 0x8)
    class UBillboardComponent* RespawnPointPosition;                                  // 0x02D8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* LinkFlagOverlapZone;                                  // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* ring;                                                 // 0x02F8 (size: 0x8)
    class UGeometryCacheComponent* LiNK_flag;                                         // 0x0300 (size: 0x8)
    class UStaticMeshComponent* Pole;                                                 // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    bool IsRespawnPoint;                                                              // 0x0318 (size: 0x1)
    FTransform InstancePoleTransform;                                                 // 0x0320 (size: 0x60)
    FVector DiffPosition;                                                             // 0x0380 (size: 0x18)
    TSet<FGuid> NeedLuggageId;                                                        // 0x0398 (size: 0x50)
    TArray<class AActor*> OverlapingActors;                                           // 0x03E8 (size: 0x10)
    TSet<FGuid> OverlapingIds;                                                        // 0x03F8 (size: 0x50)
    TMap<class FGuid, class ABP_LinkPoint_C*> LinkPoint;                              // 0x0448 (size: 0x50)
    class ABP_FirstPersonGameMode_Online_LINK_C* GameMode_LINK;                       // 0x0498 (size: 0x8)
    bool IsActive;                                                                    // 0x04A0 (size: 0x1)
    bool IsDefaultRespawnPoint;                                                       // 0x04A1 (size: 0x1)
    TSet<ABP_MiniPenguin_C*> RegisteredRespawnMiniPenguin;                            // 0x04A8 (size: 0x50)
    class ABP_DeviceBase_C* SignalTarget;                                             // 0x04F8 (size: 0x8)
    int32 SpawnedAge;                                                                 // 0x0500 (size: 0x4)
    bool CanLink;                                                                     // 0x0504 (size: 0x1)
    bool IsLastGoalPosition;                                                          // 0x0505 (size: 0x1)
    FBP_LinkGoalPosition_CLastGoal LastGoal;                                          // 0x0508 (size: 0x10)
    void LastGoal();

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    bool CanInteract();
    void SetUsedPoint(bool IsUsed);
    void GetDuplicateValues(TArray<FGuid>& DuplicateValues);
    void MakePole(class UInstancedStaticMeshComponent* InstancedStaticMeshComp);
    void UserConstructionScript();
    void BPI_InteractStart(Server)(class ABP_FirstPersonCharacter_Main_C* First Person);
    void BPI_InteractEnd();
    void BPI_InteractStart(Local)(class ABP_FirstPersonCharacter_Main_C* First Person);
    void ReceiveBeginPlay();
    void BndEvt__BP_LinkGoalPosition_LinkFlagOverlapZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_LinkGoalPosition_LinkFlagOverlapZone_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void RegisterLinkPoint(FGuid ID, class ABP_LinkPoint_C* LinkPoint);
    void ResetGoalEevent();
    void BPI_InteractStart(class ABP_FirstPersonCharacter_Main_C* First Person);
    void InteractSignal();
    void GoalEvent();
    void RespawnCall(class ABP_MiniPenguin_C* Target);
    void FragVisualUpdate(bool IsUsed);
    void ToBlueFlag();
    void LINK_FragReActivate(bool IsLastLink);
    void LastLink();
    void LastTargetActivate(bool ActivateState);
    void ExecuteUbergraph_BP_LinkGoalPosition(int32 EntryPoint);
    void LastGoal__DelegateSignature();
}; // Size: 0x518

#endif
