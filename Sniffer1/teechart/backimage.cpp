// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "backimage.h"

// Dispatch interfaces referenced by this interface
#include "FilterItems.h"


/////////////////////////////////////////////////////////////////////////////
// CBackImage properties

/////////////////////////////////////////////////////////////////////////////
// CBackImage operations

CFilterItems CBackImage::GetFilters()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xc9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CFilterItems(pDispatch);
}

void CBackImage::LoadImage(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xca, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

void CBackImage::AssignImage(long ImageHandle)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xcb, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 ImageHandle);
}

void CBackImage::ClearImage()
{
	InvokeHelper(0xcc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CBackImage::ShowFiltersEditor()
{
	BOOL result;
	InvokeHelper(0xcd, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
	return result;
}

long CBackImage::GetHandle()
{
	long result;
	InvokeHelper(0xce, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

BOOL CBackImage::GetInside()
{
	BOOL result;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CBackImage::SetInside(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x12d, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CBackImage::GetLeft()
{
	long result;
	InvokeHelper(0x12e, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CBackImage::SetLeft(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CBackImage::GetTop()
{
	long result;
	InvokeHelper(0x12f, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CBackImage::SetTop(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x12f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CBackImage::GetMode()
{
	long result;
	InvokeHelper(0x130, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CBackImage::SetMode(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x130, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}
