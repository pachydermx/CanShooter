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

// System.ComponentModel.BackgroundWorker
struct BackgroundWorker_t2_62;
// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t2_63;
// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t2_64;
// System.ComponentModel.RunWorkerCompletedEventHandler
struct RunWorkerCompletedEventHandler_t2_65;
// System.Object
struct Object_t;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2_58;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_827;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t2_101;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t2_140;
// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t2_150;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.BackgroundWorker::.ctor()
extern "C" void BackgroundWorker__ctor_m2_469 (BackgroundWorker_t2_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C" void BackgroundWorker_add_DoWork_m2_470 (BackgroundWorker_t2_62 * __this, DoWorkEventHandler_t2_63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_DoWork(System.ComponentModel.DoWorkEventHandler)
extern "C" void BackgroundWorker_remove_DoWork_m2_471 (BackgroundWorker_t2_62 * __this, DoWorkEventHandler_t2_63 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C" void BackgroundWorker_add_ProgressChanged_m2_472 (BackgroundWorker_t2_62 * __this, ProgressChangedEventHandler_t2_64 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_ProgressChanged(System.ComponentModel.ProgressChangedEventHandler)
extern "C" void BackgroundWorker_remove_ProgressChanged_m2_473 (BackgroundWorker_t2_62 * __this, ProgressChangedEventHandler_t2_64 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::add_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C" void BackgroundWorker_add_RunWorkerCompleted_m2_474 (BackgroundWorker_t2_62 * __this, RunWorkerCompletedEventHandler_t2_65 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::remove_RunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventHandler)
extern "C" void BackgroundWorker_remove_RunWorkerCompleted_m2_475 (BackgroundWorker_t2_62 * __this, RunWorkerCompletedEventHandler_t2_65 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_CancellationPending()
extern "C" bool BackgroundWorker_get_CancellationPending_m2_476 (BackgroundWorker_t2_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_IsBusy()
extern "C" bool BackgroundWorker_get_IsBusy_m2_477 (BackgroundWorker_t2_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerReportsProgress()
extern "C" bool BackgroundWorker_get_WorkerReportsProgress_m2_478 (BackgroundWorker_t2_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerReportsProgress(System.Boolean)
extern "C" void BackgroundWorker_set_WorkerReportsProgress_m2_479 (BackgroundWorker_t2_62 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.BackgroundWorker::get_WorkerSupportsCancellation()
extern "C" bool BackgroundWorker_get_WorkerSupportsCancellation_m2_480 (BackgroundWorker_t2_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::set_WorkerSupportsCancellation(System.Boolean)
extern "C" void BackgroundWorker_set_WorkerSupportsCancellation_m2_481 (BackgroundWorker_t2_62 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CancelAsync()
extern "C" void BackgroundWorker_CancelAsync_m2_482 (BackgroundWorker_t2_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32)
extern "C" void BackgroundWorker_ReportProgress_m2_483 (BackgroundWorker_t2_62 * __this, int32_t ___percentProgress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ReportProgress(System.Int32,System.Object)
extern "C" void BackgroundWorker_ReportProgress_m2_484 (BackgroundWorker_t2_62 * __this, int32_t ___percentProgress, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync()
extern "C" void BackgroundWorker_RunWorkerAsync_m2_485 (BackgroundWorker_t2_62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::ProcessWorker(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C" void BackgroundWorker_ProcessWorker_m2_486 (BackgroundWorker_t2_62 * __this, Object_t * ___argument, AsyncOperation_t2_58 * ___async, SendOrPostCallback_t1_827 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::CompleteWorker(System.Object)
extern "C" void BackgroundWorker_CompleteWorker_m2_487 (BackgroundWorker_t2_62 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::RunWorkerAsync(System.Object)
extern "C" void BackgroundWorker_RunWorkerAsync_m2_488 (BackgroundWorker_t2_62 * __this, Object_t * ___argument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnDoWork(System.ComponentModel.DoWorkEventArgs)
extern "C" void BackgroundWorker_OnDoWork_m2_489 (BackgroundWorker_t2_62 * __this, DoWorkEventArgs_t2_101 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnProgressChanged(System.ComponentModel.ProgressChangedEventArgs)
extern "C" void BackgroundWorker_OnProgressChanged_m2_490 (BackgroundWorker_t2_62 * __this, ProgressChangedEventArgs_t2_140 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::OnRunWorkerCompleted(System.ComponentModel.RunWorkerCompletedEventArgs)
extern "C" void BackgroundWorker_OnRunWorkerCompleted_m2_491 (BackgroundWorker_t2_62 * __this, RunWorkerCompletedEventArgs_t2_150 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<ReportProgress>m__0(System.Object)
extern "C" void BackgroundWorker_U3CReportProgressU3Em__0_m2_492 (BackgroundWorker_t2_62 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker::<CompleteWorker>m__1(System.Object)
extern "C" void BackgroundWorker_U3CCompleteWorkerU3Em__1_m2_493 (BackgroundWorker_t2_62 * __this, Object_t * ___darg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
