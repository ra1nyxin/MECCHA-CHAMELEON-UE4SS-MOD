#ifndef UE4SS_SDK_SteamWorkshopMaps_HPP
#define UE4SS_SDK_SteamWorkshopMaps_HPP

#include "SteamWorkshopMaps_enums.hpp"

struct FSteamWorkshopItemDetails
{
    FString ItemId;                                                                   // 0x0000 (size: 0x10)
    FString title;                                                                    // 0x0010 (size: 0x10)
    FString Description;                                                              // 0x0020 (size: 0x10)
    FString OwnerSteamId;                                                             // 0x0030 (size: 0x10)
    FString URL;                                                                      // 0x0040 (size: 0x10)
    ESteamWorkshopMapVisibility Visibility;                                           // 0x0050 (size: 0x1)
    TArray<FString> Tags;                                                             // 0x0058 (size: 0x10)
    int64 CreatedTimestamp;                                                           // 0x0068 (size: 0x8)
    int64 UpdatedTimestamp;                                                           // 0x0070 (size: 0x8)
    int64 FileSize;                                                                   // 0x0078 (size: 0x8)
    int64 PreviewFileSize;                                                            // 0x0080 (size: 0x8)
    int32 VotesUp;                                                                    // 0x0088 (size: 0x4)
    int32 VotesDown;                                                                  // 0x008C (size: 0x4)
    float Score;                                                                      // 0x0090 (size: 0x4)
    bool bBanned;                                                                     // 0x0094 (size: 0x1)
    bool bAcceptedForUse;                                                             // 0x0095 (size: 0x1)

}; // Size: 0x98

struct FSteamWorkshopItemInfo
{
    FString ItemId;                                                                   // 0x0000 (size: 0x10)
    int32 StateFlags;                                                                 // 0x0010 (size: 0x4)
    bool bInstalled;                                                                  // 0x0014 (size: 0x1)
    bool bNeedsUpdate;                                                                // 0x0015 (size: 0x1)
    bool bDownloading;                                                                // 0x0016 (size: 0x1)
    bool bDownloadPending;                                                            // 0x0017 (size: 0x1)

}; // Size: 0x18

struct FSteamWorkshopItemInstallInfo
{
    FString ItemId;                                                                   // 0x0000 (size: 0x10)
    bool bInstalled;                                                                  // 0x0010 (size: 0x1)
    FString InstallFolder;                                                            // 0x0018 (size: 0x10)
    int64 SizeOnDisk;                                                                 // 0x0028 (size: 0x8)
    int64 Timestamp;                                                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FSteamWorkshopMapNetworkLoadRequest
{
    int32 RequestID;                                                                  // 0x0000 (size: 0x4)
    FString WorkshopItemId;                                                           // 0x0008 (size: 0x10)
    FWorkshopMapDescriptor Descriptor;                                                // 0x0020 (size: 0xC0)
    FTransform AnchorTransform;                                                       // 0x00E0 (size: 0x60)
    bool bUseDescriptorEntryTransform;                                                // 0x0140 (size: 0x1)
    FString OptionalLevelNameOverride;                                                // 0x0148 (size: 0x10)
    int32 PakOrder;                                                                   // 0x0158 (size: 0x4)
    FString PackagePath;                                                              // 0x0160 (size: 0x10)
    bool bAutoUnloadPreviousLevel;                                                    // 0x0170 (size: 0x1)

}; // Size: 0x180

struct FSteamWorkshopMapPlayerLoadStatus
{
    class APlayerState* PlayerState;                                                  // 0x0000 (size: 0x8)
    int32 RequestID;                                                                  // 0x0008 (size: 0x4)
    ESteamWorkshopMapNetworkLoadState State;                                          // 0x000C (size: 0x1)
    FString ErrorMessage;                                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSteamWorkshopPakMountDiagnostics
{
    bool bPakFileModuleLoaded;                                                        // 0x0000 (size: 0x1)
    bool bMountPakDelegateBound;                                                      // 0x0001 (size: 0x1)
    bool bPakPlatformFileAvailable;                                                   // 0x0002 (size: 0x1)
    FString ActivePlatformFileName;                                                   // 0x0008 (size: 0x10)
    FString RequestedPakFilePath;                                                     // 0x0018 (size: 0x10)
    FString AbsolutePakFilePath;                                                      // 0x0028 (size: 0x10)
    bool bPakFileExists;                                                              // 0x0038 (size: 0x1)
    int64 PakFileSize;                                                                // 0x0040 (size: 0x8)
    FString Details;                                                                  // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FSteamWorkshopSubmitOptions
{
    FString title;                                                                    // 0x0000 (size: 0x10)
    FString Description;                                                              // 0x0010 (size: 0x10)
    FString ContentFolder;                                                            // 0x0020 (size: 0x10)
    FString PreviewImagePath;                                                         // 0x0030 (size: 0x10)
    FString ChangeNote;                                                               // 0x0040 (size: 0x10)
    ESteamWorkshopMapVisibility Visibility;                                           // 0x0050 (size: 0x1)
    TArray<FString> Tags;                                                             // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FWorkshopMapDescriptor
{
    int32 SchemaVersion;                                                              // 0x0000 (size: 0x4)
    FString DisplayName;                                                              // 0x0008 (size: 0x10)
    FString MapPackage;                                                               // 0x0018 (size: 0x10)
    FString PakFileName;                                                              // 0x0028 (size: 0x10)
    FTransform EntryTransform;                                                        // 0x0040 (size: 0x60)
    FString RequiredGameVersion;                                                      // 0x00A0 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class ASteamWorkshopMapClientLoader : public AInfo
{
    FSteamWorkshopMapNetworkLoadRequest LoadRequest;                                  // 0x02B0 (size: 0x180)
    class ASteamWorkshopMapReplicator* Replicator;                                    // 0x0430 (size: 0x8)
    class ULevelStreamingDynamic* ActiveStreamingLevel;                               // 0x0438 (size: 0x8)

    void ServerReportLoadState(int32 RequestID, ESteamWorkshopMapNetworkLoadState State, FString ErrorMessage);
    void OnRep_LoadRequest();
    void HandleActiveLevelLoaded();
}; // Size: 0x450

class ASteamWorkshopMapReplicator : public AInfo
{
    FSteamWorkshopMapReplicatorOnWorkshopMapLoadRequestChanged OnWorkshopMapLoadRequestChanged; // 0x02A8 (size: 0x10)
    void OnSteamWorkshopMapLoadRequestChanged(const FSteamWorkshopMapNetworkLoadRequest& Request);
    FSteamWorkshopMapReplicatorOnPlayerLoadStateChanged OnPlayerLoadStateChanged;     // 0x02B8 (size: 0x10)
    void OnSteamWorkshopMapPlayerLoadStateChanged(class APlayerState* PlayerState, int32 RequestID, ESteamWorkshopMapNetworkLoadState State, FString ErrorMessage);
    FSteamWorkshopMapReplicatorOnAllPlayersLoaded OnAllPlayersLoaded;                 // 0x02C8 (size: 0x10)
    void OnSteamWorkshopMapAllPlayersLoaded(int32 RequestID, const FWorkshopMapDescriptor& Descriptor);
    FSteamWorkshopMapNetworkLoadRequest CurrentRequest;                               // 0x02E0 (size: 0x180)
    TArray<FSteamWorkshopMapPlayerLoadStatus> PlayerLoadStatuses;                     // 0x0460 (size: 0x10)
    TArray<class ASteamWorkshopMapClientLoader*> ClientLoaders;                       // 0x0470 (size: 0x10)

    void OnRep_PlayerLoadStatuses();
    void OnRep_CurrentRequest();
    bool HostUnloadWorkshopMap(FString& ErrorMessage);
    bool HostLoadWorkshopMapFromInstalledItem(FString WorkshopItemId, const FTransform& AnchorTransform, bool bUseDescriptorEntryTransform, FString OptionalLevelNameOverride, bool bAutoUnloadPreviousLevel, int32 PakOrder, FString PackagePath, FString& ErrorMessage);
    bool HostLoadWorkshopMapFromDescriptor(FString WorkshopItemId, const FWorkshopMapDescriptor& Descriptor, const FTransform& AnchorTransform, bool bUseDescriptorEntryTransform, FString OptionalLevelNameOverride, bool bAutoUnloadPreviousLevel, int32 PakOrder, FString PackagePath, FString& ErrorMessage);
    TArray<FSteamWorkshopMapPlayerLoadStatus> GetPlayerLoadStatuses();
    FSteamWorkshopMapNetworkLoadRequest GetCurrentLoadRequest();
    bool AreAllPlayersLoaded();
}; // Size: 0x490

class AWorkshopMapAnchor : public AActor
{
    FName AnchorId;                                                                   // 0x02A8 (size: 0x8)
    FText DisplayName;                                                                // 0x02B0 (size: 0x10)

    FTransform GetPlacementTransform();
}; // Size: 0x2C0

class USteamWorkshopItemDetailsAsyncAction : public UBlueprintAsyncActionBase
{
    FSteamWorkshopItemDetailsAsyncActionOnSuccess OnSuccess;                          // 0x0030 (size: 0x10)
    void OnSteamWorkshopItemDetailsAsyncComplete(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    FSteamWorkshopItemDetailsAsyncActionOnFailure OnFailure;                          // 0x0040 (size: 0x10)
    void OnSteamWorkshopItemDetailsAsyncComplete(FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
    class UObject* WorldContextObject;                                                // 0x0050 (size: 0x8)
    FString ItemId;                                                                   // 0x0058 (size: 0x10)
    int32 MaxAgeSeconds;                                                              // 0x0068 (size: 0x4)
    class USteamWorkshopMapSubsystem* BoundSubsystem;                                 // 0x0070 (size: 0x8)

    class USteamWorkshopItemDetailsAsyncAction* RequestWorkshopItemDetailsAsync(class UObject* WorldContextObject, FString ItemId, int32 MaxAgeSeconds);
    void HandleRequestComplete(bool bSuccess, FString CompletedItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);
}; // Size: 0x78

class USteamWorkshopMapSubsystem : public UGameInstanceSubsystem
{
    FSteamWorkshopMapSubsystemOnCreateWorkshopItemComplete OnCreateWorkshopItemComplete; // 0x0038 (size: 0x10)
    void OnSteamWorkshopCreateItemComplete(bool bSuccess, FString ItemId, FString ErrorMessage);
    FSteamWorkshopMapSubsystemOnSubmitWorkshopItemComplete OnSubmitWorkshopItemComplete; // 0x0048 (size: 0x10)
    void OnSteamWorkshopSubmitItemComplete(bool bSuccess, FString ItemId, FString ErrorMessage);
    FSteamWorkshopMapSubsystemOnRequestWorkshopItemDetailsComplete OnRequestWorkshopItemDetailsComplete; // 0x0058 (size: 0x10)
    void OnSteamWorkshopItemDetailsComplete(bool bSuccess, FString ItemId, FSteamWorkshopItemDetails Details, FString ErrorMessage);

    bool SubmitWorkshopItemUpdate(FString ItemId, const FSteamWorkshopSubmitOptions& Options, FString& ErrorMessage);
    void ScanMountedMapAssets(FString PackagePath);
    bool RequestWorkshopItemDetails(FString ItemId, int32 MaxAgeSeconds, FString& ErrorMessage);
    bool RequestDownloadWorkshopItem(FString ItemId, bool bHighPriority, FString& ErrorMessage);
    bool ReadWorkshopMapDescriptor(FString ManifestFilePath, FWorkshopMapDescriptor& OutDescriptor, FString& ErrorMessage);
    bool MountPakFromWorkshopItem(FString ItemId, FString PakFileName, int32 PakOrder, FString& MountedPakFilePath, FString& ErrorMessage);
    bool MountPakFile(FString PakFilePath, int32 PakOrder, FString& ErrorMessage);
    class ULevelStreamingDynamic* LoadWorkshopMapLevel(const FWorkshopMapDescriptor& Descriptor, const FTransform& AnchorTransform, bool bUseDescriptorEntryTransform, FString OptionalLevelNameOverride, bool& bOutSuccess, FString& ErrorMessage);
    class ULevelStreamingDynamic* LoadWorkshopMapFromManifest(FString ManifestFilePath, const FTransform& AnchorTransform, bool bUseDescriptorEntryTransform, FString OptionalLevelNameOverride, bool& bOutSuccess, FString& ErrorMessage);
    bool IsSteamWorkshopAvailable(FString& ErrorMessage);
    bool GetWorkshopItemInstallInfo(FString ItemId, FSteamWorkshopItemInstallInfo& OutInfo, FString& ErrorMessage);
    bool GetSubscribedWorkshopItems(TArray<FSteamWorkshopItemInfo>& OutItems, FString& ErrorMessage);
    void GetPakMountDiagnostics(FString PakFilePath, FSteamWorkshopPakMountDiagnostics& OutDiagnostics);
    bool CreateWorkshopItem(FString& ErrorMessage);
    bool CleanWorkshopItemFolderForMount(FString ItemId, TArray<FString>& DeletedFiles, FString& ErrorMessage);
    bool CleanAllSubscribedWorkshopItemFoldersForMount(TArray<FString>& DeletedFiles, FString& ErrorMessage);
}; // Size: 0x248

#endif
