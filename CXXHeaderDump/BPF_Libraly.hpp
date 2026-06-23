#ifndef UE4SS_SDK_BPF_Libraly_HPP
#define UE4SS_SDK_BPF_Libraly_HPP

class UBPF_Libraly_C : public UBlueprintFunctionLibrary
{

    void FullToHarfNumberString(FString String, class UObject* __WorldContext, FString& Rezult);
    void GetCollisionSound(TEnumAsByte<HitMaterial::Type> MaterialType, class UObject* __WorldContext, class USoundBase*& Sound);
    void PlaySoundAndReportNoise(class USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings, const class AActor* OwningActor, float MaxRange, FName Tag, class AActor* Instigator, bool DebugDraw, class UObject* __WorldContext);
    void GetChildComponentByClass(class USceneComponent* Target, TSubclassOf<class USceneComponent> Class, class UObject* __WorldContext, class USceneComponent*& Compoent);
    void LerpIdleWalkMover(double DeltaTime, double LerpSpeed, class AActor* SourceObject, double& NormalizeSpeed, FVector& BeforeVector, FVector& VectorSpeed, double MultiplySpeed, double MaxSpeed, class UObject* __WorldContext);
    void StopAnimMontage(class USkeletalMeshComponent* SkeletalMesh, const class UAnimMontage* Montage, class UObject* __WorldContext);
    void CentorCursor(class UObject* __WorldContext);
    void MinusEqual(double& Variable, double PlusValue, class UObject* __WorldContext);
    void CountDownText(double TimerValue, bool Show decimal point, class UObject* __WorldContext, FText& ReturnText);
    int32 WrapSnap(Integer)(int32 Value, int32 min, int32 max, class UObject* __WorldContext);
    void InitializeTransform(class UObject* __WorldContext, FTransform& Transform);
    void Attraction(double kp, double kd, FVector TargetPosition, FVector CurrentPosition, class UPrimitiveComponent* Pritmitive, class UObject* __WorldContext, FVector& Force);
    bool RayTraceFront(class USceneComponent* Component, double StartAddPosition, double Length, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool bTraceComplex, const TArray<class AActor*>& ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, class UObject* __WorldContext, FHitResult& OutHit);
    TArray<FString> SplitTextPure(FText SourceText, FString SplitSource, class UObject* __WorldContext);
    void LerpIdleWalk(double DeltaTime, double LerpSpeed, class AActor* SourceObject, class UCharacterMovementComponent* CharacterMovementComp, double& NormalizeSpeed, FVector& BeforeVector, FVector& VectorSpeed, double MultiplySpeed, class UObject* __WorldContext);
    void LocalSaveFloat(const double& InValue, class UObject* __WorldContext, double& Value);
    void LocalSaveBool(const bool& InValue, class UObject* __WorldContext, bool& Value);
    void GetYawOnlyRotation(FRotator Rotation, class UObject* __WorldContext, FRotator& NewParam);
    void RemoveAndClear(class UWidget*& Widget, class UObject* __WorldContext);
    void CustomGetGameInstance(class UObject* __WorldContext, class UBPGI_Main_C*& GameInstance);
    void SetAnimationPosiiton(class UUserWidget* UserWidget, class UWidgetAnimation* WidgetAnimation, double position, class UObject* __WorldContext);
    void ParryStanEffect(class AActor* Player, class AActor* Target, double Distance, bool Mini, class UObject* __WorldContext);
    void GetLookatForwardVector(class AActor* Start, class AActor* Target, class UObject* __WorldContext, FVector& Rotation);
    void GetLookatRotation(class AActor* Start, class AActor* Target, class UObject* __WorldContext, FRotator& Rotation);
    void DebugDrawLine(FVector SelfPositon, FVector Direction, double Length, double DrawTime, class UObject* __WorldContext);
    void CustomAddWidget(TSubclassOf<class UUserWidget> WidgetClass, class UUserWidget*& Variable, int32 ZOrder, bool Ignore, class UObject* __WorldContext, class UWidget*& CreatedeWidget);
    void DivideSet(double& Variable, double DivideValue1, double DivideValue2, class UObject* __WorldContext);
    void CustomTruncate(double& Variable, int32 NumberOfDigits, class UObject* __WorldContext);
    void PlusEqualWithClamp(double& Variable, double PlusValue, double min, double max, class UObject* __WorldContext);
    void PlusEqual(double& Variable, double PlusValue, class UObject* __WorldContext);
    void AddForceComponentCheck(class AActor* TargetActor, class UObject* __WorldContext, class UPrimitiveComponent*& PrimitiveComp, bool& State);
    void MakeUniqueActorsArray(TArray<class AActor*>& Actors, class UObject* __WorldContext, TArray<class AActor*>& UniqueActors);
    void SetLogicState(class AActor* TargetActor, bool LogicState, bool StopMovement, class UObject* __WorldContext);
    void GetMarkup(FString Front, FString Back, FString Source, class UObject* __WorldContext);
    TArray<FString> SplitText(FText SourceText, FString SplitSource, class UObject* __WorldContext);
    void LocalizeInputKey(FString Text, FString DeviceName, class UObject* __WorldContext, FString& ReturnText);
    void RitchTextMarkupArray(TArray<FString>& StringArray, class UObject* __WorldContext, TArray<FString>& ReturnStrings);
    void ReplaceSaveText(FString InputText, class UObject* __WorldContext, FString& OutPutText);
    void TextSizeAdjust(class UTextBlock* Text Block, double MaxWidth, class UObject* __WorldContext);
    void SaveDataUpdate(class UBP_SaveGame_C* SaveGame, TEnumAsByte<ENUM_SaveDataUpdateType::Type> UpdateType, class UObject* __WorldContext);
    void UI_MouseState(bool MouseState, class UObject* __WorldContext);
    void CheckMatchKeys(TArray<FString>& NeedKeys, TArray<FString>& CheckKeys, class UObject* __WorldContext, bool& Return);
    void NewCameraViewCheck(FRotator A, double Field of View, double Aspect Ratio, FVector B_Vector, class UObject* __WorldContext, bool& Return Value);
    void CameraViewCheck(FVector A, FVector B, double Field of View, double Aspect Ratio, class UObject* __WorldContext, bool& Return Value);
}; // Size: 0x28

#endif
