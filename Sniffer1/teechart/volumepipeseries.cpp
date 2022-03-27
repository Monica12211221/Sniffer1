// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "volumepipeseries.h"

// Dispatch interfaces referenced by this interface
#include "gradient.h"
#include "pen.h"


/////////////////////////////////////////////////////////////////////////////
// CVolumePipeSeries properties

/////////////////////////////////////////////////////////////////////////////
// CVolumePipeSeries operations

long CVolumePipeSeries::GetConePercent()
{
	long result;
	InvokeHelper(0xca, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CVolumePipeSeries::SetConePercent(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xca, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CGradient CVolumePipeSeries::GetGradient()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcb, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CGradient(pDispatch);
}

CPen1 CVolumePipeSeries::GetLinesPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xcc, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}
