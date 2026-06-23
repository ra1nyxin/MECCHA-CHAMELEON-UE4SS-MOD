#ifndef UE4SS_SDK_WBP_CheckBox_HPP
#define UE4SS_SDK_WBP_CheckBox_HPP

class UWBP_CheckBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* MainImage;                                                          // 0x0348 (size: 0x8)
    bool CheckState;                                                                  // 0x0350 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void SetCheckState(bool State);
    void ExecuteUbergraph_WBP_CheckBox(int32 EntryPoint);
}; // Size: 0x351

#endif
