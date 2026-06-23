#ifndef UE4SS_SDK_WBP_CustomMapParts_HPP
#define UE4SS_SDK_WBP_CustomMapParts_HPP

class UWBP_CustomMapParts_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* MapName;                                                        // 0x0348 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation_ChoseMap;           // 0x0350 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0358 (size: 0x8)
    FString WorkShopId;                                                               // 0x0360 (size: 0x10)
    FWBP_CustomMapParts_CSelectMod SelectMod;                                         // 0x0370 (size: 0x10)
    void SelectMod(FString ModId, class UWBP_CustomMapParts_C* SelfWidget);
    FWBP_CustomMapParts_CRequestFinish RequestFinish;                                 // 0x0380 (size: 0x10)
    void RequestFinish(bool Rezult);
    bool ShowSelectButton;                                                            // 0x0390 (size: 0x1)

    void OnFailure_212C9A914520D8F7A114F290F6F7AA59(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    void OnSuccess_212C9A914520D8F7A114F290F6F7AA59(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    void BndEvt__WBP_CustomMapParts_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_0_PushEnd__DelegateSignature();
    void Construct();
    void Request(bool bSuccess, FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    void PreConstruct(bool IsDesignTime);
    void SelectUpdate(bool State);
    void ExecuteUbergraph_WBP_CustomMapParts(int32 EntryPoint);
    void RequestFinish__DelegateSignature(bool Rezult);
    void SelectMod__DelegateSignature(FString ModId, class UWBP_CustomMapParts_C* SelfWidget);
}; // Size: 0x391

#endif
