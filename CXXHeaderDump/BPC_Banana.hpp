#ifndef UE4SS_SDK_BPC_Banana_HPP
#define UE4SS_SDK_BPC_Banana_HPP

class UBPC_Banana_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class ABP_FirstPersonCharacter_LINK_C* As BP First Person Character LINK;         // 0x00C0 (size: 0x8)
    FVector TargetVel;                                                                // 0x00C8 (size: 0x18)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BPC_Banana(int32 EntryPoint);
}; // Size: 0xE0

#endif
