#ifndef UE4SS_SDK_BPC_LuggageBackpack_LINK_HPP
#define UE4SS_SDK_BPC_LuggageBackpack_LINK_HPP

class UBPC_LuggageBackpack_LINK_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class UBPC_LuggageBackpack_LINK_C* BackPackWidget;                                // 0x00C0 (size: 0x8)
    TArray<FST_ItemCoreDatas> BackPackDatas;                                          // 0x00C8 (size: 0x10)
    bool IsOpen;                                                                      // 0x00D8 (size: 0x1)
    class UWBP_BackPackMenu_C* Widget;                                                // 0x00E0 (size: 0x8)
    int32 ItemLimit;                                                                  // 0x00E8 (size: 0x4)
    FBPC_LuggageBackpack_LINK_CItemSelect ItemSelect;                                 // 0x00F0 (size: 0x10)
    void ItemSelect(int32 Index, bool CanSpawn);
    FBPC_LuggageBackpack_LINK_CChangeWeight ChangeWeight;                             // 0x0100 (size: 0x10)
    void ChangeWeight(double Weight);
    double BeforeWeight;                                                              // 0x0110 (size: 0x8)
    class ABP_BackpackHolo_C* BackPackHolo;                                           // 0x0118 (size: 0x8)

    void GetHeightPosition_FromTransform(FTransform CameraTransform, float Distance, FVector BodyLocation, FVector& Location);
    void GetHeightPosition(class ABP_FirstPersonCharacter_Main_C* FirstPersonCharacter, float Distance, FVector& Location);
    void ClearAllItems();
    void GetSyncWeights(TArray<double>& Weights);
    void MapUpdate(TArray<double>& WeightValues);
    void OnRep_BackPackDatas();
    void GetSumWeight(double& SumWeight);
    void RespawnItem(int32 ItemIndex, FTransform CameraTransform, class ABP_FirstPersonCharacter_Main_C* FirstPersonCharacter, bool CanSpawn, class AActor*& SpawnedObject);
    void AddItem(const FST_ItemCoreDatas& ItemInfo, bool& IsSuccess);
    void CloseBackPack();
    void SelectIndex(int32 Index);
    void ChangeWeightEvent(double Weight);
    void SyncCoreWeightDatas(const TArray<double>& WeightValue);
    void SyncCall();
    void ChangedEvent(int32 Index);
    void OpenBackPack();
    void ExecuteUbergraph_BPC_LuggageBackpack_LINK(int32 EntryPoint);
    void ChangeWeight__DelegateSignature(double Weight);
    void ItemSelect__DelegateSignature(int32 Index, bool CanSpawn);
}; // Size: 0x120

#endif
