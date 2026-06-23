#ifndef UE4SS_SDK_BP_BGM_Manager_HPP
#define UE4SS_SDK_BP_BGM_Manager_HPP

class ABP_BGM_Manager_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    TMap<class FName, class USoundCue*> BGM;                                          // 0x02C0 (size: 0x50)
    FName CurrentBGM;                                                                 // 0x0310 (size: 0x8)

    void OnRep_CurrentBGM();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BGM_Manager(int32 EntryPoint);
}; // Size: 0x318

#endif
