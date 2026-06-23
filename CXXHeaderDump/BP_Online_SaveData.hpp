#ifndef UE4SS_SDK_BP_Online_SaveData_HPP
#define UE4SS_SDK_BP_Online_SaveData_HPP

class UBP_Online_SaveData_C : public USaveGame
{
    TMap<class FName, class FST_SimpleSaveDatas> BaseDatas;                           // 0x0028 (size: 0x50)

    void SetBaseData(FName Key, const FST_SimpleSaveDatas& Value);
    bool GetBaseData(FName Key, FST_SimpleSaveDatas& Value);
}; // Size: 0x78

#endif
