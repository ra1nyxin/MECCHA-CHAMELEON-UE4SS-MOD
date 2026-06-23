#ifndef UE4SS_SDK_BP_CrouchingCheck_HPP
#define UE4SS_SDK_BP_CrouchingCheck_HPP

class UBP_CrouchingCheck_C : public UBaseMovementModeTransition
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)

    FTransitionEvalResult Evaluate(const FSimulationTickParams& Params);
    void Trigger(const FSimulationTickParams& Params);
    void K2_OnRegistered();
    void ExecuteUbergraph_BP_CrouchingCheck(int32 EntryPoint);
}; // Size: 0x48

#endif
