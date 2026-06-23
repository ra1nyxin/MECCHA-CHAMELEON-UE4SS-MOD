#ifndef UE4SS_SDK_WBP_ShortageStamina_HPP
#define UE4SS_SDK_WBP_ShortageStamina_HPP

class UWBP_ShortageStamina_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWidgetAnimation* Shake;                                                    // 0x0348 (size: 0x8)

    void ShakePlay();
    void ExecuteUbergraph_WBP_ShortageStamina(int32 EntryPoint);
}; // Size: 0x350

#endif
