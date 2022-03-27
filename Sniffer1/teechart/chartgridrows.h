#if !defined(AFX_CHARTGRIDROWS_H__6CC80962_5E6A_4C7E_A749_B42F977F0D02__INCLUDED_)
#define AFX_CHARTGRIDROWS_H__6CC80962_5E6A_4C7E_A749_B42F977F0D02__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CChartGridRows wrapper class

class CChartGridRows : public COleDispatchDriver
{
public:
	CChartGridRows() {}		// Calls COleDispatchDriver default constructor
	CChartGridRows(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CChartGridRows(const CChartGridRows& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetRow();
	void SetRow(long nNewValue);
	long GetCount();
	long GetHeights(long Index);
	void SetHeights(long Index, long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHARTGRIDROWS_H__6CC80962_5E6A_4C7E_A749_B42F977F0D02__INCLUDED_)
