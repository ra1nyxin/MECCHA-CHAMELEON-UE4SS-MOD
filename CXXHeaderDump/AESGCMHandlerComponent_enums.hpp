enum class EAESGCMNetResult {
    Unknown = 0,
    Success = 1,
    AESMissingIV = 2,
    AESMissingAuthTag = 3,
    AESMissingPayload = 4,
    AESDecryptionFailed = 5,
    AESZeroLastByte = 6,
    EAESGCMNetResult_MAX = 7,
};

