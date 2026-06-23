#ifndef UE4SS_SDK_BP_ItemBase_HPP
#define UE4SS_SDK_BP_ItemBase_HPP

class ABP_ItemBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UDeviceComponent_C* DeviceComonent;                                         // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    double DropPower;                                                                 // 0x02C0 (size: 0x8)
    double ActorSizeMultiply;                                                         // 0x02C8 (size: 0x8)
    FRotator HaveRotation;                                                            // 0x02D0 (size: 0x18)
    FVector Add Position;                                                             // 0x02E8 (size: 0x18)
    TArray<FString> KeyHaveName;                                                      // 0x0300 (size: 0x10)
    int32 ItemSaveIndex;                                                              // 0x0310 (size: 0x4)
    FTransform FirstTransform;                                                        // 0x0320 (size: 0x60)
    TArray<class AActor*> SendToActor;                                                // 0x0380 (size: 0x10)
    TEnumAsByte<ENUM_ClassType::Type> Class Type;                                     // 0x0390 (size: 0x1)
    FName Bone Name;                                                                  // 0x0394 (size: 0x8)
    FName Item Name;                                                                  // 0x039C (size: 0x8)
    int32 Durability;                                                                 // 0x03A4 (size: 0x4)
    TEnumAsByte<ENUM_ItemBindType::Type> Bind Type;                                   // 0x03A8 (size: 0x1)
    bool Not Pick Up;                                                                 // 0x03A9 (size: 0x1)
    FST_ItemCoreDatas ItemCoreDatas;                                                  // 0x03B0 (size: 0x70)
    class ABP_FirstPersonCharacter_Main_C* OwnerCharacter;                            // 0x0420 (size: 0x8)
    FText OptionTexts;                                                                // 0x0428 (size: 0x10)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void GetParryState(bool& State);
    bool MS_IsInView(class AActor* Actor);
    void GetKeyValues(TArray<FString>& HaveKeys);
    void GetParentCharacter(class ABP_FirstPersonCharacter_Main_C*& FirstPersonCharacter);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetOwnerPlayerState(class ABP_FirstPersonPlayerState_C*& MyPlayerState);
    void SaveUpdateFunc();
    void UserConstructionScript();
    void StanDamage(TEnumAsByte<EN_StanType::Type> StanType);
    void StaminaDamage(double Value);
    void DamageToPlayerController(class AActor* TargetActor, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, FHitResult HitRezult, class AActor* SourceActor);
    void Shot(bool PressState, double PushTime, class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void Aim(bool PressState);
    void Change();
    void Reset();
    void Reload(bool PressState);
    void BPI_InteractStart(Server)(class ABP_FirstPersonCharacter_Main_C* First Person);
    void BPI_InteractEnd();
    void BPI_InteractStart(Local)(class ABP_FirstPersonCharacter_Main_C* First Person);
    void InteractItem();
    void ReceiveBeginPlay();
    void Interact();
    void SetMeshDatas(bool KeepScale);
    void DropItem(FVector Force Vector, FVector CentorPosition);
    void View In Out Function(int32 Stencil Value);
    void UpdateSave(int32 UpdateIndex, TEnumAsByte<ENUM_SaveDataUpdateType::Type> LoadType);
    void Fix();
    void BPI_InteractStart(class ABP_FirstPersonCharacter_Main_C* First Person);
    void CreateCoreData();
    void UpdateCoreDatas(const FST_ItemCoreDatas CoreDatas);
    void PickState(bool State, class ABP_FirstPersonCharacter_Main_C* Character, int32 SlotIndex);
    void ExecuteUbergraph_BP_ItemBase(int32 EntryPoint);
}; // Size: 0x438

#endif
