#ifndef UE4SS_SDK_WBP_cLeonGameSettings_HPP
#define UE4SS_SDK_WBP_cLeonGameSettings_HPP

class UWBP_cLeonGameSettings_C : public UUINavWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox_MapSelect_1;                          // 0x04F8 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox_MapSelect;                            // 0x0500 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox_GameMode;                             // 0x0508 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox_FilterMosaic;                         // 0x0510 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox_FilterMonochrome;                     // 0x0518 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox_FilterHorror;                         // 0x0520 (size: 0x8)
    class UWBP_NavOptionBox_C* WBP_NavOptionBox_CanShowHunterWatchRanking;            // 0x0528 (size: 0x8)
    class UWBP_NavInputTextBlock_C* WBP_NavInputTextBlock_HunterWait;                 // 0x0530 (size: 0x8)
    class UWBP_NavInputTextBlock_C* WBP_NavInputTextBlock_HunterNum;                  // 0x0538 (size: 0x8)
    class UWBP_NavInputTextBlock_C* WBP_NavInputTextBlock_GameTime;                   // 0x0540 (size: 0x8)
    class UWBP_NavInputTextBlock_C* WBP_NavInputTextBlock_ForceProvocationTime;       // 0x0548 (size: 0x8)
    class UWBP_NavInputTextBlock_C* WBP_NavInputTextBlock_CheckAnswersTime;           // 0x0550 (size: 0x8)
    class UWBP_MapContents_C* WBP_MapContents;                                        // 0x0558 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage_2;                                            // 0x0560 (size: 0x8)
    class UWBP_ImportMap_C* WBP_ImportMap;                                            // 0x0568 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_14;                         // 0x0570 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_13;                         // 0x0578 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_12;                         // 0x0580 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_11;                         // 0x0588 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_10;                         // 0x0590 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_9;                          // 0x0598 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_8;                          // 0x05A0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_7;                          // 0x05A8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_6;                          // 0x05B0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_5;                          // 0x05B8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_4;                          // 0x05C0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_3;                          // 0x05C8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_2;                          // 0x05D0 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_1;                          // 0x05D8 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x05E0 (size: 0x8)
    class UImage* MapImage;                                                           // 0x05E8 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation;                    // 0x05F0 (size: 0x8)
    class UVerticalBox* HunterNum;                                                    // 0x05F8 (size: 0x8)
    class UWrapBox* Bodys;                                                            // 0x0600 (size: 0x8)
    class UScrollBox* AllMaps;                                                        // 0x0608 (size: 0x8)
    class ABP_GameMode_cLeon_C* As BP Game Mode C Leon;                               // 0x0610 (size: 0x8)
    TArray<class UWBP_MapContents_C*> MapContents;                                    // 0x0618 (size: 0x10)
    TArray<class UWBP_BodySelect_C*> BodySelects;                                     // 0x0628 (size: 0x10)

    void Construct();
    void BndEvt__WBP_cLeonGameSettings_WBP_NavInputTextBlock_HunterNum_K2Node_ComponentBoundEvent_0_OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_cLeonGameSettings_WBP_NavInputTextBlock_GameTime_K2Node_ComponentBoundEvent_1_OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_cLeonGameSettings_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_2_PushEnd__DelegateSignature();
    void BndEvt__WBP_cLeonGameSettings_WBP_NavInputTextBlock_HunterWait_K2Node_ComponentBoundEvent_3_OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_cLeonGameSettings_WBP_NavInputTextBlock_CheckAnswersTime_K2Node_ComponentBoundEvent_4_OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_cLeonGameSettings_WBP_NavOptionBox_GameMode_K2Node_ComponentBoundEvent_5_OnValueChangedEvent__DelegateSignature();
    void BndEvt__WBP_cLeonGameSettings_WBP_NavInputTextBlock_ForceProvocationTime_K2Node_ComponentBoundEvent_6_OnTextCommitted__DelegateSignature(FText Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_cLeonGameSettings_WBP_NavOptionBox_FilterMonochrome_K2Node_ComponentBoundEvent_7_OnValueChangedEvent__DelegateSignature();
    void BndEvt__WBP_cLeonGameSettings_WBP_NavOptionBox_FilterHorror_K2Node_ComponentBoundEvent_8_OnValueChangedEvent__DelegateSignature();
    void BndEvt__WBP_cLeonGameSettings_WBP_NavOptionBox_FilterMosaic_K2Node_ComponentBoundEvent_9_OnValueChangedEvent__DelegateSignature();
    void BndEvt__WBP_cLeonGameSettings_WBP_NavOptionBox_MapSelect_K2Node_ComponentBoundEvent_10_OnValueChangedEvent__DelegateSignature();
    void BndEvt__WBP_cLeonGameSettings_WBP_NavOptionBox_MapSelect_1_K2Node_ComponentBoundEvent_11_OnValueChangedEvent__DelegateSignature();
    void SelectMap(class UWBP_MapContents_C* SelfWidget, FST_cLeonMapData MapData);
    void SelectMapMain(class UWBP_MapContents_C* SelfWidget, FST_cLeonMapData MapData);
    void BndEvt__WBP_cLeonGameSettings_WBP_NavOptionBox_CanShowHunterWatchRanking_K2Node_ComponentBoundEvent_12_OnValueChangedEvent__DelegateSignature();
    void OnClickWithClass(class UWBP_BodySelect_C* SelfObject, TSubclassOf<class ABP_FirstPersonCharacter_cLeon_Character_Survivor_C> BodyClass);
    void ExecuteUbergraph_WBP_cLeonGameSettings(int32 EntryPoint);
}; // Size: 0x638

#endif
