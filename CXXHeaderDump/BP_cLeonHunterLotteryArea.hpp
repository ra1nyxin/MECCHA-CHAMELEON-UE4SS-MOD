#ifndef UE4SS_SDK_BP_cLeonHunterLotteryArea_HPP
#define UE4SS_SDK_BP_cLeonHunterLotteryArea_HPP

class ABP_cLeonHunterLotteryArea_C : public AActor
{
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A8 (size: 0x8)

    void GetLotteryedControllers(int32 MaxNum, TArray<class ABP_PlayerController_cLeon_C*>& Controllers);
    void GetOverlapCharacters(TArray<class ABP_FirstPersonCharacter_cLeon_Character_C*>& ReturnCharacters);
}; // Size: 0x2B0

#endif
