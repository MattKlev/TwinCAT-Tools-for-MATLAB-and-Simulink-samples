
// ****************** Fbcount_and_invert_booleans.cpp *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.21.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.8.21.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************

#include "TcPch.h"
#pragma hdrstop

#include "Fbcount_and_invert_booleans.h"

#ifdef EXT_MODE
#include "TcExtWork.h"
#endif

#include "count_and_invert_booleans_initialize.h"
#include "count_and_invert_booleans.h"
#include "count_and_invert_booleans_terminate.h"

#include "ObjClassFactory.h"
using namespace TcMgSdk;

///////////////////////////////////////////////////////////////////////////////
// Definitions
///////////////////////////////////////////////////////////////////////////////
#if TC_BUILD<=4024
DEFINE_THIS_FILE()
#endif

///////////////////////////////////////////////////////////////////////////////
// CFbcount_and_invert_booleans specific globals
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// CFbcount_and_invert_booleans static members
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// CFbcount_and_invert_booleans implementation
///////////////////////////////////////////////////////////////////////////////
CFbcount_and_invert_booleans::CFbcount_and_invert_booleans()
{
	m_TraceLevelMax = tlInfo;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = FpExcptCtrlSet::Prec53_CallerExceptions;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = FpExcptCtrlSet::Prec53_CallerExceptions;


	
}

CFbcount_and_invert_booleans::~CFbcount_and_invert_booleans()
{

}

bool CFbcount_and_invert_booleans::FB_Main()
{

	HRESULT hr = S_OK;

	if (!m_Execute)
		return false;
	if (!m_Initialized)
		return false;

	if(SUCCEEDED(hr))
	{
		memset(&m_ActException, 0, sizeof(m_ActException));
		auto fpCtrl = FpControl(FpCtrlSection::Update);
		TcTry
		{
			if (hr == S_OK)
			{
				inverseArray = ((coder::array<real_T,2>*)inverseArray);
				count = ::count_and_invert_booleans(*((coder::array<boolean_T,2>*)boolArray),*((coder::array<real_T,2>*)inverseArray));
			}

		}
		TcExcept(ExceptionFilter(GetExceptionInformation()))
		{
			ExceptionHandler();
		}
		FpRestore(fpCtrl);
	}


	m_HResult = hr;
	return SUCCEEDED(hr);
}

void CFbcount_and_invert_booleans::_FB_Main(ST_FB_count_and_invert_booleans_FB_Main* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->FB_Main(  );
}

bool CFbcount_and_invert_booleans::FB_exit(bool bInCopyCode)
{

	HRESULT hr = S_OK;

	auto fpCtrl = FpControl(FpCtrlSection::Init);
	::count_and_invert_booleans_terminate();
	if (((coder::array<boolean_T,2>*)boolArray)!=NULL)
	{
		delete ((coder::array<boolean_T,2>*)boolArray);
		boolArray = NULL;
	}
	if (((coder::array<real_T,2>*)inverseArray)!=NULL)
	{
		delete ((coder::array<real_T,2>*)inverseArray);
		inverseArray = NULL;
	}
	if (((coder::array<real_T,2>*)inverseArray)!=NULL)
	{
		delete ((coder::array<real_T,2>*)inverseArray);
		inverseArray = NULL;
	}

	FpRestore(fpCtrl);


	SingleInstanceRelease();
	__super::Exit(bInCopyCode);

	m_HResult = hr;
	return SUCCEEDED(hr);
}

void CFbcount_and_invert_booleans::_FB_exit(ST_FB_count_and_invert_booleans_FB_exit* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->FB_exit( ST_Param->bInCopyCode );
}

bool CFbcount_and_invert_booleans::FB_init(bool bInitRetains, bool bInCopyCode)
{

	HRESULT hr = S_OK;

	if(SUCCEEDED(hr))
	{
		m_pData = nullptr;
		hr = __super::Init(0,TC_BUILD_MIN,bInitRetains,bInCopyCode);
		if (FAILED(hr))
			Log(TcTraceLevel::tlError, "Initialization of base class TcMatSim::GeneratedFb failed");
	}
	
	if(SUCCEEDED(hr))
	{
		boolArray = new coder::array<boolean_T,2>();
		inverseArray = new coder::array<real_T,2>();
		memset(&(count),0,sizeof(count));
		inverseArray = new coder::array<real_T,2>();

	m_TraceLevelMax = tlInfo;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = FpExcptCtrlSet::Prec53_CallerExceptions;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = FpExcptCtrlSet::Prec53_CallerExceptions;


	}

	if (SUCCEEDED(hr))
	{
		hr = SingleInstanceLock(GUID_NULL);
		if (FAILED(hr))
			Log(TcTraceLevel::tlError, "SingleInstanceLock() did not succeed");
	}
	
	if (SUCCEEDED(hr))
	{
		auto fpCtrl = FpControl(FpCtrlSection::Init);
		TcTry
		{
		::count_and_invert_booleans_initialize();

		}
		TcExcept(ExceptionFilter(GetExceptionInformation(),FpCtrlSection::Init))
		{
			Log(TcTraceLevel::tlError, "Model initialization failed with an exception.");
			hr = E_FAIL;
		}
		FpRestore(fpCtrl);
	}
	
	if (SUCCEEDED(hr))
		hr = DataExchangeSetState(TCOM_STATE_OP,true);
	
	if (SUCCEEDED(hr))
	{
		m_Initialized = true;
		m_Execute = true;
	}
	else
	{
		m_Initialized = false;
		m_Execute = false;
	}

	m_HResult = hr;
	return SUCCEEDED(hr);
}

void CFbcount_and_invert_booleans::_FB_init(ST_FB_count_and_invert_booleans_FB_init* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->FB_init( ST_Param->bInitRetains, ST_Param->bInCopyCode );
}

HRESULT CFbcount_and_invert_booleans::GetnHResult(HRESULT& nParam)
{
	nParam = m_HResult;
	return S_OK;
}

void CFbcount_and_invert_booleans::_GetnHResult(ST_GetSet_HRESULT* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->GetnHResult( ST_Param->nParam );
}

HRESULT CFbcount_and_invert_booleans::GeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam)
{
	eParam = GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init);
	return S_OK;
}

void CFbcount_and_invert_booleans::_GeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->GeteInitExceptionHandling( ST_Param->eParam );
}

HRESULT CFbcount_and_invert_booleans::SeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam)
{
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = eParam;
	return S_OK;
}

void CFbcount_and_invert_booleans::_SeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->SeteInitExceptionHandling( ST_Param->eParam );
}

HRESULT CFbcount_and_invert_booleans::GeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam)
{
	eParam = GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update);
	return S_OK;
}

void CFbcount_and_invert_booleans::_GeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->GeteUpdateExceptionHandling( ST_Param->eParam );
}

HRESULT CFbcount_and_invert_booleans::SeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam)
{
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = eParam;
	return S_OK;
}

void CFbcount_and_invert_booleans::_SeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->SeteUpdateExceptionHandling( ST_Param->eParam );
}

HRESULT CFbcount_and_invert_booleans::GetnExceptionCnt(ULONGLONG& nParam)
{
	nParam = m_ExceptionCnt;
	return S_OK;
}

void CFbcount_and_invert_booleans::_GetnExceptionCnt(ST_GetSet_ULINT* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->GetnExceptionCnt( ST_Param->nParam );
}

HRESULT CFbcount_and_invert_booleans::GetstActiveException(TcMgSdk::ExceptionInfo& stParam)
{
	stParam = m_ActException;
	return S_OK;
}

void CFbcount_and_invert_booleans::_GetstActiveException(ST_GetSet_ST_ExceptionInfo* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->GetstActiveException( ST_Param->stParam );
}

HRESULT CFbcount_and_invert_booleans::GetbInitialized(bool& bParam)
{
	bParam = m_Initialized;
	return S_OK;
}

void CFbcount_and_invert_booleans::_GetbInitialized(ST_GetSet_BOOL* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->GetbInitialized( ST_Param->bParam );
}

HRESULT CFbcount_and_invert_booleans::GetbExecute(bool& bParam)
{
	bParam = m_Execute;
	return S_OK;
}

void CFbcount_and_invert_booleans::_GetbExecute(ST_GetSet_BOOL* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->GetbExecute( ST_Param->bParam );
}

HRESULT CFbcount_and_invert_booleans::SetbExecute(bool bParam)
{
	m_Execute = bParam;
	return S_OK;
}

void CFbcount_and_invert_booleans::_SetbExecute(ST_GetSet_BOOL* ST_Param)
{
	((CFbcount_and_invert_booleans*)ST_Param->pInst)->SetbExecute( ST_Param->bParam );
}

HRESULT CFbcount_and_invert_booleans::put_boolArray(bool* data, LONG size1, LONG size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::ToCoderArray(*((coder::array<boolean_T,2>*)boolArray),data,size1,size2);
	return hr;
}

void CFbcount_and_invert_booleans::_put_boolArray(ST_FB_count_and_invert_booleans_put_boolArray* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->put_boolArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbcount_and_invert_booleans::get_boolArray(bool* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(*((coder::array<boolean_T,2>*)boolArray),data,size1,size2);
	return hr;
}

void CFbcount_and_invert_booleans::_get_boolArray(ST_FB_count_and_invert_booleans_get_boolArray* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->get_boolArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbcount_and_invert_booleans::put_inverseArray(double* data, LONG size1, LONG size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::ToCoderArray(*((coder::array<real_T,2>*)inverseArray),data,size1,size2);
	return hr;
}

void CFbcount_and_invert_booleans::_put_inverseArray(ST_FB_count_and_invert_booleans_put_inverseArray* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->put_inverseArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbcount_and_invert_booleans::get_inverseArray(double* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(*((coder::array<real_T,2>*)inverseArray),data,size1,size2);
	return hr;
}

void CFbcount_and_invert_booleans::_get_inverseArray(ST_FB_count_and_invert_booleans_get_inverseArray* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->get_inverseArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbcount_and_invert_booleans::get_inverseArray_(double* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(*((coder::array<real_T,2>*)inverseArray),data,size1,size2);
	return hr;
}

void CFbcount_and_invert_booleans::_get_inverseArray_(ST_FB_count_and_invert_booleans_get_inverseArray_* ST_Param)
{
	ST_Param->result = ((CFbcount_and_invert_booleans*)ST_Param->pInst)->get_inverseArray_( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}




BEGIN_FUNC_MAP_FB(CFbcount_and_invert_booleans)
	FUNC_ENTRY_LIB(VID_Tc3_BoolCounter, CID_FB_COUNT_AND_INVERT_BOOLEANS , "FB_count_and_invert_booleans" "__main", CFbcount_and_invert_booleans::_FB_Main)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "FB_EXIT", "FB_count_and_invert_booleans" "__FB_exit", CFbcount_and_invert_booleans::_FB_exit)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "FB_INIT", "FB_count_and_invert_booleans" "__FB_init", CFbcount_and_invert_booleans::_FB_init)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GETNHRESULT", "FB_count_and_invert_booleans" "__GetnHResult", CFbcount_and_invert_booleans::_GetnHResult)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GETEINITEXCEPTIONHANDLING", "FB_count_and_invert_booleans" "__GeteInitExceptionHandling", CFbcount_and_invert_booleans::_GeteInitExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "SETEINITEXCEPTIONHANDLING", "FB_count_and_invert_booleans" "__SeteInitExceptionHandling", CFbcount_and_invert_booleans::_SeteInitExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GETEUPDATEEXCEPTIONHANDLING", "FB_count_and_invert_booleans" "__GeteUpdateExceptionHandling", CFbcount_and_invert_booleans::_GeteUpdateExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "SETEUPDATEEXCEPTIONHANDLING", "FB_count_and_invert_booleans" "__SeteUpdateExceptionHandling", CFbcount_and_invert_booleans::_SeteUpdateExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GETNEXCEPTIONCNT", "FB_count_and_invert_booleans" "__GetnExceptionCnt", CFbcount_and_invert_booleans::_GetnExceptionCnt)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GETSTACTIVEEXCEPTION", "FB_count_and_invert_booleans" "__GetstActiveException", CFbcount_and_invert_booleans::_GetstActiveException)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GETBINITIALIZED", "FB_count_and_invert_booleans" "__GetbInitialized", CFbcount_and_invert_booleans::_GetbInitialized)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GETBEXECUTE", "FB_count_and_invert_booleans" "__GetbExecute", CFbcount_and_invert_booleans::_GetbExecute)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "SETBEXECUTE", "FB_count_and_invert_booleans" "__SetbExecute", CFbcount_and_invert_booleans::_SetbExecute)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "PUT_BOOLARRAY", "FB_count_and_invert_booleans" "__put_boolArray", CFbcount_and_invert_booleans::_put_boolArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GET_BOOLARRAY", "FB_count_and_invert_booleans" "__get_boolArray", CFbcount_and_invert_booleans::_get_boolArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "PUT_INVERSEARRAY", "FB_count_and_invert_booleans" "__put_inverseArray", CFbcount_and_invert_booleans::_put_inverseArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GET_INVERSEARRAY", "FB_count_and_invert_booleans" "__get_inverseArray", CFbcount_and_invert_booleans::_get_inverseArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_COUNT_AND_INVERT_BOOLEANS , "GET_INVERSEARRAY_", "FB_count_and_invert_booleans" "__get_inverseArray_", CFbcount_and_invert_booleans::_get_inverseArray_)
END_FUNC_MAP_FB()

DECLARE_FUNCMAP_CREATOR(HandleFuncMap_CFbcount_and_invert_booleans)
{
	return CFbcount_and_invert_booleans::TcHandleFuncMap(mode, idx, idxcounter, pFncId, pipFnc, ppMethod, ppName, pSignature, pVersion);
}
