#ifndef UE4SS_SDK_BTS_NearAttack_HPP
#define UE4SS_SDK_BTS_NearAttack_HPP

class UBTS_NearAttack_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    FBlackboardKeySelector Key;                                                       // 0x00A0 (size: 0x28)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_NearAttack(int32 EntryPoint);
}; // Size: 0xC8

#endif
