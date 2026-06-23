enum class EBoolColumnCellValue {
    MatchFalse = 0,
    MatchTrue = 1,
    MatchAny = 2,
    EBoolColumnCellValue_MAX = 3,
};

enum class EChooserEvaluationFrequency {
    OnInitialUpdate = 0,
    OnBecomeRelevant = 1,
    OnLoop = 2,
    OnUpdate = 3,
    EChooserEvaluationFrequency_MAX = 4,
};

enum class EContextObjectDirection {
    Read = 0,
    Write = 1,
    ReadWrite = 2,
    EContextObjectDirection_MAX = 3,
};

enum class EEnumColumnCellValueComparison {
    MatchEqual = 0,
    MatchNotEqual = 1,
    MatchAny = 2,
    Modulus = 3,
    EEnumColumnCellValueComparison_MAX = 4,
};

enum class EGameplayTagMatchDirection {
    RowValueInInput = 0,
    InputInRowValue = 1,
    EGameplayTagMatchDirection_MAX = 2,
};

enum class EObjectChooserResultType {
    ObjectResult = 0,
    ClassResult = 1,
    NoPrimaryResult = 2,
    EObjectChooserResultType_MAX = 3,
};

enum class EObjectClassColumnCellValueComparison {
    Equal = 0,
    NotEqual = 1,
    SubClassOf = 2,
    NotSubClassOf = 3,
    Any = 4,
    EObjectClassColumnCellValueComparison_MAX = 5,
};

enum class EObjectColumnCellValueComparison {
    MatchEqual = 0,
    MatchNotEqual = 1,
    MatchAny = 2,
    Modulus = 3,
    EObjectColumnCellValueComparison_MAX = 4,
};

