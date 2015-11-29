#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MultiTargetUIView
struct MultiTargetUIView_t7_29;
// System.Action
struct Action_t4_11;

#include "AssemblyU2DCSharp_ISampleAppUIEventHandler.h"

// MultiTargetUIEventHandler
struct  MultiTargetUIEventHandler_t7_28  : public ISampleAppUIEventHandler_t7_10
{
	// MultiTargetUIView MultiTargetUIEventHandler::mView
	MultiTargetUIView_t7_29 * ___mView_2;
	// System.Action MultiTargetUIEventHandler::CloseView
	Action_t4_11 * ___CloseView_4;
	// System.Action MultiTargetUIEventHandler::GoToAboutPage
	Action_t4_11 * ___GoToAboutPage_5;
};
struct MultiTargetUIEventHandler_t7_28_StaticFields{
	// System.Boolean MultiTargetUIEventHandler::sExtendedTrackingIsEnabled
	bool ___sExtendedTrackingIsEnabled_3;
};
