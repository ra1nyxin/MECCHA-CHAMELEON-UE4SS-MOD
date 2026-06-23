#ifndef UE4SS_SDK_BP_ClimbingCheck_HPP
#define UE4SS_SDK_BP_ClimbingCheck_HPP

class UBP_ClimbingCheck_C : public UBaseMovementModeTransition
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0040 (size: 0x8)
    FName Next Mode;                                                                  // 0x0048 (size: 0x8)
    bool IsToClimb;                                                                   // 0x0050 (size: 0x1)

    FTransitionEvalResult Evaluate(const FSimulationTickParams& Params);
    void Trigger(const FSimulationTickParams& Params);
    void ExecuteUbergraph_BP_ClimbingCheck(int32 EntryPoint);
}; // Size: 0x51

#endif
