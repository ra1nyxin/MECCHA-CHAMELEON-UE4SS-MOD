#ifndef UE4SS_SDK_BP_Camera_Base_HPP
#define UE4SS_SDK_BP_Camera_Base_HPP

class ABP_Camera_Base_C : public ABP_ItemBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)
    class UStaticMeshComponent* CentorPosition;                                       // 0x0440 (size: 0x8)
    class UNiagaraComponent* N_DeleteShot;                                            // 0x0448 (size: 0x8)
    class UAudioComponent* ChargeAudio;                                               // 0x0450 (size: 0x8)
    class UNiagaraComponent* N_ShotAnimatic;                                          // 0x0458 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x0460 (size: 0x8)
    class UNiagaraComponent* PhotoExportEffect_Key;                                   // 0x0468 (size: 0x8)
    class UNiagaraComponent* PhotoExportEffect_InActor;                               // 0x0470 (size: 0x8)
    class USpotLightComponent* spot_lights;                                           // 0x0478 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0480 (size: 0x8)
    class UNiagaraComponent* PhotoExportEffect_None;                                  // 0x0488 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0490 (size: 0x8)
    class USpotLightComponent* Flash;                                                 // 0x0498 (size: 0x8)
    class USplineComponent* Spline_PhotoExport;                                       // 0x04A0 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x04A8 (size: 0x8)
    class UStaticMeshComponent* Camera;                                               // 0x04B0 (size: 0x8)
    float FlashTimeline_LightPower_E29AAF0549D7A1A63C0065B450AD95A2;                  // 0x04B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FlashTimeline__Direction_E29AAF0549D7A1A63C0065B450AD95A2; // 0x04BC (size: 0x1)
    class UTimelineComponent* FlashTimeline;                                          // 0x04C0 (size: 0x8)
    class UTextureRenderTarget2D* Texture Target;                                     // 0x04C8 (size: 0x8)
    class ABP_FirstPersonCharacter_Main_C* As BP First Person Character;              // 0x04D0 (size: 0x8)
    TArray<class AActor*> Have Photo Interface Actors;                                // 0x04D8 (size: 0x10)
    double Flash Power;                                                               // 0x04E8 (size: 0x8)
    bool IsFlash;                                                                     // 0x04F0 (size: 0x1)
    class ABP_FirstPersonCharacter_Main_C* As BP First Person Character_0;            // 0x04F8 (size: 0x8)
    double EnableDistance;                                                            // 0x0500 (size: 0x8)
    double EnableDistanceGimmick;                                                     // 0x0508 (size: 0x8)
    bool ParryActive;                                                                 // 0x0510 (size: 0x1)
    double ImpulseRadius;                                                             // 0x0518 (size: 0x8)
    class ABP_CameraWireSpline_C* LightningEffectActor;                               // 0x0520 (size: 0x8)
    TArray<class AActor*> HideActors;                                                 // 0x0528 (size: 0x10)
    TEnumAsByte<ENUM_CameraMode::Type> CameraMode;                                    // 0x0538 (size: 0x1)
    double Is in View Check Late;                                                     // 0x0540 (size: 0x8)

    bool MS_IsInView(class AActor* Actor);
    void FinishTasks(class AActor* Target, bool& Finish);
    bool FinishCheck(const FFinishFilter& FinishFilter);
    void Finisher(class AActor* self2);
    void ExportSignal(class ABP_PhotoAnimation_C* self2);
    void ChargeState(bool IsCharge);
    bool RayToCamera(class UObject* Actor, FVector RayPosition);
    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void GetItemInfo(TEnumAsByte<ENUM_HandType::Type>& HandType, TEnumAsByte<ENUM_ClassType::Type>& ClassType, bool& NotPickUp, FRotator& HaveRotation, FVector& Add Position, bool& IsBoneAttach, TEnumAsByte<ENUM_ItemBindType::Type>& BindType, FName& BoneName, FST_ItemCoreDatas& CoreDatas);
    void Is In View Gimmick(class AActor* Actor, bool& Retrun Value);
    void GetCentorPosition(FVector& World Position);
    void Is In View(class AActor* Actor, bool& Retrun Value);
    void ToggleFlash();
    void UserConstructionScript();
    void FlashTimeline__FinishedFunc();
    void FlashTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void View In Out Function(int32 Stencil Value);
    void PhotoShot(const TArray<class AActor*>& ShotInActors);
    void ChangeMode();
    void ShotEvent();
    void Shot(bool PressState, double PushTime, class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void Aim(bool PressState);
    void ActorCheckLoop();
    void Change();
    void Reset();
    void ExecuteUbergraph_BP_Camera_Base(int32 EntryPoint);
}; // Size: 0x548

#endif
