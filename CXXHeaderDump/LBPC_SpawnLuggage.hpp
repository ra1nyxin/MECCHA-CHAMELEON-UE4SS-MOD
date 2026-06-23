#ifndef UE4SS_SDK_LBPC_SpawnLuggage_HPP
#define UE4SS_SDK_LBPC_SpawnLuggage_HPP

class ULBPC_SpawnLuggage_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UDABP_LuggagePreset_C* SpawnPreset;                                         // 0x0248 (size: 0x8)
    TArray<class UDABP_LuggagePreset_C*> Presets;                                     // 0x0250 (size: 0x10)
    FST_SpawnLuggageDatas SpawnTarget;                                                // 0x0260 (size: 0x50)

    void SpawnItem(FGuid UniqueID);
    void ExecuteUbergraph_LBPC_SpawnLuggage(int32 EntryPoint);
}; // Size: 0x2B0

#endif
