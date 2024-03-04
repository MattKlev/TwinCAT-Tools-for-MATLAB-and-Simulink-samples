
// ****************** Tc3_BoolCounterDrv.cpp *************************
// Generated by TE140x-TargetForMatlabSimulink  2.8.21.0
// MATLAB 23.2.0.2409890 (R2023b) Update 3 (win64)
// TwinCAT 3.1.4024.0
// TwinCAT Target 2.8.21.0
// Beckhoff Automation GmbH & Co. KG     (www.beckhoff.com)
// *************************************************************
#include "TcPch.h"
#pragma hdrstop
#define DEVICE_MAIN

#include "Tc3_BoolCounterDrv.h"
#include "Tc3_BoolCounterClassFactory.h"
#include "Tc3_BoolCounterVersion.h"

DECLARE_GENERIC_DEVICE(Tc3_BoolCounterDRV)
#undef DEVICE_MAIN

IOSTATUS CTc3_BoolCounterDrv::OnLoad( )
{
	TRACE(_T("CTc3_BoolCounterClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CTc3_BoolCounterClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CTc3_BoolCounterDrv::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CTc3_BoolCounterDrv::Tc3_BoolCounter_GetVersion( )
{
	return(0);
}