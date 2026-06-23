#ifndef UE4SS_SDK_BP_EnablePotoIn_Base_HPP
#define UE4SS_SDK_BP_EnablePotoIn_Base_HPP

class ABP_EnablePotoIn_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBillboardComponent* RayPoint_Sub_2;                                        // 0x02B0 (size: 0x8)
    class UBPC_RayPositions_C* BPC_RayPositions;                                      // 0x02B8 (size: 0x8)
    class UBPC_CollisionSound_C* BPC_CollisionSound;                                  // 0x02C0 (size: 0x8)
    class UBillboardComponent* RayPoint_Sub_1;                                        // 0x02C8 (size: 0x8)
    class UBillboardComponent* RayPoint_Centor;                                       // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D8 (size: 0x8)
    FTransform DefaultTransform;                                                      // 0x02E0 (size: 0x60)
    double NormalizeScale;                                                            // 0x0340 (size: 0x8)
    bool Not Shot;                                                                    // 0x0348 (size: 0x1)
    double DefaultHeight;                                                             // 0x0350 (size: 0x8)
    double TimeDiff;                                                                  // 0x0358 (size: 0x8)
    bool NotPickUp;                                                                   // 0x0360 (size: 0x1)
    double ReverseTime;                                                               // 0x0368 (size: 0x8)
    FTransform FirstTransform;                                                        // 0x0370 (size: 0x60)
    TEnumAsByte<HitMaterial::Type> ActorMaterial;                                     // 0x03D0 (size: 0x1)
    double AfterAngulerDumping;                                                       // 0x03D8 (size: 0x8)
    bool AudioOff;                                                                    // 0x03E0 (size: 0x1)
    TEnumAsByte<ENUM_ActorType::Type> ActorDefaultType;                               // 0x03E1 (size: 0x1)
    bool FullRandomRotation;                                                          // 0x03E2 (size: 0x1)
    bool InPhoto;                                                                     // 0x03E3 (size: 0x1)
    bool TimeStopState;                                                               // 0x03E4 (size: 0x1)
    bool EnableTimeStop;                                                              // 0x03E5 (size: 0x1)

    void IsInPhoto(bool& Value);
    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetCopyClass(class UStaticMeshComponent* CentorComponent, TSubclassOf<class ABP_CopyActorBase_C>& Class, double& Scale, FVector& DefaultScale);
    void GetCentorPosition(TArray<FVector>& CentorPosition);
    void GetActorInfo(FTransform& DefaultTransform, bool& Not In Shot, FVector& CentorPosition, bool& IsPenguin, TEnumAsByte<ENUM_ActorType::Type>& ActorType, bool& NonInPhoto);
    void GetParentCharacter(class ABP_FirstPersonCharacter_Main_C*& FirstPersonCharacter);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void SetScaleValues();
    void InPhotoFunc();
    void ReverseFunc();
    void UserConstructionScript();
    void Reverse(FTransform NewPosition, FVector HitNormal);
    void View In Out Function(int32 Stencil Value);
    void ReceiveDestroyed();
    void InAngleOfView(bool InState, double DeltaTime, TEnumAsByte<ENUM_CameraMode::Type> CameraMode);
    void Fix();
    void BndEvt__BP_EnablePotoIn_Base_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Delete();
    void ReceiveBeginPlay();
    void SetTimeStopState(bool State);
    void SetActorInfo(FVector ToPosition, class USceneComponent* Comp);
    void DropItem(FVector Force Vector, FVector CentorPosition);
    void UpdateCoreDatas(const FST_ItemCoreDatas CoreDatas);
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void InteractItem();
    void SetMeshDatas(bool KeepScale);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BP_EnablePotoIn_Base(int32 EntryPoint);
}; // Size: 0x3E6

#endif
