namespace app {
struct MultiplayerServerRequestedEventDataDoc {
    struct MultiplayerServerRequestedEventDataDoc__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerRequestedEventDataDoc__Fields fields;
};

enum class GenericErrorCodes__Enum_1 : int32_t {
    Success = 0x00000000,
    UnkownError = 0x00000001,
    InvalidParams = 0x00000002,
    AccountNotFound = 0x00000003,
    AccountBanned = 0x00000004,
    InvalidUsernameOrPassword = 0x00000005,
    InvalidTitleId = 0x00000006,
    InvalidEmailAddress = 0x00000007,
    EmailAddressNotAvailable = 0x00000008,
    InvalidUsername = 0x00000009,
    InvalidPassword = 0x0000000a,
    UsernameNotAvailable = 0x0000000b,
    InvalidSteamTicket = 0x0000000c,
    AccountAlreadyLinked = 0x0000000d,
    LinkedAccountAlreadyClaimed = 0x0000000e,
    InvalidFacebookToken = 0x0000000f,
    AccountNotLinked = 0x00000010,
    FailedByPaymentProvider = 0x00000011,
    CouponCodeNotFound = 0x00000012,
    InvalidContainerItem = 0x00000013,
    ContainerNotOwned = 0x00000014,
    KeyNotOwned = 0x00000015,
    InvalidItemIdInTable = 0x00000016,
    InvalidReceipt = 0x00000017,
    ReceiptAlreadyUsed = 0x00000018,
    ReceiptCancelled = 0x00000019,
    GameNotFound = 0x0000001a,
    GameModeNotFound = 0x0000001b,
    InvalidGoogleToken = 0x0000001c,
    UserIsNotPartOfDeveloper = 0x0000001d,
    InvalidTitleForDeveloper = 0x0000001e,
    TitleNameConflicts = 0x0000001f,
    UserisNotValid = 0x00000020,
    ValueAlreadyExists = 0x00000021,
    BuildNotFound = 0x00000022,
    PlayerNotInGame = 0x00000023,
    InvalidTicket = 0x00000024,
    InvalidDeveloper = 0x00000025,
    InvalidOrderInfo = 0x00000026,
    RegistrationIncomplete = 0x00000027,
    InvalidPlatform = 0x00000028,
    UnknownError = 0x00000029,
    SteamApplicationNotOwned = 0x0000002a,
    WrongSteamAccount = 0x0000002b,
    TitleNotActivated = 0x0000002c,
    RegistrationSessionNotFound = 0x0000002d,
    NoSuchMod = 0x0000002e,
    FileNotFound = 0x0000002f,
    DuplicateEmail = 0x00000030,
    ItemNotFound = 0x00000031,
    ItemNotOwned = 0x00000032,
    ItemNotRecycleable = 0x00000033,
    ItemNotAffordable = 0x00000034,
    InvalidVirtualCurrency = 0x00000035,
    WrongVirtualCurrency = 0x00000036,
    WrongPrice = 0x00000037,
    NonPositiveValue = 0x00000038,
    InvalidRegion = 0x00000039,
    RegionAtCapacity = 0x0000003a,
    ServerFailedToStart = 0x0000003b,
    NameNotAvailable = 0x0000003c,
    InsufficientFunds = 0x0000003d,
    InvalidDeviceID = 0x0000003e,
    InvalidPushNotificationToken = 0x0000003f,
    NoRemainingUses = 0x00000040,
    InvalidPaymentProvider = 0x00000041,
    PurchaseInitializationFailure = 0x00000042,
    DuplicateUsername = 0x00000043,
    InvalidBuyerInfo = 0x00000044,
    NoGameModeParamsSet = 0x00000045,
    BodyTooLarge = 0x00000046,
    ReservedWordInBody = 0x00000047,
    InvalidTypeInBody = 0x00000048,
    InvalidRequest = 0x00000049,
    ReservedEventName = 0x0000004a,
    InvalidUserStatistics = 0x0000004b,
    NotAuthenticated = 0x0000004c,
    StreamAlreadyExists = 0x0000004d,
    ErrorCreatingStream = 0x0000004e,
    StreamNotFound = 0x0000004f,
    InvalidAccount = 0x00000050,
    PurchaseDoesNotExist = 0x00000051,
    InvalidPurchaseTransactionStatus = 0x00000052,
    APINotEnabledForGameClientAccess = 0x00000053,
    NoPushNotificationARNForTitle = 0x00000054,
    BuildAlreadyExists = 0x00000055,
    BuildPackageDoesNotExist = 0x00000056,
    CustomAnalyticsEventsNotEnabledForTitle = 0x00000057,
    InvalidSharedGroupId = 0x00000058,
    NotAuthorized = 0x00000059,
    MissingTitleGoogleProperties = 0x0000005a,
    InvalidItemProperties = 0x0000005b,
    InvalidPSNAuthCode = 0x0000005c,
    InvalidItemId = 0x0000005d,
    PushNotEnabledForAccount = 0x0000005e,
    PushServiceError = 0x0000005f,
    ReceiptDoesNotContainInAppItems = 0x00000060,
    ReceiptContainsMultipleInAppItems = 0x00000061,
    InvalidBundleID = 0x00000062,
    JavascriptException = 0x00000063,
    InvalidSessionTicket = 0x00000064,
    UnableToConnectToDatabase = 0x00000065,
    InternalServerError = 0x00000066,
    InvalidReportDate = 0x00000067,
    ReportNotAvailable = 0x00000068,
    DatabaseThroughputExceeded = 0x00000069,
    InvalidGameTicket = 0x0000006a,
    ExpiredGameTicket = 0x0000006b,
    GameTicketDoesNotMatchLobby = 0x0000006c,
    LinkedDeviceAlreadyClaimed = 0x0000006d,
    DeviceAlreadyLinked = 0x0000006e,
    DeviceNotLinked = 0x0000006f,
    PartialFailure = 0x00000070,
    PublisherNotSet = 0x00000071,
    ServiceUnavailable = 0x00000072,
    VersionNotFound = 0x00000073,
    RevisionNotFound = 0x00000074,
    InvalidPublisherId = 0x00000075,
    DownstreamServiceUnavailable = 0x00000076,
    APINotIncludedInTitleUsageTier = 0x00000077,
    DAULimitExceeded = 0x00000078,
    APIRequestLimitExceeded = 0x00000079,
    InvalidAPIEndpoint = 0x0000007a,
    BuildNotAvailable = 0x0000007b,
    ConcurrentEditError = 0x0000007c,
    ContentNotFound = 0x0000007d,
    CharacterNotFound = 0x0000007e,
    CloudScriptNotFound = 0x0000007f,
    ContentQuotaExceeded = 0x00000080,
    InvalidCharacterStatistics = 0x00000081,
    PhotonNotEnabledForTitle = 0x00000082,
    PhotonApplicationNotFound = 0x00000083,
    PhotonApplicationNotAssociatedWithTitle = 0x00000084,
    InvalidEmailOrPassword = 0x00000085,
    FacebookAPIError = 0x00000086,
    InvalidContentType = 0x00000087,
    KeyLengthExceeded = 0x00000088,
    DataLengthExceeded = 0x00000089,
    TooManyKeys = 0x0000008a,
    FreeTierCannotHaveVirtualCurrency = 0x0000008b,
    MissingAmazonSharedKey = 0x0000008c,
    AmazonValidationError = 0x0000008d,
    InvalidPSNIssuerId = 0x0000008e,
    PSNInaccessible = 0x0000008f,
    ExpiredAuthToken = 0x00000090,
    FailedToGetEntitlements = 0x00000091,
    FailedToConsumeEntitlement = 0x00000092,
    TradeAcceptingUserNotAllowed = 0x00000093,
    TradeInventoryItemIsAssignedToCharacter = 0x00000094,
    TradeInventoryItemIsBundle = 0x00000095,
    TradeStatusNotValidForCancelling = 0x00000096,
    TradeStatusNotValidForAccepting = 0x00000097,
    TradeDoesNotExist = 0x00000098,
    TradeCancelled = 0x00000099,
    TradeAlreadyFilled = 0x0000009a,
    TradeWaitForStatusTimeout = 0x0000009b,
    TradeInventoryItemExpired = 0x0000009c,
    TradeMissingOfferedAndAcceptedItems = 0x0000009d,
    TradeAcceptedItemIsBundle = 0x0000009e,
    TradeAcceptedItemIsStackable = 0x0000009f,
    TradeInventoryItemInvalidStatus = 0x000000a0,
    TradeAcceptedCatalogItemInvalid = 0x000000a1,
    TradeAllowedUsersInvalid = 0x000000a2,
    TradeInventoryItemDoesNotExist = 0x000000a3,
    TradeInventoryItemIsConsumed = 0x000000a4,
    TradeInventoryItemIsStackable = 0x000000a5,
    TradeAcceptedItemsMismatch = 0x000000a6,
    InvalidKongregateToken = 0x000000a7,
    FeatureNotConfiguredForTitle = 0x000000a8,
    NoMatchingCatalogItemForReceipt = 0x000000a9,
    InvalidCurrencyCode = 0x000000aa,
    NoRealMoneyPriceForCatalogItem = 0x000000ab,
    TradeInventoryItemIsNotTradable = 0x000000ac,
    TradeAcceptedCatalogItemIsNotTradable = 0x000000ad,
    UsersAlreadyFriends = 0x000000ae,
    LinkedIdentifierAlreadyClaimed = 0x000000af,
    CustomIdNotLinked = 0x000000b0,
    TotalDataSizeExceeded = 0x000000b1,
    DeleteKeyConflict = 0x000000b2,
    InvalidXboxLiveToken = 0x000000b3,
    ExpiredXboxLiveToken = 0x000000b4,
    ResettableStatisticVersionRequired = 0x000000b5,
    NotAuthorizedByTitle = 0x000000b6,
    NoPartnerEnabled = 0x000000b7,
    InvalidPartnerResponse = 0x000000b8,
    APINotEnabledForGameServerAccess = 0x000000b9,
    StatisticNotFound = 0x000000ba,
    StatisticNameConflict = 0x000000bb,
    StatisticVersionClosedForWrites = 0x000000bc,
    StatisticVersionInvalid = 0x000000bd,
    APIClientRequestRateLimitExceeded = 0x000000be,
    InvalidJSONContent = 0x000000bf,
    InvalidDropTable = 0x000000c0,
    StatisticVersionAlreadyIncrementedForScheduledInterval = 0x000000c1,
    StatisticCountLimitExceeded = 0x000000c2,
    StatisticVersionIncrementRateExceeded = 0x000000c3,
    ContainerKeyInvalid = 0x000000c4,
    CloudScriptExecutionTimeLimitExceeded = 0x000000c5,
    NoWritePermissionsForEvent = 0x000000c6,
    CloudScriptFunctionArgumentSizeExceeded = 0x000000c7,
    CloudScriptAPIRequestCountExceeded = 0x000000c8,
    CloudScriptAPIRequestError = 0x000000c9,
    CloudScriptHTTPRequestError = 0x000000ca,
    InsufficientGuildRole = 0x000000cb,
    GuildNotFound = 0x000000cc,
    OverLimit = 0x000000cd,
    EventNotFound = 0x000000ce,
    InvalidEventField = 0x000000cf,
    InvalidEventName = 0x000000d0,
    CatalogNotConfigured = 0x000000d1,
    OperationNotSupportedForPlatform = 0x000000d2,
    SegmentNotFound = 0x000000d3,
    StoreNotFound = 0x000000d4,
    InvalidStatisticName = 0x000000d5,
    TitleNotQualifiedForLimit = 0x000000d6,
    InvalidServiceLimitLevel = 0x000000d7,
    ServiceLimitLevelInTransition = 0x000000d8,
    CouponAlreadyRedeemed = 0x000000d9,
    GameServerBuildSizeLimitExceeded = 0x000000da,
    GameServerBuildCountLimitExceeded = 0x000000db,
    VirtualCurrencyCountLimitExceeded = 0x000000dc,
    VirtualCurrencyCodeExists = 0x000000dd,
    TitleNewsItemCountLimitExceeded = 0x000000de,
    InvalidTwitchToken = 0x000000df,
    TwitchResponseError = 0x000000e0,
    ProfaneDisplayName = 0x000000e1,
    UserAlreadyAdded = 0x000000e2,
    InvalidVirtualCurrencyCode = 0x000000e3,
    VirtualCurrencyCannotBeDeleted = 0x000000e4,
    IdentifierAlreadyClaimed = 0x000000e5,
    IdentifierNotLinked = 0x000000e6,
    InvalidContinuationToken = 0x000000e7,
    ExpiredContinuationToken = 0x000000e8,
    InvalidSegment = 0x000000e9,
    InvalidSessionId = 0x000000ea,
    SessionLogNotFound = 0x000000eb,
    InvalidSearchTerm = 0x000000ec,
    TwoFactorAuthenticationTokenRequired = 0x000000ed,
    GameServerHostCountLimitExceeded = 0x000000ee,
    PlayerTagCountLimitExceeded = 0x000000ef,
    RequestAlreadyRunning = 0x000000f0,
    ActionGroupNotFound = 0x000000f1,
    MaximumSegmentBulkActionJobsRunning = 0x000000f2,
    NoActionsOnPlayersInSegmentJob = 0x000000f3,
    DuplicateStatisticName = 0x000000f4,
    ScheduledTaskNameConflict = 0x000000f5,
    ScheduledTaskCreateConflict = 0x000000f6,
    InvalidScheduledTaskName = 0x000000f7,
    InvalidTaskSchedule = 0x000000f8,
    SteamNotEnabledForTitle = 0x000000f9,
    LimitNotAnUpgradeOption = 0x000000fa,
    NoSecretKeyEnabledForCloudScript = 0x000000fb,
    TaskNotFound = 0x000000fc,
    TaskInstanceNotFound = 0x000000fd,
    InvalidIdentityProviderId = 0x000000fe,
    MisconfiguredIdentityProvider = 0x000000ff,
    InvalidScheduledTaskType = 0x00000100,
    BillingInformationRequired = 0x00000101,
    LimitedEditionItemUnavailable = 0x00000102,
    InvalidAdPlacementAndReward = 0x00000103,
    AllAdPlacementViewsAlreadyConsumed = 0x00000104,
    GoogleOAuthNotConfiguredForTitle = 0x00000105,
    GoogleOAuthError = 0x00000106,
    UserNotFriend = 0x00000107,
    InvalidSignature = 0x00000108,
    InvalidPublicKey = 0x00000109,
    GoogleOAuthNoIdTokenIncludedInResponse = 0x0000010a,
    StatisticUpdateInProgress = 0x0000010b,
    LeaderboardVersionNotAvailable = 0x0000010c,
    StatisticAlreadyHasPrizeTable = 0x0000010d,
    PrizeTableHasOverlappingRanks = 0x0000010e,
    PrizeTableHasMissingRanks = 0x0000010f,
    PrizeTableRankStartsAtZero = 0x00000110,
    InvalidStatistic = 0x00000111,
    ExpressionParseFailure = 0x00000112,
    ExpressionInvokeFailure = 0x00000113,
    ExpressionTooLong = 0x00000114,
    DataUpdateRateExceeded = 0x00000115,
    RestrictedEmailDomain = 0x00000116,
    EncryptionKeyDisabled = 0x00000117,
    EncryptionKeyMissing = 0x00000118,
    EncryptionKeyBroken = 0x00000119,
    NoSharedSecretKeyConfigured = 0x0000011a,
    SecretKeyNotFound = 0x0000011b,
    PlayerSecretAlreadyConfigured = 0x0000011c,
    APIRequestsDisabledForTitle = 0x0000011d,
    InvalidSharedSecretKey = 0x0000011e,
    PrizeTableHasNoRanks = 0x0000011f,
    ProfileDoesNotExist = 0x00000120,
    ContentS3OriginBucketNotConfigured = 0x00000121,
    InvalidEnvironmentForReceipt = 0x00000122,
    EncryptedRequestNotAllowed = 0x00000123,
    SignedRequestNotAllowed = 0x00000124,
    RequestViewConstraintParamsNotAllowed = 0x00000125,
    BadPartnerConfiguration = 0x00000126,
    XboxBPCertificateFailure = 0x00000127,
    XboxXASSExchangeFailure = 0x00000128,
    InvalidEntityId = 0x00000129,
    StatisticValueAggregationOverflow = 0x0000012a,
    EmailMessageFromAddressIsMissing = 0x0000012b,
    EmailMessageToAddressIsMissing = 0x0000012c,
    SmtpServerAuthenticationError = 0x0000012d,
    SmtpServerLimitExceeded = 0x0000012e,
    SmtpServerInsufficientStorage = 0x0000012f,
    SmtpServerCommunicationError = 0x00000130,
    SmtpServerGeneralFailure = 0x00000131,
    EmailClientTimeout = 0x00000132,
    EmailClientCanceledTask = 0x00000133,
    EmailTemplateMissing = 0x00000134,
    InvalidHostForTitleId = 0x00000135,
    EmailConfirmationTokenDoesNotExist = 0x00000136,
    EmailConfirmationTokenExpired = 0x00000137,
    AccountDeleted = 0x00000138,
    PlayerSecretNotConfigured = 0x00000139,
    InvalidSignatureTime = 0x0000013a,
    NoContactEmailAddressFound = 0x0000013b,
    InvalidAuthToken = 0x0000013c,
    AuthTokenDoesNotExist = 0x0000013d,
    AuthTokenExpired = 0x0000013e,
    AuthTokenAlreadyUsedToResetPassword = 0x0000013f,
    MembershipNameTooLong = 0x00000140,
    MembershipNotFound = 0x00000141,
    GoogleServiceAccountInvalid = 0x00000142,
    GoogleServiceAccountParseFailure = 0x00000143,
    EntityTokenMissing = 0x00000144,
    EntityTokenInvalid = 0x00000145,
    EntityTokenExpired = 0x00000146,
    EntityTokenRevoked = 0x00000147,
    InvalidProductForSubscription = 0x00000148,
    XboxInaccessible = 0x00000149,
    SubscriptionAlreadyTaken = 0x0000014a,
    SmtpAddonNotEnabled = 0x0000014b,
    APIConcurrentRequestLimitExceeded = 0x0000014c,
    XboxRejectedXSTSExchangeRequest = 0x0000014d,
    VariableNotDefined = 0x0000014e,
    TemplateVersionNotDefined = 0x0000014f,
    FileTooLarge = 0x00000150,
    TitleDeleted = 0x00000151,
    TitleContainsUserAccounts = 0x00000152,
    TitleDeletionPlayerCleanupFailure = 0x00000153,
    EntityFileOperationPending = 0x00000154,
    NoEntityFileOperationPending = 0x00000155,
    EntityProfileVersionMismatch = 0x00000156,
    TemplateVersionTooOld = 0x00000157,
    MembershipDefinitionInUse = 0x00000158,
    PaymentPageNotConfigured = 0x00000159,
    FailedLoginAttemptRateLimitExceeded = 0x0000015a,
    EntityBlockedByGroup = 0x0000015b,
    RoleDoesNotExist = 0x0000015c,
    EntityIsAlreadyMember = 0x0000015d,
    DuplicateRoleId = 0x0000015e,
    GroupInvitationNotFound = 0x0000015f,
    GroupApplicationNotFound = 0x00000160,
    OutstandingInvitationAcceptedInstead = 0x00000161,
    OutstandingApplicationAcceptedInstead = 0x00000162,
    RoleIsGroupDefaultMember = 0x00000163,
    RoleIsGroupAdmin = 0x00000164,
    RoleNameNotAvailable = 0x00000165,
    GroupNameNotAvailable = 0x00000166,
    EmailReportAlreadySent = 0x00000167,
    EmailReportRecipientBlacklisted = 0x00000168,
    EventNamespaceNotAllowed = 0x00000169,
    EventEntityNotAllowed = 0x0000016a,
    InvalidEntityType = 0x0000016b,
    NullTokenResultFromAad = 0x0000016c,
    InvalidTokenResultFromAad = 0x0000016d,
    NoValidCertificateForAad = 0x0000016e,
    InvalidCertificateForAad = 0x0000016f,
    DuplicateDropTableId = 0x00000170,
    MultiplayerServerError = 0x00000171,
    MultiplayerServerTooManyRequests = 0x00000172,
    MultiplayerServerNoContent = 0x00000173,
    MultiplayerServerBadRequest = 0x00000174,
    MultiplayerServerUnauthorized = 0x00000175,
    MultiplayerServerForbidden = 0x00000176,
    MultiplayerServerNotFound = 0x00000177,
    MultiplayerServerConflict = 0x00000178,
    MultiplayerServerInternalServerError = 0x00000179,
    MultiplayerServerUnavailable = 0x0000017a,
    ExplicitContentDetected = 0x0000017b,
    PIIContentDetected = 0x0000017c,
    InvalidScheduledTaskParameter = 0x0000017d,
    PerEntityEventRateLimitExceeded = 0x0000017e,
    TitleDefaultLanguageNotSet = 0x0000017f,
    EmailTemplateMissingDefaultVersion = 0x00000180,
    FacebookInstantGamesIdNotLinked = 0x00000181,
    InvalidFacebookInstantGamesSignature = 0x00000182,
    FacebookInstantGamesAuthNotConfiguredForTitle = 0x00000183,
    EntityProfileConstraintValidationFailed = 0x00000184,
    TelemetryIngestionKeyPending = 0x00000185,
    TelemetryIngestionKeyNotFound = 0x00000186,
    StatisticTagRequired = 0x00000187,
    StatisticTagInvalid = 0x00000188,
    DataIntegrityError = 0x00000189,
    VirtualCurrencyCannotBeSetToOlderVersion = 0x0000018a,
    VirtualCurrencyMustBeWithinIntegerRange = 0x0000018b,
    EmailTemplateInvalidSyntax = 0x0000018c,
    EmailTemplateMissingCallback = 0x0000018d,
    PushNotificationTemplateInvalidPayload = 0x0000018e,
    InvalidLocalizedPushNotificationLanguage = 0x0000018f,
    MissingLocalizedPushNotificationMessage = 0x00000190,
    PushNotificationTemplateMissingPlatformPayload = 0x00000191,
    PushNotificationTemplatePayloadContainsInvalidJson = 0x00000192,
    PushNotificationTemplateContainsInvalidIosPayload = 0x00000193,
    PushNotificationTemplateContainsInvalidAndroidPayload = 0x00000194,
    PushNotificationTemplateIosPayloadMissingNotificationBody = 0x00000195,
    PushNotificationTemplateAndroidPayloadMissingNotificationBody = 0x00000196,
    PushNotificationTemplateNotFound = 0x00000197,
    PushNotificationTemplateMissingDefaultVersion = 0x00000198,
    PushNotificationTemplateInvalidSyntax = 0x00000199,
    PushNotificationTemplateNoCustomPayloadForV1 = 0x0000019a,
    NoLeaderboardForStatistic = 0x0000019b,
    TitleNewsMissingDefaultLanguage = 0x0000019c,
    TitleNewsNotFound = 0x0000019d,
    TitleNewsDuplicateLanguage = 0x0000019e,
    TitleNewsMissingTitleOrBody = 0x0000019f,
    TitleNewsInvalidLanguage = 0x000001a0,
    EmailRecipientBlacklisted = 0x000001a1,
    MatchmakingEntityInvalid = 0x000001a2,
    MatchmakingPlayerAttributesInvalid = 0x000001a3,
    MatchmakingCreateRequestMissing = 0x000001a4,
    MatchmakingCreateRequestCreatorMissing = 0x000001a5,
    MatchmakingCreateRequestCreatorIdMissing = 0x000001a6,
    MatchmakingCreateRequestUserListMissing = 0x000001a7,
    MatchmakingCreateRequestGiveUpAfterInvalid = 0x000001a8,
    MatchmakingTicketIdMissing = 0x000001a9,
    MatchmakingMatchIdMissing = 0x000001aa,
    MatchmakingMatchIdIdMissing = 0x000001ab,
    MatchmakingQueueNameMissing = 0x000001ac,
    MatchmakingTitleIdMissing = 0x000001ad,
    MatchmakingTicketIdIdMissing = 0x000001ae,
    MatchmakingPlayerIdMissing = 0x000001af,
    MatchmakingJoinRequestUserMissing = 0x000001b0,
    MatchmakingQueueConfigNotFound = 0x000001b1,
    MatchmakingMatchNotFound = 0x000001b2,
    MatchmakingTicketNotFound = 0x000001b3,
    MatchmakingCreateTicketServerIdentityInvalid = 0x000001b4,
    MatchmakingCreateTicketClientIdentityInvalid = 0x000001b5,
    MatchmakingGetTicketUserMismatch = 0x000001b6,
    MatchmakingJoinTicketServerIdentityInvalid = 0x000001b7,
    MatchmakingJoinTicketUserIdentityMismatch = 0x000001b8,
    MatchmakingCancelTicketServerIdentityInvalid = 0x000001b9,
    MatchmakingCancelTicketUserIdentityMismatch = 0x000001ba,
    MatchmakingGetMatchIdentityMismatch = 0x000001bb,
    MatchmakingPlayerIdentityMismatch = 0x000001bc,
    MatchmakingAlreadyJoinedTicket = 0x000001bd,
    MatchmakingTicketAlreadyCompleted = 0x000001be,
    MatchmakingQueueNameInvalid = 0x000001bf,
    MatchmakingQueueConfigInvalid = 0x000001c0,
    MatchmakingMemberProfileInvalid = 0x000001c1,
    WriteAttemptedDuringExport = 0x000001c2,
    NintendoSwitchDeviceIdNotLinked = 0x000001c3,
    MatchmakingNotEnabled = 0x000001c4,
    MatchmakingGetStatisticsIdentityInvalid = 0x000001c5,
    MatchmakingStatisticsIdMissing = 0x000001c6,
    CannotEnableMultiplayerServersForTitle = 0x000001c7,
    TitleConfigNotFound = 0x000001c8,
    TitleConfigUpdateConflict = 0x000001c9,
    TitleConfigSerializationError = 0x000001ca,
};

struct GenericErrorCodes__Enum_1__Boxed {
    struct GenericErrorCodes__Enum_1__Class *klass;
    MonitorData *monitor;
    GenericErrorCodes__Enum_1 value;
    
};

struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_ {
    GenericErrorCodes__Enum_1 value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___Boxed {
    struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_ fields;
};

struct __declspec(align(8)) MultiplayerServerRequestedEventPayload__Fields {
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ AllocatedRegion;
    struct Nullable_1_Int32_ AllocatedRegionPreferenceRanking;
    struct String *BuildId;
    struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes_ ErrorCode;
    struct List_1_PlayFab_PlayStreamModels_AzureRegion_ *PreferredRegions;
    struct String *ServerId;
    struct String *SessionId;
};

struct MultiplayerServerRequestedEventPayload {
    struct MultiplayerServerRequestedEventPayload__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerRequestedEventPayload__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_PlayStreamModels_AzureRegion___Fields {
    struct AzureRegion__Enum_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_PlayStreamModels_AzureRegion_ {
    struct List_1_PlayFab_PlayStreamModels_AzureRegion___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_PlayStreamModels_AzureRegion___Fields fields;
};

struct AzureRegion__Enum_1__Array {
    struct AzureRegion__Enum_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    AzureRegion__Enum_1 vector[32];
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion_ {
    struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___Class *klass;
    MonitorData *monitor;
};

struct GenericErrorCodes__Enum_1__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct GenericErrorCodes__Enum_1__StaticFields {
};

struct GenericErrorCodes__Enum_1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GenericErrorCodes__Enum_1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GenericErrorCodes__Enum_1__VTable vtable;
};

struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___StaticFields {
};

struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_PlayStreamModels_GenericErrorCodes___VTable vtable;
};

struct AzureRegion__Enum_1__Array__VTable {
};

struct AzureRegion__Enum_1__Array__StaticFields {
};

struct AzureRegion__Enum_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AzureRegion__Enum_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AzureRegion__Enum_1__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields {
};

struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_PlayStreamModels_AzureRegion___VTable vtable;
};

struct List_1_PlayFab_PlayStreamModels_AzureRegion___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData IndexOf;
    VirtualInvokeData Insert;
    VirtualInvokeData RemoveAt;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IList_get_Item;
    VirtualInvokeData System_Collections_IList_set_Item;
    VirtualInvokeData System_Collections_IList_Add;
    VirtualInvokeData System_Collections_IList_Contains;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IList_get_IsReadOnly;
    VirtualInvokeData System_Collections_IList_get_IsFixedSize;
    VirtualInvokeData System_Collections_IList_IndexOf;
    VirtualInvokeData System_Collections_IList_Insert;
    VirtualInvokeData System_Collections_IList_Remove;
    VirtualInvokeData RemoveAt_1;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData get_Count_2;
};

struct List_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields {
    struct AzureRegion__Enum_1__Array *_emptyArray;
};

struct List_1_PlayFab_PlayStreamModels_AzureRegion___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_PlayStreamModels_AzureRegion___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_PlayStreamModels_AzureRegion___VTable vtable;
};

struct MultiplayerServerRequestedEventPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerRequestedEventPayload__StaticFields {
};

struct MultiplayerServerRequestedEventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerRequestedEventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerRequestedEventPayload__VTable vtable;
};

struct MultiplayerServerRequestedEventDataDoc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerRequestedEventDataDoc__StaticFields {
};

struct MultiplayerServerRequestedEventDataDoc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerRequestedEventDataDoc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerRequestedEventDataDoc__VTable vtable;
};

struct MultiplayerServerStateChangedEventDataDoc__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1 *EntityLineage;
    struct String *OriginalEventId;
    struct Nullable_1_DateTime_ OriginalTimestamp;
    struct MultiplayerServerStateChangedEventPayload *Payload;
    struct EntityKey_9 *WriterEntity;
};

struct MultiplayerServerStateChangedEventDataDoc {
    struct MultiplayerServerStateChangedEventDataDoc__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerStateChangedEventDataDoc__Fields fields;
};

struct __declspec(align(8)) MultiplayerServerStateChangedEventPayload__Fields {
    struct String *BuildId;
    struct String *NewState;
    struct String *OldState;
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
    struct String *ServerId;
    struct String *SessionId;
    struct String *VmId;
};

struct MultiplayerServerStateChangedEventPayload {
    struct MultiplayerServerStateChangedEventPayload__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerStateChangedEventPayload__Fields fields;
};

struct MultiplayerServerStateChangedEventPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerStateChangedEventPayload__StaticFields {
};

struct MultiplayerServerStateChangedEventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerStateChangedEventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerStateChangedEventPayload__VTable vtable;
};

struct MultiplayerServerStateChangedEventDataDoc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerStateChangedEventDataDoc__StaticFields {
};

struct MultiplayerServerStateChangedEventDataDoc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerStateChangedEventDataDoc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerStateChangedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmAssignedEventDataDoc__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1 *EntityLineage;
    struct String *OriginalEventId;
    struct Nullable_1_DateTime_ OriginalTimestamp;
    struct MultiplayerServerVmAssignedEventPayload *Payload;
    struct EntityKey_9 *WriterEntity;
};

struct MultiplayerServerVmAssignedEventDataDoc {
    struct MultiplayerServerVmAssignedEventDataDoc__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmAssignedEventDataDoc__Fields fields;
};

struct __declspec(align(8)) MultiplayerServerVmAssignedEventPayload__Fields {
    struct DateTime AssignmentEventTimestamp;
    struct String *BillingAssignmentCorrelationId;
    struct String *BuildId;
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
    struct String *SessionId;
    struct String *VmId;
};

struct MultiplayerServerVmAssignedEventPayload {
    struct MultiplayerServerVmAssignedEventPayload__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmAssignedEventPayload__Fields fields;
};

struct MultiplayerServerVmAssignedEventPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmAssignedEventPayload__StaticFields {
};

struct MultiplayerServerVmAssignedEventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmAssignedEventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmAssignedEventPayload__VTable vtable;
};

struct MultiplayerServerVmAssignedEventDataDoc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmAssignedEventDataDoc__StaticFields {
};

struct MultiplayerServerVmAssignedEventDataDoc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmAssignedEventDataDoc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmAssignedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1 *EntityLineage;
    struct String *OriginalEventId;
    struct Nullable_1_DateTime_ OriginalTimestamp;
    struct MultiplayerServerVmRemoteUserCreatedEventPayload *Payload;
    struct EntityKey_9 *WriterEntity;
};

struct MultiplayerServerVmRemoteUserCreatedEventDataDoc {
    struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Fields fields;
};

struct __declspec(align(8)) MultiplayerServerVmRemoteUserCreatedEventPayload__Fields {
    struct Nullable_1_DateTime_ ExpirationTime;
    struct String *Username;
    struct String *VmId;
};

struct MultiplayerServerVmRemoteUserCreatedEventPayload {
    struct MultiplayerServerVmRemoteUserCreatedEventPayload__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmRemoteUserCreatedEventPayload__Fields fields;
};

struct MultiplayerServerVmRemoteUserCreatedEventPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmRemoteUserCreatedEventPayload__StaticFields {
};

struct MultiplayerServerVmRemoteUserCreatedEventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmRemoteUserCreatedEventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmRemoteUserCreatedEventPayload__VTable vtable;
};

struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__StaticFields {
};

struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmRemoteUserCreatedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1 *EntityLineage;
    struct String *OriginalEventId;
    struct Nullable_1_DateTime_ OriginalTimestamp;
    struct MultiplayerServerVmRemoteUserDeletedEventPayload *Payload;
    struct EntityKey_9 *WriterEntity;
};

struct MultiplayerServerVmRemoteUserDeletedEventDataDoc {
    struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Fields fields;
};

struct __declspec(align(8)) MultiplayerServerVmRemoteUserDeletedEventPayload__Fields {
    struct String *BuildId;
    struct String *Username;
    struct String *VmId;
};

struct MultiplayerServerVmRemoteUserDeletedEventPayload {
    struct MultiplayerServerVmRemoteUserDeletedEventPayload__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmRemoteUserDeletedEventPayload__Fields fields;
};

struct MultiplayerServerVmRemoteUserDeletedEventPayload__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmRemoteUserDeletedEventPayload__StaticFields {
};

struct MultiplayerServerVmRemoteUserDeletedEventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmRemoteUserDeletedEventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmRemoteUserDeletedEventPayload__VTable vtable;
};

struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__StaticFields {
};

struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MultiplayerServerVmRemoteUserDeletedEventDataDoc__VTable vtable;
};

struct MultiplayerServerVmUnassignmentStartedEventDataDoc__Fields {
    struct PlayStreamEventBase__Fields _;
    struct EntityLineage_1 *EntityLineage;
    struct String *OriginalEventId;
    struct Nullable_1_DateTime_ OriginalTimestamp;
    struct MultiplayerServerVmUnassignmentStartedEventPayload *Payload;
    struct EntityKey_9 *WriterEntity;
};

struct MultiplayerServerVmUnassignmentStartedEventDataDoc {
    struct MultiplayerServerVmUnassignmentStartedEventDataDoc__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmUnassignmentStartedEventDataDoc__Fields fields;
};

struct __declspec(align(8)) MultiplayerServerVmUnassignmentStartedEventPayload__Fields {
    double AssignmentDurationMs;
    struct String *BillingAssignmentCorrelationId;
    struct String *BuildId;
    struct Nullable_1_PlayFab_PlayStreamModels_AzureRegion_ Region_1;
    struct String *SessionId;
    struct DateTime UnassignmentEventTimestamp;
    struct String *VmId;
    struct String *VmOs;
};

struct MultiplayerServerVmUnassignmentStartedEventPayload {
    struct MultiplayerServerVmUnassignmentStartedEventPayload__Class *klass;
    MonitorData *monitor;
    struct MultiplayerServerVmUnassignmentStartedEventPayload__Fields fields;
};

}