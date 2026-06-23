#ifndef UE4SS_SDK_WBP_cLeon_WatchRankingContents_HPP
#define UE4SS_SDK_WBP_cLeon_WatchRankingContents_HPP

class UWBP_cLeon_WatchRankingContents_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* Rank;                                                           // 0x0348 (size: 0x8)
    class UTextBlock* Name;                                                           // 0x0350 (size: 0x8)
    class UTextBlock* Found;                                                          // 0x0358 (size: 0x8)
    FString RankValue;                                                                // 0x0360 (size: 0x10)
    FString NameValue;                                                                // 0x0370 (size: 0x10)
    FString PointValue;                                                               // 0x0380 (size: 0x10)
    bool IsNumberOne;                                                                 // 0x0390 (size: 0x1)
    FSlateColor NameColor;                                                            // 0x0394 (size: 0x14)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_cLeon_WatchRankingContents(int32 EntryPoint);
}; // Size: 0x3A8

#endif
