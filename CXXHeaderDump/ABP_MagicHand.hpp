#ifndef UE4SS_SDK_ABP_MagicHand_HPP
#define UE4SS_SDK_ABP_MagicHand_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_11;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_12;                                                          // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_13;                                         // 0x0018 (size: 0x20)
    float __FloatProperty_14;                                                         // 0x0038 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_15;                                // 0x003C (size: 0x2C)
    float __FloatProperty_16;                                                         // 0x0068 (size: 0x4)
    EAnimSyncMethod __EnumProperty_17;                                                // 0x006C (size: 0x1)
    bool __BoolProperty_18;                                                           // 0x006D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_19;                              // 0x006E (size: 0x1)
    FName __NameProperty_20;                                                          // 0x0070 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0078 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F8 (size: 0x40)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0138 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0168 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0198 (size: 0x30)

}; // Size: 0x1C8

class UABP_MagicHand_C : public UAnimInstance
{
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03E0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03E8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03F0 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0410 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0458 (size: 0x48)

    void AnimGraph(FPoseLink& AnimGraph);
}; // Size: 0x4A0

#endif
