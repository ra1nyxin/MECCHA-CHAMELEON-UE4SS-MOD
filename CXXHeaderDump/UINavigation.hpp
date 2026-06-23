#ifndef UE4SS_SDK_UINavigation_HPP
#define UE4SS_SDK_UINavigation_HPP

#include "UINavigation_enums.hpp"

struct FAxis2D_Keys
{
}; // Size: 0x30

struct FComponentActions
{
    TArray<class UUINavComponentAction*> Actions;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInputCollisionData
{
    FText CurrentInputText;                                                           // 0x0000 (size: 0x10)
    FText CollidingInputText;                                                         // 0x0010 (size: 0x10)
    int32 CurrentKeyIndex;                                                            // 0x0020 (size: 0x4)
    int32 CollidingKeyIndex;                                                          // 0x0024 (size: 0x4)
    FKey CurrentInputKey;                                                             // 0x0028 (size: 0x18)
    FKey PressedKey;                                                                  // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FInputContainerEnhancedActionData
{
    FText DisplayName;                                                                // 0x0000 (size: 0x10)
    class UInputAction* Action;                                                       // 0x0010 (size: 0x8)
    EInputAxis Axis;                                                                  // 0x0018 (size: 0x1)
    EAxisType AxisScale;                                                              // 0x0019 (size: 0x1)
    EInputHoldBehavior HoldBehavior;                                                  // 0x001A (size: 0x1)
    class UInputAction* InputActionToUpdate;                                          // 0x0020 (size: 0x8)
    TArray<int32> InputGroupsOverride;                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FInputContainerEnhancedActionDataArray
{
    TArray<int32> InputGroups;                                                        // 0x0000 (size: 0x10)
    TArray<FInputContainerEnhancedActionData> Actions;                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FInputIconMapping : public FTableRowBase
{
    TSoftObjectPtr<UTexture2D> InputIcon;                                             // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FInputMappingArray
{
    TArray<FUINavEnhancedActionKeyMapping> InputMappings;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FInputNameMapping : public FTableRowBase
{
    FText InputText;                                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FInputRebindData : public FTableRowBase
{
    FText InputText;                                                                  // 0x0008 (size: 0x10)
    TArray<int32> InputGroups;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FPlatformConfigData
{
    class UDataTable* GamepadKeyIconData;                                             // 0x0000 (size: 0x8)
    class UDataTable* GamepadKeyNameData;                                             // 0x0008 (size: 0x8)
    class UInputMappingContext* UINavInputContextOverride;                            // 0x0010 (size: 0x8)
    bool bCanUseKeyboardMouse;                                                        // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FUINavEnhancedActionKeyMapping
{
    TSoftObjectPtr<UInputAction> Action;                                              // 0x0000 (size: 0x28)
    FKey Key;                                                                         // 0x0028 (size: 0x18)
    TArray<TSoftObjectPtr<UInputTrigger>> Triggers;                                   // 0x0040 (size: 0x10)
    TArray<TSoftObjectPtr<UInputModifier>> Modifiers;                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

class AUINavController : public APlayerController
{
    class UUINavPCComponent* UINavPCComp;                                             // 0x0740 (size: 0x8)

}; // Size: 0x748

class IUINavPCReceiver : public IInterface
{

    void OnThumbstickCursorInput(const FVector2D& ThumbstickDelta);
    void OnSelect();
    void OnRootWidgetRemoved();
    void OnRootWidgetAdded();
    void OnReturn();
    void OnPrevious();
    void OnNext();
    void OnNavigated(EUINavigation NavigationDirection);
    void OnInputChanged(EInputType From, EInputType To);
    void OnControllerConnectionChanged(bool bConnected, int32 UserId, int32 UserIndex);
    void OnActiveWidgetChanged(class UUINavWidget* OldActiveWidget, class UUINavWidget* NewActiveWidget);
}; // Size: 0x28

class UGoToWidgetAction : public UUINavComponentAction
{
    TSubclassOf<class UUINavWidget> WidgetClass;                                      // 0x0028 (size: 0x8)
    bool bRemoveParent;                                                               // 0x0030 (size: 0x1)
    bool bDestroyParent;                                                              // 0x0031 (size: 0x1)
    int32 ZOrder;                                                                     // 0x0034 (size: 0x4)

}; // Size: 0x38

class UOpenLevelAction : public UUINavComponentAction
{
    FName LevelName;                                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

class UPromptDataBase : public UObject
{
}; // Size: 0x28

class UPromptDataBinary : public UPromptDataBase
{
    bool bAccept;                                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

class UPromptDataSwapKeys : public UPromptDataBase
{
    bool bShouldSwap;                                                                 // 0x0028 (size: 0x1)
    FInputCollisionData InputCollisionData;                                           // 0x0030 (size: 0x58)
    class UUINavInputBox* CurrentInputBox;                                            // 0x0088 (size: 0x8)
    class UUINavInputBox* CollidingInputBox;                                          // 0x0090 (size: 0x8)

}; // Size: 0x98

class UQuitGameAction : public UUINavComponentAction
{
}; // Size: 0x28

class UReturnToParentAction : public UUINavComponentAction
{
    bool bRemoveAllParents;                                                           // 0x0028 (size: 0x1)

}; // Size: 0x30

class USwapKeysWidget : public UUINavPromptWidget
{
    FInputCollisionData InputCollisionData;                                           // 0x0568 (size: 0x58)
    class UUINavInputBox* CurrentInputBox;                                            // 0x05C0 (size: 0x8)
    class UUINavInputBox* CollidingInputBox;                                          // 0x05C8 (size: 0x8)

    void NotifySwapResult(const bool bSwap);
}; // Size: 0x5D0

class UUINavBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetSoundClassVolume(class USoundClass* TargetClass, const float NewVolume);
    void SetPostProcessSettings(const FString Variable, const FString Value);
    bool RespectsRestriction(const FKey CompareKey, const EInputRestriction Restriction);
    void ResetInputSettings(class APlayerController* PC);
    bool IsVRKey(const FKey Key);
    bool IsUINavInputAction(const class UInputAction* InputAction);
    bool IsKeyInCategory(const FKey Key, const FString Category);
    bool IsGamepadConnected();
    class UUINavComponent* GetValidUINavComponentInWidget(const class UPanelWidget* Widget);
    class UWidget* GetUniformGridChild(const class UWidget* Widget, const int32 Column, const int32 Row);
    class UUINavSettings* GetUINavSettings();
    float GetSoundClassVolume(class USoundClass* TargetClass);
    FText GetRawTextFromRichText(const FText& RichText);
    FString GetPostProcessSettings(const FString Variable);
    class UPanelWidget* GetParentPanelWidget(const class UWidget* Widget, TSubclassOf<class UPanelWidget> PanelWidgetSubclass);
    class UWidget* GetPanelWidgetChild(const class UWidget* Widget, const int32 ChildIndex);
    void GetIndexInUniformGridWidget(const class UWidget* Widget, int32& Column, int32& Row);
    int32 GetIndexInPanelWidget(const class UWidget* Widget, TSubclassOf<class UPanelWidget> PanelWidgetSubclass);
    class UWidget* GetFirstWidgetInUserWidget(const class UUserWidget* UserWidget);
    class UWidget* FindWidgetOfClassesInWidget(class UWidget* Widget, const TArray<class TSubclassOf<UWidget>>& WidgetClasses);
    class UPromptDataBinary* CreateBinaryPromptData(const bool bAccept);
    FText ApplyStyleRowToText(const FText& Text, FString StyleRowName);
}; // Size: 0x28

class UUINavButtonBase : public UButton
{
}; // Size: 0x5B0

class UUINavComponent : public UUserWidget
{
    class UButton* NavButton;                                                         // 0x0340 (size: 0x8)
    class UTextBlock* NavText;                                                        // 0x0348 (size: 0x8)
    class URichTextBlock* NavRichText;                                                // 0x0350 (size: 0x8)
    class UUINavWidget* ParentWidget;                                                 // 0x0358 (size: 0x8)
    FUINavComponentOnClicked OnClicked;                                               // 0x0360 (size: 0x10)
    void OnClickedEvent();
    FUINavComponentOnPressed OnPressed;                                               // 0x0388 (size: 0x10)
    void OnPressedEvent();
    FUINavComponentOnReleased OnReleased;                                             // 0x03B0 (size: 0x10)
    void OnReleasedEvent();
    FUINavComponentOnNavigatedToEvent OnNavigatedToEvent;                             // 0x03D8 (size: 0x10)
    void OnNavigatedToEvent();
    FUINavComponentOnNavigatedFromEvent OnNavigatedFromEvent;                         // 0x0400 (size: 0x10)
    void OnNavigatedFromEvent();
    FText ComponentText;                                                              // 0x0430 (size: 0x10)
    bool bUseTextColor;                                                               // 0x0440 (size: 0x1)
    FLinearColor TextDefaultColor;                                                    // 0x0444 (size: 0x10)
    FLinearColor TextNavigatedColor;                                                  // 0x0454 (size: 0x10)
    bool bUseComponentAnimation;                                                      // 0x0464 (size: 0x1)
    FString NormalStyleRowName;                                                       // 0x0468 (size: 0x10)
    FString NavigatedStyleRowName;                                                    // 0x0478 (size: 0x10)
    uint8 bUseNavigatedStyleRow;                                                      // 0x0488 (size: 0x1)
    class UWidgetAnimation* ComponentAnimation;                                       // 0x0490 (size: 0x8)
    class UScrollBox* ParentScrollBox;                                                // 0x0498 (size: 0x8)
    FSlateSound NavigatedSlateSound;                                                  // 0x04A0 (size: 0x18)
    FSlateFontInfo FontOverride;                                                      // 0x04B8 (size: 0x60)
    uint8 bOverride_Font;                                                             // 0x0518 (size: 0x1)
    FButtonStyle StyleOverride;                                                       // 0x0520 (size: 0x390)
    uint8 bOverride_Style;                                                            // 0x08B0 (size: 0x1)
    TMap<class EComponentAction, class FComponentActions> ComponentActions;           // 0x08B8 (size: 0x50)

    void SwitchTextColorToNavigated();
    void SwitchTextColorToDefault();
    void SwitchTextColorTo(FLinearColor Color);
    void SwitchButtonStyle(const EButtonStyle NewStyle, const bool bRevertStyle);
    void SetText(const FText& Text);
    void OnNavigatedTo();
    void OnNavigatedFrom();
    void OnButtonUnhovered();
    void OnButtonReleased();
    void OnButtonPressed();
    void OnButtonHovered();
    void OnButtonClicked();
    bool IsBeingNavigated();
    class UScrollBox* GetParentScrollBox();
    bool CanBeNavigated();
}; // Size: 0x910

class UUINavComponentAction : public UObject
{

    void ExecuteAction(class UUINavComponent* Component);
}; // Size: 0x28

class UUINavComponentBox : public UUINavHorizontalComponent
{
    class UButton* LeftButton;                                                        // 0x0940 (size: 0x8)
    class UButton* RightButton;                                                       // 0x0948 (size: 0x8)
    int32 MinRange;                                                                   // 0x0950 (size: 0x4)
    int32 MaxRange;                                                                   // 0x0954 (size: 0x4)
    int32 Interval;                                                                   // 0x0958 (size: 0x4)
    bool bDisableButtons;                                                             // 0x095C (size: 0x1)

    int32 GetCurrentNumber();
}; // Size: 0x960

class UUINavDefaultInputSettings : public UObject
{
    TMap<class TSoftObjectPtr<UInputMappingContext>, class FInputMappingArray> DefaultEnhancedInputMappings; // 0x0028 (size: 0x50)
    uint8 DefaultInputVersion;                                                        // 0x0078 (size: 0x1)

}; // Size: 0x80

class UUINavEnhancedInputActions : public UDataAsset
{
    class UInputAction* IA_MenuUp;                                                    // 0x0030 (size: 0x8)
    class UInputAction* IA_MenuDown;                                                  // 0x0038 (size: 0x8)
    class UInputAction* IA_MenuLeft;                                                  // 0x0040 (size: 0x8)
    class UInputAction* IA_MenuRight;                                                 // 0x0048 (size: 0x8)
    class UInputAction* IA_MenuSelect;                                                // 0x0050 (size: 0x8)
    class UInputAction* IA_MenuReturn;                                                // 0x0058 (size: 0x8)
    class UInputAction* IA_MenuNext;                                                  // 0x0060 (size: 0x8)
    class UInputAction* IA_MenuPrevious;                                              // 0x0068 (size: 0x8)

}; // Size: 0x70

class UUINavGameViewportClient : public UGameViewportClient
{
}; // Size: 0x3C0

class UUINavHorizontalComponent : public UUINavComponent
{
    int32 OptionIndex;                                                                // 0x0910 (size: 0x4)
    bool bLoopOptions;                                                                // 0x0914 (size: 0x1)
    FUINavHorizontalComponentOnValueChanged OnValueChanged;                           // 0x0920 (size: 0x10)
    void OnValueChangedEvent();

    bool Update(const bool bNotify);
    bool SetOptionIndex(int32 NewIndex);
    void OnUpdated();
    void OnNavigateRight();
    void OnNavigateLeft();
    void NavigateRight();
    void NavigateLeft();
    int32 GetMaxOptionIndex();
}; // Size: 0x940

class UUINavInputBox : public UUserWidget
{
    class UUINavInputComponent* InputButton1;                                         // 0x0380 (size: 0x8)
    class UUINavInputComponent* InputButton2;                                         // 0x0388 (size: 0x8)
    class UUINavInputComponent* InputButton3;                                         // 0x0390 (size: 0x8)
    class UTextBlock* InputText;                                                      // 0x03A8 (size: 0x8)
    class URichTextBlock* InputRichText;                                              // 0x03B0 (size: 0x8)
    class UUINavInputContainer* Container;                                            // 0x03B8 (size: 0x8)
    FName InputName;                                                                  // 0x03C0 (size: 0x8)
    class UInputMappingContext* InputContext;                                         // 0x03D8 (size: 0x8)
    FInputContainerEnhancedActionData InputActionData;                                // 0x03E0 (size: 0x38)
    FString InputTextStyleRowName;                                                    // 0x0418 (size: 0x10)

    void InputComponent3Clicked();
    void InputComponent2Clicked();
    void InputComponent1Clicked();
}; // Size: 0x468

class UUINavInputComponent : public UUINavComponent
{
    class UImage* InputImage;                                                         // 0x0910 (size: 0x8)
    class UTextBlock* LeftText;                                                       // 0x0918 (size: 0x8)
    class UTextBlock* RightText;                                                      // 0x0920 (size: 0x8)
    class URichTextBlock* LeftRichText;                                               // 0x0928 (size: 0x8)
    class URichTextBlock* RightRichText;                                              // 0x0930 (size: 0x8)

}; // Size: 0x940

class UUINavInputContainer : public UUserWidget
{
    class UPanelWidget* InputBoxesPanel;                                              // 0x0340 (size: 0x8)
    int32 NumberOfInputs;                                                             // 0x0358 (size: 0x4)
    int32 KeysPerInput;                                                               // 0x035C (size: 0x4)
    TArray<class UUINavInputBox*> InputBoxes;                                         // 0x0360 (size: 0x10)
    TMap<class UInputMappingContext*, class FInputContainerEnhancedActionDataArray> EnhancedInputs; // 0x0370 (size: 0x50)
    TArray<EInputRestriction> InputRestrictions;                                      // 0x03C0 (size: 0x10)
    TArray<FKey> KeyWhitelist;                                                        // 0x03D0 (size: 0x10)
    TArray<FKey> KeyBlacklist;                                                        // 0x03E0 (size: 0x10)
    TSubclassOf<class UUINavInputBox> InputBox_BP;                                    // 0x03F0 (size: 0x8)
    TSubclassOf<class USwapKeysWidget> SwapKeysWidgetClass;                           // 0x03F8 (size: 0x8)
    int32 SpawnKeysWidgetZOrder;                                                      // 0x0400 (size: 0x4)
    bool bCollapseInputBoxes;                                                         // 0x0404 (size: 0x1)
    FText EmptyKeyText;                                                               // 0x0418 (size: 0x10)
    FText PressKeyText;                                                               // 0x0428 (size: 0x10)
    FText HoldText;                                                                   // 0x0438 (size: 0x10)
    FText SwapKeysTitleText;                                                          // 0x0448 (size: 0x10)
    FText SwapKeysMessageText;                                                        // 0x0458 (size: 0x10)

    void SwapKeysDecided(const class UPromptDataBase* PromptData);
    bool RespectsRestriction(const FKey CompareKey, const int32 Index);
    void ResetKeyMappings();
    void OnRebindCancelled(ERevertRebindReason RevertReason, FKey PressedKey);
    void OnKeyRebinded(FName InputName, FKey OldKey, FKey NewKey);
    void OnInputTypeChanged(const EInputType InputType);
    void OnAddInputBox(class UUINavInputBox* NewInputBox);
    class UUINavInputBox* GetInputBoxAtIndex(const int32 Index);
    void ForceUpdateInputBoxes();
    bool CanUseKey(class UUINavInputBox* InputBox, const FKey CompareKey, const bool bIsHold, int32& OutCollidingActionIndex, int32& OutCollidingKeyIndex);
}; // Size: 0x468

class UUINavInputDisplay : public UUserWidget
{
    EInputRestriction InputTypeRestriction;                                           // 0x0340 (size: 0x1)
    class UImage* InputImage;                                                         // 0x0348 (size: 0x8)
    class UTextBlock* InputText;                                                      // 0x0350 (size: 0x8)
    class URichTextBlock* InputRichText;                                              // 0x0358 (size: 0x8)
    class UInputAction* InputAction;                                                  // 0x0360 (size: 0x8)
    EInputAxis Axis;                                                                  // 0x0368 (size: 0x1)
    EAxisType Scale;                                                                  // 0x0369 (size: 0x1)
    EInputDisplayType DisplayType;                                                    // 0x036A (size: 0x1)
    bool bMatchIconSize;                                                              // 0x036B (size: 0x1)
    FVector2D IconSize;                                                               // 0x0370 (size: 0x10)
    FSlateColor TextColorOverride;                                                    // 0x0380 (size: 0x14)
    uint8 bOverride_TextColor;                                                        // 0x0394 (size: 0x1)
    FSlateFontInfo FontOverride;                                                      // 0x0398 (size: 0x60)
    uint8 bOverride_Font;                                                             // 0x03F8 (size: 0x1)
    FString StyleRowName;                                                             // 0x0400 (size: 0x10)

    void UpdateInputVisuals();
    void SetInputAction(class UInputAction* NewAction, const EInputAxis NewAxis, const EAxisType NewScale);
    void SetIconSize(const FVector2D& NewSize);
}; // Size: 0x418

class UUINavLocalPlayerSubsystem : public ULocalPlayerSubsystem
{
}; // Size: 0x30

class UUINavOptionBox : public UUINavComponentBox
{
    bool bUseNumberRange;                                                             // 0x0960 (size: 0x1)
    TArray<FText> StringOptions;                                                      // 0x0968 (size: 0x10)

    FText GetCurrentString();
}; // Size: 0x980

class UUINavPCComponent : public UActorComponent
{
    class UUINavWidget* ActiveWidget;                                                 // 0x00B8 (size: 0x8)
    class UUINavWidget* ActiveSubWidget;                                              // 0x00C0 (size: 0x8)
    class APlayerController* PC;                                                      // 0x00D8 (size: 0x8)
    class UUINavInputBox* ListeningInputBox;                                          // 0x0108 (size: 0x8)
    TArray<class UInputMappingContext*> CachedInputContexts;                          // 0x0128 (size: 0x10)
    TMap<UInputMappingContext*, uint8> AddedInputContexts;                            // 0x0138 (size: 0x50)
    class UInputMappingContext* CurrentInputContext;                                  // 0x0188 (size: 0x8)
    EInputType CurrentInputType;                                                      // 0x0338 (size: 0x1)
    bool bUseAnalogDirectionalInput;                                                  // 0x0339 (size: 0x1)
    bool bChainNavigation;                                                            // 0x033A (size: 0x1)
    float InputHeldWaitTime;                                                          // 0x033C (size: 0x4)
    float NavigationChainFrequency;                                                   // 0x0340 (size: 0x4)
    EThumbstickAsMouse UseThumbstickAsMouse;                                          // 0x0344 (size: 0x1)
    float ThumbstickCursorSensitivity;                                                // 0x0348 (size: 0x4)
    float ThumbstickCursorDeadzone;                                                   // 0x034C (size: 0x4)
    class UCurveFloat* ThumbstickCursorCurve;                                         // 0x0350 (size: 0x8)
    bool bScrollWithRightThumbstick;                                                  // 0x0358 (size: 0x1)
    float RightThumbstickScrollDeadzone;                                              // 0x035C (size: 0x4)
    EAutoHideMouse AutoHideMouse;                                                     // 0x0360 (size: 0x1)
    float RightThumbstickScrollSensitivity;                                           // 0x0364 (size: 0x4)
    float RebindThreshold;                                                            // 0x0368 (size: 0x4)
    class UDataTable* GamepadKeyIconData;                                             // 0x0370 (size: 0x8)
    class UDataTable* KeyboardMouseKeyIconData;                                       // 0x0378 (size: 0x8)
    class UDataTable* GamepadKeyNameData;                                             // 0x0380 (size: 0x8)
    class UDataTable* KeyboardMouseKeyNameData;                                       // 0x0388 (size: 0x8)
    FUINavPCComponentInputTypeChangedDelegate InputTypeChangedDelegate;               // 0x03D0 (size: 0x10)
    void InputTypeChangedDelegate(EInputType InputType);
    FUINavPCComponentUpdateInputIconsDelegate UpdateInputIconsDelegate;               // 0x03E0 (size: 0x10)
    void UpdateInputIconsDelegate();

    void SimulateStopSelect();
    void SimulateStopReturn();
    void SimulateStartSelect();
    void SimulateStartReturn();
    void SimulateSelect();
    void SimulateReturn();
    void SimulateMouseRelease();
    void SimulateMousePress();
    void SimulateMouseClick();
    void SetShowMouseCursor(const bool bShowMouse);
    void SetKeyboardInputDataTables(class UDataTable* NewKeyIconTable, class UDataTable* NewKeyNameTable, const bool bUpdateInputDisplays);
    void SetGamepadInputDataTables(class UDataTable* NewKeyIconTable, class UDataTable* NewKeyNameTable, const bool bUpdateInputDisplays);
    void SetAllowSelectInput(const bool bAllowInput);
    void SetAllowSectionInput(const bool bAllowInput);
    void SetAllowReturnInput(const bool bAllowInput);
    void SetAllowDirectionalInput(const bool bAllowInput);
    void SetAllowAllMenuInput(const bool bAllowInput);
    void SetActiveWidget(class UUINavWidget* NewActiveWidget);
    void RemoveInputContext(const class UInputMappingContext* Context);
    void RefreshNavigationKeys();
    void NotifyNavigatedTo(class UUINavWidget* NavigatedWidget);
    void NavigateInDirection(const EUINavigation Direction, const int32 UserIndex);
    bool IsWidgetChild(const class UUINavWidget* ParentWidget, const class UUINavWidget* ChildWidget);
    bool IsWidgetActive(const class UUINavWidget* UINavWidget);
    bool IsWaitingForInputCooldown();
    bool IsUsingMouse();
    bool IsUsingKeyboard();
    bool IsUsingGamepad();
    bool IsMovingThumbstick();
    bool IsAxis2D(const FKey& Key);
    bool IsAxis(const FKey& Key);
    void InputKey(const FKey& Key, const TEnumAsByte<EInputEvent> Event, const float Delta);
    bool HidingMouseCursor();
    class UUINavWidget* GoToWidget(TSubclassOf<class UUINavWidget> NewWidgetClass, const bool bRemoveParent, const bool bDestroyParent, const int32 ZOrder);
    class UUINavWidget* GoToPromptWidget(TSubclassOf<class UUINavPromptWidget> NewWidgetClass, const FGoToPromptWidgetEvent& Event, const FText title, const FText Message, const bool bRemoveParent, const int32 ZOrder);
    class UUINavWidget* GoToBuiltWidget(class UUINavWidget* NewWidget, const bool bRemoveParent, const bool bDestroyParent, const int32 ZOrder);
    class UInputMappingContext* GetUINavInputContext(const class UUINavWidget* UINavWidget);
    FVector2D GetThumbstickDelta();
    TSoftObjectPtr<UTexture2D> GetSoftKeyIcon(const FKey Key);
    TSoftObjectPtr<UTexture2D> GetSoftEnhancedInputIcon(const class UInputAction* Action, const EInputAxis Axis, const EAxisType Scale, const EInputRestriction InputRestriction);
    class APlayerController* GetPC();
    FKey GetOppositeAxisKey(const FKey& Key, bool& bOutIsPositive);
    FKey GetOppositeAxis2DAxis(const FKey& Key);
    FText GetKeyText(const FKey Key);
    class UTexture2D* GetKeyIcon(const FKey Key);
    FKey GetKeyFromAxis(const FKey& Key, bool bPositive, const EInputAxis Axis);
    EInputMode GetInputMode();
    FText GetEnhancedInputText(const class UInputAction* Action, const EInputAxis Axis, const EAxisType Scale, const EInputRestriction InputRestriction);
    void GetEnhancedInputKeys(const class UInputAction* Action, TArray<FKey>& OutKeys);
    FKey GetEnhancedInputKey(const class UInputAction* Action, const EInputAxis Axis, const EAxisType Scale, const EInputRestriction InputRestriction);
    class UTexture2D* GetEnhancedInputIcon(const class UInputAction* Action, const EInputAxis Axis, const EAxisType Scale, const EInputRestriction InputRestriction);
    class UEnhancedInputComponent* GetEnhancedInputComponent();
    FPlatformConfigData GetCurrentPlatformData();
    EInputType GetCurrentInputType();
    FKey GetAxisFromScaledKey(const FKey& Key, const bool bInclude1DAxis, bool& OutbPositive);
    FKey GetAxisFromKey(const FKey& Key);
    FKey GetAxis2DFromAxis1D(const FKey& Key);
    FKey GetAxis1DFromAxis2D(const FKey& Key, const EInputAxis Axis);
    class UUINavWidget* GetActiveWidget();
    class UUINavWidget* GetActiveSubWidget();
    void ForceUpdateAllInputDisplays(const bool bOnlyTopLevel);
    bool AllowsSelectInput();
    bool AllowsSectionInput();
    bool AllowsReturnInput();
    bool AllowsDirectionalInput();
    bool AllowsAllMenuInput();
    void AddInputContext(const class UInputMappingContext* Context, const int32 Priority);
}; // Size: 0x3F0

class UUINavPromptWidget : public UUINavWidget
{
    FText title;                                                                      // 0x04F0 (size: 0x10)
    FText Message;                                                                    // 0x0500 (size: 0x10)
    bool FirstComponentIsAccept;                                                      // 0x0510 (size: 0x1)
    FString TitleStyleRowName;                                                        // 0x0518 (size: 0x10)
    FString MessageStyleRowName;                                                      // 0x0528 (size: 0x10)
    class UTextBlock* TitleText;                                                      // 0x0538 (size: 0x8)
    class UTextBlock* MessageText;                                                    // 0x0540 (size: 0x8)
    class URichTextBlock* TitleRichText;                                              // 0x0548 (size: 0x8)
    class URichTextBlock* MessageRichText;                                            // 0x0550 (size: 0x8)

    void SetCallback(const FSetCallbackInCallback& InCallback);
    void ProcessPromptWidgetSelected(class UPromptDataBase* InPromptData);
    bool IsAcceptComponent(class UUINavComponent* Component);
    void ExecuteCallback(class UPromptDataBase* InPromptData);
}; // Size: 0x568

class UUINavSavedInputSettings : public UObject
{
    TMap<class TSoftObjectPtr<UInputMappingContext>, class FInputMappingArray> SavedEnhancedInputMappings; // 0x0028 (size: 0x50)
    uint8 SavedInputVersion;                                                          // 0x0078 (size: 0x1)

}; // Size: 0x80

class UUINavSectionButton : public UUserWidget
{
    class UButton* SectionButton;                                                     // 0x0340 (size: 0x8)

}; // Size: 0x348

class UUINavSectionsWidget : public UUserWidget
{
    class UPanelWidget* SectionButtonsPanel;                                          // 0x0340 (size: 0x8)

}; // Size: 0x348

class UUINavSettings : public UObject
{
    bool bForceNavigation;                                                            // 0x0028 (size: 0x1)
    bool bUseFocusSystemNavigationInputs;                                             // 0x0029 (size: 0x1)
    bool bAllowNavigationWhilePressing;                                               // 0x002A (size: 0x1)
    bool bSetFocusOnRelease;                                                          // 0x002B (size: 0x1)
    bool bPlayOnNavigatedSoundOnFirstUINavComponent;                                  // 0x002C (size: 0x1)
    float WidgetTransitionInputCooldown;                                              // 0x0030 (size: 0x4)
    bool bStopNextPreviousNavigation;                                                 // 0x0034 (size: 0x1)
    bool bIgnoreDisabledButton;                                                       // 0x0035 (size: 0x1)
    bool bReturnOnPress;                                                              // 0x0036 (size: 0x1)
    bool bRemoveWidgetOnReturn;                                                       // 0x0037 (size: 0x1)
    bool bRemoveActiveWidgetsOnEndPlay;                                               // 0x0038 (size: 0x1)
    bool bAllowFocusOnViewportInGameAndUI;                                            // 0x0039 (size: 0x1)
    bool bLoadInputIconsAsync;                                                        // 0x003A (size: 0x1)
    float MouseMoveRebindThreshold;                                                   // 0x003C (size: 0x4)
    float HoldRebindThreshold;                                                        // 0x0040 (size: 0x4)
    float MouseInputChangeThreshold;                                                  // 0x0044 (size: 0x4)
    float AnalogInputChangeThreshold;                                                 // 0x0048 (size: 0x4)
    ESelectorPosition MoveMouseToButtonPosition;                                      // 0x004C (size: 0x1)
    FVector2D MoveMouseToButtonOffset;                                                // 0x0050 (size: 0x10)
    TArray<FString> AllowedWidgetTypesToFocus;                                        // 0x0060 (size: 0x10)
    uint8 CurrentInputVersion;                                                        // 0x0070 (size: 0x1)
    TMap<class FString, class FPlatformConfigData> PlatformConfigData;                // 0x0078 (size: 0x50)
    TSoftObjectPtr<UInputMappingContext> EnhancedInputContext;                        // 0x00C8 (size: 0x28)
    TSoftObjectPtr<UUINavEnhancedInputActions> EnhancedInputActions;                  // 0x00F0 (size: 0x28)

}; // Size: 0x118

class UUINavSlider : public UUINavHorizontalComponent
{
    class USlider* Slider;                                                            // 0x0940 (size: 0x8)
    class USpinBox* NavSpinBox;                                                       // 0x0948 (size: 0x8)
    float MinValue;                                                                   // 0x0950 (size: 0x4)
    float MaxValue;                                                                   // 0x0954 (size: 0x4)
    float Interval;                                                                   // 0x0958 (size: 0x4)
    int32 MaxDecimalDigits;                                                           // 0x095C (size: 0x4)
    int32 MinDecimalDigits;                                                           // 0x0960 (size: 0x4)
    bool bUseComma;                                                                   // 0x0964 (size: 0x1)
    bool bUpdateWhileDraggingSlider;                                                  // 0x0965 (size: 0x1)
    FLinearColor HandleHoverColor;                                                    // 0x0990 (size: 0x10)
    FLinearColor BarHoverColor;                                                       // 0x09A0 (size: 0x10)

    void SetValueClamped(const float Value);
    void SetMinValue(const float NewValue, const bool bNotifyUpdate);
    void SetMinDecimalDigits(const int32 DecimalDigits);
    void SetMaxValue(const float NewValue, const bool bNotifyUpdate);
    void SetMaxDecimalDigits(const int32 DecimalDigits);
    void SetInterval(const float NewInterval, const bool bNotifyUpdate);
    void HandleOnSpinBoxValueCommitted(const float InValue, const TEnumAsByte<ETextCommit::Type> CommitMethod);
    void HandleOnSpinBoxValueChanged(const float InValue);
    void HandleOnSpinBoxMouseCaptureBegin();
    void HandleOnSliderValueChanged(const float InValue);
    void HandleOnSliderMouseCaptureEnd();
    void HandleOnSliderMouseCaptureBegin();
    float GetSliderValue();
    float GetCurrentValue();
}; // Size: 0x9B0

class UUINavSliderBox : public UUINavComponentBox
{
    class UProgressBar* SliderBar;                                                    // 0x0960 (size: 0x8)

    float GetSliderPercent();
}; // Size: 0x970

class UUINavWidget : public UUserWidget
{
    class UUINavComponent* UpdateSelectorPrevComponent;                               // 0x0348 (size: 0x8)
    class UUINavComponent* UpdateSelectorNextComponent;                               // 0x0350 (size: 0x8)
    class UUINavComponent* FirstComponent;                                            // 0x0368 (size: 0x8)
    class UUINavComponent* CurrentComponent;                                          // 0x0370 (size: 0x8)
    class UUINavComponent* HoveredComponent;                                          // 0x0378 (size: 0x8)
    class UUINavComponent* SelectedComponent;                                         // 0x0380 (size: 0x8)
    class UUINavComponent* IgnoreHoverComponent;                                      // 0x03C8 (size: 0x8)
    class UUserWidget* TheSelector;                                                   // 0x0408 (size: 0x8)
    TArray<class UUINavWidget*> ChildUINavWidgets;                                    // 0x0410 (size: 0x10)
    class UUINavWidget* ParentWidget;                                                 // 0x0420 (size: 0x8)
    class UUINavWidget* OuterUINavWidget;                                             // 0x0428 (size: 0x8)
    class UUINavPCComponent* UINavPC;                                                 // 0x0430 (size: 0x8)
    class UUINavWidget* ReturnedFromWidget;                                           // 0x0438 (size: 0x8)
    class UUINavWidgetComponent* WidgetComp;                                          // 0x0440 (size: 0x8)
    class UWidgetSwitcher* UINavSwitcher;                                             // 0x0448 (size: 0x8)
    class UWidget* UINavSectionsPanel;                                                // 0x0450 (size: 0x8)
    bool bParentRemoved;                                                              // 0x0458 (size: 0x1)
    bool bShouldDestroyParent;                                                        // 0x0459 (size: 0x1)
    bool bAllowRemoveIfRoot;                                                          // 0x045A (size: 0x1)
    bool bShowSelector;                                                               // 0x045B (size: 0x1)
    bool bMaintainNavigationForChild;                                                 // 0x045C (size: 0x1)
    bool bClearNavigationStateWhenChild;                                              // 0x045D (size: 0x1)
    bool bWrapAutoSectionNavigation;                                                  // 0x045E (size: 0x1)
    TMap<class FString, class UInputMappingContext*> UINavInputContextOverrides;      // 0x0460 (size: 0x50)
    TArray<class UInputMappingContext*> InputContextsToAdd;                           // 0x04B0 (size: 0x10)
    EThumbstickAsMouse UseThumbstickAsMouse;                                          // 0x04C0 (size: 0x1)
    bool bUseFullscreenWhenSplitscreen;                                               // 0x04C1 (size: 0x1)
    bool bForceUsePlayerScreen;                                                       // 0x04C2 (size: 0x1)
    class UCurveFloat* MoveCurve;                                                     // 0x04C8 (size: 0x8)
    ESelectorPosition SelectorPositioning;                                            // 0x04D0 (size: 0x1)
    FVector2D SelectorOffset;                                                         // 0x04D8 (size: 0x10)

    void UpdateSelectorLocation(class UUINavComponent* Component);
    void SetSelectorVisible(const bool bVisible);
    void SetSelectorScale(FVector2D NewScale);
    void ReturnToParent(const bool bRemoveAllParents, const int32 ZOrder);
    void PreSetup(const bool bFirstSetup);
    void OnThumbstickCursorInput(const FVector2D& ThumbstickDelta);
    void OnStopSelect(class UUINavComponent* Component);
    void OnStartSelect(class UUINavComponent* Component);
    void OnSetupCompleted();
    void OnSelect(class UUINavComponent* Component);
    void OnSectionButtonPressed9();
    void OnSectionButtonPressed8();
    void OnSectionButtonPressed7();
    void OnSectionButtonPressed6();
    void OnSectionButtonPressed5();
    void OnSectionButtonPressed4();
    void OnSectionButtonPressed3();
    void OnSectionButtonPressed2();
    void OnSectionButtonPressed10();
    void OnSectionButtonPressed1();
    void OnReturn();
    void OnPrevious();
    void OnNext();
    void OnNavigate(class UUINavComponent* FromComponent, class UUINavComponent* ToComponent);
    void OnLostNavigation(class UUINavWidget* NewActiveWidget, const bool bToChild);
    void OnInputChanged(const EInputType From, const EInputType To);
    void OnHorizCompUpdated(class UUINavComponent* Component);
    void OnHorizCompNavigateRight(class UUINavComponent* Component);
    void OnHorizCompNavigateLeft(class UUINavComponent* Component);
    void OnGainedNavigation(class UUINavWidget* PreviousActiveWidget, const bool bFromChild);
    bool OnChildReturn();
    void OnChangedSection(const int32 FromIndex, const int32 ToIndex);
    bool IsSelectorVisible();
    bool IsSelectorValid();
    bool IsRebindingInput();
    class UUINavWidget* GoToWidget(TSubclassOf<class UUINavWidget> NewWidgetClass, const bool bRemoveParent, const bool bDestroyParent, const int32 ZOrder);
    void GoToSection(const int32 SectionIndex);
    class UUINavWidget* GoToPromptWidget(TSubclassOf<class UUINavPromptWidget> NewWidgetClass, const FGoToPromptWidgetEvent& Event, const FText title, const FText Message, const bool bRemoveParent, const int32 ZOrder);
    void GoToPreviousSection();
    void GoToNextSection();
    class UUINavWidget* GoToBuiltWidget(class UUINavWidget* NewWidget, const bool bRemoveParent, const bool bDestroyParent, const int32 ZOrder);
    class UScrollBox* GetScrollBoxToFocus();
    class UUINavWidget* GetMostOuterUINavWidget();
    class UUINavComponent* GetInitialFocusComponent();
    void ConfigureUINavPC();
}; // Size: 0x4F0

class UUINavWidgetComponent : public UWidgetComponent
{
    bool bTakeFocus;                                                                  // 0x06C8 (size: 0x1)

}; // Size: 0x6D0

#endif
