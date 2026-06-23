#ifndef UE4SS_SDK_JsonBlueprintUtilities_HPP
#define UE4SS_SDK_JsonBlueprintUtilities_HPP

class UJsonBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool ToString(const FJsonObjectWrapper& JsonObject, FString& OutJsonString);
    bool ToFile(const FJsonObjectWrapper& JsonObject, const FFilePath& File);
    bool StructToJsonString(const int32& Struct, FString& OutJsonString);
    bool SetField(const FJsonObjectWrapper& JsonObject, FString FieldName, const int32& Value);
    bool HasField(const FJsonObjectWrapper& JsonObject, FString FieldName);
    bool GetFieldNames(const FJsonObjectWrapper& JsonObject, TArray<FString>& FieldNames);
    bool GetField(const FJsonObjectWrapper& JsonObject, FString FieldName, int32& OutValue);
    bool FromString(FString JsonString, FJsonObjectWrapper& OutJsonObject);
    bool FromFile(const FFilePath& File, FJsonObjectWrapper& OutJsonObject);
}; // Size: 0x28

#endif
