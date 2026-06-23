#ifndef UE4SS_SDK_ProxyTable_HPP
#define UE4SS_SDK_ProxyTable_HPP

struct FChooserParameterProxyTableBase : public FChooserParameterBase
{
}; // Size: 0x8

struct FLookupProxy : public FObjectChooserBase
{
    class UProxyAsset* Proxy;                                                         // 0x0008 (size: 0x8)
    FInstancedStruct ProxyTable;                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLookupProxyWithOverrideTable : public FObjectChooserBase
{
    class UProxyAsset* Proxy;                                                         // 0x0008 (size: 0x8)
    class UProxyTable* OverrideProxyTable;                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FProxyEntry
{
    class UProxyAsset* Proxy;                                                         // 0x0000 (size: 0x8)
    FName Key;                                                                        // 0x0008 (size: 0x8)
    FInstancedStruct ValueStruct;                                                     // 0x0010 (size: 0x10)
    TArray<FProxyStructOutput> OutputStructData;                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FProxyStructOutput
{
    FChooserStructPropertyBinding Binding;                                            // 0x0000 (size: 0x30)
    FInstancedStruct Value;                                                           // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FProxyTableContextProperty : public FChooserParameterProxyTableBase
{
    FChooserPropertyBinding Binding;                                                  // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FRuntimeProxyValue
{
    class UProxyAsset* ProxyAsset;                                                    // 0x0000 (size: 0x8)
    FInstancedStruct Value;                                                           // 0x0008 (size: 0x10)
    TArray<FProxyStructOutput> OutputStructData;                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

class IChooserParameterProxyTable : public IInterface
{
}; // Size: 0x28

class UProxyAsset : public UObject
{
    UClass* Type;                                                                     // 0x0048 (size: 0x8)
    EObjectChooserResultType ResultType;                                              // 0x0050 (size: 0x4)
    TArray<FInstancedStruct> ContextData;                                             // 0x0058 (size: 0x10)
    FGuid Guid;                                                                       // 0x0068 (size: 0x10)

}; // Size: 0x78

class UProxyTable : public UObject
{
    TArray<FGuid> Keys;                                                               // 0x0028 (size: 0x10)
    TArray<FRuntimeProxyValue> RuntimeValues;                                         // 0x0038 (size: 0x10)

}; // Size: 0x48

class UProxyTableFunctionLibrary : public UBlueprintFunctionLibrary
{

    FInstancedStruct MakeLookupProxyWithOverrideTable(class UProxyAsset* Proxy, class UProxyTable* ProxyTable);
    FInstancedStruct MakeLookupProxy(class UProxyAsset* Proxy);
    class UObject* EvaluateProxyTable(const class UObject* ContextObject, const class UProxyTable* ProxyTable, FName Key);
    class UObject* EvaluateProxyAsset(const class UObject* ContextObject, const class UProxyAsset* Proxy, UClass* ObjectClass);
}; // Size: 0x28

#endif
