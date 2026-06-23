enum class ELiveLinkCompressionBias {
    None = 0,
    Size = 1,
    Speed = 2,
    ELiveLinkCompressionBias_MAX = 3,
};

enum class ELiveLinkCompressionMethod {
    Uncompressed = 0,
    Oodle = 1,
    Zlib = 2,
    ELiveLinkCompressionMethod_MAX = 3,
};

enum class ELiveLinkPayloadCompressionType {
    None = 0,
    Heuristic = 1,
    Always = 2,
    ELiveLinkPayloadCompressionType_MAX = 3,
};

enum class ELiveLinkPayloadSerializationMethod {
    Standard = 0,
    Cbor = 1,
    ELiveLinkPayloadSerializationMethod_MAX = 2,
};

enum class ELiveLinkTopologyMode {
    Hub = 0,
    Spoke = 1,
    UnrealClient = 2,
    External = 3,
    ELiveLinkTopologyMode_MAX = 4,
};

