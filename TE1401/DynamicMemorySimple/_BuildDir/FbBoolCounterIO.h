
// ****************** FbBoolCounterIO.h *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.21.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.8.21.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#ifndef _FbBoolCounterIO__h_INCLUDED
#define _FbBoolCounterIO__h_INCLUDED



#include "TcMatSimPou.h"
#include "TcGeneratedPou.h"
#include "count_and_invert_booleans_ioInternal.h"

#include "Tc3_BoolCounterDuts.h"
#include "Tc3_BoolCounterInterfaces.h"
#include "Tc3_BoolCounterVersion.h"


class CFbBoolCounterIO :
	public TcMatSim::GeneratedFb
{
public:

	inline void operator()() {this->FB_Main();}
	inline GUID get_VersionID() {return VID_Tc3_BoolCounter;}
	inline CLSID get_ClassID() {return CID_FB_BOOLCOUNTERIO;}

	DECLARE_FUNC_MAP_FB()

	CFbBoolCounterIO();
	~CFbBoolCounterIO();
	bool FB_Main();
	static void _FB_Main(ST_FB_BoolCounterIO_FB_Main* ST_Param);
	bool FB_exit(bool bInCopyCode);
	static void _FB_exit(ST_FB_BoolCounterIO_FB_exit* ST_Param);
	bool FB_init(bool bInitRetains, bool bInCopyCode);
	static void _FB_init(ST_FB_BoolCounterIO_FB_init* ST_Param);
	HRESULT GetnHResult(HRESULT& nParam);
	static void _GetnHResult(ST_GetSet_HRESULT* ST_Param);
	HRESULT GeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam);
	static void _GeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param);
	HRESULT SeteInitExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam);
	static void _SeteInitExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param);
	HRESULT GeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet& eParam);
	static void _GeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param);
	HRESULT SeteUpdateExceptionHandling(TcMgSdk::FpExcptCtrlSet eParam);
	static void _SeteUpdateExceptionHandling(ST_GetSet_E_FpExcptCtrlSetEx* ST_Param);
	HRESULT GetnExceptionCnt(ULONGLONG& nParam);
	static void _GetnExceptionCnt(ST_GetSet_ULINT* ST_Param);
	HRESULT GetstActiveException(TcMgSdk::ExceptionInfo& stParam);
	static void _GetstActiveException(ST_GetSet_ST_ExceptionInfo* ST_Param);
	HRESULT GetbInitialized(bool& bParam);
	static void _GetbInitialized(ST_GetSet_BOOL* ST_Param);
	HRESULT GetbExecute(bool& bParam);
	static void _GetbExecute(ST_GetSet_BOOL* ST_Param);
	HRESULT SetbExecute(bool bParam);
	static void _SetbExecute(ST_GetSet_BOOL* ST_Param);
	HRESULT put_boolArray(bool* data, LONG size1, LONG size2);
	static void _put_boolArray(ST_FB_BoolCounterIO_put_boolArray* ST_Param);
	HRESULT get_boolArray(bool* data, LONG& size1, LONG& size2);
	static void _get_boolArray(ST_FB_BoolCounterIO_get_boolArray* ST_Param);
	HRESULT put_inverseArray(double* data, LONG size1, LONG size2);
	static void _put_inverseArray(ST_FB_BoolCounterIO_put_inverseArray* ST_Param);
	HRESULT get_inverseArray(double* data, LONG& size1, LONG& size2);
	static void _get_inverseArray(ST_FB_BoolCounterIO_get_inverseArray* ST_Param);
	HRESULT get_inverseArray_(double* data, LONG& size1, LONG& size2);
	static void _get_inverseArray_(ST_FB_BoolCounterIO_get_inverseArray_* ST_Param);



	double count;
	PVOID boolArray;
	PVOID inverseArray;


};
TYPESIZE_VALIDATION2(CFbBoolCounterIO,488,504);


#endif // _FbBoolCounterIO__h_INCLUDED
			