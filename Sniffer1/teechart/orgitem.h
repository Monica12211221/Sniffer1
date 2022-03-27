#if !defined(AFX_ORGITEM_H__6602CE51_D988_4D38_93B2_11005E71C232__INCLUDED_)
#define AFX_ORGITEM_H__6602CE51_D988_4D38_93B2_11005E71C232__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class COrgShape;

/////////////////////////////////////////////////////////////////////////////
// COrgItem wrapper class

class COrgItem : public COleDispatchDriver
{
public:
	COrgItem() {}		// Calls COleDispatchDriver default constructor
	COrgItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	COrgItem(const COrgItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddChild(LPCTSTR Text);
	long AddBrother(LPCTSTR Text);
	VARIANT GetSeries();
	long GetSuperior();
	void SetSuperior(long nNewValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	COrgShape GetFormat();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ORGITEM_H__6602CE51_D988_4D38_93B2_11005E71C232__INCLUDED_)
