#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.Security.AccessControl.AccessRule>
struct List_1_t1_564;
// System.Collections.Generic.List`1<System.Security.AccessControl.AuditRule>
struct List_1_t1_565;

#include "mscorlib_System_Security_AccessControl_ObjectSecurity.h"

// System.Security.AccessControl.CommonObjectSecurity
struct  CommonObjectSecurity_t1_562  : public ObjectSecurity_t1_563
{
	// System.Collections.Generic.List`1<System.Security.AccessControl.AccessRule> System.Security.AccessControl.CommonObjectSecurity::access_rules
	List_1_t1_564 * ___access_rules_2;
	// System.Collections.Generic.List`1<System.Security.AccessControl.AuditRule> System.Security.AccessControl.CommonObjectSecurity::audit_rules
	List_1_t1_565 * ___audit_rules_3;
};
