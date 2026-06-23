#ifndef UE4SS_SDK_ABP_Bell_HPP
#define UE4SS_SDK_ABP_Bell_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_4;                                                           // 0x0004 (size: 0x8)
    FName __NameProperty_5;                                                           // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_6;                                          // 0x0018 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0038 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00B8 (size: 0x40)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x00F8 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0128 (size: 0x30)

}; // Size: 0x158

class UABP_Bell_C : public UAnimInstance
{
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03E0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03E8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03F0 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0410 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
}; // Size: 0x458

#endif
