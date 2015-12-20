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

// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t2_197;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.Text.Encoding
struct Encoding_t1_227;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Security.SecureString
struct SecureString_t1_665;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Diagnostics_ProcessWindowStyle.h"

// System.Void System.Diagnostics.ProcessStartInfo::.ctor()
extern "C" void ProcessStartInfo__ctor_m2_1615 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::.ctor(System.String)
extern "C" void ProcessStartInfo__ctor_m2_1616 (ProcessStartInfo_t2_197 * __this, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::.ctor(System.String,System.String)
extern "C" void ProcessStartInfo__ctor_m2_1617 (ProcessStartInfo_t2_197 * __this, String_t* ___filename, String_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::.cctor()
extern "C" void ProcessStartInfo__cctor_m2_1618 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Arguments()
extern "C" String_t* ProcessStartInfo_get_Arguments_m2_1619 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_Arguments(System.String)
extern "C" void ProcessStartInfo_set_Arguments_m2_1620 (ProcessStartInfo_t2_197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_CreateNoWindow()
extern "C" bool ProcessStartInfo_get_CreateNoWindow_m2_1621 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_CreateNoWindow(System.Boolean)
extern "C" void ProcessStartInfo_set_CreateNoWindow_m2_1622 (ProcessStartInfo_t2_197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::get_EnvironmentVariables()
extern "C" StringDictionary_t2_33 * ProcessStartInfo_get_EnvironmentVariables_m2_1623 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_HaveEnvVars()
extern "C" bool ProcessStartInfo_get_HaveEnvVars_m2_1624 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_ErrorDialog()
extern "C" bool ProcessStartInfo_get_ErrorDialog_m2_1625 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_ErrorDialog(System.Boolean)
extern "C" void ProcessStartInfo_set_ErrorDialog_m2_1626 (ProcessStartInfo_t2_197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.ProcessStartInfo::get_ErrorDialogParentHandle()
extern "C" IntPtr_t ProcessStartInfo_get_ErrorDialogParentHandle_m2_1627 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_ErrorDialogParentHandle(System.IntPtr)
extern "C" void ProcessStartInfo_set_ErrorDialogParentHandle_m2_1628 (ProcessStartInfo_t2_197 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_FileName()
extern "C" String_t* ProcessStartInfo_get_FileName_m2_1629 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_FileName(System.String)
extern "C" void ProcessStartInfo_set_FileName_m2_1630 (ProcessStartInfo_t2_197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardError()
extern "C" bool ProcessStartInfo_get_RedirectStandardError_m2_1631 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardError(System.Boolean)
extern "C" void ProcessStartInfo_set_RedirectStandardError_m2_1632 (ProcessStartInfo_t2_197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardInput()
extern "C" bool ProcessStartInfo_get_RedirectStandardInput_m2_1633 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardInput(System.Boolean)
extern "C" void ProcessStartInfo_set_RedirectStandardInput_m2_1634 (ProcessStartInfo_t2_197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardOutput()
extern "C" bool ProcessStartInfo_get_RedirectStandardOutput_m2_1635 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardOutput(System.Boolean)
extern "C" void ProcessStartInfo_set_RedirectStandardOutput_m2_1636 (ProcessStartInfo_t2_197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardErrorEncoding()
extern "C" Encoding_t1_227 * ProcessStartInfo_get_StandardErrorEncoding_m2_1637 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_StandardErrorEncoding(System.Text.Encoding)
extern "C" void ProcessStartInfo_set_StandardErrorEncoding_m2_1638 (ProcessStartInfo_t2_197 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardOutputEncoding()
extern "C" Encoding_t1_227 * ProcessStartInfo_get_StandardOutputEncoding_m2_1639 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_StandardOutputEncoding(System.Text.Encoding)
extern "C" void ProcessStartInfo_set_StandardOutputEncoding_m2_1640 (ProcessStartInfo_t2_197 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_UseShellExecute()
extern "C" bool ProcessStartInfo_get_UseShellExecute_m2_1641 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_UseShellExecute(System.Boolean)
extern "C" void ProcessStartInfo_set_UseShellExecute_m2_1642 (ProcessStartInfo_t2_197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Verb()
extern "C" String_t* ProcessStartInfo_get_Verb_m2_1643 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_Verb(System.String)
extern "C" void ProcessStartInfo_set_Verb_m2_1644 (ProcessStartInfo_t2_197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.ProcessStartInfo::get_Verbs()
extern "C" StringU5BU5D_t1_206* ProcessStartInfo_get_Verbs_m2_1645 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ProcessWindowStyle System.Diagnostics.ProcessStartInfo::get_WindowStyle()
extern "C" int32_t ProcessStartInfo_get_WindowStyle_m2_1646 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_WindowStyle(System.Diagnostics.ProcessWindowStyle)
extern "C" void ProcessStartInfo_set_WindowStyle_m2_1647 (ProcessStartInfo_t2_197 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_WorkingDirectory()
extern "C" String_t* ProcessStartInfo_get_WorkingDirectory_m2_1648 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_WorkingDirectory(System.String)
extern "C" void ProcessStartInfo_set_WorkingDirectory_m2_1649 (ProcessStartInfo_t2_197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessStartInfo::get_LoadUserProfile()
extern "C" bool ProcessStartInfo_get_LoadUserProfile_m2_1650 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_LoadUserProfile(System.Boolean)
extern "C" void ProcessStartInfo_set_LoadUserProfile_m2_1651 (ProcessStartInfo_t2_197 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_UserName()
extern "C" String_t* ProcessStartInfo_get_UserName_m2_1652 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_UserName(System.String)
extern "C" void ProcessStartInfo_set_UserName_m2_1653 (ProcessStartInfo_t2_197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessStartInfo::get_Domain()
extern "C" String_t* ProcessStartInfo_get_Domain_m2_1654 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_Domain(System.String)
extern "C" void ProcessStartInfo_set_Domain_m2_1655 (ProcessStartInfo_t2_197 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecureString System.Diagnostics.ProcessStartInfo::get_Password()
extern "C" SecureString_t1_665 * ProcessStartInfo_get_Password_m2_1656 (ProcessStartInfo_t2_197 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessStartInfo::set_Password(System.Security.SecureString)
extern "C" void ProcessStartInfo_set_Password_m2_1657 (ProcessStartInfo_t2_197 * __this, SecureString_t1_665 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
