#ifndef UE4SS_SDK_BP_CheckPointIgroo_HPP
#define UE4SS_SDK_BP_CheckPointIgroo_HPP

class ABP_CheckPointIgroo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh2;                                          // 0x02B0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02B8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02D0 (size: 0x8)
    FBP_CheckPointIgroo_CGoal Goal;                                                   // 0x02D8 (size: 0x10)
    void Goal();
    bool AreaOnly;                                                                    // 0x02E8 (size: 0x1)
    class ABP_GameState_LINK_C* As BP Game State LINK;                                // 0x02F0 (size: 0x8)
    class ANiagaraActor* Fog;                                                         // 0x02F8 (size: 0x8)

    void IsGoalMemberState(bool& IsGoal);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void CheckState(bool State);
    void BeaconVisualize(bool State);
    void BndEvt__BP_CheckPointIgroo_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void FogActivate();
    void FogDeactivate();
    void ExecuteUbergraph_BP_CheckPointIgroo(int32 EntryPoint);
    void Goal__DelegateSignature();
}; // Size: 0x300

#endif
