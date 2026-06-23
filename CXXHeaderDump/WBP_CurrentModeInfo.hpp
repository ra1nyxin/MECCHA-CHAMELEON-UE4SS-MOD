#ifndef UE4SS_SDK_WBP_CurrentModeInfo_HPP
#define UE4SS_SDK_WBP_CurrentModeInfo_HPP

class UWBP_CurrentModeInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_YourRank;                   // 0x0348 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_RemainText_2;               // 0x0350 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_RemainText_1;               // 0x0358 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_RemainText;                 // 0x0360 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_RemainModeTime_Daily_Weekly; // 0x0368 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_RemainModeTime_Daily;       // 0x0370 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_ModeRange;                  // 0x0378 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_MainMode_SubText;           // 0x0380 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_MainMode_1;                 // 0x0388 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock_MainMode;                   // 0x0390 (size: 0x8)
    class UImage* Image_40;                                                           // 0x0398 (size: 0x8)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x03A0 (size: 0x8)

    void UpdateCall();
    void RankUpdate();
    void Construct();
    void ExecuteUbergraph_WBP_CurrentModeInfo(int32 EntryPoint);
}; // Size: 0x3A8

#endif
