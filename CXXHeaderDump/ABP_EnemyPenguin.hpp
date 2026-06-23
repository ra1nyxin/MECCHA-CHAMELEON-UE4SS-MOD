#ifndef UE4SS_SDK_ABP_EnemyPenguin_HPP
#define UE4SS_SDK_ABP_EnemyPenguin_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_88;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_89;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_90;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_91;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_92;                                                           // 0x0020 (size: 0x4)
    bool __BoolProperty_93;                                                           // 0x0024 (size: 0x1)
    float __FloatProperty_94;                                                         // 0x0028 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_95;                                // 0x002C (size: 0x2C)
    float __FloatProperty_96;                                                         // 0x0058 (size: 0x4)
    EAnimSyncMethod __EnumProperty_97;                                                // 0x005C (size: 0x1)
    bool __BoolProperty_98;                                                           // 0x005D (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_99;                              // 0x005E (size: 0x1)
    FName __NameProperty_100;                                                         // 0x0060 (size: 0x8)
    FName __NameProperty_101;                                                         // 0x0068 (size: 0x8)
    FName __NameProperty_102;                                                         // 0x0070 (size: 0x8)
    int32 __IntProperty_103;                                                          // 0x0078 (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_104;                                        // 0x0080 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x40)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Root;                   // 0x0160 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_5;     // 0x0190 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_4;     // 0x01C0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_3;     // 0x01F0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_2;     // 0x0220 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult_1;     // 0x0250 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_TransitionResult;       // 0x0280 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer_1;     // 0x02B0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_2;          // 0x02E0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_BlendSpacePlayer;       // 0x0310 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult_1;          // 0x0340 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_SequencePlayer;         // 0x0370 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateResult;            // 0x03A0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_StateMachine;           // 0x03D0 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LookAt;                 // 0x0400 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_ComponentToLocalSpace;  // 0x0430 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_LocalToComponentSpace;  // 0x0460 (size: 0x30)
    FAnimNodeExposedValueHandler_PropertyAccess AnimGraphNode_Slot;                   // 0x0490 (size: 0x30)

}; // Size: 0x4C0

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    float __FloatProperty_1;                                                          // 0x000C (size: 0x4)
    float __FloatProperty_2;                                                          // 0x0010 (size: 0x4)

}; // Size: 0x14

class UABP_EnemyPenguin_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x03E8 (size: 0x14)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0400 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0408 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0410 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5;                      // 0x0430 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;                      // 0x0458 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x0480 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x04A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x04D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x04F8 (size: 0x28)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;                      // 0x0520 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x0590 (size: 0x20)
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;                        // 0x05B0 (size: 0x70)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0620 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0640 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x0688 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x06A8 (size: 0xC8)
    FAnimNode_LookAt AnimGraphNode_LookAt;                                            // 0x0770 (size: 0x250)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x09C0 (size: 0x20)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x09E0 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0A00 (size: 0x48)
    class AEnemy_AI_Base_C* Character;                                                // 0x0A48 (size: 0x8)
    class UCharacterMovementComponent* Movement Component;                            // 0x0A50 (size: 0x8)
    double Ground Speed;                                                              // 0x0A58 (size: 0x8)
    bool Should Move;                                                                 // 0x0A60 (size: 0x1)
    FVector Look At Location;                                                         // 0x0A68 (size: 0x18)
    bool BattleMode;                                                                  // 0x0A80 (size: 0x1)
    float HeadAlpha;                                                                  // 0x0A84 (size: 0x4)
    double DefaultMaxSpeed;                                                           // 0x0A88 (size: 0x8)
    double Direction;                                                                 // 0x0A90 (size: 0x8)

    void AnimGraph(FPoseLink& AnimGraph);
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void BlueprintInitializeAnimation();
    void ExecuteUbergraph_ABP_EnemyPenguin(int32 EntryPoint);
}; // Size: 0xA98

#endif
