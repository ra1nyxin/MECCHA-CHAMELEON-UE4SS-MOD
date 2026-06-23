#ifndef UE4SS_SDK_BP_CountZone_cLeon_HPP
#define UE4SS_SDK_BP_CountZone_cLeon_HPP

class ABP_CountZone_cLeon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x02B0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B8 (size: 0x8)
    TArray<class ABP_FirstPersonCharacter_cLeon_Character_C*> CurrentOverlappingCharacters; // 0x02C0 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CountZone_cLeon(int32 EntryPoint);
}; // Size: 0x2D0

#endif
