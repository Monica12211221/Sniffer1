#if !defined(AFX_VALUELIST_H__49EB6801_74EA_4E9C_A8EB_B195CE366339__INCLUDED_)
#define AFX_VALUELIST_H__49EB6801_74EA_4E9C_A8EB_B195CE366339__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CValueList wrapper class

class CValueList : public COleDispatchDriver
{
public:
	CValueList() {}		// Calls COleDispatchDriver default constructor
	CValueList(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CValueList(const CValueList& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	BOOL GetDateTime();
	void SetDateTime(BOOL bNewValue);
	double GetFirst();
	double GetLast();
	double GetMaximum();
	double GetMinimum();
	long GetOrder();
	void SetOrder(long nNewValue);
	double GetTotal();
	double GetTotalABS();
	double GetValue(long Index);
	void SetValue(long Index, double newValue);
	CString GetValueSource();
	void SetValueSource(LPCTSTR lpszNewValue);
	void Delete(long Index);
	void FillSequence();
	long Locate(double SomeValue);
	void Sort();
	BOOL GetModified();
	void SetModified(BOOL bNewValue);
	double GetTempValue();
	void SetTempValue(double newValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VALUELIST_H__49EB6801_74EA_4E9C_A8EB_B195CE366339__INCLUDED_)
