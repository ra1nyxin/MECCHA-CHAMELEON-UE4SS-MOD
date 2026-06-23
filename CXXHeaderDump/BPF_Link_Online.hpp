#ifndef UE4SS_SDK_BPF_Link_Online_HPP
#define UE4SS_SDK_BPF_Link_Online_HPP

class UBPF_Link_Online_C : public UBlueprintFunctionLibrary
{

    void GetSphereDamageInfo(class AActor* HitActor, FVector hitpoint, class USphereComponent* SphereCollision, class UObject* __WorldContext, double& NormalizedDistanceValue, bool& LineTraceRezult, FVector& Velocity);
    void AddImpulseForce(FVector Velocity, class AActor* TargetActor, bool VelChange, bool CanForceLocal, class UObject* __WorldContext);
    FString HashStringPure(FString Source, class UObject* __WorldContext);
    void MakeOptionMap(TArray<FST_SessionOptionString>& SessionOptions, class UObject* __WorldContext, TMap<class FName, class FSessionSearchParamBP>& SearchParams);
}; // Size: 0x28

#endif
