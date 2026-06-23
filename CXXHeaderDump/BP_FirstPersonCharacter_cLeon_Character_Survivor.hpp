#ifndef UE4SS_SDK_BP_FirstPersonCharacter_cLeon_Character_Survivor_HPP
#define UE4SS_SDK_BP_FirstPersonCharacter_cLeon_Character_Survivor_HPP

class ABP_FirstPersonCharacter_cLeon_Character_Survivor_C : public ABP_FirstPersonCharacter_cLeon_Character_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C90 (size: 0x8)
    double FilledValue;                                                               // 0x0C98 (size: 0x8)
    int32 PreStencil;                                                                 // 0x0CA0 (size: 0x4)
    TArray<class UCapsuleComponent*> OverlapCheckCapsules;                            // 0x0CA8 (size: 0x10)

    void IsOverlap(int32& OverlapCountRezult);
    void PlayerControllerSetup();
    void ReceiveTick(float DeltaSeconds);
    void OverlapCheck();
    void ReceiveBeginPlay();
    void SetStencilValue(Server)(int32 StencilValue);
    void ExecuteUbergraph_BP_FirstPersonCharacter_cLeon_Character_Survivor(int32 EntryPoint);
}; // Size: 0xCB8

#endif
