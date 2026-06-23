#ifndef UE4SS_SDK_BPC_FindNearConnectPoint_HPP
#define UE4SS_SDK_BPC_FindNearConnectPoint_HPP

class UBPC_FindNearConnectPoint_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* Primitive;                                             // 0x00C0 (size: 0x8)
    TSet<UPrimitiveComponent*> UniqueStatic;                                          // 0x00C8 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FVector> Near Point Datas;                 // 0x0118 (size: 0x50)
    TSubclassOf<class AActor> Visualize;                                              // 0x0168 (size: 0x8)
    TMap<class UPrimitiveComponent*, class AActor*> SpawnVisualActors;                // 0x0170 (size: 0x50)
    TSet<UPrimitiveComponent*> SpawnedVisualActors;                                   // 0x01C0 (size: 0x50)
    TSet<ABP_FirstPersonCharacter_Main_C*> CurrentUsers;                              // 0x0210 (size: 0x50)
    float SelfWeight;                                                                 // 0x0260 (size: 0x4)
    double CurrentRecivePower;                                                        // 0x0268 (size: 0x8)
    TMap<ABP_FirstPersonCharacter_Main_C*, double> ReciveWeightByUser;                // 0x0270 (size: 0x50)
    FVector BoundSize;                                                                // 0x02C0 (size: 0x18)
    int32 MaxConnectCount;                                                            // 0x02D8 (size: 0x4)
    int32 CurrentConnectPoints;                                                       // 0x02DC (size: 0x4)
    class UBoxComponent* BoundBox;                                                    // 0x02E0 (size: 0x8)

    void GetAttachUserNum(int32& Length);
    void UserSet(class ABP_FirstPersonCharacter_Main_C* Character, bool State);
    void SpawnOrTeleportVisualize(FVector InLocation, class UPrimitiveComponent* Primitive);
    void ClearArray();
    void SpawnVisualizeActor(class AActor* TargetActor, FVector position);
    void GetNearConnectDatas(TMap<class UPrimitiveComponent*, class FVector>& NearPointDatas);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void DestroySelf();
    void AddWeight(const class ABP_FirstPersonCharacter_Main_C*& Key, double Value, class UBPC_LINK_HandControl_C* HandComponent);
    void RemoveWeight(const class ABP_FirstPersonCharacter_Main_C*& Key, class UBPC_LINK_HandControl_C* HandComponent);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BPC_FindNearConnectPoint(int32 EntryPoint);
}; // Size: 0x2E8

#endif
