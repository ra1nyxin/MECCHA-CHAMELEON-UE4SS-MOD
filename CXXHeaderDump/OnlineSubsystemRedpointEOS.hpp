#ifndef UE4SS_SDK_OnlineSubsystemRedpointEOS_HPP
#define UE4SS_SDK_OnlineSubsystemRedpointEOS_HPP

class UEOSSubsystem : public UGameInstanceSubsystem
{
    FEOSSubsystemOnAddWidgetToViewport OnAddWidgetToViewport;                         // 0x0030 (size: 0x10)
    void EOSWidgetDelegate(class UUserWidget* Widget);
    FEOSSubsystemOnRemoveWidgetFromViewport OnRemoveWidgetFromViewport;               // 0x0040 (size: 0x10)
    void EOSWidgetDelegate(class UUserWidget* Widget);

}; // Size: 0x68

#endif
