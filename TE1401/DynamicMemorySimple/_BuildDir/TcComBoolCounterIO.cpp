// ****************** TcComBoolCounterIO.cpp *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.21.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.8.21.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#include "TcPch.h"
#pragma hdrstop

#include "TcComBoolCounterIO.h"

#ifdef EXT_MODE
#include "TcExtWork.h"
#endif

#include "count_and_invert_booleans_io_initialize.h"
#include "count_and_invert_booleans_io.h"
#include "count_and_invert_booleans_io_terminate.h"

#include "ObjClassFactory.h"
using namespace TcMgSdk;


///////////////////////////////////////////////////////////////////////////////
// Definitions
///////////////////////////////////////////////////////////////////////////////
#ifdef _DEBUG
#define new DEBUG_NEW
#endif
#if TC_BUILD<=4024
DEFINE_THIS_FILE()
#endif

///////////////////////////////////////////////////////////////////////////////
// CTcComBoolCounterIO specific globals
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// CTcComBoolCounterIO static members
///////////////////////////////////////////////////////////////////////////////
TcMatSim_ModuleGeneratorInfo CTcComBoolCounterIO::m_ModuleGeneratorInfo = {{23,2,0,2409890},{2,8,21,0}};


///////////////////////////////////////////////////////////////////////////////
// CTcComBoolCounterIO implementation
///////////////////////////////////////////////////////////////////////////////
BEGIN_INTERFACE_MAP(CTcComBoolCounterIO)
INTERFACE_ENTRY_ITCOMOBJECT()
	INTERFACE_ENTRY(IID_ITcPersist,ITcPersist)
	INTERFACE_ENTRY(IID_ITComObject,ITComObject)
	INTERFACE_ENTRY(IID_ITcWatchSource,ITcWatchSource)
	INTERFACE_ENTRY(IID_ITcCyclic,ITcCyclic)
	INTERFACE_ENTRY(IID_ITcPostCyclic,ITcPostCyclic)
	INTERFACE_ENTRY(IID_ITcADI,ITcADI)
	INTERFACE_ENTRY(IID_ITcObjParaAsync,ITcObjParaAsync)
	INTERFACE_ENTRY(IID_ITcBoolCounterIO,ITcBoolCounterIO)
END_INTERFACE_MAP()

IMPLEMENT_ITCWATCHSOURCE(CTcComBoolCounterIO)

BEGIN_OBJDATAAREA_MAP(CTcComBoolCounterIO)
	OBJDATAAREA_SPAN_PTR_SIZE_LOCK(0, 1, &(Outports.count), sizeof(Outports.count), 0, VarAccess(Access::Read))
END_OBJDATAAREA_MAP()

BEGIN_SETOBJPARA_MAP2(CTcComBoolCounterIO,TcMatSim::GeneratedTcCom)
	SETOBJPARA_DATAAREA_MAP()
	SETOBJPARA_VALUE(0x00000001, m_TraceLevelMax)
	SETOBJPARA_VALUE_LOCK(0x00000002, m_ModuleCaller, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::ReadWrite,Access::Read))
	SETOBJPARA_VALUE(0x00000003, m_CallerVerification)
	SETOBJPARA_VALUE_LOCK(0x00000004, m_StepSizeAdaptation, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::Read,Access::Read))
	SETOBJPARA_VALUE_LOCK(0x00000005, m_ExecutionSequence, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::ReadWrite,Access::Read))
	SETOBJPARA_VALUE(0x00000006, m_Execute)
	SETOBJPARA_VALUE_LOCK(0x00000007, m_AccessLockState, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::ReadWrite,Access::Read))
	SETOBJPARA_VALUE(0x00000008, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init))
	SETOBJPARA_VALUE(0x00000009, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update))
	SETOBJPARA_VALUE_DENIED(0x0000000a, m_ModuleBuildInfo)
	SETOBJPARA_VALUE_DENIED(0x0000000b, m_Initialized)
	SETOBJPARA_VALUE_DENIED(0x0000000c, m_ContextInfo.SkippedExecutionCount())
	SETOBJPARA_VALUE_DENIED(0x0000000d, GetLibraryInfo())
	SETOBJPARA_VALUE_DENIED(0x0000000e, GetModuleInfo())
	SETOBJPARA_VALUE_DENIED(0x0000000f, m_ModuleGeneratorInfo)
	SETOBJPARA_VALUE_DENIED(0x00000010, &m_ContextInfo[0].Execution.CycleCount)
	SETOBJPARA_VALUE_DENIED(0x00000011, &m_ContextInfo[0].Execution.ExceptionCount)
	SETOBJPARA_VALUE_DENIED(0x00000012, &m_ContextInfo[0].Execution.ActException)
END_SETOBJPARA_MAP2(TcMatSim::GeneratedTcCom)

BEGIN_GETOBJPARA_MAP2(CTcComBoolCounterIO,TcMatSim::GeneratedTcCom)
	GETOBJPARA_DATAAREA_MAP()
	GETOBJPARA_VALUE(0x00000001, m_TraceLevelMax)
	GETOBJPARA_VALUE(0x00000002, m_ModuleCaller)
	GETOBJPARA_VALUE(0x00000003, m_CallerVerification)
	GETOBJPARA_VALUE(0x00000004, m_StepSizeAdaptation)
	GETOBJPARA_VALUE(0x00000005, m_ExecutionSequence)
	GETOBJPARA_VALUE(0x00000006, m_Execute)
	GETOBJPARA_VALUE(0x00000007, m_AccessLockState)
	GETOBJPARA_VALUE(0x00000008, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init))
	GETOBJPARA_VALUE(0x00000009, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update))
	GETOBJPARA_VALUE(0x0000000a, m_ModuleBuildInfo)
	GETOBJPARA_VALUE(0x0000000b, m_Initialized)
	GETOBJPARA_VALUE(0x0000000c, m_ContextInfo.SkippedExecutionCount())
	GETOBJPARA_VALUE(0x0000000d, GetLibraryInfo())
	GETOBJPARA_VALUE(0x0000000e, GetModuleInfo())
	GETOBJPARA_VALUE(0x0000000f, m_ModuleGeneratorInfo)
	GETOBJPARA_PTR_SIZE(0x00000010, &m_ContextInfo[0].Execution.CycleCount, sizeof(m_ContextInfo[0].Execution.CycleCount))
	GETOBJPARA_PTR_SIZE(0x00000011, &m_ContextInfo[0].Execution.ExceptionCount, sizeof(m_ContextInfo[0].Execution.ExceptionCount))
	GETOBJPARA_PTR_SIZE(0x00000012, &m_ContextInfo[0].Execution.ActException, sizeof(m_ContextInfo[0].Execution.ActException))
END_GETOBJPARA_MAP2(TcMatSim::GeneratedTcCom)

BEGIN_OBJPARAWATCH_MAP2(CTcComBoolCounterIO)
	OBJPARAWATCH_DATAAREA_MAP()
	OBJPARAWATCH_VALUE(0x00000001, m_TraceLevelMax)
	OBJPARAWATCH_VALUE(0x00000002, m_ModuleCaller)
	OBJPARAWATCH_VALUE(0x00000003, m_CallerVerification)
	OBJPARAWATCH_VALUE(0x00000004, m_StepSizeAdaptation)
	OBJPARAWATCH_VALUE(0x00000005, m_ExecutionSequence)
	OBJPARAWATCH_VALUE(0x00000006, m_Execute)
	OBJPARAWATCH_VALUE(0x00000007, m_AccessLockState)
	OBJPARAWATCH_VALUE(0x00000008, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init))
	OBJPARAWATCH_VALUE(0x00000009, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update))
	OBJPARAWATCH_VALUE(0x0000000a, m_ModuleBuildInfo)
	OBJPARAWATCH_VALUE(0x0000000b, m_Initialized)
	OBJPARAWATCH_VALUE(0x0000000c, m_ContextInfo.SkippedExecutionCount())
	OBJPARAWATCH_VALUE(0x0000000d, GetLibraryInfo())
	OBJPARAWATCH_VALUE(0x0000000e, GetModuleInfo())
	OBJPARAWATCH_VALUE(0x0000000f, m_ModuleGeneratorInfo)
	OBJPARAWATCH_PTR_SIZE(0x00000010, &m_ContextInfo[0].Execution.CycleCount, sizeof(m_ContextInfo[0].Execution.CycleCount))
	OBJPARAWATCH_PTR_SIZE(0x00000011, &m_ContextInfo[0].Execution.ExceptionCount, sizeof(m_ContextInfo[0].Execution.ExceptionCount))
	OBJPARAWATCH_PTR_SIZE(0x00000012, &m_ContextInfo[0].Execution.ActException, sizeof(m_ContextInfo[0].Execution.ActException))
END_OBJPARAWATCH_MAP2(TcMatSim::GeneratedTcCom)

IMPLEMENT_ITCADI(CTcComBoolCounterIO)

IMPLEMENT_IPERSIST_LIB(CTcComBoolCounterIO,VID_Tc3_BoolCounter,CID_BOOLCOUNTERIO)

IMPLEMENT_GETMODULEINFO(CTcComBoolCounterIO,BoolCounterIO,CID_BOOLCOUNTERIO,VID_Tc3_BoolCounter)

BEGIN_OBJPARAASYNC_MAP2(CTcComBoolCounterIO,TcMatSim::GeneratedTcCom)
	OBJPARAASYNC_VALUE(0x00000001, m_TraceLevelMax)
	OBJPARAASYNC_VALUE_LOCK(0x00000002, m_ModuleCaller, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::ReadWrite,Access::Read))
	OBJPARAASYNC_VALUE(0x00000003, m_CallerVerification)
	OBJPARAASYNC_VALUE_LOCK(0x00000004, m_StepSizeAdaptation, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::Read,Access::Read))
	OBJPARAASYNC_VALUE_LOCK(0x00000005, m_ExecutionSequence, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::ReadWrite,Access::Read))
	OBJPARAASYNC_VALUE(0x00000006, m_Execute)
	OBJPARAASYNC_VALUE_LOCK(0x00000007, m_AccessLockState, -1, VarAccess(Access::ReadWrite,Access::ReadWrite,Access::ReadWrite,Access::Read))
	OBJPARAASYNC_VALUE(0x00000008, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init))
	OBJPARAASYNC_VALUE(0x00000009, GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update))
	OBJPARAASYNC_VALUE_LOCK(0x0000000a, m_ModuleBuildInfo, -1, VarAccess(Access::Read))
	OBJPARAASYNC_VALUE_LOCK(0x0000000b, m_Initialized, -1, VarAccess(Access::Read))
	OBJPARAASYNC_VALUE_LOCK(0x0000000c, m_ContextInfo.SkippedExecutionCount(), -1, VarAccess(Access::Read))
	OBJPARAASYNC_VALUE_LOCK(0x0000000d, GetLibraryInfo(), -1, VarAccess(Access::Read))
	OBJPARAASYNC_VALUE_LOCK(0x0000000e, GetModuleInfo(), -1, VarAccess(Access::Read))
	OBJPARAASYNC_VALUE_LOCK(0x0000000f, m_ModuleGeneratorInfo, -1, VarAccess(Access::Read))
	OBJPARAASYNC_PTR_SIZE_LOCK(0x00000010, &m_ContextInfo[0].Execution.CycleCount, sizeof(m_ContextInfo[0].Execution.CycleCount), -1, VarAccess(Access::Read))
	OBJPARAASYNC_PTR_SIZE_LOCK(0x00000011, &m_ContextInfo[0].Execution.ExceptionCount, sizeof(m_ContextInfo[0].Execution.ExceptionCount), -1, VarAccess(Access::Read))
	OBJPARAASYNC_PTR_SIZE_LOCK(0x00000012, &m_ContextInfo[0].Execution.ActException, sizeof(m_ContextInfo[0].Execution.ActException), -1, VarAccess(Access::Read))
	OBJPARAASYNC_DATA_SPAN_PTR_SIZE_LOCK(0, 1, &(Outports.count), sizeof(Outports.count), 0, VarAccess(Access::Read))
END_OBJPARAASYNC_MAP2(TcMatSim::GeneratedTcCom)

// State transition: Init -> PreOp
HRESULT CTcComBoolCounterIO::SetObjStateIP(ITComObjectServer* ipSrv, TComInitDataHdr* pInitData)
{
	HRESULT hr = S_OK;

	if (SUCCEEDED(hr))
		hr = SingleInstanceLock(GUID_NULL);
	if (SUCCEEDED(hr))
	{
		m_ContextInfo[0].OriginalTid = 0;
		m_ContextInfo[0].OriginalSampleTime = 0;

	}
	if (SUCCEEDED(hr))
	{
		memset(&(Outports.count),0,sizeof(Outports.count));

	}
	if (FAILED(hr))
	{
		SetObjStatePI();
	}
	return hr;
}

// State transition: PreOp -> SafeOp
HRESULT CTcComBoolCounterIO::SetObjStatePS(TComInitDataHdr* pInitData)
{
	HRESULT hr = S_OK;


	if(SUCCEEDED(hr))
	{
		auto fpCtrl = FpControl(FpCtrlSection::Init);
		::count_and_invert_booleans_io_initialize();

		if (SUCCEEDED(hr))
			hr = CheckAndAdaptCycleTimes();
		m_Initialized = SUCCEEDED(hr);
		FpRestore(fpCtrl);
	}

	if (FAILED(hr))
	{
		SetObjStateSP();
	}
	return hr;
}

// State transition: SafeOp -> Op
HRESULT CTcComBoolCounterIO::SetObjStateSO()
{
	HRESULT hr = S_OK;

	if (FAILED(hr))
	{
		SetObjStateOS();
	}
	return hr;
}

// State transition: Op -> SafeOp
HRESULT CTcComBoolCounterIO::SetObjStateOS()
{
	HRESULT hr = S_OK;

	return hr;
}

// State transition: SafeOp -> PreOp
HRESULT CTcComBoolCounterIO::SetObjStateSP()
{
	HRESULT hr = S_OK;

	auto fpCtrl = FpControl(FpCtrlSection::Init);
	FpRestore(fpCtrl);

	m_Initialized = false;

	return hr;
}

// State transition: PreOp -> Init
HRESULT CTcComBoolCounterIO::SetObjStatePI()
{
	HRESULT hr = S_OK;

	auto fpCtrl = FpControl(FpCtrlSection::Init);
	::count_and_invert_booleans_io_terminate();

	FpRestore(fpCtrl);
	SingleInstanceRelease();

	return hr;
}

// Constructor
CTcComBoolCounterIO::CTcComBoolCounterIO() :
	TcMatSim::GeneratedTcCom(1,0,TC_BUILD_MIN,0)
{
	m_TraceLevelMax = tlInfo;
	m_ModuleCaller = ModuleCaller::CyclicTask;
	m_CallerVerification = CallerVerification::Default;
	m_StepSizeAdaptation = StepSizeAdaptation::RequireMatchingTaskCycleTime;
	m_ExecutionSequence = ExecutionSequence2::UpdateBeforeOutputMapping;
	m_Execute = false;
	m_AccessLockState = TCOM_STATE_OP;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = FpExcptCtrlSet::Prec53_CallerExceptions;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = FpExcptCtrlSet::Prec53_CallerExceptions;
	m_Initialized = 0;
	m_ContextInfo.SkippedExecutionCount() = 0;

#ifdef _DEBUG
	m_ModuleBuildInfo.Debug = true;
#else
	m_ModuleBuildInfo.Debug = false;
#endif
	m_ModuleBuildInfo.TcBuild = TC_BUILD;
	m_ModuleBuildInfo.TcRevision = TC_REVISION;

}

// Destructor
CTcComBoolCounterIO::~CTcComBoolCounterIO()
{

}

HRESULT TCOMAPI CTcComBoolCounterIO::CycleUpdate(ITcTask* ipTask, ITcUnknown* ipCaller, ULONG_PTR context)
{

	if (!m_Execute)
		return S_FALSE;
	if (!m_Initialized)
		return ADS_E_NOTINIT;
	if (m_ExecutionSequence!=TcMgSdk::ExecutionSequence2::UpdateBeforeOutputMapping)
		return S_OK;
	m_ContextInfo[context].ExecutingCyclicCall = true;
	HRESULT hr = Update(ipTask, context);
	m_ContextInfo[context].ExecutingCyclicCall = false;
	return hr;
}

HRESULT TCOMAPI CTcComBoolCounterIO::PostCyclicUpdate(ITcTask* ipTask, ITcUnknown* ipCaller, ULONG_PTR context)
{

	if (!m_Execute)
		return S_FALSE;
	if (!m_Initialized)
		return ADS_E_NOTINIT;
	if (m_ExecutionSequence!=TcMgSdk::ExecutionSequence2::IoAtTaskBegin)
		return S_OK;
	m_ContextInfo[context].ExecutingPostCyclicCall = true;
	HRESULT hr = Update(ipTask, context);
	m_ContextInfo[context].ExecutingPostCyclicCall = false;
	return hr;
}

HRESULT CTcComBoolCounterIO::Update(ITcTask* ipTask, ULONG_PTR context)
{
	HRESULT hr = SynchronizeTasks(context);
	if(SUCCEEDED(hr))
		hr = VerifyCaller(ipTask, context);

	if(SUCCEEDED(hr) && m_ContextInfo[context].Synchronized)
	{
		auto fpCtrl = FpControl(FpCtrlSection::Update);
		TcTry
		{
			if (hr == S_OK)
			{
				Outports.count = ::count_and_invert_booleans_io(boolArray,inverseArray);
			}

		}
		TcExcept(ExceptionFilter(ipTask, GetExceptionInformation(), static_cast<LONG>(context)))
		{
			ExceptionHandler();
		}
		FpRestore(fpCtrl);
		m_ContextInfo.IncrementCaller(context);
	}

	return hr;

}

HRESULT CTcComBoolCounterIO::CheckAndAdaptCycleTimes()
{
	return S_OK;

}

// ITcBoolCounterIO
HRESULT TCOMAPI CTcComBoolCounterIO::count_and_invert_booleans_io(double& count)
{
	HRESULT hr = S_OK;
	auto fpCtrl = FpControl(FpCtrlSection::Update);

	count = ::count_and_invert_booleans_io(boolArray,inverseArray);


	FpRestore(fpCtrl);
	return hr;
}

// ITcBoolCounterIO
HRESULT TCOMAPI CTcComBoolCounterIO::put_boolArray(bool* data, LONG size1, LONG size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::ToCoderArray(boolArray,data,size1,size2);
	return hr;
}

// ITcBoolCounterIO
HRESULT TCOMAPI CTcComBoolCounterIO::get_boolArray(bool* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(boolArray,data,size1,size2);
	return hr;
}

// ITcBoolCounterIO
HRESULT TCOMAPI CTcComBoolCounterIO::put_inverseArray(double* data, LONG size1, LONG size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::ToCoderArray(inverseArray,data,size1,size2);
	return hr;
}

// ITcBoolCounterIO
HRESULT TCOMAPI CTcComBoolCounterIO::get_inverseArray(double* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(inverseArray,data,size1,size2);
	return hr;
}

// ITcBoolCounterIO
HRESULT TCOMAPI CTcComBoolCounterIO::get_inverseArray_(double* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(inverseArray,data,size1,size2);
	return hr;
}




HRESULT TCOMAPI Create_CTcComBoolCounterIO (PITCID pIid, PPVOID pipItf)
{
	return Create<CTcComBoolCounterIO>(*pIid, pipItf);
}
