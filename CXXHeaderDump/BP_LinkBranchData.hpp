#ifndef UE4SS_SDK_BP_LinkBranchData_HPP
#define UE4SS_SDK_BP_LinkBranchData_HPP

class ABP_LinkBranchData_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    int32 InstanceId;                                                                 // 0x02B8 (size: 0x4)
    TArray<class UPrimitiveComponent*> SortedPrimitives;                              // 0x02C0 (size: 0x10)
    TArray<int32> RootIDs;                                                            // 0x02D0 (size: 0x10)
    TArray<class UPrimitiveComponent*> RootPrimitives;                                // 0x02E0 (size: 0x10)
    TArray<class AActor*> SortedPrimitivesPreview;                                    // 0x02F0 (size: 0x10)
    TArray<class AActor*> RootPrimitivesPreview;                                      // 0x0300 (size: 0x10)
    class UMaterialInstanceDynamic* DebugMaterial;                                    // 0x0310 (size: 0x8)
    class ABP_LinkDataBank_C* LinkDataBank;                                           // 0x0318 (size: 0x8)
    TArray<class UPrimitiveComponent*> AffectSortedPrimitives;                        // 0x0320 (size: 0x10)

    void GetSortedPrimitive(int32 Index, class UPrimitiveComponent*& Primitive);
    void GetSidePrimitive(int32 CenterIndex, int32 Distance, class UPrimitiveComponent*& MinSide, class UPrimitiveComponent*& MaxSide);
    void AddPrimitive(TArray<class UPrimitiveComponent*>& Primitives);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LinkBranchData(int32 EntryPoint);
}; // Size: 0x330

#endif
