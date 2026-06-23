#ifndef UE4SS_SDK_BP_MainEnemyAIController_HPP
#define UE4SS_SDK_BP_MainEnemyAIController_HPP

class ABP_MainEnemyAIController_C : public AAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void ReceiveBeginPlay();
    void Run();
    void ExecuteUbergraph_BP_MainEnemyAIController(int32 EntryPoint);
}; // Size: 0x3D0

#endif
