#ifndef UE4SS_SDK_WBP_NavOptionBox_HPP
#define UE4SS_SDK_WBP_NavOptionBox_HPP

class UWBP_NavOptionBox_C : public UUINavOptionBox
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0980 (size: 0x8)
    class UWBP_NavOptionUnderBox_C* WBP_NavOptionUnderBox;                            // 0x0988 (size: 0x8)
    class UHorizontalBox* UnderBox;                                                   // 0x0990 (size: 0x8)
    class UImage* Image_133;                                                          // 0x0998 (size: 0x8)
    class UImage* Image_76;                                                           // 0x09A0 (size: 0x8)
    FText CompressOptionTexts;                                                        // 0x09A8 (size: 0x10)
    TArray<class UWBP_NavOptionUnderBox_C*> ChildNavWidgets;                          // 0x09B8 (size: 0x10)
    TArray<FText> AppendTargetTexts;                                                  // 0x09C8 (size: 0x10)

    void UpdateUnderBoxColor();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void UpdateOptions();
    void OnChangedValue();
    void AddUnderBars();
    void ExecuteUbergraph_WBP_NavOptionBox(int32 EntryPoint);
}; // Size: 0x9D8

#endif
