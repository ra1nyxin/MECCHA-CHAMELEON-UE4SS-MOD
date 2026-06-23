#ifndef UE4SS_SDK_WBP_MapContents_HPP
#define UE4SS_SDK_WBP_MapContents_HPP

class UWBP_MapContents_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* MapName;                                                        // 0x0348 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_ChoseMap;           // 0x0350 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0358 (size: 0x8)
    FWBP_MapContents_CSelectMap SelectMap;                                            // 0x0360 (size: 0x10)
    void SelectMap(class UWBP_MapContents_C* SelfWidget, FST_cLeonMapData MapData);
    FWBP_MapContents_CRequestFinish RequestFinish;                                    // 0x0370 (size: 0x10)
    void RequestFinish(bool Rezult);
    bool ShowSelectButton;                                                            // 0x0380 (size: 0x1)
    FST_cLeonMapData cLeonMapData;                                                    // 0x0388 (size: 0x18)
    FSlateColor TextColor;                                                            // 0x03A0 (size: 0x14)

    void OnFailure_F47348424771535C48E222B9B9CA8A4E(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    void OnSuccess_F47348424771535C48E222B9B9CA8A4E(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    void Construct();
    void BndEvt__WBP_CustomMapParts_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_0_PushEnd__DelegateSignature();
    void SelectUpdate(bool State);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_MapContents(int32 EntryPoint);
    void RequestFinish__DelegateSignature(bool Rezult);
    void SelectMap__DelegateSignature(class UWBP_MapContents_C* SelfWidget, FST_cLeonMapData MapData);
}; // Size: 0x3B4

#endif
