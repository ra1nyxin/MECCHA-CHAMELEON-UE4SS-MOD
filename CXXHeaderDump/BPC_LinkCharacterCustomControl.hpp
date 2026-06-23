#ifndef UE4SS_SDK_BPC_LinkCharacterCustomControl_HPP
#define UE4SS_SDK_BPC_LinkCharacterCustomControl_HPP

class UBPC_LinkCharacterCustomControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    class USkeletalMeshComponent* MainMesh;                                           // 0x00C0 (size: 0x8)
    int32 BodyColorIndex;                                                             // 0x00C8 (size: 0x4)
    class UBP_PenguinBodyPreset_C* BodyPresetDatas;                                   // 0x00D0 (size: 0x8)
    class UMaterialInstanceDynamic* OwnerDynamicMaterial;                             // 0x00D8 (size: 0x8)
    bool IsGhostMode;                                                                 // 0x00E0 (size: 0x1)
    int32 HeadAccessorieIndex;                                                        // 0x00E4 (size: 0x4)
    class UBP_PenguinHeadAccessoriePreset_C* HeadAccessoriePresetDatas;               // 0x00E8 (size: 0x8)
    class AActor* CurrentActor;                                                       // 0x00F0 (size: 0x8)
    FBPC_LinkCharacterCustomControl_COnHeadAccessorieChange OnHeadAccessorieChange;   // 0x00F8 (size: 0x10)
    void OnHeadAccessorieChange();
    class UMaterialInstanceDynamic* GhostMaterial;                                    // 0x0108 (size: 0x8)

    void OnRep_HeadAccessorieIndex();
    void OnRep_BodyColorIndex();
    void OnRep_IsGhostMode();
    void ReceiveBeginPlay();
    void UpdateVisualBody();
    void Init(class UMaterialInstanceDynamic* OwnerDynamicMaterial);
    void SetVisibility(bool Visibility);
    void SetBodyColorIndex(Server)(int32 Index);
    void SetHeadAccessorieIndex(Server)(int32 Index);
    void UpdateVisualHead();
    void SetHeadAccessorieVisiblity(bool State);
    void ExecuteUbergraph_BPC_LinkCharacterCustomControl(int32 EntryPoint);
    void OnHeadAccessorieChange__DelegateSignature();
}; // Size: 0x110

#endif
