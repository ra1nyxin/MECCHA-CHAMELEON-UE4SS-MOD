#ifndef UE4SS_SDK_Chooser_HPP
#define UE4SS_SDK_Chooser_HPP

#include "Chooser_enums.hpp"

struct FAnimCurveOverride
{
    FName CurveName;                                                                  // 0x0000 (size: 0x8)
    float CurveValue;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FAnimCurveOverrideList
{
    TArray<FAnimCurveOverride> Values;                                                // 0x0000 (size: 0x10)
    uint32 Hash;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAnimNode_ChooserPlayer : public FAnimNode_BlendStack_Standalone
{
    EChooserEvaluationFrequency EvaluationFrequency;                                  // 0x00E0 (size: 0x4)
    FInstancedStruct Chooser;                                                         // 0x00E8 (size: 0x10)
    class UMirrorDataTable* MirrorDataTable;                                          // 0x00F8 (size: 0x8)
    float BlendSpaceX;                                                                // 0x0100 (size: 0x4)
    float BlendSpaceY;                                                                // 0x0104 (size: 0x4)
    FChooserPlayerSettings DefaultSettings;                                           // 0x0110 (size: 0x40)
    TArray<FInstancedStruct> ChooserContextDefinition;                                // 0x0150 (size: 0x10)
    bool bStartFromMatchingPose;                                                      // 0x0160 (size: 0x1)

}; // Size: 0x248

struct FAssetChooser : public FObjectChooserBase
{
    class UObject* Asset;                                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FBoolColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    TArray<EBoolColumnCellValue> RowValuesWithAny;                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FBoolContextProperty : public FChooserParameterBoolBase
{
    TArray<FName> PropertyBindingChain;                                               // 0x0008 (size: 0x10)
    FChooserPropertyBinding Binding;                                                  // 0x0018 (size: 0x30)

}; // Size: 0x48

struct FChooserColumnBase
{
}; // Size: 0x8

struct FChooserEnumPropertyBinding : public FChooserPropertyBinding
{
}; // Size: 0x30

struct FChooserEnumRowData
{
    EEnumColumnCellValueComparison Comparison;                                        // 0x0000 (size: 0x4)
    uint8 Value;                                                                      // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FChooserEvaluationContext
{
}; // Size: 0x78

struct FChooserEvaluationInputObject
{
}; // Size: 0x8

struct FChooserFloatDistanceRowData
{
    float Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FChooserFloatRangeRowData
{
    float min;                                                                        // 0x0000 (size: 0x4)
    float max;                                                                        // 0x0004 (size: 0x4)
    bool bNoMin;                                                                      // 0x0008 (size: 0x1)
    bool bNoMax;                                                                      // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FChooserMultiEnumRowData
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FChooserObjectClassRowData
{
    EObjectClassColumnCellValueComparison Comparison;                                 // 0x0000 (size: 0x4)
    UClass* Value;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FChooserObjectPropertyBinding : public FChooserPropertyBinding
{
}; // Size: 0x30

struct FChooserObjectRowData
{
    EObjectColumnCellValueComparison Comparison;                                      // 0x0000 (size: 0x4)
    TSoftObjectPtr<UObject> Value;                                                    // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FChooserOutputEnumRowData
{
    uint8 Value;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FChooserOutputObjectRowData
{
    FInstancedStruct Value;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FChooserParameterBase
{
}; // Size: 0x8

struct FChooserParameterBoolBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserParameterEnumBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserParameterFloatBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserParameterGameplayTagBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserParameterObjectBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserParameterRandomizeBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserParameterStructBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FChooserPlayerSettings
{
    bool bMirror;                                                                     // 0x0000 (size: 0x1)
    float StartTime;                                                                  // 0x0004 (size: 0x4)
    bool bForceLooping;                                                               // 0x0008 (size: 0x1)
    float PlaybackRate;                                                               // 0x000C (size: 0x4)
    FAnimCurveOverrideList CurveOverrides;                                            // 0x0010 (size: 0x18)
    float BlendTime;                                                                  // 0x0028 (size: 0x4)
    class UBlendProfile* BlendProfile;                                                // 0x0030 (size: 0x8)
    EAlphaBlendOption BlendOption;                                                    // 0x0038 (size: 0x1)
    bool bUseInertialBlend;                                                           // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FChooserPropertyBinding
{
    TArray<FName> PropertyBindingChain;                                               // 0x0008 (size: 0x10)
    int32 ContextIndex;                                                               // 0x0018 (size: 0x4)
    bool IsBoundToRoot;                                                               // 0x001C (size: 0x1)

}; // Size: 0x30

struct FChooserRandomizationContext
{
}; // Size: 0x50

struct FChooserStructPropertyBinding : public FChooserPropertyBinding
{
}; // Size: 0x30

struct FClassChooser : public FObjectChooserBase
{
    UClass* Class;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FContextObjectTypeBase
{
    EContextObjectDirection Direction;                                                // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FContextObjectTypeClass : public FContextObjectTypeBase
{
    UClass* Class;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FContextObjectTypeStruct : public FContextObjectTypeBase
{
    class UScriptStruct* Struct;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FEnumColumn : public FEnumColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    TArray<FChooserEnumRowData> RowValues;                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FEnumColumnBase : public FChooserColumnBase
{
}; // Size: 0x8

struct FEnumContextProperty : public FChooserParameterEnumBase
{
    TArray<FName> PropertyBindingChain;                                               // 0x0008 (size: 0x10)
    FChooserEnumPropertyBinding Binding;                                              // 0x0018 (size: 0x30)

}; // Size: 0x48

struct FEvaluateChooser : public FObjectChooserBase
{
    class UChooserTable* Chooser;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFloatContextProperty : public FChooserParameterFloatBase
{
    TArray<FName> PropertyBindingChain;                                               // 0x0008 (size: 0x10)
    FChooserPropertyBinding Binding;                                                  // 0x0018 (size: 0x30)

}; // Size: 0x48

struct FFloatDistanceColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    double MaxDistance;                                                               // 0x0018 (size: 0x8)
    float CostMultiplier;                                                             // 0x0020 (size: 0x4)
    bool bFilterOverMaxDistance;                                                      // 0x0024 (size: 0x1)
    bool bWrapInput;                                                                  // 0x0025 (size: 0x1)
    double MinValue;                                                                  // 0x0028 (size: 0x8)
    double MaxValue;                                                                  // 0x0030 (size: 0x8)
    TArray<FChooserFloatDistanceRowData> RowValues;                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FFloatRangeColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    bool bWrapInput;                                                                  // 0x0018 (size: 0x1)
    double MinValue;                                                                  // 0x0020 (size: 0x8)
    double MaxValue;                                                                  // 0x0028 (size: 0x8)
    TArray<FChooserFloatRangeRowData> RowValues;                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FGameplayTagColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    EGameplayContainerMatchType TagMatchType;                                         // 0x0018 (size: 0x1)
    EGameplayTagMatchDirection TagMatchDirection;                                     // 0x0019 (size: 0x1)
    bool bMatchExact;                                                                 // 0x001A (size: 0x1)
    bool bInvertMatchingLogic;                                                        // 0x001B (size: 0x1)
    TArray<FGameplayTagContainer> RowValues;                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGameplayTagContextProperty : public FChooserParameterGameplayTagBase
{
    TArray<FName> PropertyBindingChain;                                               // 0x0008 (size: 0x10)
    FChooserPropertyBinding Binding;                                                  // 0x0018 (size: 0x30)

}; // Size: 0x48

struct FGameplayTagQueryColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    TArray<FGameplayTagQuery> RowValues;                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMultiEnumColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    TArray<FChooserMultiEnumRowData> RowValues;                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNestedChooser : public FObjectChooserBase
{
    class UChooserTable* Chooser;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FObjectChooserBase
{
}; // Size: 0x8

struct FObjectClassColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    TArray<FChooserObjectClassRowData> RowValues;                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FObjectColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    TArray<FChooserObjectRowData> RowValues;                                          // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FObjectContextProperty : public FChooserParameterObjectBase
{
    FChooserObjectPropertyBinding Binding;                                            // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FOutputBoolColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    bool bFallbackValue;                                                              // 0x0018 (size: 0x1)
    TArray<bool> RowValues;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FOutputEnumColumn : public FEnumColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    FChooserOutputEnumRowData FallbackValue;                                          // 0x0018 (size: 0x1)
    TArray<FChooserOutputEnumRowData> RowValues;                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FOutputFloatColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    double FallbackValue;                                                             // 0x0018 (size: 0x8)
    TArray<double> RowValues;                                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FOutputObjectColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    TArray<FChooserOutputObjectRowData> RowValues;                                    // 0x0018 (size: 0x10)
    FChooserOutputObjectRowData FallbackValue;                                        // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FOutputStructColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    FInstancedStruct FallbackValue;                                                   // 0x0018 (size: 0x10)
    TArray<FInstancedStruct> RowValues;                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FRandomizeColumn : public FChooserColumnBase
{
    FInstancedStruct InputValue;                                                      // 0x0008 (size: 0x10)
    float RepeatProbabilityMultiplier;                                                // 0x0018 (size: 0x4)
    float EqualCostThreshold;                                                         // 0x001C (size: 0x4)
    TArray<float> RowValues;                                                          // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FRandomizeContextProperty : public FChooserParameterRandomizeBase
{
    FChooserPropertyBinding Binding;                                                  // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FSoftAssetChooser : public FObjectChooserBase
{
    TSoftObjectPtr<UObject> Asset;                                                    // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FStructContextProperty : public FChooserParameterStructBase
{
    FChooserStructPropertyBinding Binding;                                            // 0x0008 (size: 0x30)

}; // Size: 0x38

class IChooserColumn : public IInterface
{
}; // Size: 0x28

class IChooserParameterBool : public IInterface
{
}; // Size: 0x28

class IChooserParameterEnum : public IInterface
{
}; // Size: 0x28

class IChooserParameterFloat : public IInterface
{
}; // Size: 0x28

class IChooserParameterGameplayTag : public IInterface
{
}; // Size: 0x28

class IHasContextClass : public IInterface
{
}; // Size: 0x28

class IObjectChooser : public IInterface
{
}; // Size: 0x28

class UChooserColumnMenuContext : public UObject
{
}; // Size: 0x40

class UChooserFunctionLibrary : public UBlueprintFunctionLibrary
{

    FInstancedStruct MakeEvaluateChooser(class UChooserTable* Chooser);
    FChooserEvaluationContext MakeChooserEvaluationContext();
    void GetChooserStructOutput(FChooserEvaluationContext& Context, int32 Index, int32& Value);
    TSoftObjectPtr<UObject> EvaluateObjectChooserBaseSoft(FChooserEvaluationContext& Context, const FInstancedStruct& ObjectChooser, UClass* ObjectClass, bool bResultIsClass);
    TArray<TSoftObjectPtr<UObject>> EvaluateObjectChooserBaseMultiSoft(FChooserEvaluationContext& Context, const FInstancedStruct& ObjectChooser, UClass* ObjectClass, bool bResultIsClass);
    TArray<class UObject*> EvaluateObjectChooserBaseMulti(FChooserEvaluationContext& Context, const FInstancedStruct& ObjectChooser, UClass* ObjectClass, bool bResultIsClass);
    class UObject* EvaluateObjectChooserBase(FChooserEvaluationContext& Context, const FInstancedStruct& ObjectChooser, UClass* ObjectClass, bool bResultIsClass);
    TArray<class UObject*> EvaluateChooserMulti(const class UObject* ContextObject, const class UChooserTable* ChooserTable, UClass* ObjectClass);
    class UObject* EvaluateChooser(const class UObject* ContextObject, const class UChooserTable* ChooserTable, UClass* ObjectClass);
    void AddChooserStructInput(FChooserEvaluationContext& Context, int32 Value);
    void AddChooserObjectInput(FChooserEvaluationContext& Context, class UObject* Object);
}; // Size: 0x28

class UChooserTable : public UObject
{
    class UChooserTable* RootChooser;                                                 // 0x0048 (size: 0x8)
    FInstancedStruct FallbackResult;                                                  // 0x0050 (size: 0x10)
    TArray<FInstancedStruct> CookedResults;                                           // 0x0060 (size: 0x10)
    TArray<FInstancedStruct> ColumnsStructs;                                          // 0x0070 (size: 0x10)
    EObjectChooserResultType ResultType;                                              // 0x0080 (size: 0x4)
    UClass* OutputObjectType;                                                         // 0x0088 (size: 0x8)
    TArray<FInstancedStruct> ContextData;                                             // 0x0090 (size: 0x10)

    bool ResultAssetFilter(const FAssetData& AssetData);
}; // Size: 0xA0

class UDEPRECATED_ChooserColumnBool : public UObject
{
    TScriptInterface<class IChooserParameterBool> InputValue;                         // 0x0030 (size: 0x10)
    TArray<bool> RowValues;                                                           // 0x0040 (size: 0x10)

}; // Size: 0x50

class UDEPRECATED_ChooserColumnEnum : public UObject
{
    TScriptInterface<class IChooserParameterEnum> InputValue;                         // 0x0030 (size: 0x10)
    TArray<FChooserEnumRowData> RowValues;                                            // 0x0040 (size: 0x10)

}; // Size: 0x50

class UDEPRECATED_ChooserColumnFloatRange : public UObject
{
    TScriptInterface<class IChooserParameterFloat> InputValue;                        // 0x0030 (size: 0x10)
    TArray<FChooserFloatRangeRowData> RowValues;                                      // 0x0040 (size: 0x10)

}; // Size: 0x50

class UDEPRECATED_ChooserColumnGameplayTag : public UObject
{
    TScriptInterface<class IChooserParameterGameplayTag> InputValue;                  // 0x0030 (size: 0x10)
    EGameplayContainerMatchType TagMatchType;                                         // 0x0040 (size: 0x1)
    TArray<FGameplayTagContainer> RowValues;                                          // 0x0048 (size: 0x10)

}; // Size: 0x58

class UDEPRECATED_ChooserParameterBool_ContextProperty : public UObject
{
    TArray<FName> PropertyBindingChain;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UDEPRECATED_ChooserParameterEnum_ContextProperty : public UObject
{
    TArray<FName> PropertyBindingChain;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UDEPRECATED_ChooserParameterFloat_ContextProperty : public UObject
{
    TArray<FName> PropertyBindingChain;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UDEPRECATED_ChooserParameterGameplayTag_ContextProperty : public UObject
{
    TArray<FName> PropertyBindingChain;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UDEPRECATED_ObjectChooser_Asset : public UObject
{
    class UObject* Asset;                                                             // 0x0030 (size: 0x8)

}; // Size: 0x38

class UDEPRECATED_ObjectChooser_EvaluateChooser : public UObject
{
    class UChooserTable* Chooser;                                                     // 0x0030 (size: 0x8)

}; // Size: 0x38

class UFloatAutoPopulator : public UObject
{
}; // Size: 0x28

#endif
