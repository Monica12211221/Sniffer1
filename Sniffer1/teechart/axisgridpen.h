#if !defined(AFX_AXISGRIDPEN_H__546E6C18_00A4_445A_9D1C_2932E431E79D__INCLUDED_)
#define AFX_AXISGRIDPEN_H__546E6C18_00A4_445A_9D1C_2932E431E79D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CAxisGridPen wrapper class

class CAxisGridPen : public COleDispatchDriver
{
public:
	CAxisGridPen() {}		// Calls COleDispatchDriver default constructor
	CAxisGridPen(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAxisGridPen(const CAxisGridPen& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetDrawEvery();
	void SetDrawEvery(long nNewValue);
	double GetZPosition();
	void SetZPosition(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AXISGRIDPEN_H__546E6C18_00A4_445A_9D1C_2932E431E79D__INCLUDED_)
