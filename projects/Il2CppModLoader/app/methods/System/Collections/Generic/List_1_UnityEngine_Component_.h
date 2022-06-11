#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_UnityEngine_Component_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Component_1 *, get_Item, (app::List_1_UnityEngine_Component_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047503E8, List_1_UnityEngine_Component__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04756238, List_1_UnityEngine_Component__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1EFE0, int32_t, RemoveAll, (app::List_1_UnityEngine_Component_ * this_ptr, app::Predicate_1_UnityEngine_Component_ * match))
    IL2CPP_REGISTER_METHODINFO(0x04793100, List_1_UnityEngine_Component__RemoveAll__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04751C50, List_1_UnityEngine_Component___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_UnityEngine_Component_ * this_ptr, app::Component_1 * item))
    IL2CPP_REGISTER_METHODINFO(0x0471AD90, List_1_UnityEngine_Component__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, (app::List_1_UnityEngine_Component_ * this_ptr, app::IEnumerable_1_UnityEngine_Component_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x047980D0, List_1_UnityEngine_Component___ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_UnityEngine_Component_ * this_ptr, app::Component_1 * item))
    IL2CPP_REGISTER_METHODINFO(0x0470E188, List_1_UnityEngine_Component__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_UnityEngine_Component_, GetEnumerator, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C1F0, List_1_UnityEngine_Component__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475BF88, List_1_UnityEngine_Component__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_3, (app::List_1_UnityEngine_Component_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04781440, List_1_UnityEngine_Component___ctor_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_UnityEngine_Component_ * this_ptr, app::Comparison_1_UnityEngine_Component_ * comparison))
    IL2CPP_REGISTER_METHODINFO(0x0476F310, List_1_UnityEngine_Component__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEF0, app::Component_1__Array *, ToArray, (app::List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474C898, List_1_UnityEngine_Component__ToArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E9020, void, AddRange, (app::List_1_UnityEngine_Component_ * this_ptr, app::IEnumerable_1_UnityEngine_Component_ * collection))
    IL2CPP_REGISTER_METHODINFO(0x047074A8, List_1_UnityEngine_Component__AddRange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_UnityEngine_Component_ * this_ptr, app::Component_1 * item))
    IL2CPP_REGISTER_METHODINFO(0x0478A3B0, List_1_UnityEngine_Component__Contains__MethodInfo)
}