#ifndef UE4SS_SDK_Ultra_Dynamic_Weather_Interface_HPP
#define UE4SS_SDK_Ultra_Dynamic_Weather_Interface_HPP

class IUltra_Dynamic_Weather_Interface_C : public IInterface
{

    void Editor Return from PIE(bool& Success);
    void Get Local Weather Source Objects(TMap<UUDS_Weather_Settings_C*, double>& Map);
    void Get Current Season(double& Season);
    void Get Weather Speed(double& Out);
    void Interpolate Weather State(const class UUDS_Weather_Settings_C* A, class UUDS_Weather_Settings_C* B, double Alpha, class UUDS_Weather_Settings_C* Target State, bool Set Material Effects, bool Bias Material Effects, bool Lerp Sources, bool& Success);
    void Get Individual Season Floats(TArray<double>& Out);
    void Get UDW Current UDS Reference(class AUltra_Dynamic_Sky_C*& UDS);
    void Get Temperature Bias Settings(double& Nighttime Bias, double& Daytime  Bias, double& Overcast Bias, double& Rain Bias, double& Snow Bias, double& Fog Bias, double& Dust Bias, double& Morning/Evening Bias);
    void Get Global Temp Above Freezing(bool& Above Freezing);
    void Get Dust Material Change Timing(double& Coverage Duration, double& Clear Duration, double& Clear Speed (Windy), double& Clear Speed (No Wind));
    void Get Wetness Material Change Timing(double& Coverage Duration, double& Dry Duration, double& Dry Speed (Sunny), double& Dry Speed (Cloudy), double& Snow Melt Contributes to Wetness);
    void Get Snow Material Change Timing(double& Coverage Duration, double& Melt Duration, double& Melt Speed (Above Freezing), double& Melt Speed (Below Freezing));
    void Get UDW Scaled Tick Delta Seconds(double& Out);
    void Global Lightning Managed Spawn(double Angle, double Thunder/Lightning Threshold);
    void Get Lightning Flash Period(double& Out);
    void UDS Reconstruct(bool& Success);
    void UDW Runtime Tick(double Delta Time);
    void Report Removed Radial Storm(class AActor* storm, bool& Success);
    void Get UDS Weather Override Bool(bool& Cloud Coverage, bool& Fog, bool& Dust);
    void UDS Weather Variable Overrides(bool Override Clouds, double Cloud Coverage, bool Override Fog, double Fog, bool Override Dust, double Dust, bool& Success);
    void Get UDS Values Controlled by UDW(double& Cloud Coverage, double& Fog, double& Dust Amount, double& Cloud Direction, double& Wind Speed Multiplier, double& Fog Vertical Velocity);
    void Editor Tick(FVector Editor Camera Location, FRotator Editor Camera Rotation, double Delta Time, bool& Completed);
    void Get Local Weather State Values(double& Cloud Coverage, double& Wind Intensity, double& Rain, double& Snow, double& Dust, double& Fog, double& Thunder/Lightning);
    void Get Control Point Location(FVector& Location);
    void UDW State Apply(FUDS_and_UDW_State State, bool& Completed);
    void Get UDW State for Saving(FUDS_and_UDW_State& UDW State);
    void Initialize Weather(class AUltra_Dynamic_Sky_C* UDS);
}; // Size: 0x28

#endif
