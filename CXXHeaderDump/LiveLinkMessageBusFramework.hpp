#ifndef UE4SS_SDK_LiveLinkMessageBusFramework_HPP
#define UE4SS_SDK_LiveLinkMessageBusFramework_HPP

#include "LiveLinkMessageBusFramework_enums.hpp"

struct FLiveLinkByteArray
{
    TArray<uint8> Bytes;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FLiveLinkClearSubject
{
    FName SubjectName;                                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FLiveLinkConnectMessage
{
    int32 LiveLinkVersion;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FLiveLinkHeartbeatMessage
{
}; // Size: 0x1

struct FLiveLinkPingMessage
{
    FGuid PollRequest;                                                                // 0x0000 (size: 0x10)
    int32 LiveLinkVersion;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FLiveLinkPongMessage
{
    FString ProviderName;                                                             // 0x0000 (size: 0x10)
    FString MachineName;                                                              // 0x0010 (size: 0x10)
    FGuid PollRequest;                                                                // 0x0020 (size: 0x10)
    int32 LiveLinkVersion;                                                            // 0x0030 (size: 0x4)
    double CreationPlatformTime;                                                      // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FLiveLinkSerializedFrameData
{
    FName PayloadTypeName;                                                            // 0x0000 (size: 0x8)
    ELiveLinkPayloadSerializationMethod SerializationMethod;                          // 0x0008 (size: 0x1)
    ELiveLinkCompressionMethod CompressionMethod;                                     // 0x0009 (size: 0x1)
    ELiveLinkCompressionBias CompressionBias;                                         // 0x000A (size: 0x1)
    int32 PayloadSize;                                                                // 0x000C (size: 0x4)
    FLiveLinkByteArray PayloadBytes;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FLiveLinkSubjectDataMessage
{
    FLiveLinkRefSkeleton RefSkeleton;                                                 // 0x0000 (size: 0x20)
    FName SubjectName;                                                                // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FLiveLinkSubjectFrameMessage
{
    FName SubjectName;                                                                // 0x0000 (size: 0x8)
    TArray<FTransform> Transforms;                                                    // 0x0008 (size: 0x10)
    TArray<FLiveLinkCurveElement> Curves;                                             // 0x0018 (size: 0x10)
    FLiveLinkMetaData MetaData;                                                       // 0x0028 (size: 0x60)
    double Time;                                                                      // 0x0088 (size: 0x8)

}; // Size: 0x90

#endif
