#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MultiTargetUIView
struct MultiTargetUIView_t8_32;
// System.Action
struct Action_t4_11;

#include "AssemblyU2DCSharp_ISampleAppUIEventHandler.h"

// MultiTargetUIEventHandler
struct  MultiTargetUIEventHandler_t8_31  : public ISampleAppUIEventHandler_t8_11
{
	// MultiTargetUIView MultiTargetUIEventHandler::mView
	MultiTargetUIView_t8_32 * ___mView_2;
	// System.Action MultiTargetUIEventHandler::CloseView
	Action_t4_11 * ___CloseView_4;
	// System.Action MultiTargetUIEventHandler::GoToAboutPage
	Action_t4_11 * ___GoToAboutPage_5;
};
struct MultiTargetUIEventHandler_t8_31_StaticFields{
	// System.Boolean MultiTargetUIEventHandler::sExtendedTrackingIsEnabled
	bool ___sExtendedTrackingIsEnabled_3;
};
