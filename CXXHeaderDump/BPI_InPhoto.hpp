#ifndef UE4SS_SDK_BPI_InPhoto_HPP
#define UE4SS_SDK_BPI_InPhoto_HPP

class IBPI_InPhoto_C : public IInterface
{

    void InAngleOfView(bool InState, double DeltaTime, TEnumAsByte<ENUM_CameraMode::Type> CameraMode);
    void Delete();
    void GetCopyClass(class UStaticMeshComponent* CentorComponent, TSubclassOf<class ABP_CopyActorBase_C>& Class, double& Scale, FVector& DefaultScale);
    void GetCentorPosition(TArray<FVector>& CentorPosition);
    void Reverse(FTransform NewPosition, FVector HitNormal);
    void SetActorInfo(FVector ToPosition, class USceneComponent* Comp);
    void GetActorInfo(FTransform& DefaultTransform, bool& Not In Shot, FVector& CentorPosition, bool& IsPenguin, TEnumAsByte<ENUM_ActorType::Type>& ActorType, bool& NonInPhoto);
}; // Size: 0x28

#endif
