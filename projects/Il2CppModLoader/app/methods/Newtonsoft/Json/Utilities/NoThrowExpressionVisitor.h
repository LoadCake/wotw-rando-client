#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Newtonsoft::Json::Utilities::NoThrowExpressionVisitor {
    IL2CPP_REGISTER_METHOD(0x0301EB10, app::Expression *, VisitConditional, (app::NoThrowExpressionVisitor * this_ptr, app::ConditionalExpression * node))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::NoThrowExpressionVisitor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0301EC70, void, cctor, ())
}