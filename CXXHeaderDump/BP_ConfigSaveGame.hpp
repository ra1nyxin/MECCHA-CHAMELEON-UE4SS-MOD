#ifndef UE4SS_SDK_BP_ConfigSaveGame_HPP
#define UE4SS_SDK_BP_ConfigSaveGame_HPP

class UBP_ConfigSaveGame_C : public USaveGame
{
    TMap<FName, double> SettingValueMap;                                              // 0x0028 (size: 0x50)
    FString InputDeviceName;                                                          // 0x0078 (size: 0x10)

}; // Size: 0x88

#endif
