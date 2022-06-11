#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Net::CredentialCache_CredentialEnumerator {
    IL2CPP_REGISTER_METHOD(0x01EAAF30, void, ctor, (app::CredentialCache_CredentialEnumerator * this_ptr, app::CredentialCache * cache, app::Hashtable * table, app::Hashtable * host_table, int32_t version))
    IL2CPP_REGISTER_METHOD(0x01EAB0C0, app::Object *, IEnumerator_get_Current, (app::CredentialCache_CredentialEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047739D8, CredentialCache_CredentialEnumerator_System_Collections_IEnumerator_get_Current__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01EAB220, bool, IEnumerator_MoveNext, (app::CredentialCache_CredentialEnumerator * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A708, CredentialCache_CredentialEnumerator_System_Collections_IEnumerator_MoveNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00443280, void, IEnumerator_Reset, (app::CredentialCache_CredentialEnumerator * this_ptr))
}