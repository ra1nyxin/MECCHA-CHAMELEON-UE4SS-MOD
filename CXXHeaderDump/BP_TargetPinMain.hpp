#ifndef UE4SS_SDK_BP_TargetPinMain_HPP
#define UE4SS_SDK_BP_TargetPinMain_HPP

class ABP_TargetPinMain_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B0 (size: 0x8)
    float PinAnimation_PositionZ_D4F62AFF48DDDC9F11D87984D6F79AD2;                    // 0x02B8 (size: 0x4)
    float PinAnimation_Scale_D4F62AFF48DDDC9F11D87984D6F79AD2;                        // 0x02BC (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> PinAnimation__Direction_D4F62AFF48DDDC9F11D87984D6F79AD2; // 0x02C0 (size: 0x1)
    class UTimelineComponent* PinAnimation;                                           // 0x02C8 (size: 0x8)
    FVector FirstPosition;                                                            // 0x02D0 (size: 0x18)
    FColor SpawnColor;                                                                // 0x02E8 (size: 0x4)
    class ABP_FirstPersonCharacter_Main_C* SourcePawn;                                // 0x02F0 (size: 0x8)

    void PinAnimation__FinishedFunc();
    void PinAnimation__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_TargetPinMain(int32 EntryPoint);
}; // Size: 0x2F8

#endif
