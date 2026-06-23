#ifndef UE4SS_SDK_BP_Storm_HPP
#define UE4SS_SDK_BP_Storm_HPP

class ABP_Storm_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UNiagaraComponent* N_StormLightning1;                                       // 0x02B0 (size: 0x8)
    class UNiagaraComponent* N_StormLightning;                                        // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x02D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x02E0 (size: 0x8)
    class UBPC_DamageCollision_C* BPC_DamageCollision;                                // 0x02E8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02F0 (size: 0x8)
    float StormVisual_Alpha_172AD4FE428EDA9BB87BA69245D65561;                         // 0x02F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> StormVisual__Direction_172AD4FE428EDA9BB87BA69245D65561; // 0x02FC (size: 0x1)
    class UTimelineComponent* StormVisual;                                            // 0x0300 (size: 0x8)
    double MoveSpeed;                                                                 // 0x0308 (size: 0x8)
    double LerpValue;                                                                 // 0x0310 (size: 0x8)
    FVector TargetLocation;                                                           // 0x0318 (size: 0x18)
    FVector StartLocation;                                                            // 0x0330 (size: 0x18)
    int32 Countdown;                                                                  // 0x0348 (size: 0x4)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x0350 (size: 0x8)
    bool MoveNow;                                                                     // 0x0358 (size: 0x1)
    double SoptX;                                                                     // 0x0360 (size: 0x8)
    class ABP_FirstPersonGameMode_Online_LINK_C* As BP First Person Game Mode Online LINK; // 0x0368 (size: 0x8)
    bool DamageState;                                                                 // 0x0370 (size: 0x1)
    class UMaterialInstanceDynamic* StormMaterial;                                    // 0x0378 (size: 0x8)
    FVector2D MoveTimeRange;                                                          // 0x0380 (size: 0x10)
    double StartX;                                                                    // 0x0390 (size: 0x8)
    class UMaterialInstanceDynamic* StormMaterial_Sub;                                // 0x0398 (size: 0x8)
    class UMaterialInstanceDynamic* MainStorm;                                        // 0x03A0 (size: 0x8)
    int32 CurrentLevel;                                                               // 0x03A8 (size: 0x4)

    void StormVisual__FinishedFunc();
    void StormVisual__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PositionUpdate(FVector StartLocation);
    void SetStormMoveState(bool State);
    void MoveSignal();
    void ResetPosition();
    void MoveCountDownStart(int32 CountDownTime, FName StopperName);
    void MinusTime();
    void MoveToCheckPoint(FName Tag);
    void TeleportStorm(FVector Location);
    void ForceStateCheck();
    void SetStormVisibleState(bool VisualState);
    void ShowStormReplicate();
    void SpeedUpdate();
    void SetStormLevel(int32 Level);
    void StormErrorPlayerCheck();
    void ExecuteUbergraph_BP_Storm(int32 EntryPoint);
}; // Size: 0x3AC

#endif
