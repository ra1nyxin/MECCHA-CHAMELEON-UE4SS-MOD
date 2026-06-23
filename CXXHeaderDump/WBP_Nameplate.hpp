#ifndef UE4SS_SDK_WBP_Nameplate_HPP
#define UE4SS_SDK_WBP_Nameplate_HPP

class UWBP_Nameplate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* NameText_1;                                                     // 0x0348 (size: 0x8)
    class UTextBlock* NameText;                                                       // 0x0350 (size: 0x8)
    class UImage* Image_41;                                                           // 0x0358 (size: 0x8)

    void SetPlayerName(FString playerName);
    void SetColor(const FSlateColor Color and Opacity);
    void SetEEYAN(int32 Point);
    void ExecuteUbergraph_WBP_Nameplate(int32 EntryPoint);
}; // Size: 0x360

#endif
