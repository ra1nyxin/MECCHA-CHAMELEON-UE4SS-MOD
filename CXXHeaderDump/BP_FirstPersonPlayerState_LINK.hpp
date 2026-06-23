#ifndef UE4SS_SDK_BP_FirstPersonPlayerState_LINK_HPP
#define UE4SS_SDK_BP_FirstPersonPlayerState_LINK_HPP

class ABP_FirstPersonPlayerState_LINK_C : public ABP_FirstPersonPlayerState_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UBPC_LuggageBackpack_LINK_C* BPC_LuggageBackpack_LINK;                      // 0x0388 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* OwnerCharacter_LINK;                       // 0x0390 (size: 0x8)
    TMap<TEnumAsByte<EN_LINK_PlayerStateValueType::Type>, double> PlayerStateValue;   // 0x0398 (size: 0x50)
    double LiftPower;                                                                 // 0x03E8 (size: 0x8)
    FString CustomPlayerName;                                                         // 0x03F0 (size: 0x10)
    TMap<TEnumAsByte<EN_LINK_PlayerStateValueType::Type>, double> PlayerStateValue_Replicate; // 0x0400 (size: 0x50)
    FBP_FirstPersonPlayerState_LINK_COnValueChange OnValueChange;                     // 0x0450 (size: 0x10)
    void OnValueChange(TEnumAsByte<EN_LINK_PlayerStateValueType::Type> PlayerStateValue, double Value);
    int32 HaveCoin;                                                                   // 0x0460 (size: 0x4)
    int32 HoveCoin_Old;                                                               // 0x0464 (size: 0x4)
    FBP_FirstPersonPlayerState_LINK_COnBackPackValueChange OnBackPackValueChange;     // 0x0468 (size: 0x10)
    void OnBackPackValueChange(double BackpackWeight);
    double CurrentBackpackWeight;                                                     // 0x0478 (size: 0x8)

    void GetCustomPlayerName(FString& playerName);
    void SetCoin(int32 SetValue);
    void AddCoin(int32 AddValue);
    void UseCoin(int32 CoinValue, bool& Rezult);
    void OnRep_HaveCoin();
    void GetCurrentWeight(double& WeightPower);
    void AddStateValue(TEnumAsByte<EN_LINK_PlayerStateValueType::Type> ValueName, double Value, FVector2D ClampValue);
    void SetStateValue(TEnumAsByte<EN_LINK_PlayerStateValueType::Type> Key, double Value);
    void GetStateValue(TEnumAsByte<EN_LINK_PlayerStateValueType::Type>& Key, double& Value, double& ReplicateValue);
    void ViewChange(class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void SetupSpectateNameplate(class ABP_FirstPersonCharacter_Main_C* Character);
    void ReceiveBeginPlay();
    void ReceiveCopyProperties(class APlayerState* NewPlayerState);
    void Initialization(class ABP_FirstPersonCharacter_Main_C* Character);
    void SetName(FString CustomPlayerName);
    void NameUpdate();
    void StateValueSync(Server)(const TEnumAsByte<EN_LINK_PlayerStateValueType::Type>& Key, const double& Value);
    void StateValueSync(Client)(const TEnumAsByte<EN_LINK_PlayerStateValueType::Type>& Key, const double& Value);
    void SetBackPackMenuState(bool State);
    void BndEvt__BP_FirstPersonPlayerState_LINK_BPC_LuggageBackpack_LINK_K2Node_ComponentBoundEvent_0_ItemSelect__DelegateSignature(int32 Index, bool CanSpawn);
    void RespawnItem(Server)(int32 ItemIndex, FTransform CameraTransform, bool CanSpawn);
    void BndEvt__BP_FirstPersonPlayerState_LINK_BPC_LuggageBackpack_LINK_K2Node_ComponentBoundEvent_1_ChangeWeight__DelegateSignature(double Weight);
    void SendToText(FString Text, int32 MessageType);
    void ReceiveDestroyed();
    void ExecuteUbergraph_BP_FirstPersonPlayerState_LINK(int32 EntryPoint);
    void OnBackPackValueChange__DelegateSignature(double BackpackWeight);
    void OnValueChange__DelegateSignature(TEnumAsByte<EN_LINK_PlayerStateValueType::Type> PlayerStateValue, double Value);
}; // Size: 0x480

#endif
