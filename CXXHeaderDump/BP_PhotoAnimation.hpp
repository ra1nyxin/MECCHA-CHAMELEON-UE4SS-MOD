#ifndef UE4SS_SDK_BP_PhotoAnimation_HPP
#define UE4SS_SDK_BP_PhotoAnimation_HPP

class ABP_PhotoAnimation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B0 (size: 0x8)
    class USkeletalMeshComponent* PhotoMesh;                                          // 0x02B8 (size: 0x8)
    float _______Scale_07EBE3424D13DA82E76DDFA1C8F37E14;                              // 0x02C0 (size: 0x4)
    float _______ratio_07EBE3424D13DA82E76DDFA1C8F37E14;                              // 0x02C4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ________Direction_07EBE3424D13DA82E76DDFA1C8F37E14; // 0x02C8 (size: 0x1)
    class UTimelineComponent* タイムライン;                                                 // 0x02D0 (size: 0x8)
    FVector RelativeScale;                                                            // 0x02D8 (size: 0x18)
    bool Not Pick Up;                                                                 // 0x02F0 (size: 0x1)
    TArray<class AActor*> In Actors;                                                  // 0x02F8 (size: 0x10)
    int32 PenguinIn;                                                                  // 0x0308 (size: 0x4)
    TArray<FString> HaveKeys;                                                         // 0x0310 (size: 0x10)
    bool NoFire;                                                                      // 0x0320 (size: 0x1)
    bool BlockEffect;                                                                 // 0x0321 (size: 0x1)
    class UNiagaraComponent* TrailEffect;                                             // 0x0328 (size: 0x8)
    TArray<FST_CopyDatas> In ActorClass;                                              // 0x0330 (size: 0x10)
    TEnumAsByte<ENUM_CameraMode::Type> FilmType;                                      // 0x0340 (size: 0x1)
    bool DeleteTarget;                                                                // 0x0341 (size: 0x1)
    bool AutoDestroy;                                                                 // 0x0342 (size: 0x1)
    FVector Hit Normal;                                                               // 0x0348 (size: 0x18)

    void IsInPhoto(bool& Value);
    void GetKeyValues(TArray<FString>& HaveKeys);
    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetParentCharacter(class ABP_FirstPersonCharacter_Main_C*& FirstPersonCharacter);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void タイムライン__FinishedFunc();
    void タイムライン__UpdateFunc();
    void InteractItem();
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void UpdateCoreDatas(const FST_ItemCoreDatas CoreDatas);
    void PhotoExport(class USplineComponent* Sline, class ABP_FirstPersonCharacter_Main_C* FirstPerson, TEnumAsByte<ENUM_CameraMode::Type> PhotoType);
    void DropItem(FVector Force Vector, FVector CentorPosition);
    void View In Out Function(int32 Stencil Value);
    void Fire(bool MiniFire);
    void SetMeshDatas(bool KeepScale);
    void BndEvt__BP_PhotoAnimation_Box_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Fix();
    void ReceiveDestroyed();
    void SetTimeStopState(bool State);
    void ExecuteUbergraph_BP_PhotoAnimation(int32 EntryPoint);
}; // Size: 0x360

#endif
