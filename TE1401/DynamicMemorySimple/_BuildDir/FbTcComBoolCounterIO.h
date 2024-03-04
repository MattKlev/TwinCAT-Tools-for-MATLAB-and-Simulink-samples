
// ****************** FbTcComBoolCounterIO.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.21.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.8.21.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#ifndef _FbTcComBoolCounterIO__h_INCLUDED
#define _FbTcComBoolCounterIO__h_INCLUDED


#include "TcGeneratedPou.h"
#include "TcMatSimPou.h"

#include "Tc3_BoolCounterInterfaces.h"
#include "Tc3_BoolCounterVersion.h"
#include "Tc3_BoolCounterDuts.h"


class CFbTcComBoolCounterIO :
	public TcMatSim::GeneratedFbTcComWrapper
{
public:

	inline void operator()() {this->FB_Main();}
	inline GUID get_VersionID() {return VID_Tc3_BoolCounter;}
	inline CLSID get_ClassID() {return CID_FB_BOOLCOUNTERIO_TCCOM_INITSTRUCT;}

	DECLARE_FUNC_MAP_FB()

	CFbTcComBoolCounterIO();
	~CFbTcComBoolCounterIO();
	bool FB_init(bool bInitRetains, bool bInCopyCode, ST_FB_BoolCounterIO_TcCOM_InitStruct& stInit);
	static void _FB_init(ST_FB_BoolCounterIO_TcCOM_InitStruct_FB_init* ST_Param);
	bool FB_afterinit();
	static void _FB_AfterInit(ST_FB_BoolCounterIO_TcCOM_InitStruct_FB_afterinit* ST_Param);
	bool Reinit(ST_FB_BoolCounterIO_TcCOM_InitStruct stReInit);
	static void _Reinit(ST_FB_BoolCounterIO_TcCOM_InitStruct_Reinit* ST_Param);
	bool FB_Main();
	static void _FB_Main(ST_FB_BoolCounterIO_TcCOM_InitStruct_FB_Main* ST_Param);
	bool FB_exit(bool bInCopyCode);
	static void _FB_exit(ST_FB_BoolCounterIO_TcCOM_InitStruct_FB_exit* ST_Param);
	static void _GeteObjectState(ST_GetSet_TCOM_STATE* ST_Param);
	static void _SeteObjectState(ST_GetSet_TCOM_STATE* ST_Param);
	HRESULT GetnHResult(HRESULT& nParam);
	static void _GetnHResult(ST_GetSet_HRESULT* ST_Param);
	HRESULT GetipTcComObject(ITComObject** ipParam);
	static void _GetipTcComObject(ST_GetSet_ITComObject* ST_Param);
	HRESULT GetipADI(ITcADI** ipParam);
	static void _GetipADI(ST_GetSet_ITcADI* ST_Param);
	HRESULT put_boolArray(bool* data, LONG size1, LONG size2);
	static void _put_boolArray(ST_FB_BoolCounterIO_TcCOM_InitStruct_put_boolArray* ST_Param);
	HRESULT get_boolArray(bool* data, LONG& size1, LONG& size2);
	static void _get_boolArray(ST_FB_BoolCounterIO_TcCOM_InitStruct_get_boolArray* ST_Param);
	HRESULT put_inverseArray(double* data, LONG size1, LONG size2);
	static void _put_inverseArray(ST_FB_BoolCounterIO_TcCOM_InitStruct_put_inverseArray* ST_Param);
	HRESULT get_inverseArray(double* data, LONG& size1, LONG& size2);
	static void _get_inverseArray(ST_FB_BoolCounterIO_TcCOM_InitStruct_get_inverseArray* ST_Param);
	HRESULT get_inverseArray_(double* data, LONG& size1, LONG& size2);
	static void _get_inverseArray_(ST_FB_BoolCounterIO_TcCOM_InitStruct_get_inverseArray_* ST_Param);
	HRESULT GetnTaskOid(OTCID& nParam);
	static void _GetnTaskOid(ST_GetSet_OTCID* ST_Param);
	HRESULT SetnTaskOid(OTCID nParam);
	static void _SetnTaskOid(ST_GetSet_OTCID* ST_Param);
	HRESULT GetnTaskPriority(ULONG& nParam);
	static void _GetnTaskPriority(ST_GetSet_UDINT* ST_Param);
	HRESULT GetnTaskCycleTimeNs(ULONG& nParam);
	static void _GetnTaskCycleTimeNs(ST_GetSet_UDINT* ST_Param);
	HRESULT GetnTaskPort(USHORT& nParam);
	static void _GetnTaskPort(ST_GetSet_UINT* ST_Param);
	HRESULT GetnTaskSortOrder(ULONG& nParam);
	static void _GetnTaskSortOrder(ST_GetSet_UDINT* ST_Param);
	HRESULT SetnTaskSortOrder(ULONG nParam);
	static void _SetnTaskSortOrder(ST_GetSet_UDINT* ST_Param);
	HRESULT GeteTraceLevelMax(TcTraceLevel& eParam);
	static void _GeteTraceLevelMax(ST_GetSet_TcTraceLevel* ST_Param);
	HRESULT SeteTraceLevelMax(TcTraceLevel eParam);
	static void _SeteTraceLevelMax(ST_GetSet_TcTraceLevel* ST_Param);
	HRESULT GeteModuleCaller(TcMgSdk::ModuleCaller& eParam);
	static void _GeteModuleCaller(ST_GetSet_E_ModuleCaller* ST_Param);
	HRESULT SeteModuleCaller(TcMgSdk::ModuleCaller eParam);
	static void _SeteModuleCaller(ST_GetSet_E_ModuleCaller* ST_Param);
	HRESULT GeteCallerVerification(TcMgSdk::CallerVerification& eParam);
	static void _GeteCallerVerification(ST_GetSet_E_CallerVerification* ST_Param);
	HRESULT SeteCallerVerification(TcMgSdk::CallerVerification eParam);
	static void _SeteCallerVerification(ST_GetSet_E_CallerVerification* ST_Param);
	HRESULT GeteStepSizeAdaptation(TcMgSdk::StepSizeAdaptation& eParam);
	static void _GeteStepSizeAdaptation(ST_GetSet_E_StepSizeAdaptation* ST_Param);
	HRESULT SeteStepSizeAdaptation(TcMgSdk::StepSizeAdaptation eParam);
	static void _SeteStepSizeAdaptation(ST_GetSet_E_StepSizeAdaptation* ST_Param);
	HRESULT GeteExecutionSequence(TcMgSdk::ExecutionSequence1& eParam);
	static void _GeteExecutionSequence(ST_GetSet_E_ExecutionSequence1* ST_Param);
	HRESULT SeteExecutionSequence(TcMgSdk::ExecutionSequence1 eParam);
	static void _SeteExecutionSequence(ST_GetSet_E_ExecutionSequence1* ST_Param);
	HRESULT GetbExecute(bool& bParam);
	static void _GetbExecute(ST_GetSet_BOOL* ST_Param);
	HRESULT SetbExecute(bool bParam);
	static void _SetbExecute(ST_GetSet_BOOL* ST_Param);
	HRESULT GeteAccessLockState(TCOM_STATE& eParam);
	static void _GeteAccessLockState(ST_GetSet_TCOM_STATE* ST_Param);
	HRESULT SeteAccessLockState(TCOM_STATE eParam);
	static void _SeteAccessLockState(ST_GetSet_TCOM_STATE* ST_Param);
	HRESULT GeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam);
	static void _GeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSet* ST_Param);
	HRESULT SeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam);
	static void _SeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSet* ST_Param);
	HRESULT GeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam);
	static void _GeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param);
	HRESULT SeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam);
	static void _SeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param);
	HRESULT GetstModuleBuildInfo(TcMgSdk::ModuleBuildInfo& stParam);
	static void _GetstModuleBuildInfo(ST_GetSet_ST_ModuleBuildInfo* ST_Param);
	HRESULT GetbInitialized(bool& bParam);
	static void _GetbInitialized(ST_GetSet_BOOL* ST_Param);
	HRESULT GetnSkippedExecutionCount(ULONG& nParam);
	static void _GetnSkippedExecutionCount(ST_GetSet_UDINT* ST_Param);
	HRESULT GetstLibraryInfo(TcMgSdk::LibraryInfo& stParam);
	static void _GetstLibraryInfo(ST_GetSet_ST_LibraryInfo* ST_Param);
	HRESULT GetstModuleInfo(TcMgSdk::ModuleInfo& stParam);
	static void _GetstModuleInfo(ST_GetSet_ST_ModuleInfo* ST_Param);
	HRESULT GetstModuleGeneratorInfo(TcMatSim_ModuleGeneratorInfo& stParam);
	static void _GetstModuleGeneratorInfo(ST_GetSet_ST_TcMatSim_ModuleGeneratorInfo* ST_Param);
	HRESULT SetstModuleGeneratorInfo(TcMatSim_ModuleGeneratorInfo& stParam);
	static void _SetstModuleGeneratorInfo(ST_GetSet_ST_TcMatSim_ModuleGeneratorInfo* ST_Param);
	HRESULT GetnCycleCount(ULONGLONG& nParam);
	static void _GetnCycleCount(ST_GetSet_ULINT* ST_Param);
	HRESULT GetnExceptionCount(ULONGLONG& nParam);
	static void _GetnExceptionCount(ST_GetSet_ULINT* ST_Param);
	HRESULT GetstExceptionInfo(TcMgSdk::ExceptionInfo& stParam);
	static void _GetstExceptionInfo(ST_GetSet_ST_ExceptionInfo* ST_Param);



	BoolCounterIO_Outports_T stOutports;
	ITcBoolCounterIO* _ipBoolCounterIO;
	ST_FB_BoolCounterIO_TcCOM_InitStruct stInit;


};
TYPESIZE_VALIDATION2(CFbTcComBoolCounterIO,528,552);

			
#endif // _FbTcComBoolCounterIO__h_INCLUDED
			