#ifndef UE4SS_SDK_BP_ModLevelManager_HPP
#define UE4SS_SDK_BP_ModLevelManager_HPP

class ABP_ModLevelManager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    FString MapItemId;                                                                // 0x02B8 (size: 0x10)
    class ASkyLight* DisableSkyLight;                                                 // 0x02C8 (size: 0x8)

    void SetLoadCustomState(bool IsUse);
    void OnRep_MapItemId();
    void OnRep_UsingCustomMap();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void LoadCheckStart();
    void ClearLevel();
    void ExecuteUbergraph_BP_ModLevelManager(int32 EntryPoint);
}; // Size: 0x2D0

#endif
