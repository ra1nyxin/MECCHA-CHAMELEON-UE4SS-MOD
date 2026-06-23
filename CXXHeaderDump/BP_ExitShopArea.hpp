#ifndef UE4SS_SDK_BP_ExitShopArea_HPP
#define UE4SS_SDK_BP_ExitShopArea_HPP

class ABP_ExitShopArea_C : public ABP_PlayerCounter_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0308 (size: 0x8)
    TArray<class AActor*> OverlapingPlayers_0;                                        // 0x0310 (size: 0x10)
    class ABP_GameState_LINK_C* As BP Game State LINK_0;                              // 0x0320 (size: 0x8)
    class ABP_FirstPersonGameMode_Online_LINK_C* As BP First Person Game Mode Online LINK_0; // 0x0328 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_ExitShopArea(int32 EntryPoint);
}; // Size: 0x330

#endif
