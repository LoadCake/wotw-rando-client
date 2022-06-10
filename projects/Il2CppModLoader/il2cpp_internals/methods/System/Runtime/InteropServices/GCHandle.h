#include <interception_macros.h>

namespace app::methods::System::Runtime::InteropServices::GCHandle {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor_1, (app::GCHandle__Boxed * this_ptr, void * h));
    IL2CPP_REGISTER_METHOD(0x0018F2D0, void, __ctor_2, (app::GCHandle__Boxed * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0018F300, void, __ctor_3, (app::GCHandle__Boxed * this_ptr, app::Object * value, app::GCHandleType__Enum type));
    IL2CPP_REGISTER_METHOD(0x0018F330, bool, get_IsAllocated, (app::GCHandle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0018F340, app::Object *, get_Target, (app::GCHandle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x04775D58, GCHandle_get_Target__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x0018F350, void, set_Target, (app::GCHandle__Boxed * this_ptr, app::Object * value));
    IL2CPP_REGISTER_METHOD(0x0018F360, void *, AddrOfPinnedObject, (app::GCHandle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470E710, GCHandle_AddrOfPinnedObject__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A947F0, app::GCHandle, Alloc_1, (app::Object * value));
    IL2CPP_REGISTER_METHOD(0x01A94800, app::GCHandle, Alloc_2, (app::Object * value, app::GCHandleType__Enum type));
    IL2CPP_REGISTER_METHOD(0x0018F370, void, Free, (app::GCHandle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHODINFO(0x0470F148, GCHandle_Free__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x01A948E0, void *, op_Explicit_1, (app::GCHandle value));
    IL2CPP_REGISTER_METHOD(0x01A948F0, app::GCHandle, op_Explicit_2, (void * value));
    IL2CPP_REGISTER_METHODINFO(0x0478FDE8, GCHandle_op_Explicit_1__MethodInfo);
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckCurrentDomain, (int32_t handle));
    IL2CPP_REGISTER_METHOD(0x01A949A0, app::Object *, GetTarget, (int32_t handle));
    IL2CPP_REGISTER_METHOD(0x01A949B0, int32_t, GetTargetHandle, (app::Object * obj, int32_t handle, app::GCHandleType__Enum type));
    IL2CPP_REGISTER_METHOD(0x01A949C0, void, FreeHandle, (int32_t handle));
    IL2CPP_REGISTER_METHOD(0x01A949D0, void *, GetAddrOfPinnedObject, (int32_t handle));
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::GCHandle a, app::GCHandle b));
    IL2CPP_REGISTER_METHOD(0x0018F380, bool, Equals, (app::GCHandle__Boxed * this_ptr, app::Object * o));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::GCHandle__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x01A94B00, app::GCHandle, FromIntPtr, (void * value));
    IL2CPP_REGISTER_METHOD(0x01A948E0, void *, ToIntPtr, (app::GCHandle value));
    bool operator == (app::GCHandle a, app::GCHandle b) {
        return op_Equality(a, b);
    }
}
