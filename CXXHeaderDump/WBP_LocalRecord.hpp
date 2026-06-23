#ifndef UE4SS_SDK_WBP_LocalRecord_HPP
#define UE4SS_SDK_WBP_LocalRecord_HPP

class UWBP_LocalRecord_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* SubText;                                                        // 0x0348 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0350 (size: 0x8)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x0358 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_LocalRecord(int32 EntryPoint);
}; // Size: 0x360

#endif
