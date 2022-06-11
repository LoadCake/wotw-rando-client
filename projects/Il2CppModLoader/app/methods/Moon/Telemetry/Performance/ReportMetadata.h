#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::ReportMetadata {
    IL2CPP_REGISTER_METHOD(0x00E39DE0, void, ctor_1, (app::ReportMetadata * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39FB0, void, ctor_2, (app::ReportMetadata * this_ptr, app::ReportMetadata * meta))
    IL2CPP_REGISTER_METHOD(0x00E3A1E0, void, AddDataBundle, (app::ReportMetadata * this_ptr, app::String * bundle_path))
    IL2CPP_REGISTER_METHOD(0x00E3A330, void, AddDataEntry, (app::ReportMetadata * this_ptr, app::DataBundleEntry * entry))
    IL2CPP_REGISTER_METHOD(0x00E3A410, void, Copy, (app::ReportMetadata * this_ptr, app::ReportMetadata * meta))
    IL2CPP_REGISTER_METHOD(0x00E3A4C0, app::DateTime, get_RevisionDate, (app::ReportMetadata * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3A700, bool, Equals_1, (app::ReportMetadata * this_ptr, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x00E3A8C0, bool, Equals_2, (app::ReportMetadata * this_ptr, app::ReportMetadata * other))
    IL2CPP_REGISTER_METHOD(0x00E3A980, int32_t, GetHashCode, (app::ReportMetadata * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::DataBundle *, get_DataBundle, (app::ReportMetadata * this_ptr))
}