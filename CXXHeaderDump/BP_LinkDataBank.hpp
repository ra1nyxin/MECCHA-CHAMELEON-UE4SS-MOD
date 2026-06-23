#ifndef UE4SS_SDK_BP_LinkDataBank_HPP
#define UE4SS_SDK_BP_LinkDataBank_HPP

class ABP_LinkDataBank_C : public ACPP_LinkDataBank
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0820 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0828 (size: 0x8)
    TMap<class UPrimitiveComponent*, class ABP_LinkBranchData_C*> PrimitiveReferences; // 0x0830 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FReferencedGlues> GlueReferences;          // 0x0880 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FLinkMergeTargetPrimitives> MergeEndPoint; // 0x08D0 (size: 0x50)
    TMap<class ABP_LinkBranchData_C*, class FLinkMergePoint> MergeEndPointData;       // 0x0920 (size: 0x50)
    TMap<class UPrimitiveComponent*, class FPrimitiveGlues> ReferencedGlueGroups;     // 0x0970 (size: 0x50)
    FCPP_GlueRefGroup NewVar;                                                         // 0x09C0 (size: 0x120)

    void ReferencedGlueGroupAppend(TArray<FReferencedGlueGroup>& GlueGroups, TArray<class ABP_Glue_CustomPhysics_C*>& Glues);
    void GetReferencedGlueGroups(class UPrimitiveComponent* SourcePrimitive, TArray<FReferencedGlueGroup>& Groups);
    void FindPrimitiveGlues(TArray<FReferencedGlueGroup>& Glues, class UPrimitiveComponent* Primitive, int32& FoundIndex, TArray<class ABP_Glue_CustomPhysics_C*>& FoundGlues);
    void AddReferencedGlueGroups(class UPrimitiveComponent* SourcePrimitive, class ABP_Glue_CustomPhysics_C* Glues);
    void GetStaticLinkBranchs();
    void FilterOtherBranchPrimitive(class UPrimitiveComponent* SourcePrimitive, TArray<class ABP_Glue_CustomPhysics_C*>& Glues, TArray<class UPrimitiveComponent*>& Primitives);
    void GetMergeEndPoint(const class ABP_LinkBranchData_C*& LinkBranch, const class UPrimitiveComponent*& Primitive, TArray<class UPrimitiveComponent*>& Targets);
    void FilterReferencedGlues(class UPrimitiveComponent* Primitive, TArray<class ABP_Glue_CustomPhysics_C*>& Glues, TArray<class ABP_Glue_CustomPhysics_C*>& ReturnGlueActors);
    void GetGlueReferences(const class UPrimitiveComponent*& Primitive, TArray<class ABP_Glue_CustomPhysics_C*>& ForceTarget);
    void SetGlueReferences(TArray<class UPrimitiveComponent*>& Primitives, class ABP_Glue_CustomPhysics_C* Glue, bool State);
    void BranchDataMergeCheck(TArray<class UPrimitiveComponent*>& Primitives);
    void GetPrimitiveReference(class UPrimitiveComponent* TargetPrimitive, bool IncludeStatic, bool& IsFound, class ABP_LinkBranchData_C*& Branch, int32& Index);
    void SetPrimitiveReference(const class UPrimitiveComponent*& PrimitiveComp, const class ABP_LinkBranchData_C*& LinkBranchData);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LinkDataBank(int32 EntryPoint);
}; // Size: 0xAE0

#endif
