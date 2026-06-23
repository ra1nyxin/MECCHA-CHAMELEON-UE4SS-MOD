#ifndef UE4SS_SDK_BP_SortieArea_HPP
#define UE4SS_SDK_BP_SortieArea_HPP

class ABP_SortieArea_C : public ABP_PlayerCounter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UStaticMeshComponent* LinkFlagOverlapZone;                                  // 0x0308 (size: 0x8)
    class UStaticMeshComponent* ring;                                                 // 0x0310 (size: 0x8)
    TArray<class AActor*> OverlapingPlayers_0;                                        // 0x0318 (size: 0x10)
    class ABP_GameState_LINK_C* As BP Game State LINK_0;                              // 0x0328 (size: 0x8)
    class ABP_FirstPersonGameMode_Online_LINK_C* As BP First Person Game Mode Online LINK_0; // 0x0330 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_SortieArea(int32 EntryPoint);
}; // Size: 0x338

#endif
