#ifndef UE4SS_SDK_LBPC_ComponentDistanceVisualUpdate_HPP
#define UE4SS_SDK_LBPC_ComponentDistanceVisualUpdate_HPP

class ULBPC_ComponentDistanceVisualUpdate_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class USceneComponent* ChildComponent;                                            // 0x0248 (size: 0x8)
    double CheckInterval;                                                             // 0x0250 (size: 0x8)
    double MaxDistnace;                                                               // 0x0258 (size: 0x8)
    bool ForceHide;                                                                   // 0x0260 (size: 0x1)

    void ReceiveBeginPlay();
    void Check();
    void ForceUpdate();
    void ExecuteUbergraph_LBPC_ComponentDistanceVisualUpdate(int32 EntryPoint);
}; // Size: 0x261

#endif
