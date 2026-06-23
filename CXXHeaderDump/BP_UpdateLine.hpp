#ifndef UE4SS_SDK_BP_UpdateLine_HPP
#define UE4SS_SDK_BP_UpdateLine_HPP

class ABP_UpdateLine_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    bool ForceUpdate;                                                                 // 0x02B8 (size: 0x1)
    TArray<class UNiagaraComponent*> MyNiagara;                                       // 0x02C0 (size: 0x10)
    TArray<class ABP_DeviceBase_C*> ErrorDevices;                                     // 0x02D0 (size: 0x10)
    bool AutoUpdate;                                                                  // 0x02E0 (size: 0x1)
    int32 DeviceCount;                                                                // 0x02E4 (size: 0x4)
    bool UpdateBlock;                                                                 // 0x02E8 (size: 0x1)
    int32 ReciveSignalCount;                                                          // 0x02EC (size: 0x4)

    void UpdateLine(TArray<class ABP_DeviceBase_C*>& LineUpdateTargets);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void UpdateLineEvent();
    void ExecuteUbergraph_BP_UpdateLine(int32 EntryPoint);
}; // Size: 0x2F0

#endif
