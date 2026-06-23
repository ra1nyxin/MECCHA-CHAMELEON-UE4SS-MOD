#ifndef UE4SS_SDK_BP_ReplicateEventController_HPP
#define UE4SS_SDK_BP_ReplicateEventController_HPP

class ABP_ReplicateEventController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)

    void ApplyDamage(class UObject* ターゲット, double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName);
    void ExecuteUbergraph_BP_ReplicateEventController(int32 EntryPoint);
}; // Size: 0x2B8

#endif
