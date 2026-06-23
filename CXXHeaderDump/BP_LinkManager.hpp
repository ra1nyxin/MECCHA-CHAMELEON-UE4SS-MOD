#ifndef UE4SS_SDK_BP_LinkManager_HPP
#define UE4SS_SDK_BP_LinkManager_HPP

class ABP_LinkManager_C : public ACPP_LinkManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0310 (size: 0x8)
    int32 LatestInstanceID;                                                           // 0x0318 (size: 0x4)
    int32 BranchInstanceID;                                                           // 0x031C (size: 0x4)
    TArray<class ABP_LinkBranchData_C*> BranchDatas;                                  // 0x0320 (size: 0x10)
    class ABP_LinkDataBank_C* LinkDataBank;                                           // 0x0330 (size: 0x8)

    void PropagationProtoStart(class UPrimitiveComponent* Primitive);
    void PropagationProto(class UPrimitiveComponent* Primitive);
    void MergeCheckForce(class UPrimitiveComponent* Primitive, TSet<int32> UsedBranchIndex, double& ForceValue);
    void AddCustomForce(class UPrimitiveComponent* SourcePrimitive, class UPrimitiveComponent* PrePrimitive, double& ForceValue);
    void PropagationForce(class UPrimitiveComponent* TargetPrimitive, class UPrimitiveComponent* Primitive, TSet<int32> UsedBranch, double ForceValue, const TSet<int32>& ParallelIndex);
    void UpdateGlueGroundDistance();
    void PropagationReset();
    void MergeCheck(class UPrimitiveComponent* Primitive, TArray<int32>& UsedBranchIndex);
    void Propagation(class UPrimitiveComponent* TargetPrimitive, TArray<int32>& UsedBranch);
    void SelectBranchDatas(class ABP_Glue_CustomPhysics_C* Glue, class ABP_LinkBranchData_C*& BranchData, bool& IsNewBranch);
    void UpdateBranch();
    void SetGlueData(class ACPP_Glue* TargetGlue, TEnumAsByte<EN_GlueType::Type> GlueType, bool State);
    void ReceiveBeginPlay();
    void UpdateForceValue();
    void ExecuteUbergraph_BP_LinkManager(int32 EntryPoint);
}; // Size: 0x338

#endif
