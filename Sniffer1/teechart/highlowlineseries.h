#if !defined(AFX_HIGHLOWLINESERIES_H__A2ABF911_A56F_4439_BC46_576E8ECF55E7__INCLUDED_)
#define AFX_HIGHLOWLINESERIES_H__A2ABF911_A56F_4439_BC46_576E8ECF55E7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CValueList;
class CPointer;

/////////////////////////////////////////////////////////////////////////////
// CHighLowLineSeries wrapper class

class CHighLowLineSeries : public COleDispatchDriver
{
public:
	CHighLowLineSeries() {}		// Calls COleDispatchDriver default constructor
	CHighLowLineSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CHighLowLineSeries(const CHighLowLineSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddHighLow(double AX, double AHigh, double ALow, LPCTSTR AXLabel, unsigned long AColor);
	CValueList GetHighValues();
	CValueList GetLowValues();
	double MaxYValue();
	double MinYValue();
	CPointer GetHighPointer();
	CPointer GetLowPointer();
	long Clicked(long X, long Y);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HIGHLOWLINESERIES_H__A2ABF911_A56F_4439_BC46_576E8ECF55E7__INCLUDED_)