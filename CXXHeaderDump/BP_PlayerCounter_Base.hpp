#ifndef UE4SS_SDK_BP_PlayerCounter_Base_HPP
#define UE4SS_SDK_BP_PlayerCounter_Base_HPP

class ABP_PlayerCounter_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TSubclassOf<class AActor> PlayerClass;                                            // 0x02B8 (size: 0x8)
    TArray<class AActor*> OverlapingPlayers;                                          // 0x02C0 (size: 0x10)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x02D0 (size: 0x8)
    class ABP_FirstPersonGameMode_Online_LINK_C* As BP First Person Game Mode Online LINK; // 0x02D8 (size: 0x8)
    FBP_PlayerCounter_Base_COnUpdateOverlapingPlayers OnUpdateOverlapingPlayers;      // 0x02E0 (size: 0x10)
    void OnUpdateOverlapingPlayers(int32 Length);
    FBP_PlayerCounter_Base_COverlapEvent OverlapEvent;                                // 0x02F0 (size: 0x10)
    void OverlapEvent(class AActor* Actor, bool State);

    void ReceiveBeginPlay();
    void BeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ResetEvent();
    void ExecuteUbergraph_BP_PlayerCounter_Base(int32 EntryPoint);
    void OverlapEvent__DelegateSignature(class AActor* Actor, bool State);
    void OnUpdateOverlapingPlayers__DelegateSignature(int32 Length);
}; // Size: 0x300

#endif
