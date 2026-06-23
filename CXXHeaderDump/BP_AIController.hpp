#ifndef UE4SS_SDK_BP_AIController_HPP
#define UE4SS_SDK_BP_AIController_HPP

class ABP_AIController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class UAIPerceptionComponent* AIPerception;                                       // 0x03D0 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x03D8 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__BP_AIController_AIPerception_K2Node_ComponentBoundEvent_1_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, FAIStimulus Stimulus);
    void Forget Target();
    void ExecuteUbergraph_BP_AIController(int32 EntryPoint);
}; // Size: 0x3E0

#endif
