
// ****************** FbBoolCounterIO_v2.cpp *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.21.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.8.21.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************

#include "TcPch.h"
#pragma hdrstop

#include "FbBoolCounterIO_v2.h"

#ifdef EXT_MODE
#include "TcExtWork.h"
#endif

#include "count_and_invert_booleans_io_v2_initialize.h"
#include "count_and_invert_booleans_io_v2.h"
#include "count_and_invert_booleans_io_v2_terminate.h"

#include "ObjClassFactory.h"
using namespace TcMgSdk;

///////////////////////////////////////////////////////////////////////////////
// Definitions
///////////////////////////////////////////////////////////////////////////////
#if TC_BUILD<=4024
DEFINE_THIS_FILE()
#endif

///////////////////////////////////////////////////////////////////////////////
// CFbBoolCounterIO_v2 specific globals
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// CFbBoolCounterIO_v2 static members
///////////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
// CFbBoolCounterIO_v2 implementation
///////////////////////////////////////////////////////////////////////////////
CFbBoolCounterIO_v2::CFbBoolCounterIO_v2()
{
	m_TraceLevelMax = tlInfo;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = FpExcptCtrlSet::Prec53_CallerExceptions;
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = FpExcptCtrlSet::Prec53_CallerExceptions;


	
}

CFbBoolCounterIO_v2::~CFbBoolCounterIO_v2()
{

}

bool CFbBoolCounterIO_v2::FB_Main()
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
				count = ::count_and_invert_booleans_io_v2(*((coder::array<boolean_T,2>*)boolArray),*((coder::array<real_T,2>*)inverseArray));
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

void CFbBoolCounterIO_v2::_FB_Main(ST_FB_BoolCounterIO_v2_FB_Main* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->FB_Main(  );
}

bool CFbBoolCounterIO_v2::FB_exit(bool bInCopyCode)
{

	HRESULT hr = S_OK;

	auto fpCtrl = FpControl(FpCtrlSection::Init);
	::count_and_invert_booleans_io_v2_terminate();
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

void CFbBoolCounterIO_v2::_FB_exit(ST_FB_BoolCounterIO_v2_FB_exit* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->FB_exit( ST_Param->bInCopyCode );
}

bool CFbBoolCounterIO_v2::FB_init(bool bInitRetains, bool bInCopyCode)
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
		::count_and_invert_booleans_io_v2_initialize();

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

void CFbBoolCounterIO_v2::_FB_init(ST_FB_BoolCounterIO_v2_FB_init* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->FB_init( ST_Param->bInitRetains, ST_Param->bInCopyCode );
}

HRESULT CFbBoolCounterIO_v2::GetnHResult(HRESULT& nParam)
{
	nParam = m_HResult;
	return S_OK;
}

void CFbBoolCounterIO_v2::_GetnHResult(ST_GetSet_HRESULT* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->GetnHResult( ST_Param->nParam );
}

HRESULT CFbBoolCounterIO_v2::GeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam)
{
	eParam = GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init);
	return S_OK;
}

void CFbBoolCounterIO_v2::_GeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->GeteInitExceptionHandling( ST_Param->eParam );
}

HRESULT CFbBoolCounterIO_v2::SeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam)
{
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Init) = eParam;
	return S_OK;
}

void CFbBoolCounterIO_v2::_SeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->SeteInitExceptionHandling( ST_Param->eParam );
}

HRESULT CFbBoolCounterIO_v2::GeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam)
{
	eParam = GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update);
	return S_OK;
}

void CFbBoolCounterIO_v2::_GeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->GeteUpdateExceptionHandling( ST_Param->eParam );
}

HRESULT CFbBoolCounterIO_v2::SeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam)
{
	GetFpExceptCtrlSet(TcMgSdk::FpCtrlSection::Update) = eParam;
	return S_OK;
}

void CFbBoolCounterIO_v2::_SeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->SeteUpdateExceptionHandling( ST_Param->eParam );
}

HRESULT CFbBoolCounterIO_v2::GetnExceptionCnt(ULONGLONG& nParam)
{
	nParam = m_ExceptionCnt;
	return S_OK;
}

void CFbBoolCounterIO_v2::_GetnExceptionCnt(ST_GetSet_ULINT* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->GetnExceptionCnt( ST_Param->nParam );
}

HRESULT CFbBoolCounterIO_v2::GetstActiveException(TcMgSdk::ExceptionInfo& stParam)
{
	stParam = m_ActException;
	return S_OK;
}

void CFbBoolCounterIO_v2::_GetstActiveException(ST_GetSet_ST_ExceptionInfo* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->GetstActiveException( ST_Param->stParam );
}

HRESULT CFbBoolCounterIO_v2::GetbInitialized(bool& bParam)
{
	bParam = m_Initialized;
	return S_OK;
}

void CFbBoolCounterIO_v2::_GetbInitialized(ST_GetSet_BOOL* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->GetbInitialized( ST_Param->bParam );
}

HRESULT CFbBoolCounterIO_v2::GetbExecute(bool& bParam)
{
	bParam = m_Execute;
	return S_OK;
}

void CFbBoolCounterIO_v2::_GetbExecute(ST_GetSet_BOOL* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->GetbExecute( ST_Param->bParam );
}

HRESULT CFbBoolCounterIO_v2::SetbExecute(bool bParam)
{
	m_Execute = bParam;
	return S_OK;
}

void CFbBoolCounterIO_v2::_SetbExecute(ST_GetSet_BOOL* ST_Param)
{
	((CFbBoolCounterIO_v2*)ST_Param->pInst)->SetbExecute( ST_Param->bParam );
}

HRESULT CFbBoolCounterIO_v2::put_boolArray(bool* data, LONG size1, LONG size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::ToCoderArray(*((coder::array<boolean_T,2>*)boolArray),data,size1,size2);
	return hr;
}

void CFbBoolCounterIO_v2::_put_boolArray(ST_FB_BoolCounterIO_v2_put_boolArray* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->put_boolArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbBoolCounterIO_v2::get_boolArray(bool* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(*((coder::array<boolean_T,2>*)boolArray),data,size1,size2);
	return hr;
}

void CFbBoolCounterIO_v2::_get_boolArray(ST_FB_BoolCounterIO_v2_get_boolArray* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->get_boolArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbBoolCounterIO_v2::put_inverseArray(double* data, LONG size1, LONG size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::ToCoderArray(*((coder::array<real_T,2>*)inverseArray),data,size1,size2);
	return hr;
}

void CFbBoolCounterIO_v2::_put_inverseArray(ST_FB_BoolCounterIO_v2_put_inverseArray* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->put_inverseArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbBoolCounterIO_v2::get_inverseArray(double* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(*((coder::array<real_T,2>*)inverseArray),data,size1,size2);
	return hr;
}

void CFbBoolCounterIO_v2::_get_inverseArray(ST_FB_BoolCounterIO_v2_get_inverseArray* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->get_inverseArray( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}

HRESULT CFbBoolCounterIO_v2::get_inverseArray_(double* data, LONG& size1, LONG& size2)
{
	HRESULT hr(S_OK);
	hr = TcMatSim::DataConversion::FromCoderArray(*((coder::array<real_T,2>*)inverseArray),data,size1,size2);
	return hr;
}

void CFbBoolCounterIO_v2::_get_inverseArray_(ST_FB_BoolCounterIO_v2_get_inverseArray_* ST_Param)
{
	ST_Param->result = ((CFbBoolCounterIO_v2*)ST_Param->pInst)->get_inverseArray_( ST_Param->data, ST_Param->size1, ST_Param->size2 );
}




BEGIN_FUNC_MAP_FB(CFbBoolCounterIO_v2)
	FUNC_ENTRY_LIB(VID_Tc3_BoolCounter, CID_FB_BOOLCOUNTERIO_V2 , "FB_BoolCounterIO_v2" "__main", CFbBoolCounterIO_v2::_FB_Main)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "FB_EXIT", "FB_BoolCounterIO_v2" "__FB_exit", CFbBoolCounterIO_v2::_FB_exit)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "FB_INIT", "FB_BoolCounterIO_v2" "__FB_init", CFbBoolCounterIO_v2::_FB_init)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GETNHRESULT", "FB_BoolCounterIO_v2" "__GetnHResult", CFbBoolCounterIO_v2::_GetnHResult)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GETEINITEXCEPTIONHANDLING", "FB_BoolCounterIO_v2" "__GeteInitExceptionHandling", CFbBoolCounterIO_v2::_GeteInitExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "SETEINITEXCEPTIONHANDLING", "FB_BoolCounterIO_v2" "__SeteInitExceptionHandling", CFbBoolCounterIO_v2::_SeteInitExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GETEUPDATEEXCEPTIONHANDLING", "FB_BoolCounterIO_v2" "__GeteUpdateExceptionHandling", CFbBoolCounterIO_v2::_GeteUpdateExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "SETEUPDATEEXCEPTIONHANDLING", "FB_BoolCounterIO_v2" "__SeteUpdateExceptionHandling", CFbBoolCounterIO_v2::_SeteUpdateExceptionHandling)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GETNEXCEPTIONCNT", "FB_BoolCounterIO_v2" "__GetnExceptionCnt", CFbBoolCounterIO_v2::_GetnExceptionCnt)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GETSTACTIVEEXCEPTION", "FB_BoolCounterIO_v2" "__GetstActiveException", CFbBoolCounterIO_v2::_GetstActiveException)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GETBINITIALIZED", "FB_BoolCounterIO_v2" "__GetbInitialized", CFbBoolCounterIO_v2::_GetbInitialized)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GETBEXECUTE", "FB_BoolCounterIO_v2" "__GetbExecute", CFbBoolCounterIO_v2::_GetbExecute)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "SETBEXECUTE", "FB_BoolCounterIO_v2" "__SetbExecute", CFbBoolCounterIO_v2::_SetbExecute)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "PUT_BOOLARRAY", "FB_BoolCounterIO_v2" "__put_boolArray", CFbBoolCounterIO_v2::_put_boolArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GET_BOOLARRAY", "FB_BoolCounterIO_v2" "__get_boolArray", CFbBoolCounterIO_v2::_get_boolArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "PUT_INVERSEARRAY", "FB_BoolCounterIO_v2" "__put_inverseArray", CFbBoolCounterIO_v2::_put_inverseArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GET_INVERSEARRAY", "FB_BoolCounterIO_v2" "__get_inverseArray", CFbBoolCounterIO_v2::_get_inverseArray)
	FUNC_METHOD_ENTRY_LIB(VID_Tc3_BoolCounter,CID_FB_BOOLCOUNTERIO_V2 , "GET_INVERSEARRAY_", "FB_BoolCounterIO_v2" "__get_inverseArray_", CFbBoolCounterIO_v2::_get_inverseArray_)
END_FUNC_MAP_FB()

DECLARE_FUNCMAP_CREATOR(HandleFuncMap_CFbBoolCounterIO_v2)
{
	return CFbBoolCounterIO_v2::TcHandleFuncMap(mode, idx, idxcounter, pFncId, pipFnc, ppMethod, ppName, pSignature, pVersion);
}