#ifndef UE4SS_SDK_BPC_ReplicateAnimBPState_HPP
#define UE4SS_SDK_BPC_ReplicateAnimBPState_HPP

class UBPC_ReplicateAnimBPState_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    bool IsDash;                                                                      // 0x00C0 (size: 0x1)
    double MaxWalkSpeed;                                                              // 0x00C8 (size: 0x8)
    FVector LookAtLocation;                                                           // 0x00D0 (size: 0x18)

    void OnRep_MaxWalkSpeed();
    void ReceiveBeginPlay();
    void SetMaxSpeed(double Speed);
    void ExecuteUbergraph_BPC_ReplicateAnimBPState(int32 EntryPoint);
}; // Size: 0xE8

#endif
