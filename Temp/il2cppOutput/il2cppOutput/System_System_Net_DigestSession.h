#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1_99;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1_595;
// System.Net.DigestHeaderParser
struct DigestHeaderParser_t2_528;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_DateTime.h"

// System.Net.DigestSession
struct  DigestSession_t2_529  : public Object_t
{
	// System.DateTime System.Net.DigestSession::lastUse
	DateTime_t1_128  ___lastUse_1;
	// System.Int32 System.Net.DigestSession::_nc
	int32_t ____nc_2;
	// System.Security.Cryptography.HashAlgorithm System.Net.DigestSession::hash
	HashAlgorithm_t1_595 * ___hash_3;
	// System.Net.DigestHeaderParser System.Net.DigestSession::parser
	DigestHeaderParser_t2_528 * ___parser_4;
	// System.String System.Net.DigestSession::_cnonce
	String_t* ____cnonce_5;
};
struct DigestSession_t2_529_StaticFields{
	// System.Security.Cryptography.RandomNumberGenerator System.Net.DigestSession::rng
	RandomNumberGenerator_t1_99 * ___rng_0;
};
