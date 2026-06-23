#ifndef UE4SS_SDK_MovieRenderPipelineMP4Encoder_HPP
#define UE4SS_SDK_MovieRenderPipelineMP4Encoder_HPP

#include "MovieRenderPipelineMP4Encoder_enums.hpp"

class UMovieGraphMP4EncoderNode : public UMovieGraphVideoOutputNode
{
    uint8 bOverride_EncodingRateControl;                                              // 0x00D0 (size: 0x1)
    uint8 bOverride_AverageBitrateInMbps;                                             // 0x00D0 (size: 0x1)
    uint8 bOverride_MaxBitrateInMbps;                                                 // 0x00D0 (size: 0x1)
    uint8 bOverride_ConstantRateFactor;                                               // 0x00D0 (size: 0x1)
    uint8 bOverride_EncodingProfile;                                                  // 0x00D0 (size: 0x1)
    uint8 bOverride_EncodingLevel;                                                    // 0x00D0 (size: 0x1)
    uint8 bOverride_bIncludeAudio;                                                    // 0x00D0 (size: 0x1)
    uint8 bOverride_OCIOConfiguration;                                                // 0x00D0 (size: 0x1)
    uint8 bOverride_OCIOContext;                                                      // 0x00D1 (size: 0x1)
    EMoviePipelineMP4EncodeRateControlMode EncodingRateControl;                       // 0x00D2 (size: 0x1)
    float AverageBitrateInMbps;                                                       // 0x00D4 (size: 0x4)
    float MaxBitrateInMbps;                                                           // 0x00D8 (size: 0x4)
    int32 ConstantRateFactor;                                                         // 0x00DC (size: 0x4)
    EMoviePipelineMP4EncodeProfile EncodingProfile;                                   // 0x00E0 (size: 0x1)
    EMoviePipelineMP4EncodeLevel EncodingLevel;                                       // 0x00E1 (size: 0x1)
    bool bIncludeAudio;                                                               // 0x00E2 (size: 0x1)
    FOpenColorIODisplayConfiguration OCIOConfiguration;                               // 0x00E8 (size: 0xA8)
    TMap<class FString, class FString> OCIOContext;                                   // 0x0190 (size: 0x50)

}; // Size: 0x1E0

class UMoviePipelineMP4EncoderOutput : public UMoviePipelineVideoOutputBase
{
    EMoviePipelineMP4EncodeRateControlMode EncodingRateControl;                       // 0x0090 (size: 0x1)
    float AverageBitrateInMbps;                                                       // 0x0094 (size: 0x4)
    float MaxBitrateInMbps;                                                           // 0x0098 (size: 0x4)
    int32 ConstantRateFactor;                                                         // 0x009C (size: 0x4)
    EMoviePipelineMP4EncodeProfile EncodingProfile;                                   // 0x00A0 (size: 0x1)
    EMoviePipelineMP4EncodeLevel EncodingLevel;                                       // 0x00A1 (size: 0x1)
    bool bIncludeAudio;                                                               // 0x00A2 (size: 0x1)

}; // Size: 0xA8

#endif
