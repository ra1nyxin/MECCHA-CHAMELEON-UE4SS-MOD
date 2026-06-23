#ifndef UE4SS_SDK_WBP_HunterOrSurvivorIcon_HPP
#define UE4SS_SDK_WBP_HunterOrSurvivorIcon_HPP

class UWBP_HunterOrSurvivorIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_8;                                                            // 0x0348 (size: 0x8)
    bool IsHunter;                                                                    // 0x0350 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_HunterOrSurvivorIcon(int32 EntryPoint);
}; // Size: 0x351

#endif
