#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::MS::Internal::Xml::Linq::ComponentModel::XPropertyDescriptor_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019F8980, app::Type *, get_ComponentType, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsReadOnly, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8A30, app::Type *, get_PropertyType, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_SupportsChangeEvents, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8960, void, ctor, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::String * name))
    IL2CPP_REGISTER_METHOD(0x019F8AE0, void, AddValueChanged, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * component, app::EventHandler * handler))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanResetValue, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x019F8E00, void, RemoveValueChanged, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * component, app::EventHandler * handler))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResetValue, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetValue, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * component, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldSerializeValue, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * component))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnChanged, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * args))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnChanging, (app::XPropertyDescriptor_2_System_Object_System_Object_ * this_ptr, app::Object * sender, app::XObjectChangeEventArgs * args))
}