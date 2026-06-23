#ifndef UE4SS_SDK_WBP_ModQueueAll_HPP
#define UE4SS_SDK_WBP_ModQueueAll_HPP

class UWBP_ModQueueAll_C : public UUINavWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_3;                          // 0x04F8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_2;                          // 0x0500 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_1;                          // 0x0508 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x0510 (size: 0x8)
    class UUINavButtonBase* UINavButtonBase_209;                                      // 0x0518 (size: 0x8)
    class UTextBlock* TextBlock_113;                                                  // 0x0520 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation;                    // 0x0528 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0530 (size: 0x8)
    FString Item Id;                                                                  // 0x0538 (size: 0x10)
    FWBP_ModQueueAll_CCheckTrue CheckTrue;                                            // 0x0548 (size: 0x10)
    void CheckTrue();
    FWBP_ModQueueAll_CForceStart ForceStart;                                          // 0x0558 (size: 0x10)
    void ForceStart();
    FWBP_ModQueueAll_CComplete Complete;                                              // 0x0568 (size: 0x10)
    void Complete();

    void GetWaitPlayers(FString& ReturnNames, bool& CompleteState);
    void CheckInstalledItems(bool& ReturnInstalled, bool& ReturnDownloading);
    void OnFailure_F78BBAD84186A9297376358454884094(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    void OnSuccess_F78BBAD84186A9297376358454884094(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnReturn();
    void BndEvt__WBP_ModQueueAll_UINavButtonBase_209_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void DownloadCheck();
    void BndEvt__WBP_ModQueueAll_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_1_PushEnd__DelegateSignature();
    void UpdateWait();
    void ExecuteUbergraph_WBP_ModQueueAll(int32 EntryPoint);
    void Complete__DelegateSignature();
    void ForceStart__DelegateSignature();
    void CheckTrue__DelegateSignature();
}; // Size: 0x578

#endif
