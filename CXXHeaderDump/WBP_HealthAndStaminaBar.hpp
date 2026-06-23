#ifndef UE4SS_SDK_WBP_HealthAndStaminaBar_HPP
#define UE4SS_SDK_WBP_HealthAndStaminaBar_HPP

class UWBP_HealthAndStaminaBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_Bar_C* WBP_StaminaBar;                                                 // 0x0348 (size: 0x8)
    class UWBP_Bar_C* WBP_HealthBar;                                                  // 0x0350 (size: 0x8)
    class UTextBlock* EnemyName;                                                      // 0x0358 (size: 0x8)
    class UWidgetAnimation* VisibleAnimation;                                         // 0x0360 (size: 0x8)

    void StaminaBarUpdateSub(double Value);
    void StaminaBarUpdate(double Value);
    void HealthBarUpdateSub(double Value);
    void HealthBarUpdate(double Value);
    void VisibleState(bool State);
    void SetColor(FLinearColor Color, int32 Index);
    void Construct();
    void SetText(FText Text, int32 Index);
    void PlayAnimationMessage(bool IsForward, int32 Index);
    void ExecuteUbergraph_WBP_HealthAndStaminaBar(int32 EntryPoint);
}; // Size: 0x368

#endif
