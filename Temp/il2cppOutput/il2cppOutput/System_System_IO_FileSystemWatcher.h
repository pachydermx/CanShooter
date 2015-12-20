#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t2_199;
// System.IO.SearchPattern2
struct SearchPattern2_t2_248;
// System.IO.IFileWatcher
struct IFileWatcher_t2_252;
// System.Object
struct Object_t;
// System.IO.FileSystemEventHandler
struct FileSystemEventHandler_t2_249;
// System.IO.ErrorEventHandler
struct ErrorEventHandler_t2_250;
// System.IO.RenamedEventHandler
struct RenamedEventHandler_t2_251;

#include "System_System_ComponentModel_Component.h"
#include "System_System_IO_NotifyFilters.h"
#include "System_System_IO_WaitForChangedResult.h"

// System.IO.FileSystemWatcher
struct  FileSystemWatcher_t2_235  : public Component_t2_77
{
	// System.Boolean System.IO.FileSystemWatcher::enableRaisingEvents
	bool ___enableRaisingEvents_4;
	// System.String System.IO.FileSystemWatcher::filter
	String_t* ___filter_5;
	// System.Boolean System.IO.FileSystemWatcher::includeSubdirectories
	bool ___includeSubdirectories_6;
	// System.Int32 System.IO.FileSystemWatcher::internalBufferSize
	int32_t ___internalBufferSize_7;
	// System.IO.NotifyFilters System.IO.FileSystemWatcher::notifyFilter
	int32_t ___notifyFilter_8;
	// System.String System.IO.FileSystemWatcher::path
	String_t* ___path_9;
	// System.String System.IO.FileSystemWatcher::fullpath
	String_t* ___fullpath_10;
	// System.ComponentModel.ISynchronizeInvoke System.IO.FileSystemWatcher::synchronizingObject
	Object_t * ___synchronizingObject_11;
	// System.IO.WaitForChangedResult System.IO.FileSystemWatcher::lastData
	WaitForChangedResult_t2_247  ___lastData_12;
	// System.Boolean System.IO.FileSystemWatcher::waiting
	bool ___waiting_13;
	// System.IO.SearchPattern2 System.IO.FileSystemWatcher::pattern
	SearchPattern2_t2_248 * ___pattern_14;
	// System.Boolean System.IO.FileSystemWatcher::disposed
	bool ___disposed_15;
	// System.String System.IO.FileSystemWatcher::mangledFilter
	String_t* ___mangledFilter_16;
	// System.IO.FileSystemEventHandler System.IO.FileSystemWatcher::Changed
	FileSystemEventHandler_t2_249 * ___Changed_19;
	// System.IO.FileSystemEventHandler System.IO.FileSystemWatcher::Created
	FileSystemEventHandler_t2_249 * ___Created_20;
	// System.IO.FileSystemEventHandler System.IO.FileSystemWatcher::Deleted
	FileSystemEventHandler_t2_249 * ___Deleted_21;
	// System.IO.ErrorEventHandler System.IO.FileSystemWatcher::Error
	ErrorEventHandler_t2_250 * ___Error_22;
	// System.IO.RenamedEventHandler System.IO.FileSystemWatcher::Renamed
	RenamedEventHandler_t2_251 * ___Renamed_23;
};
struct FileSystemWatcher_t2_235_StaticFields{
	// System.IO.IFileWatcher System.IO.FileSystemWatcher::watcher
	Object_t * ___watcher_17;
	// System.Object System.IO.FileSystemWatcher::lockobj
	Object_t * ___lockobj_18;
};
