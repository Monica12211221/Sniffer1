#if !defined(AFX_MAPPOLYGON_H__9D2DD29F_63FA_46B8_921E_4C51A87BA154__INCLUDED_)
#define AFX_MAPPOLYGON_H__9D2DD29F_63FA_46B8_921E_4C51A87BA154__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CBrush1;
class CGradient;
class CPen1;
class CPointArray;

/////////////////////////////////////////////////////////////////////////////
// CMapPolygon wrapper class

class CMapPolygon : public COleDispatchDriver
{
public:
	CMapPolygon() {}		// Calls COleDispatchDriver default constructor
	CMapPolygon(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMapPolygon(const CMapPolygon& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CBrush1 GetBrush();
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	CGradient GetGradient();
	BOOL GetParentBrush();
	void SetParentBrush(BOOL bNewValue);
	BOOL GetParentPen();
	void SetParentPen(BOOL bNewValue);
	CPen1 GetPen();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	double GetZ();
	void SetZ(double newValue);
	long AddXY(double X, double Y);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	BOOL Visible();
	BOOL GetClosed();
	void SetClosed(BOOL bNewValue);
	CPointArray GetGetPoints();
	long GetIndex();
	void SetIndex(long nNewValue);
	BOOL GetActive();
	void SetActive(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAPPOLYGON_H__9D2DD29F_63FA_46B8_921E_4C51A87BA154__INCLUDED_)
