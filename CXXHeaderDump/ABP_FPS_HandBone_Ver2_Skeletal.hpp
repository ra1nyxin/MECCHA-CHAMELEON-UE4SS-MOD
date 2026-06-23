#ifndef UE4SS_SDK_ABP_FPS_HandBone_Ver2_Skeletal_HPP
#define UE4SS_SDK_ABP_FPS_HandBone_Ver2_Skeletal_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_22;                                                          // 0x0004 (size: 0x8)
    float __FloatProperty_23;                                                         // 0x000C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_24;                                // 0x0010 (size: 0x2C)
    float __FloatProperty_25;                                                         // 0x003C (size: 0x4)
    EAnimSyncMethod __EnumProperty_26;                                                // 0x0040 (size: 0x1)
    bool __BoolProperty_27;                                                           // 0x0041 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_28;                              // 0x0042 (size: 0x1)
    FName __NameProperty_29;                                                          // 0x0044 (size: 0x8)
    FName __NameProperty_30;                                                          // 0x004C (size: 0x8)
    FName __NameProperty_31;                                                          // 0x0054 (size: 0x8)
    int32 __IntProperty_32;                                                           // 0x005C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_33;                                         // 0x0060 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0080 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0100 (size: 0x40)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0140 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0170 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x01A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x01D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x0200 (size: 0x30)

}; // Size: 0x230

class UABP_FPS_HandBone_Ver2_Skeletal_C : public UAnimInstance
{
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x03E0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x03E8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x03F0 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0410 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0458 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x04A0 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x04C0 (size: 0xC8)

    void AnimGraph(FPoseLink& AnimGraph);
}; // Size: 0x588

#endif
