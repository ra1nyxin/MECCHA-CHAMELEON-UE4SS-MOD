#ifndef UE4SS_SDK_GameplayDebugger_HPP
#define UE4SS_SDK_GameplayDebugger_HPP

#include "GameplayDebugger_enums.hpp"

struct FGameplayDebuggerCategoryConfig
{
    FString CategoryName;                                                             // 0x0000 (size: 0x10)
    int32 SlotIdx;                                                                    // 0x0010 (size: 0x4)
    EGameplayDebuggerOverrideMode ActiveInGame;                                       // 0x0014 (size: 0x1)
    EGameplayDebuggerOverrideMode ActiveInSimulate;                                   // 0x0015 (size: 0x1)
    EGameplayDebuggerOverrideMode Hidden;                                             // 0x0016 (size: 0x1)
    uint8 bOverrideSlotIdx;                                                           // 0x0018 (size: 0x1)
    TArray<FGameplayDebuggerInputConfig> InputHandlers;                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGameplayDebuggerCategoryData
{
    FName CategoryName;                                                               // 0x0000 (size: 0x8)
    TArray<FString> TextLines;                                                        // 0x0008 (size: 0x10)
    TArray<FGameplayDebuggerShape> Shapes;                                            // 0x0018 (size: 0x10)
    TArray<FGameplayDebuggerDataPackHeader> DataPacks;                                // 0x0028 (size: 0x10)
    bool bIsEnabled;                                                                  // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FGameplayDebuggerDataPackHeader
{
    int16 DataVersion;                                                                // 0x0000 (size: 0x2)
    int16 SyncCounter;                                                                // 0x0002 (size: 0x2)
    int32 DataSize;                                                                   // 0x0004 (size: 0x4)
    int32 DataOffset;                                                                 // 0x0008 (size: 0x4)
    uint8 bIsCompressed;                                                              // 0x000C (size: 0x1)

}; // Size: 0x10

struct FGameplayDebuggerDataPackRPCParams
{
    FName CategoryName;                                                               // 0x0000 (size: 0x8)
    int32 DataPackIdx;                                                                // 0x0008 (size: 0x4)
    FGameplayDebuggerDataPackHeader Header;                                           // 0x000C (size: 0x10)
    TArray<uint8> Data;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGameplayDebuggerDebugActor
{
    TWeakObjectPtr<class AActor> Actor;                                               // 0x0000 (size: 0x8)
    FName ActorName;                                                                  // 0x0008 (size: 0x8)
    int16 SyncCounter;                                                                // 0x0010 (size: 0x2)

}; // Size: 0x14

struct FGameplayDebuggerExtensionConfig
{
    FString ExtensionName;                                                            // 0x0000 (size: 0x10)
    EGameplayDebuggerOverrideMode UseExtension;                                       // 0x0010 (size: 0x1)
    TArray<FGameplayDebuggerInputConfig> InputHandlers;                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FGameplayDebuggerInputConfig
{
    FString ConfigName;                                                               // 0x0000 (size: 0x10)
    FKey Key;                                                                         // 0x0010 (size: 0x18)
    uint8 bModShift;                                                                  // 0x0028 (size: 0x1)
    uint8 bModCtrl;                                                                   // 0x0028 (size: 0x1)
    uint8 bModAlt;                                                                    // 0x0028 (size: 0x1)
    uint8 bModCmd;                                                                    // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FGameplayDebuggerNetPack
{
    class AGameplayDebuggerCategoryReplicator* Owner;                                 // 0x0000 (size: 0x8)
    TArray<FGameplayDebuggerCategoryData> SavedData;                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FGameplayDebuggerPlayerData
{
    class UGameplayDebuggerLocalController* Controller;                               // 0x0000 (size: 0x8)
    class UInputComponent* InputComponent;                                            // 0x0008 (size: 0x8)
    class AGameplayDebuggerCategoryReplicator* Replicator;                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FGameplayDebuggerShape
{
    TArray<FVector> ShapeData;                                                        // 0x0000 (size: 0x10)
    FString Description;                                                              // 0x0010 (size: 0x10)
    FColor Color;                                                                     // 0x0020 (size: 0x4)
    EGameplayDebuggerShape Type;                                                      // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FGameplayDebuggerVisLogSync
{
    FString DeviceIDs;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

class AGameplayDebuggerCategoryReplicator : public AActor
{
    class APlayerController* OwnerPC;                                                 // 0x02A8 (size: 0x8)
    bool bIsEnabled;                                                                  // 0x02B0 (size: 0x1)
    FGameplayDebuggerNetPack ReplicatedData;                                          // 0x02B8 (size: 0x18)
    FGameplayDebuggerDebugActor DebugActor;                                           // 0x02D0 (size: 0x14)
    FGameplayDebuggerVisLogSync VisLogSync;                                           // 0x02E8 (size: 0x10)
    class UGameplayDebuggerRenderingComponent* RenderingComp;                         // 0x02F8 (size: 0x8)

    void ServerSetViewPoint(const FVector& InViewLocation, const FVector& InViewDirection);
    void ServerSetEnabled(bool bEnable);
    void ServerSetDebugActor(class AActor* Actor, bool bSelectInEditor);
    void ServerSetCategoryEnabled(int32 CategoryId, bool bEnable);
    void ServerSendExtensionInputEvent(int32 ExtensionId, int32 HandlerId);
    void ServerSendCategoryInputEvent(int32 CategoryId, int32 HandlerId);
    void ServerResetViewPoint();
    void OnRep_ReplicatedData();
    void ClientDataPackPacket(const FGameplayDebuggerDataPackRPCParams& Params);
}; // Size: 0x368

class AGameplayDebuggerPlayerManager : public AActor
{
    TArray<FGameplayDebuggerPlayerData> PlayerData;                                   // 0x02B0 (size: 0x10)
    TArray<class AGameplayDebuggerCategoryReplicator*> PendingRegistrations;          // 0x02C0 (size: 0x10)

}; // Size: 0x2D8

class UGameplayDebuggerConfig : public UObject
{
    FKey ActivationKey;                                                               // 0x0028 (size: 0x18)
    FKey CategoryRowNextKey;                                                          // 0x0040 (size: 0x18)
    FKey CategoryRowPrevKey;                                                          // 0x0058 (size: 0x18)
    FKey CategorySlot0;                                                               // 0x0070 (size: 0x18)
    FKey CategorySlot1;                                                               // 0x0088 (size: 0x18)
    FKey CategorySlot2;                                                               // 0x00A0 (size: 0x18)
    FKey CategorySlot3;                                                               // 0x00B8 (size: 0x18)
    FKey CategorySlot4;                                                               // 0x00D0 (size: 0x18)
    FKey CategorySlot5;                                                               // 0x00E8 (size: 0x18)
    FKey CategorySlot6;                                                               // 0x0100 (size: 0x18)
    FKey CategorySlot7;                                                               // 0x0118 (size: 0x18)
    FKey CategorySlot8;                                                               // 0x0130 (size: 0x18)
    FKey CategorySlot9;                                                               // 0x0148 (size: 0x18)
    float DebugCanvasPaddingLeft;                                                     // 0x0160 (size: 0x4)
    float DebugCanvasPaddingRight;                                                    // 0x0164 (size: 0x4)
    float DebugCanvasPaddingTop;                                                      // 0x0168 (size: 0x4)
    float DebugCanvasPaddingBottom;                                                   // 0x016C (size: 0x4)
    bool bDebugCanvasEnableTextShadow;                                                // 0x0170 (size: 0x1)
    TArray<FGameplayDebuggerCategoryConfig> Categories;                               // 0x0178 (size: 0x10)
    TArray<FGameplayDebuggerExtensionConfig> Extensions;                              // 0x0188 (size: 0x10)

}; // Size: 0x258

class UGameplayDebuggerLocalController : public UObject
{
    class AGameplayDebuggerCategoryReplicator* CachedReplicator;                      // 0x0028 (size: 0x8)
    class AGameplayDebuggerPlayerManager* CachedPlayerManager;                        // 0x0030 (size: 0x8)
    class AActor* DebugActorCandidate;                                                // 0x0038 (size: 0x8)
    class UFont* HUDFont;                                                             // 0x0040 (size: 0x8)

}; // Size: 0x88

class UGameplayDebuggerRenderingComponent : public UDebugDrawComponent
{
}; // Size: 0x5F0

class UGameplayDebuggerUserSettings : public UDeveloperSettings
{
    uint8 bEnableGameplayDebuggerInEditor;                                            // 0x0038 (size: 0x1)
    float MaxViewDistance;                                                            // 0x003C (size: 0x4)
    float MaxViewAngle;                                                               // 0x0040 (size: 0x4)
    TSet<FName> EnabledCategories;                                                    // 0x0048 (size: 0x50)
    int32 FontSize;                                                                   // 0x0098 (size: 0x4)

}; // Size: 0xA0

#endif
