#if !defined(AFX_GLPOSITION_H__9C80DF10_37C1_4002_A7CD_B3F773F1F272__INCLUDED_)
#define AFX_GLPOSITION_H__9C80DF10_37C1_4002_A7CD_B3F773F1F272__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CGLPosition wrapper class

class CGLPosition : public COleDispatchDriver
{
public:
	CGLPosition() {}		// Calls COleDispatchDriver default constructor
	CGLPosition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGLPosition(const CGLPosition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	double GetZ();
	void SetZ(double newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GLPOSITION_H__9C80DF10_37C1_4002_A7CD_B3F773F1F272__INCLUDED_)
