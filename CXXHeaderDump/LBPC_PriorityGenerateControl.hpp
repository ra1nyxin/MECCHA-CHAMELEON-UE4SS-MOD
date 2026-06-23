#ifndef UE4SS_SDK_LBPC_PriorityGenerateControl_HPP
#define UE4SS_SDK_LBPC_PriorityGenerateControl_HPP

class ULBPC_PriorityGenerateControl_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    int32 Priority;                                                                   // 0x0248 (size: 0x4)
    FLBPC_PriorityGenerateControl_CGenerateSignal GenerateSignal;                     // 0x0250 (size: 0x10)
    void GenerateSignal(FRandomStream Seed);

    void ReceiveBeginPlay();
    void ExecuteUbergraph_LBPC_PriorityGenerateControl(int32 EntryPoint);
    void GenerateSignal__DelegateSignature(FRandomStream Seed);
}; // Size: 0x260

#endif
