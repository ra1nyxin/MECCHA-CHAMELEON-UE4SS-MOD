#ifndef UE4SS_SDK_BPF_cLeon_HPP
#define UE4SS_SDK_BPF_cLeon_HPP

class UBPF_cLeon_C : public UBlueprintFunctionLibrary
{

    void EqualMapDatas(FST_cLeonMapData A, FST_cLeonMapData B, class UObject* __WorldContext, bool& Rezult);
    void GetTelepportPointName(FST_cLeonMapData MapData, class UObject* __WorldContext, FName& HunterTelporterName, FName& SurvivorTelporterName);
    FText GetCompressText_cLeon(FText TargetText, int32 Index, const TMap<class FString, class FString>& ReplaceTargets, class UObject* __WorldContext);
}; // Size: 0x28

#endif
