#ifndef UE4SS_SDK_LINK_ServerSaveData_HPP
#define UE4SS_SDK_LINK_ServerSaveData_HPP

class ULINK_ServerSaveData_C : public UObject
{
    int32 GoalRound;                                                                  // 0x0028 (size: 0x4)
    int32 CurrentRound;                                                               // 0x002C (size: 0x4)
    TEnumAsByte<EN_LINK_GamePhase::Type> GamePhase;                                   // 0x0030 (size: 0x1)
    int32 BeforeTravelNum;                                                            // 0x0034 (size: 0x4)
    TArray<class AController*> AllPlayerControllers;                                  // 0x0038 (size: 0x10)

    void GetController(TArray<class AController*>& AllPlayerControllers);
    void RemoveController(const class AController*& Controller);
    void AddController(const class AController*& Controller);
    void Initialization();
    void GetCurrentGamePhase(TEnumAsByte<EN_LINK_GamePhase::Type>& GamePhase);
    void SetCurrentGamePhase(TEnumAsByte<EN_LINK_GamePhase::Type> GamePhase);
    void GetCurrentRound(int32& Value);
    void SetCurrentRound(int32 Value);
}; // Size: 0x48

#endif
