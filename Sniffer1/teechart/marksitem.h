#if !defined(AFX_MARKSITEM_H__1DD2EDBA_1DFB_4105_A7A3_DF6478B5773B__INCLUDED_)
#define AFX_MARKSITEM_H__1DD2EDBA_1DFB_4105_A7A3_DF6478B5773B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CTeeFont;
class CGradient;
class CTeeRect;
class CTeeShadow;
class CPen1;
class CBackImage;
class CStrings;
class CBrush1;

/////////////////////////////////////////////////////////////////////////////
// CMarksItem wrapper class

class CMarksItem : public COleDispatchDriver
{
public:
	CMarksItem() {}		// Calls COleDispatchDriver default constructor
	CMarksItem(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMarksItem(const CMarksItem& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	CTeeFont GetFont();
	CGradient GetGradient();
	long GetShadowSize();
	void SetShadowSize(long nNewValue);
	unsigned long GetShadowColor();
	void SetShadowColor(unsigned long newValue);
	BOOL GetTransparent();
	void SetTransparent(BOOL bNewValue);
	long GetShapeStyle();
	void SetShapeStyle(long nNewValue);
	long GetTransparency();
	void SetTransparency(long nNewValue);
	CTeeRect GetShapeBounds();
	long GetBevel();
	void SetBevel(long nNewValue);
	long GetBevelWidth();
	void SetBevelWidth(long nNewValue);
	void ShowEditorShape();
	CTeeShadow GetShadow();
	long GetRoundSize();
	void SetRoundSize(long nNewValue);
	CPen1 GetPen();
	CBackImage GetPicture();
	void Show();
	void Hide();
	CStrings GetText();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CBrush1 GetBrush();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MARKSITEM_H__1DD2EDBA_1DFB_4105_A7A3_DF6478B5773B__INCLUDED_)
