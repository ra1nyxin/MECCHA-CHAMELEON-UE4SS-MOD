#ifndef UE4SS_SDK_BPC_ItemUsedLoal_Wine_HPP
#define UE4SS_SDK_BPC_ItemUsedLoal_Wine_HPP

class UBPC_ItemUsedLoal_Wine_C : public UBPC_ItemUsedLoal_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    double InfinityStaminaTime;                                                       // 0x00C0 (size: 0x8)
    double DrunkTime;                                                                 // 0x00C8 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* As BP First Person Character LINK;         // 0x00D0 (size: 0x8)
    bool Drunk;                                                                       // 0x00D8 (size: 0x1)
    double DrunkValue;                                                                // 0x00E0 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BPC_ItemUsedLoal_Wine(int32 EntryPoint);
}; // Size: 0xE8

#endif
