#ifndef UE4SS_SDK_RedpointEOSAuth_HPP
#define UE4SS_SDK_RedpointEOSAuth_HPP

#include "RedpointEOSAuth_enums.hpp"

class IEOSUserInterface_EnterDevicePinCode : public IInterface
{

    void SetupUserInterface(class UEOSUserInterface_EnterDevicePinCode_Context* Context, FString VerificationUrl, FString PinCode);
}; // Size: 0x28

class IEOSUserInterface_SignInOrCreateAccount : public IInterface
{

    void SetupUserInterface(class UEOSUserInterface_SignInOrCreateAccount_Context* Context);
}; // Size: 0x28

class IRedpointEOSAuthWidgetFactory : public IInterface
{

    void PresentAuthWidget(class UUserWidget* AuthWidget, int32 LocalUserNum);
    void DestructAuthWidget(class UUserWidget* AuthWidget);
    class UUserWidget* ConstructAuthWidget(TSubclassOf<class UUserWidget> WidgetClass, int32 LocalUserNum);
}; // Size: 0x28

class UEOSDefaultUserInterface_EnterDevicePinCode : public UUserWidget
{
    FSlateFontInfo TitleFont;                                                         // 0x0700 (size: 0x60)
    FSlateFontInfo RegularFont;                                                       // 0x0760 (size: 0x60)
    class UEOSUserInterface_EnterDevicePinCode_Context* Context;                      // 0x07C0 (size: 0x8)

}; // Size: 0x7D0

class UEOSDefaultUserInterface_SignInOrCreateAccount : public UUserWidget
{
    FSlateFontInfo TitleFont;                                                         // 0x06E0 (size: 0x60)
    FSlateFontInfo RegularFont;                                                       // 0x0740 (size: 0x60)
    class UEOSUserInterface_SignInOrCreateAccount_Context* Context;                   // 0x07A0 (size: 0x8)

}; // Size: 0x7B0

class UEOSUserInterface_EnterDevicePinCode_Context : public UObject
{

    void CancelLogin();
}; // Size: 0x38

class UEOSUserInterface_SignInOrCreateAccount_Context : public UObject
{

    void SelectChoice(EEOSUserInterface_SignInOrCreateAccount_Choice SelectedChoice);
}; // Size: 0x38

#endif
