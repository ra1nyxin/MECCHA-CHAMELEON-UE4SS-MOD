#ifndef UE4SS_SDK_BPI_SaveObject_HPP
#define UE4SS_SDK_BPI_SaveObject_HPP

class IBPI_SaveObject_C : public IInterface
{

    void UpdateSave(int32 UpdateIndex, TEnumAsByte<ENUM_SaveDataUpdateType::Type> LoadType);
}; // Size: 0x28

#endif
