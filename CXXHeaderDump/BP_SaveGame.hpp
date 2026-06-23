#ifndef UE4SS_SDK_BP_SaveGame_HPP
#define UE4SS_SDK_BP_SaveGame_HPP

class UBP_SaveGame_C : public USaveGame
{
    int32 ProgressionNumber;                                                          // 0x0028 (size: 0x4)
    TArray<FString> SubSaveKeys;                                                      // 0x0030 (size: 0x10)
    TMap<class FName, class FString> KeyAndName;                                      // 0x0040 (size: 0x50)

    void GetSaveIndex(int32& Index);
}; // Size: 0x90

#endif
