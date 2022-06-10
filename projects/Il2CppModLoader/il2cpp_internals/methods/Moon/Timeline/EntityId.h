#include <interception_macros.h>

namespace app::methods::Moon::Timeline::EntityId {
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, __ctor, (app::EntityId__Boxed * this_ptr, int32_t id));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, get_Value, (app::EntityId__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x0012EDC0, bool, Equals_1, (app::EntityId__Boxed * this_ptr, app::EntityId other));
    IL2CPP_REGISTER_METHOD(0x001C0CE0, bool, Equals_2, (app::EntityId__Boxed * this_ptr, app::Object * obj));
    IL2CPP_REGISTER_METHOD(0x0010E170, int32_t, GetHashCode, (app::EntityId__Boxed * this_ptr));
    IL2CPP_REGISTER_METHOD(0x015F7650, bool, op_Equality, (app::EntityId lhs, app::EntityId rhs));
    IL2CPP_REGISTER_METHOD(0x015F7660, bool, op_Inequality, (app::EntityId lhs, app::EntityId rhs));
    IL2CPP_REGISTER_METHOD(0x006CE970, int32_t, op_Explicit, (app::EntityId id));
    IL2CPP_REGISTER_METHOD(0x00597B10, app::EntityId, get_Parent, ());
    IL2CPP_REGISTER_METHOD(0x01BB88F0, app::EntityId, get_Nothing, ());
    IL2CPP_REGISTER_METHOD(0x006CE970, app::EntityId, From, (int32_t id));
    IL2CPP_REGISTER_METHOD(0x001311C0, app::String *, ToString, (app::EntityId__Boxed * this_ptr));
    bool operator == (app::EntityId lhs, app::EntityId rhs) {
        return op_Equality(lhs, rhs);
    }
    bool operator != (app::EntityId lhs, app::EntityId rhs) {
        return op_Inequality(lhs, rhs);
    }
}
