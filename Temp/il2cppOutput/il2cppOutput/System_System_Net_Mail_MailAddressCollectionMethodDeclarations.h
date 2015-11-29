#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t2_295;
// System.String
struct String_t;
// System.Net.Mail.MailAddress
struct MailAddress_t2_294;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.MailAddressCollection::.ctor()
extern "C" void MailAddressCollection__ctor_m2_2299 (MailAddressCollection_t2_295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::Add(System.String)
extern "C" void MailAddressCollection_Add_m2_2300 (MailAddressCollection_t2_295 * __this, String_t* ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::InsertItem(System.Int32,System.Net.Mail.MailAddress)
extern "C" void MailAddressCollection_InsertItem_m2_2301 (MailAddressCollection_t2_295 * __this, int32_t ___index, MailAddress_t2_294 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddressCollection::SetItem(System.Int32,System.Net.Mail.MailAddress)
extern "C" void MailAddressCollection_SetItem_m2_2302 (MailAddressCollection_t2_295 * __this, int32_t ___index, MailAddress_t2_294 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddressCollection::ToString()
extern "C" String_t* MailAddressCollection_ToString_m2_2303 (MailAddressCollection_t2_295 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
