#ifndef UE4SS_SDK_WBP_DeathAnnounce_HPP
#define UE4SS_SDK_WBP_DeathAnnounce_HPP

class UWBP_DeathAnnounce_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0348 (size: 0x8)
    class UWidgetAnimation* AnnounceDeath;                                            // 0x0350 (size: 0x8)
    FString playerName;                                                               // 0x0358 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void Finish();
    void ExecuteUbergraph_WBP_DeathAnnounce(int32 EntryPoint);
}; // Size: 0x368

#endif
