#ifndef UE4SS_SDK_CommonLoadingSettings_HPP
#define UE4SS_SDK_CommonLoadingSettings_HPP

#include "CommonLoadingSettings_enums.hpp"

class UCommonLoadingScreenSettings : public UDeveloperSettings
{
    FSoftClassPath LoadingScreenWidget;                                               // 0x0038 (size: 0x20)
    int32 LoadingScreenZOrder;                                                        // 0x0058 (size: 0x4)
    ESplashScreenType SplashScreenType;                                               // 0x005C (size: 0x1)
    bool bDisableSplashLoadingScreen;                                                 // 0x005D (size: 0x1)
    bool bForceTickLoadingScreenEvenInEditor;                                         // 0x005E (size: 0x1)
    float ShowLoadingScreenAdditionalSecs;                                            // 0x0060 (size: 0x4)
    float ShowSplashScreenAdditionalSecs;                                             // 0x0064 (size: 0x4)
    float LoadingScreenHeartbeatHangDuration;                                         // 0x0068 (size: 0x4)
    float LogLoadingScreenHeartbeatInterval;                                          // 0x006C (size: 0x4)
    TArray<FString> BlockedMapNames;                                                  // 0x0070 (size: 0x10)
    FSoftObjectPath SplashScreenImage;                                                // 0x0080 (size: 0x20)
    TEnumAsByte<EStretch::Type> SplashScreenStretch;                                  // 0x00A0 (size: 0x1)
    TEnumAsByte<EStretchDirection::Type> SplashScreenStretchDirection;                // 0x00A1 (size: 0x1)
    FText SplashScreenLoadingText;                                                    // 0x00A8 (size: 0x10)
    FSlateFontInfo SplashScreenLoadingFont;                                           // 0x00B8 (size: 0x60)
    bool bLogLoadingScreenReasonEveryFrame;                                           // 0x0118 (size: 0x1)
    bool bForceLoadingScreenVisible;                                                  // 0x0119 (size: 0x1)
    bool bShowLoadingScreenAdditionalSecsEvenInEditor;                                // 0x011A (size: 0x1)

}; // Size: 0x120

#endif
