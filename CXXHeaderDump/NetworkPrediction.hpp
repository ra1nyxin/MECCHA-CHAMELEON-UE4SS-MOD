#ifndef UE4SS_SDK_NetworkPrediction_HPP
#define UE4SS_SDK_NetworkPrediction_HPP

#include "NetworkPrediction_enums.hpp"

struct FNetworkPredictionDevHUD
{
    FString HUDName;                                                                  // 0x0000 (size: 0x10)
    TArray<FNetworkPredictionDevHUDItem> Items;                                       // 0x0010 (size: 0x10)
    bool bRequirePIE;                                                                 // 0x0020 (size: 0x1)
    bool bRequireNotPIE;                                                              // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FNetworkPredictionDevHUDItem
{
    FString DisplayName;                                                              // 0x0000 (size: 0x10)
    FString ExecCommand;                                                              // 0x0010 (size: 0x10)
    bool bAutoBack;                                                                   // 0x0020 (size: 0x1)
    bool bRequirePIE;                                                                 // 0x0021 (size: 0x1)
    bool bRequireNotPIE;                                                              // 0x0022 (size: 0x1)

}; // Size: 0x28

struct FNetworkPredictionProxy
{
    class UNetworkPredictionWorldManager* WorldManager;                               // 0x00A0 (size: 0x8)

}; // Size: 0xB0

struct FNetworkPredictionSettings
{
    ENetworkPredictionTickingPolicy PreferredTickingPolicy;                           // 0x0000 (size: 0x1)
    TSubclassOf<class ANetworkPredictionReplicatedManager> ReplicatedManagerClassOverride; // 0x0008 (size: 0x8)
    int32 FixedTickFrameRate;                                                         // 0x0010 (size: 0x4)
    bool bForceEngineFixTickForcePhysics;                                             // 0x0014 (size: 0x1)
    ENetworkLOD SimulatedProxyNetworkLOD;                                             // 0x0015 (size: 0x1)
    bool bEnableFixedTickSmoothing;                                                   // 0x0016 (size: 0x1)
    int32 FixedTickInterpolationBufferedMS;                                           // 0x0018 (size: 0x4)
    int32 IndependentTickInterpolationBufferedMS;                                     // 0x001C (size: 0x4)
    int32 IndependentTickInterpolationMaxBufferedMS;                                  // 0x0020 (size: 0x4)
    int32 FixedTickInputSendCount;                                                    // 0x0024 (size: 0x4)
    int32 IndependentTickInputSendCount;                                              // 0x0028 (size: 0x4)
    int32 MaximumRemoteInputFaultLimit;                                               // 0x002C (size: 0x4)

}; // Size: 0x30

struct FReplicationProxy
{
}; // Size: 0x40

struct FServerReplicationRPCParameter
{
}; // Size: 0x18

struct FSharedPackageMap
{
    TArray<FSharedPackageMapItem> Items;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSharedPackageMapItem
{
    TSoftObjectPtr<UObject> SoftPtr;                                                  // 0x0000 (size: 0x28)

}; // Size: 0x28

class ANetworkPredictionReplicatedManager : public AActor
{
    FSharedPackageMap SharedPackageMap;                                               // 0x02A8 (size: 0x10)

}; // Size: 0x2B8

class UNetworkPredictionComponent : public UActorComponent
{
    FNetworkPredictionProxy NetworkPredictionProxy;                                   // 0x00C0 (size: 0xB0)
    FReplicationProxy ReplicationProxy_ServerRPC;                                     // 0x0170 (size: 0x40)
    FReplicationProxy ReplicationProxy_Autonomous;                                    // 0x01B0 (size: 0x40)
    FReplicationProxy ReplicationProxy_Simulated;                                     // 0x01F0 (size: 0x40)
    FReplicationProxy ReplicationProxy_Replay;                                        // 0x0230 (size: 0x40)

    void ServerReceiveClientInput(const FServerReplicationRPCParameter& ProxyParameter);
}; // Size: 0x270

class UNetworkPredictionPhysicsComponent : public UActorComponent
{
    FNetworkPredictionProxy NetworkPredictionProxy;                                   // 0x00C0 (size: 0xB0)
    class UPrimitiveComponent* UpdatedPrimitive;                                      // 0x0170 (size: 0x8)
    FReplicationProxy ReplicationProxy;                                               // 0x0180 (size: 0x40)

}; // Size: 0x1D0

class UNetworkPredictionSettingsObject : public UObject
{
    FNetworkPredictionSettings Settings;                                              // 0x0028 (size: 0x30)
    TArray<FNetworkPredictionDevHUD> DevHUDs;                                         // 0x0058 (size: 0x10)

}; // Size: 0x68

class UNetworkPredictionWorldManager : public UWorldSubsystem
{
    class ANetworkPredictionReplicatedManager* ReplicatedManager;                     // 0x0030 (size: 0x8)

}; // Size: 0x6C8

#endif
