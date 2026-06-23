#ifndef UE4SS_SDK_BTTask_Strafing_HPP
#define UE4SS_SDK_BTTask_Strafing_HPP

class UBTTask_Strafing_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TEnumAsByte<EN_StrafingDirection::Type> Strafing Direction;                       // 0x00B0 (size: 0x1)
    TArray<TEnumAsByte<EN_StrafingDirection::Type>> Select Strafing Direction;        // 0x00B8 (size: 0x10)
    double SpeedMultiply;                                                             // 0x00C8 (size: 0x8)
    double MaxTime;                                                                   // 0x00D0 (size: 0x8)
    double MinTime;                                                                   // 0x00D8 (size: 0x8)

    void Select World Direction(TEnumAsByte<EN_StrafingDirection::Type> Strafing Direction, class APawn* ControlePawn, FVector& World Direction);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTTask_Strafing(int32 EntryPoint);
}; // Size: 0xE0

#endif
