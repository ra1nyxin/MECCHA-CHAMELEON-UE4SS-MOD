#ifndef UE4SS_SDK_WBP_DoubleRanking_HPP
#define UE4SS_SDK_WBP_DoubleRanking_HPP

class UWBP_DoubleRanking_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0348 (size: 0x8)
    TMap<ABP_FirstPersonCharacter_cLeon_Character_Hunter_C*, int32> RankingArray;     // 0x0350 (size: 0x50)
    int32 MaxValue;                                                                   // 0x03A0 (size: 0x4)
    int32 Rank;                                                                       // 0x03A4 (size: 0x4)
    int32 PreValue;                                                                   // 0x03A8 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_DoubleRanking(int32 EntryPoint);
}; // Size: 0x3AC

#endif
