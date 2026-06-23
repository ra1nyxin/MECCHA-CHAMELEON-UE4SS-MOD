#ifndef UE4SS_SDK_BP_Simple_VAT_Player_PBR_HPP
#define UE4SS_SDK_BP_Simple_VAT_Player_PBR_HPP

class ABP_Simple_VAT_Player_PBR_C : public ABP_Simple_VAT_Player_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    float BaseTime_Time_883ADD2A4DE64EC7552965BB86FB0D92;                             // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BaseTime__Direction_883ADD2A4DE64EC7552965BB86FB0D92; // 0x02C4 (size: 0x1)
    class UTimelineComponent* BaseTime;                                               // 0x02C8 (size: 0x8)
    TSoftObjectPtr<UBP_RBD_VAT_DataAssets_C> VATDataAsset;                            // 0x02D0 (size: 0x28)

    void BaseTime__FinishedFunc();
    void BaseTime__UpdateFunc();
    void OnLoaded_F3F51E7A482D22D54F2E9A9B92C6E184(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Simple_VAT_Player_PBR(int32 EntryPoint);
}; // Size: 0x2F8

#endif
