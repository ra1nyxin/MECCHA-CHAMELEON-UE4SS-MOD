#ifndef UE4SS_SDK_RedpointEOSNetworking_HPP
#define UE4SS_SDK_RedpointEOSNetworking_HPP

struct FRedpointMsgAcceptedMutualTrustedClientProof
{
}; // Size: 0x1

struct FRedpointMsgDeliverIdToken
{
    FString ClientToken;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRedpointMsgDeliverTrustedClientProof
{
    bool bCanProvideProof;                                                            // 0x0000 (size: 0x1)
    FString EncodedProof;                                                             // 0x0008 (size: 0x10)
    FString PlatformString;                                                           // 0x0018 (size: 0x10)
    bool bRequestMutualProofFromListenServer;                                         // 0x0028 (size: 0x1)
    FString EncodedNonceForListenServer;                                              // 0x0030 (size: 0x10)
    bool bSkipPeerRegistration;                                                       // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FRedpointMsgRequestIdToken
{
}; // Size: 0x1

struct FRedpointMsgRequestTrustedClientProof
{
    FString EncodedNonce;                                                             // 0x0000 (size: 0x10)
    uint8 AntiCheatImplementationType;                                                // 0x0010 (size: 0x1)

}; // Size: 0x18

class URedpointEOSControlChannel : public UControlChannel
{
}; // Size: 0x90

class URedpointEOSIpNetConnection : public UIpConnection
{
}; // Size: 0x1EB0

class URedpointEOSNetConnection : public UNetConnection
{
}; // Size: 0x1E40

class URedpointEOSNetDriver : public UIpNetDriver
{
}; // Size: 0x9B0

#endif
