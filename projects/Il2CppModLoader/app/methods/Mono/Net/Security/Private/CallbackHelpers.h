#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Mono::Net::Security::Private::CallbackHelpers {
    IL2CPP_REGISTER_METHOD(0x02185570, app::MonoRemoteCertificateValidationCallback *, PublicToMono, (app::RemoteCertificateValidationCallback * callback))
    IL2CPP_REGISTER_METHOD(0x021857B0, app::RemoteCertificateValidationCallback *, MonoToPublic, (app::MonoRemoteCertificateValidationCallback * callback))
    IL2CPP_REGISTER_METHOD(0x021859F0, app::LocalCertSelectionCallback *, MonoToInternal, (app::MonoLocalCertificateSelectionCallback * callback))
}