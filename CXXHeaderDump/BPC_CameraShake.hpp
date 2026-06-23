#ifndef UE4SS_SDK_BPC_CameraShake_HPP
#define UE4SS_SDK_BPC_CameraShake_HPP

class UBPC_CameraShake_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    TSubclassOf<class UCameraShakeBase> ShakeClass;                                   // 0x00C0 (size: 0x8)

    void ShakeStart(double Duration, double Scale);
    void ShakeEnd();
    void ExecuteUbergraph_BPC_CameraShake(int32 EntryPoint);
}; // Size: 0xC8

#endif
