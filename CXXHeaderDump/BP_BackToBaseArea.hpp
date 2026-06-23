#ifndef UE4SS_SDK_BP_BackToBaseArea_HPP
#define UE4SS_SDK_BP_BackToBaseArea_HPP

class ABP_BackToBaseArea_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02B0 (size: 0x8)
    FBP_BackToBaseArea_CGoalActor GoalActor;                                          // 0x02B8 (size: 0x10)
    void GoalActor(class AActor* Actor);

    void BndEvt__BP_BackToBaseArea_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_BP_BackToBaseArea(int32 EntryPoint);
    void GoalActor__DelegateSignature(class AActor* Actor);
}; // Size: 0x2C8

#endif
