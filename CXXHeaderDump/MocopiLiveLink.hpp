#ifndef UE4SS_SDK_MocopiLiveLink_HPP
#define UE4SS_SDK_MocopiLiveLink_HPP

class ULiveLinkMocopiRemapper : public ULiveLinkSkeletonRemapper
{
}; // Size: 0xD0

class UMocopiBPLibrary : public UBlueprintFunctionLibrary
{

    void CreateMocopiSource(FLiveLinkSourceHandle& Handle, const int32 inputPort, FString SubjectName);
}; // Size: 0x28

class UMocopiLiveLinkSourceFactory : public ULiveLinkSourceFactory
{
}; // Size: 0x28

class UMocopiRemapAsset : public ULiveLinkRemapAsset
{
    FName TargetSkeletonHipBoneName;                                                  // 0x00C8 (size: 0x8)

}; // Size: 0x138

#endif
