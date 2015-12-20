#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t2_576;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t2_577;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1_714;
// System.Net.HttpConnection
struct HttpConnection_t2_569;
// System.String
struct String_t;
// System.Net.HttpListener
struct HttpListener_t2_572;

#include "mscorlib_System_Object.h"

// System.Net.HttpListenerContext
struct  HttpListenerContext_t2_515  : public Object_t
{
	// System.Net.HttpListenerRequest System.Net.HttpListenerContext::request
	HttpListenerRequest_t2_576 * ___request_0;
	// System.Net.HttpListenerResponse System.Net.HttpListenerContext::response
	HttpListenerResponse_t2_577 * ___response_1;
	// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::user
	Object_t * ___user_2;
	// System.Net.HttpConnection System.Net.HttpListenerContext::cnc
	HttpConnection_t2_569 * ___cnc_3;
	// System.String System.Net.HttpListenerContext::error
	String_t* ___error_4;
	// System.Int32 System.Net.HttpListenerContext::err_status
	int32_t ___err_status_5;
	// System.Net.HttpListener System.Net.HttpListenerContext::Listener
	HttpListener_t2_572 * ___Listener_6;
};
