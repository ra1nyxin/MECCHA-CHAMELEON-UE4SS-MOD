#ifndef UE4SS_SDK_LBPC_ReplicatePrimitiveParamaters_HPP
#define UE4SS_SDK_LBPC_ReplicatePrimitiveParamaters_HPP

class ULBPC_ReplicatePrimitiveParamaters_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UPrimitiveComponent* ParentPrimitive;                                       // 0x0248 (size: 0x8)
    double Mass;                                                                      // 0x0250 (size: 0x8)
    double LinearDamping;                                                             // 0x0258 (size: 0x8)
    double AngularDamping;                                                            // 0x0260 (size: 0x8)
    double DefaultMass;                                                               // 0x0268 (size: 0x8)
    double DefaultLinearDamping;                                                      // 0x0270 (size: 0x8)
    double DefualtAngularDamping;                                                     // 0x0278 (size: 0x8)
    int32 StackChangeMass;                                                            // 0x0280 (size: 0x4)
    int32 StackChangeLinearDamping;                                                   // 0x0284 (size: 0x4)
    int32 StackChangeAngularDamping;                                                  // 0x0288 (size: 0x4)
    FLBPC_ReplicatePrimitiveParamaters_CResetBindEvent ResetBindEvent;                // 0x0290 (size: 0x10)
    void ResetBindEvent(FName ParamaterName);

    void OnRep_AngularDamping();
    void OnRep_LinearDamping();
    void OnRep_Mass();
    void ReceiveBeginPlay();
    void SetMass(Server)(double Mass, bool IsStack);
    void RestMass(Server)();
    void SetLinearDamping(Server)(double Mass, bool IsStack);
    void ResetLinearDamping(Server)();
    void SetAngularDamping(Server)(double Mass, bool IsStack);
    void ResetAngularDamping(Reset)();
    void ExecuteUbergraph_LBPC_ReplicatePrimitiveParamaters(int32 EntryPoint);
    void ResetBindEvent__DelegateSignature(FName ParamaterName);
}; // Size: 0x2A0

#endif
