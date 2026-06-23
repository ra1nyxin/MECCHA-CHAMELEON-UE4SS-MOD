#ifndef UE4SS_SDK_OpenColorIO_HPP
#define UE4SS_SDK_OpenColorIO_HPP

#include "OpenColorIO_enums.hpp"

struct FOpenColorIOColorConversionSettings
{
    class UOpenColorIOConfiguration* ConfigurationSource;                             // 0x0000 (size: 0x8)
    FOpenColorIOColorSpace SourceColorSpace;                                          // 0x0008 (size: 0x30)
    FOpenColorIOColorSpace DestinationColorSpace;                                     // 0x0038 (size: 0x30)
    FOpenColorIODisplayView DestinationDisplayView;                                   // 0x0068 (size: 0x30)
    EOpenColorIOViewTransformDirection DisplayViewDirection;                          // 0x0098 (size: 0x1)

}; // Size: 0xA0

struct FOpenColorIOColorSpace
{
    FString ColorSpaceName;                                                           // 0x0000 (size: 0x10)
    FString FamilyName;                                                               // 0x0010 (size: 0x10)
    FString Description;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FOpenColorIODisplayConfiguration
{
    bool bIsEnabled;                                                                  // 0x0000 (size: 0x1)
    FOpenColorIOColorConversionSettings ColorConfiguration;                           // 0x0008 (size: 0xA0)

}; // Size: 0xA8

struct FOpenColorIODisplayView
{
    FString Display;                                                                  // 0x0000 (size: 0x10)
    FString View;                                                                     // 0x0010 (size: 0x10)
    FString Description;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool ApplyColorSpaceTransform(const class UObject* WorldContextObject, const FOpenColorIOColorConversionSettings& ConversionSettings, class UTexture* InputTexture, class UTextureRenderTarget2D* OutputRenderTarget);
}; // Size: 0x28

class UOpenColorIOColorTransform : public UObject
{
    bool bIsDisplayViewType;                                                          // 0x0028 (size: 0x1)
    FString SourceColorSpace;                                                         // 0x0030 (size: 0x10)
    FString DestinationColorSpace;                                                    // 0x0040 (size: 0x10)
    FString Display;                                                                  // 0x0050 (size: 0x10)
    FString View;                                                                     // 0x0060 (size: 0x10)
    EOpenColorIOViewTransformDirection DisplayViewDirection;                          // 0x0070 (size: 0x1)
    TArray<class UTexture*> LookupTextures;                                           // 0x0078 (size: 0x10)

}; // Size: 0xC8

class UOpenColorIOConfiguration : public UObject
{
    FFilePath ConfigurationFile;                                                      // 0x0028 (size: 0x10)
    TArray<FOpenColorIOColorSpace> DesiredColorSpaces;                                // 0x0038 (size: 0x10)
    TArray<FOpenColorIODisplayView> DesiredDisplayViews;                              // 0x0048 (size: 0x10)
    TMap<class FString, class FString> Context;                                       // 0x0058 (size: 0x50)
    TArray<class UOpenColorIOColorTransform*> ColorTransforms;                        // 0x00A8 (size: 0x10)
    FString ConfigHash;                                                               // 0x00E8 (size: 0x10)

    void ReloadExistingColorspaces(bool bForce);
}; // Size: 0xF8

class UOpenColorIODisplayExtensionWrapper : public UObject
{

    void SetSceneExtensionIsActiveFunctions(const TArray<FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions);
    void SetSceneExtensionIsActiveFunction(const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    void SetOpenColorIOConfiguration(FOpenColorIODisplayConfiguration InDisplayConfiguration);
    void RemoveSceneExtension();
    FOpenColorIODisplayConfiguration GetOpenColorIOConfiguration();
    class UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration, const FSceneViewExtensionIsActiveFunctor& IsActiveFunction);
    class UOpenColorIODisplayExtensionWrapper* CreateInGameOpenColorIODisplayExtension(FOpenColorIODisplayConfiguration InDisplayConfiguration);
}; // Size: 0x38

class UOpenColorIOSettings : public UDeveloperSettings
{
    uint8 bUseLegacyProcessor;                                                        // 0x0038 (size: 0x1)
    uint8 bUse32fLUT;                                                                 // 0x0038 (size: 0x1)
    uint8 bSupportInverseViewTransforms;                                              // 0x0038 (size: 0x1)

}; // Size: 0x40

#endif
