#ifndef UE4SS_SDK_BPC_NearInteract_HPP
#define UE4SS_SDK_BPC_NearInteract_HPP

class UBPC_NearInteract_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    double SearchRadius;                                                              // 0x00C0 (size: 0x8)
    double Angle;                                                                     // 0x00C8 (size: 0x8)
    class USceneComponent* TraceRoot;                                                 // 0x00D0 (size: 0x8)
    class APawn* OwnerPawn;                                                           // 0x00D8 (size: 0x8)
    class AActor* CurrentSelectActor;                                                 // 0x00E0 (size: 0x8)
    bool UseControlRotation;                                                          // 0x00E8 (size: 0x1)
    bool IgnoreUpVector;                                                              // 0x00E9 (size: 0x1)
    double AngleBias;                                                                 // 0x00F0 (size: 0x8)
    class AActor* PreSelectActor;                                                     // 0x00F8 (size: 0x8)
    class UWidgetComponent* WidgetComp;                                               // 0x0100 (size: 0x8)

    void GetSelectActor(class AActor*& CurrentSelectActor);
    void ReceiveBeginPlay();
    void SetCheckState(bool State);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_BPC_NearInteract(int32 EntryPoint);
}; // Size: 0x108

#endif
