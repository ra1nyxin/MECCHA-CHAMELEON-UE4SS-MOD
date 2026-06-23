#ifndef UE4SS_SDK_BPC_CustomFocus_HPP
#define UE4SS_SDK_BPC_CustomFocus_HPP

class UBPC_CustomFocus_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x00C0 (size: 0x8)
    class AActor* OwnerActor;                                                         // 0x00C8 (size: 0x8)
    double RotationSpeed;                                                             // 0x00D0 (size: 0x8)

    void SetFocus(class AActor* TargetActor);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPC_CustomFocus(int32 EntryPoint);
}; // Size: 0xD8

#endif
