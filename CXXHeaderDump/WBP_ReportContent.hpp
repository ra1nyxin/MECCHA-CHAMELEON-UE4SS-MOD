#ifndef UE4SS_SDK_WBP_ReportContent_HPP
#define UE4SS_SDK_WBP_ReportContent_HPP

class UWBP_ReportContent_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWrapBox* WrapBox_24;                                                       // 0x0348 (size: 0x8)
    class UWBP_NavMultipleInputTextBlock_C* WBP_NavMultipleInputTextBlock;            // 0x0350 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation;                    // 0x0358 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0360 (size: 0x8)
    FUniqueNetIdRepl TargetUniqueId;                                                  // 0x0368 (size: 0x30)
    int32 CurrentSelectReportCategory;                                                // 0x0398 (size: 0x4)
    TArray<class UWBP_ReportTypeButton_C*> ReportButtons;                             // 0x03A0 (size: 0x10)

    void OnFinished_8BE5134246B81962AB20AC90BBF1E4BD(const FEOSPlayerReportResult& Result);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_ReportContent_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_0_PushEnd__DelegateSignature();
    void OnPushButton(class UWBP_ReportTypeButton_C* SelfObject);
    void ExecuteUbergraph_WBP_ReportContent(int32 EntryPoint);
}; // Size: 0x3B0

#endif
