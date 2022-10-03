namespace app {
    struct ReverseSceneLoadingZone__StaticFields {
    };

    struct ReverseSceneLoadingZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReverseSceneLoadingZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReverseSceneLoadingZone__VTable vtable;
    };

    struct __declspec(align(8)) SceneLoadingQueue_c_DisplayClass12_0__Fields {
        struct MoonGuid* guid;
    };

    struct SceneLoadingQueue_c_DisplayClass12_0 {
        struct SceneLoadingQueue_c_DisplayClass12_0__Class* klass;
        MonitorData* monitor;
        struct SceneLoadingQueue_c_DisplayClass12_0__Fields fields;
    };

    struct SceneLoadingQueue_c_DisplayClass12_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneLoadingQueue_c_DisplayClass12_0__StaticFields {
    };

    struct SceneLoadingQueue_c_DisplayClass12_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneLoadingQueue_c_DisplayClass12_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneLoadingQueue_c_DisplayClass12_0__VTable vtable;
    };

    struct __declspec(align(8)) ScenesManagerBehaviour__Fields {
        struct ScenesManagerContext* m_context;
        struct List_1_UnityEngine_Vector3_* m_cameraPositions;
        struct Vector2 m_lastCameraPosition;
        struct List_1_Moon_IRectProvider_* m_tempRectProviderList;
        struct List_1_System_Int32_* m_tempHashList;
        struct List_1_SceneOperation_* m_sceneOperationsEnable;
        struct List_1_SceneOperation_* m_sceneOperationsLoad;
        struct List_1_SceneOperation_* m_sceneOperationsUnload;
    };

    struct ScenesManagerBehaviour {
        struct ScenesManagerBehaviour__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviour__Fields fields;
    };

    struct __declspec(align(8)) List_1_SceneOperation___Fields {
        struct SceneOperation__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SceneOperation_ {
        struct List_1_SceneOperation___Class* klass;
        MonitorData* monitor;
        struct List_1_SceneOperation___Fields fields;
    };

    struct SceneOperation {
        struct RuntimeSceneMetaData* MetaData;
        bool Async;
        bool KeepLoaded;
    };

    struct SceneOperation__Boxed {
        struct SceneOperation__Class* klass;
        MonitorData* monitor;
        struct SceneOperation fields;
    };

    struct SceneOperation__Array {
        struct SceneOperation__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneOperation vector[32];
    };

    struct IEnumerator_1_SceneOperation_ {
        struct IEnumerator_1_SceneOperation___Class* klass;
        MonitorData* monitor;
    };

    struct SceneOperation__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneOperation__StaticFields {
    };

    struct SceneOperation__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneOperation__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneOperation__VTable vtable;
    };

    struct SceneOperation__Array__VTable {
    };

    struct SceneOperation__Array__StaticFields {
    };

    struct SceneOperation__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneOperation__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneOperation__Array__VTable vtable;
    };

    struct IEnumerator_1_SceneOperation___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SceneOperation___StaticFields {
    };

    struct IEnumerator_1_SceneOperation___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SceneOperation___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SceneOperation___VTable vtable;
    };

    struct List_1_SceneOperation___VTable {
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

    struct List_1_SceneOperation___StaticFields {
        struct SceneOperation__Array* _emptyArray;
    };

    struct List_1_SceneOperation___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_SceneOperation___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_SceneOperation___VTable vtable;
    };

    struct ScenesManagerBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData Initialize;
        VirtualInvokeData Reset;
        VirtualInvokeData UpdatePosition;
        VirtualInvokeData SetTargetPosition;
    };

    struct ScenesManagerBehaviour__StaticFields {
    };

    struct ScenesManagerBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviour__VTable vtable;
    };

    struct ScenesManagerBehaviourCinematic__Fields {
        struct ScenesManagerBehaviour__Fields _;
        struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
    };

    struct ScenesManagerBehaviourCinematic {
        struct ScenesManagerBehaviourCinematic__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviourCinematic__Fields fields;
    };

    enum class ScenesManagerUpdateType__Enum : int32_t {
        All = -1,
        Unload = 0x00000000,
        Load = 0x00000001,
        Enable = 0x00000002,
    };

    struct ScenesManagerUpdateType__Enum__Boxed {
        struct ScenesManagerUpdateType__Enum__Class* klass;
        MonitorData* monitor;
        ScenesManagerUpdateType__Enum value;
    };

    struct ScenesManagerUpdateType__Enum__VTable {
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

    struct ScenesManagerUpdateType__Enum__StaticFields {
    };

    struct ScenesManagerUpdateType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerUpdateType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerUpdateType__Enum__VTable vtable;
    };

    struct ScenesManagerBehaviourCinematic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData Initialize;
        VirtualInvokeData Reset;
        VirtualInvokeData UpdatePosition;
        VirtualInvokeData SetTargetPosition;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData Update;
        VirtualInvokeData SetTargetPosition_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData FindScenesToUnload;
        VirtualInvokeData FindUneededScenesToUnload;
        VirtualInvokeData get_SceneOperationsEnable_1;
        VirtualInvokeData get_SceneOperationsLoad_1;
        VirtualInvokeData get_SceneOperationsUnload_1;
        VirtualInvokeData get_PredictedTargetPosition;
        VirtualInvokeData get_CurrentUpdateType;
    };

    struct ScenesManagerBehaviourCinematic__StaticFields {
    };

    struct ScenesManagerBehaviourCinematic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourCinematic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourCinematic__VTable vtable;
    };

    struct ScenesManagerBehaviourExplicit__Fields {
        struct ScenesManagerBehaviour__Fields _;
        struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
    };

    struct ScenesManagerBehaviourExplicit {
        struct ScenesManagerBehaviourExplicit__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviourExplicit__Fields fields;
    };

    struct ScenesManagerBehaviourExplicit__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData Initialize;
        VirtualInvokeData Reset;
        VirtualInvokeData UpdatePosition;
        VirtualInvokeData SetTargetPosition;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData Update;
        VirtualInvokeData SetTargetPosition_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData FindScenesToUnload;
        VirtualInvokeData FindUneededScenesToUnload;
        VirtualInvokeData get_SceneOperationsEnable_1;
        VirtualInvokeData get_SceneOperationsLoad_1;
        VirtualInvokeData get_SceneOperationsUnload_1;
        VirtualInvokeData get_PredictedTargetPosition;
        VirtualInvokeData get_CurrentUpdateType;
    };

    struct ScenesManagerBehaviourExplicit__StaticFields {
    };

    struct ScenesManagerBehaviourExplicit__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourExplicit__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourExplicit__VTable vtable;
    };

    struct ScenesManagerBehaviourGameplay__Fields {
        struct ScenesManagerBehaviour__Fields _;
        struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
        struct List_1_SceneManagerScene_* m_enablingScenes;
        struct Vector2 _CurrentCameraTargetPositionExtrapolated_k__BackingField;
        struct Vector2 _CurrentCameraTargetPositionExtrapolatedShort_k__BackingField;
    };

    struct ScenesManagerBehaviourGameplay {
        struct ScenesManagerBehaviourGameplay__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviourGameplay__Fields fields;
    };

    struct ScenesManagerBehaviourGameplay__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData Initialize;
        VirtualInvokeData Reset;
        VirtualInvokeData UpdatePosition;
        VirtualInvokeData SetTargetPosition;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData Update;
        VirtualInvokeData SetTargetPosition_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData FindScenesToUnload;
        VirtualInvokeData FindUneededScenesToUnload;
        VirtualInvokeData get_SceneOperationsEnable_1;
        VirtualInvokeData get_SceneOperationsLoad_1;
        VirtualInvokeData get_SceneOperationsUnload_1;
        VirtualInvokeData get_PredictedTargetPosition;
        VirtualInvokeData get_CurrentUpdateType;
    };

    struct ScenesManagerBehaviourGameplay__StaticFields {
    };

    struct ScenesManagerBehaviourGameplay__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourGameplay__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourGameplay__VTable vtable;
    };

    struct ScenesManagerBehaviourLegacy__Fields {
        struct ScenesManagerBehaviour__Fields _;
        struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
        struct List_1_SceneManagerScene_* m_enablingScenes;
        struct Vector2 _CurrentCameraTargetPositionExtrapolated_k__BackingField;
        struct Vector2 _CurrentCameraTargetPositionExtrapolatedShort_k__BackingField;
    };

    struct ScenesManagerBehaviourLegacy {
        struct ScenesManagerBehaviourLegacy__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviourLegacy__Fields fields;
    };

    struct ScenesManagerBehaviourLegacy__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData Initialize;
        VirtualInvokeData Reset;
        VirtualInvokeData UpdatePosition;
        VirtualInvokeData SetTargetPosition;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData Update;
        VirtualInvokeData SetTargetPosition_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData FindScenesToUnload;
        VirtualInvokeData FindUneededScenesToUnload;
        VirtualInvokeData get_SceneOperationsEnable_1;
        VirtualInvokeData get_SceneOperationsLoad_1;
        VirtualInvokeData get_SceneOperationsUnload_1;
        VirtualInvokeData get_PredictedTargetPosition;
        VirtualInvokeData get_CurrentUpdateType;
    };

    struct ScenesManagerBehaviourLegacy__StaticFields {
    };

    struct ScenesManagerBehaviourLegacy__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourLegacy__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourLegacy__VTable vtable;
    };

    struct ScenesManagerBehaviourStatic__Fields {
        struct ScenesManagerBehaviour__Fields _;
        struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
    };

    struct ScenesManagerBehaviourStatic {
        struct ScenesManagerBehaviourStatic__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviourStatic__Fields fields;
    };

    struct ScenesManagerBehaviourStatic__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData Initialize;
        VirtualInvokeData Reset;
        VirtualInvokeData UpdatePosition;
        VirtualInvokeData SetTargetPosition;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData Update;
        VirtualInvokeData SetTargetPosition_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData FindScenesToUnload;
        VirtualInvokeData FindUneededScenesToUnload;
        VirtualInvokeData get_SceneOperationsEnable_1;
        VirtualInvokeData get_SceneOperationsLoad_1;
        VirtualInvokeData get_SceneOperationsUnload_1;
        VirtualInvokeData get_PredictedTargetPosition;
        VirtualInvokeData get_CurrentUpdateType;
    };

    struct ScenesManagerBehaviourStatic__StaticFields {
    };

    struct ScenesManagerBehaviourStatic__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourStatic__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourStatic__VTable vtable;
    };

    struct ScenesManagerBehaviourUtility__Fields {
        struct ScenesManagerBehaviour__Fields _;
        struct HashSet_1_RuntimeSceneMetaData_* m_scenesToEnable;
        struct HashSet_1_RuntimeSceneMetaData_* m_scenesToReady;
        struct List_1_SceneManagerScene_* m_enablingScenes;
        struct List_1_System_Int32_* m_quadTreeQueryExtrapolatedPos;
        bool m_scenesIsInsideBoundsCacheCleared;
        struct ScenesManagerPrediction* m_prediction;
        bool UtilityUseBoundsDistance;
        bool UtilityUsePredictedBoundsDistance;
        bool UtilityUseHops;
        bool UtilityUsePositionInBounds;
        bool UtilityUsePredictedPositionInBounds;
        int32_t m_updateTypeIndex;
        bool m_timeSliceUtilityUpdatePrevState;
        bool m_reset;
        int32_t m_activeCurrentListIdx;
        int32_t m_activeUpdateIdx;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array* m_utilityActiveScenesLists;
        int32_t m_currentSceneHash;
        int32_t m_nearbyCurrentListIdx;
        int32_t m_nearbyUpdateIdx;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array* m_utilityNearbyScenesLists;
        struct List_1_RuntimeSceneMetaData_* m_scenesToLoadByUtility;
        struct List_1_RuntimeSceneMetaData_* m_previousUtilityScenes;
        struct NearbySceneData empty;
    };

    struct ScenesManagerBehaviourUtility {
        struct ScenesManagerBehaviourUtility__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviourUtility__Fields fields;
    };

    struct __declspec(align(8)) ScenesManagerPrediction__Fields {
        struct ScenesManagerContext* m_context;
        struct Vector2 _CurrentCameraTargetPositionExtrapolated_k__BackingField;
        struct Vector2 _CurrentCameraTargetPositionExtrapolatedShort_k__BackingField;
        struct Vector2 _CurrentCameraTargetPositionUnstable_k__BackingField;
        struct Vector2 _CurrentCameraTargetPositionShortUnstable_k__BackingField;
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array* m_updateJobs;
    };

    struct ScenesManagerPrediction {
        struct ScenesManagerPrediction__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerPrediction__Fields fields;
    };

    enum class ScenesManagerPrediction_UpdatePositionType__Enum : int32_t {
        Extrapolated = 0x00000000,
        ExtrapolatedShort = 0x00000001,
        Unstable = 0x00000002,
        UnstableShort = 0x00000003,
    };

    struct ScenesManagerPrediction_UpdatePositionType__Enum__Boxed {
        struct ScenesManagerPrediction_UpdatePositionType__Enum__Class* klass;
        MonitorData* monitor;
        ScenesManagerPrediction_UpdatePositionType__Enum value;
    };

    enum class ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum : int32_t {
        Finished = 0x00000000,
        IterationStart = 0x00000001,
        IterationContinuation = 0x00000002,
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum__Boxed {
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum__Class* klass;
        MonitorData* monitor;
        ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum value;
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask {
        struct ScenesManagerPrediction* owner;
        struct Color debugColor;
        ScenesManagerPrediction_UpdatePositionType__Enum updateType;

        ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum state;

        int32_t iteration;
        struct Vector3 start;
        struct Vector3 target;
        float distanceTravelled;
        struct RaycastHit hitInfo;
        bool horizontal;
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Boxed {
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask fields;
    };

    struct __declspec(align(8)) AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Fields {
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask m_task;
        bool m_isQueued;
        struct String* _JobName_k__BackingField;
        float _CustomTimeBudget_k__BackingField;
        float _EnqueuedTime_k__BackingField;
        float _AvailableBudget_k__BackingField;
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_ {
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Class* klass;
        MonitorData* monitor;
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Fields fields;
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array {
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask_* vector[32];
    };

    struct __declspec(align(8)) List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Fields {
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ {
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Class* klass;
        MonitorData* monitor;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Fields fields;
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData {
        struct RuntimeSceneMetaData* scene;
        struct NearbySceneData sceneData;
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__Boxed {
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__Class* klass;
        MonitorData* monitor;
        struct ScenesManagerBehaviourUtility_SceneMetaAndData fields;
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array {
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ScenesManagerBehaviourUtility_SceneMetaAndData vector[32];
    };

    struct IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData_ {
        struct IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Class* klass;
        MonitorData* monitor;
    };

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array {
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData_* vector[32];
    };

    struct ScenesManagerPrediction_UpdatePositionType__Enum__VTable {
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

    struct ScenesManagerPrediction_UpdatePositionType__Enum__StaticFields {
    };

    struct ScenesManagerPrediction_UpdatePositionType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerPrediction_UpdatePositionType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerPrediction_UpdatePositionType__Enum__VTable vtable;
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum__VTable {
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

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum__StaticFields {
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask_State__Enum__VTable vtable;
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_IsFinished;
        VirtualInvokeData Update;
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask__StaticFields {
    };

    struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerPrediction_UpdateExtrapolatedPositionTask__VTable vtable;
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnUpdateBeat;
        VirtualInvokeData Pause;
        VirtualInvokeData Resume;
        VirtualInvokeData OnJobFinished;
        VirtualInvokeData get_IsFinished;
        VirtualInvokeData get_JobName;
        VirtualInvokeData get_TimesliceJobOwnerName;
        VirtualInvokeData get_CustomTimeBudget;
        VirtualInvokeData set_CustomTimeBudget;
        VirtualInvokeData get_ContextualDebugData;
        VirtualInvokeData get_EnqueuedTime;
        VirtualInvokeData set_EnqueuedTime;
        VirtualInvokeData get_AvailableBudget;
        VirtualInvokeData set_AvailableBudget;
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___StaticFields {
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___VTable vtable;
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__VTable {
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__StaticFields {
    };

    struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AllocFreeTimeSlicedJob_1_ScenesManagerPrediction_UpdateExtrapolatedPositionTask___Array__VTable vtable;
    };

    struct ScenesManagerPrediction__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ScenesManagerPrediction__StaticFields {
    };

    struct ScenesManagerPrediction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerPrediction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerPrediction__VTable vtable;
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__StaticFields {
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__VTable vtable;
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array__VTable {
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array__StaticFields {
    };

    struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array__VTable vtable;
    };

    struct IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData___StaticFields {
    };

    struct IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_ScenesManagerBehaviourUtility_SceneMetaAndData___VTable vtable;
    };

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___VTable {
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

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___StaticFields {
        struct ScenesManagerBehaviourUtility_SceneMetaAndData__Array* _emptyArray;
    };

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___VTable vtable;
    };

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__VTable {
    };

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__StaticFields {
    };

    struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ScenesManagerBehaviourUtility_SceneMetaAndData___Array__VTable vtable;
    };

    struct ScenesManagerBehaviourUtility__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_SceneOperationsEnable;
        VirtualInvokeData get_SceneOperationsLoad;
        VirtualInvokeData get_SceneOperationsUnload;
        VirtualInvokeData Initialize;
        VirtualInvokeData Reset;
        VirtualInvokeData UpdatePosition;
        VirtualInvokeData SetTargetPosition;
        VirtualInvokeData Initialize_1;
        VirtualInvokeData Update;
        VirtualInvokeData SetTargetPosition_1;
        VirtualInvokeData Reset_1;
        VirtualInvokeData FindScenesToUnload;
        VirtualInvokeData FindUneededScenesToUnload;
        VirtualInvokeData get_SceneOperationsEnable_1;
        VirtualInvokeData get_SceneOperationsLoad_1;
        VirtualInvokeData get_SceneOperationsUnload_1;
        VirtualInvokeData get_PredictedTargetPosition;
        VirtualInvokeData get_CurrentUpdateType;
    };

    struct ScenesManagerBehaviourUtility__StaticFields {
        bool OptimizedUpdate;
        bool OptimizedPath;
        bool TimeSliceUtilityUpdate;
    };

    struct ScenesManagerBehaviourUtility__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ScenesManagerBehaviourUtility__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ScenesManagerBehaviourUtility__VTable vtable;
    };

} // namespace app
