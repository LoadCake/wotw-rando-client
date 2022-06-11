#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::DefaultCertificatePolicy {
    IL2CPP_REGISTER_METHOD(0x01EAC660, bool, CheckValidationResult, (app::DefaultCertificatePolicy * this_ptr, app::ServicePoint * point, app::X509Certificate_1 * certificate, app::WebRequest * request, int32_t certificate_problem))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DefaultCertificatePolicy * this_ptr))
}