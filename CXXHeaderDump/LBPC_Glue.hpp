#ifndef UE4SS_SDK_LBPC_Glue_HPP
#define UE4SS_SDK_LBPC_Glue_HPP

class ULBPC_Glue_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UPrimitiveComponent* OwnerPrimitive;                                        // 0x0248 (size: 0x8)
    class UPhysicsConstraintComponent* ConstraintComp;                                // 0x0250 (size: 0x8)
    TArray<FVector> AttachPositions;                                                  // 0x0258 (size: 0x10)

    void UniqueFillter(TArray<FHitResult>& HitRezults, TArray<FHitResult>& Out);
    void ConstraintSetup(class UPhysicsConstraintComponent* ConstraintComponent);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Connect();
    void DoConnect(FHitResult HitRezult1, FHitResult HitRezult2);
    void ExecuteUbergraph_LBPC_Glue(int32 EntryPoint);
}; // Size: 0x268

#endif
