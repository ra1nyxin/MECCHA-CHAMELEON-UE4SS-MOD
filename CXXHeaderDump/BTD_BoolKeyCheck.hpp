#ifndef UE4SS_SDK_BTD_BoolKeyCheck_HPP
#define UE4SS_SDK_BTD_BoolKeyCheck_HPP

class UBTD_BoolKeyCheck_C : public UBTDecorator_BlueprintBase
{
    FBlackboardKeySelector BoolType;                                                  // 0x00A0 (size: 0x28)
    bool SuccessType;                                                                 // 0x00C8 (size: 0x1)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xC9

#endif
