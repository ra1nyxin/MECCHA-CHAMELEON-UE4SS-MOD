#ifndef UE4SS_SDK_BPC_CharacterStatusGaugeControl_HPP
#define UE4SS_SDK_BPC_CharacterStatusGaugeControl_HPP

class UBPC_CharacterStatusGaugeControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    double max;                                                                       // 0x00C0 (size: 0x8)
    double Now;                                                                       // 0x00C8 (size: 0x8)
    double AnimationValue;                                                            // 0x00D0 (size: 0x8)
    double Before;                                                                    // 0x00D8 (size: 0x8)
    FBPC_CharacterStatusGaugeControl_CChangedValue ChangedValue;                      // 0x00E0 (size: 0x10)
    void ChangedValue(double UpdateValue);
    int32 Direction;                                                                  // 0x00F0 (size: 0x4)
    double AnimationSpeed;                                                            // 0x00F8 (size: 0x8)
    FBPC_CharacterStatusGaugeControl_CChangeAnimationEnd ChangeAnimationEnd;          // 0x0100 (size: 0x10)
    void ChangeAnimationEnd();
    double LastAddValue;                                                              // 0x0110 (size: 0x8)
    double Add Value Per Sec;                                                         // 0x0118 (size: 0x8)
    double Rate;                                                                      // 0x0120 (size: 0x8)
    bool IsAutoHealNow;                                                               // 0x0128 (size: 0x1)
    double MultiplyHealValue;                                                         // 0x0130 (size: 0x8)

    void GetRowValue(double& Value);
    void GetLastDirection(int32& Value);
    void GetAnimationStartValue(bool Normalize, double& StartValue);
    void GetNormalizeAnimationValue(double& NormalizeValue);
    void GetNormalizeValue(double& NormalizeValue);
    void ReceiveBeginPlay();
    void ChangeValue(double AddValue, double AnimationTime);
    void ReceiveTick(float DeltaSeconds);
    void AnimationState(bool State);
    void AutoHeal(double AddValuePerSec, double Rate);
    void Update();
    void BlockAutoHeal();
    void AutoHealDelay(double AddValuePerSec, double Rate, double WaitTime);
    void AutoHealStart();
    void SnapValue(double Value);
    void UpdateMaxValue(double Value);
    void ExecuteUbergraph_BPC_CharacterStatusGaugeControl(int32 EntryPoint);
    void ChangeAnimationEnd__DelegateSignature();
    void ChangedValue__DelegateSignature(double UpdateValue);
}; // Size: 0x138

#endif
