#ifndef UE4SS_SDK_BP_DeviceBase_HPP
#define UE4SS_SDK_BP_DeviceBase_HPP

class ABP_DeviceBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UObject* BPC_UpdateLineSignalControl;                                       // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    class UDeviceComponent_C* DeviceComonent;                                         // 0x02C0 (size: 0x8)
    TEnumAsByte<EN_DeviceState::Type> DeviceState;                                    // 0x02C8 (size: 0x1)
    TArray<class AActor*> SignalDevices;                                              // 0x02D0 (size: 0x10)
    int32 ActivateSaveIndex;                                                          // 0x02E0 (size: 0x4)
    FColor Color;                                                                     // 0x02E4 (size: 0x4)
    bool UpdateSaveOnlyInitialize;                                                    // 0x02E8 (size: 0x1)
    TEnumAsByte<EN_DeviceOnlineMode::Type> OnlineMode;                                // 0x02E9 (size: 0x1)

    void SaveUpdateFunc();
    void OnStateChange(TEnumAsByte<EN_DeviceState::Type> State);
    void DeviceStateUpdate(FST_EventValue EventValue, FST_EventValue& ReturnEventValue);
    void UserConstructionScript();
    void UpdateSave(int32 UpdateIndex, TEnumAsByte<ENUM_SaveDataUpdateType::Type> LoadType);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_DeviceBase(int32 EntryPoint);
}; // Size: 0x2EA

#endif
