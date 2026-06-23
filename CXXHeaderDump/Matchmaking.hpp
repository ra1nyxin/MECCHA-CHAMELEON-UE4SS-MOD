#ifndef UE4SS_SDK_Matchmaking_HPP
#define UE4SS_SDK_Matchmaking_HPP

struct FDedicatedServerMatchmakingBeaconClientMatchMember
{
    FUniqueNetIdRepl UserId;                                                          // 0x0000 (size: 0x30)
    int32 Team;                                                                       // 0x0030 (size: 0x4)
    int32 slot;                                                                       // 0x0034 (size: 0x4)
    int8 SlotType;                                                                    // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FDedicatedServerReservation
{
    TArray<FDedicatedServerReservationTeam> Teams;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDedicatedServerReservationSlot
{
    bool bHasUser;                                                                    // 0x0000 (size: 0x1)
    FUniqueNetIdRepl UserId;                                                          // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FDedicatedServerReservationTeam
{
    TArray<FDedicatedServerReservationSlot> Slots;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTrackedPlayerController
{
    class APlayerController* PC;                                                      // 0x0000 (size: 0x8)
    FUniqueNetIdRepl UserId;                                                          // 0x0008 (size: 0x30)

}; // Size: 0x38

class ADedicatedServerMatchmakingBeaconClient : public AOnlineBeaconClient
{
    class ADedicatedServerMatchmakingBeaconHostObject* HostStateOnServer;             // 0x0338 (size: 0x8)

    void ReserveForMatch(const TArray<FDedicatedServerMatchmakingBeaconClientMatchMember>& MatchMembers, const TArray<int32>& TeamSizes);
    void OnReserveForMatchResult(bool bWasSuccessful);
}; // Size: 0x370

class ADedicatedServerMatchmakingBeaconHost : public AActor
{
    class AOnlineBeaconHost* Beacon;                                                  // 0x02A8 (size: 0x8)
    int32 BeaconPort;                                                                 // 0x0378 (size: 0x4)
    float ReservationTimeoutSeconds;                                                  // 0x037C (size: 0x4)
    bool bRequireAllPlayersConnectedForMatchStart;                                    // 0x0380 (size: 0x1)
    bool bAllowPlayerReconnections;                                                   // 0x0381 (size: 0x1)
    FDedicatedServerMatchmakingBeaconHostOnReservationStatusChanged OnReservationStatusChanged; // 0x0388 (size: 0x10)
    void OnReservationStatusChanged(bool bIsReserved, const FDedicatedServerReservation& Reservation);
    FDedicatedServerMatchmakingBeaconHostOnMatchReadyToStart OnMatchReadyToStart;     // 0x0398 (size: 0x10)
    void OnMatchReadyToStart(const FDedicatedServerReservation& Reservation);

    void MatchEnded();
    bool IsReserved();
    bool IsMatchPlaying();
    TSet<FString> GetRemainingReservationMembers();
    void GetCurrentReservation(bool& bOutIsReserved, FDedicatedServerReservation& OutReservation);
}; // Size: 0x3A8

class ADedicatedServerMatchmakingBeaconHostObject : public AOnlineBeaconHostObject
{
    class ADedicatedServerMatchmakingBeaconHost* HostOwner;                           // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

#endif
