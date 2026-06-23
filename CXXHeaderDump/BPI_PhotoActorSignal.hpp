#ifndef UE4SS_SDK_BPI_PhotoActorSignal_HPP
#define UE4SS_SDK_BPI_PhotoActorSignal_HPP

class IBPI_PhotoActorSignal_C : public IInterface
{

    void DeleteActor(class AActor* Actor);
    void AddActor(class AActor* Actor);
}; // Size: 0x28

#endif
