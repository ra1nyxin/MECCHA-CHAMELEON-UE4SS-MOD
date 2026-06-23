#ifndef UE4SS_SDK_BPI_MapGenerate_HPP
#define UE4SS_SDK_BPI_MapGenerate_HPP

class IBPI_MapGenerate_C : public IInterface
{

    void Generate(const FRandomStream& Seed, int32 DepthIndex);
}; // Size: 0x28

#endif
