// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "polargridseries.h"

// Dispatch interfaces referenced by this interface
#include "TeePoint2D.h"
#include "pen.h"
#include "Pointer.h"
#include "ValueList.h"
#include "circlelabels.h"
#include "brush.h"
#include "gradient.h"
#include "Custom3DPaletteSeries.h"


/////////////////////////////////////////////////////////////////////////////
// CPolarGridSeries properties

/////////////////////////////////////////////////////////////////////////////
// CPolarGridSeries operations

long CPolarGridSeries::GetXRadius()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetXRadius(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPolarGridSeries::GetYRadius()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetYRadius(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPolarGridSeries::GetXCenter()
{
	long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CPolarGridSeries::GetYCenter()
{
	long result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CPolarGridSeries::GetCircleWidth()
{
	long result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

long CPolarGridSeries::GetCircleHeight()
{
	long result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

unsigned long CPolarGridSeries::GetCircleBackColor()
{
	unsigned long result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetCircleBackColor(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL CPolarGridSeries::GetCircled()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetCircled(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CPolarGridSeries::GetRotationAngle()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetRotationAngle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CTeePoint2D CPolarGridSeries::AngleToPoint(double Angle, double AXRadius, double AYRadius)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_R8;
	InvokeHelper(0xb, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		Angle, AXRadius, AYRadius);
	return CTeePoint2D(pDispatch);
}

double CPolarGridSeries::PointToAngle(long XCoord, long YCoord)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0xc, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		XCoord, YCoord);
	return result;
}

double CPolarGridSeries::PointToRadius(long XCoord, long YCoord)
{
	double result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x191, DISPATCH_METHOD, VT_R8, (void*)&result, parms,
		XCoord, YCoord);
	return result;
}

double CPolarGridSeries::GetAngleIncrement()
{
	double result;
	InvokeHelper(0x1e, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetAngleIncrement(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x1e, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

BOOL CPolarGridSeries::GetCloseCircle()
{
	BOOL result;
	InvokeHelper(0x1f, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetCloseCircle(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x1f, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

CPen1 CPolarGridSeries::GetPen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x20, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

CPointer CPolarGridSeries::GetPointer()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x21, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPointer(pDispatch);
}

double CPolarGridSeries::GetRadiusIncrement()
{
	double result;
	InvokeHelper(0x22, DISPATCH_PROPERTYGET, VT_R8, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetRadiusIncrement(double newValue)
{
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x22, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CValueList CPolarGridSeries::GetAngleValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x23, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

CValueList CPolarGridSeries::GetRadiusValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x24, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

void CPolarGridSeries::DrawRing(double Value, long Z)
{
	static BYTE parms[] =
		VTS_R8 VTS_I4;
	InvokeHelper(0x26, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Value, Z);
}

CPen1 CPolarGridSeries::GetCirclePen()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x27, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPen1(pDispatch);
}

CCircleLabels CPolarGridSeries::GetCircleLabels()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x28, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCircleLabels(pDispatch);
}

CBrush1 CPolarGridSeries::GetBrush()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CBrush1(pDispatch);
}

void CPolarGridSeries::LoadBackImage(LPCTSTR FileName)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 FileName);
}

void CPolarGridSeries::ClearBackImage()
{
	InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

BOOL CPolarGridSeries::GetClockWiseLabels()
{
	BOOL result;
	InvokeHelper(0x9b, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetClockWiseLabels(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9b, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CPolarGridSeries::GetCircleLabelsInside()
{
	BOOL result;
	InvokeHelper(0x9c, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetCircleLabelsInside(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9c, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CPolarGridSeries::GetTransparency()
{
	long result;
	InvokeHelper(0x73, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetTransparency(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x73, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CGradient CPolarGridSeries::GetCircleGradient()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x12d, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CGradient(pDispatch);
}

void CPolarGridSeries::DrawZone(double Min, double Max, long Z)
{
	static BYTE parms[] =
		VTS_R8 VTS_R8 VTS_I4;
	InvokeHelper(0x12e, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 Min, Max, Z);
}

CValueList CPolarGridSeries::GetCellValues()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x192, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CValueList(pDispatch);
}

BOOL CPolarGridSeries::GetCentered()
{
	BOOL result;
	InvokeHelper(0x193, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetCentered(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x193, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

long CPolarGridSeries::GetNumSectors()
{
	long result;
	InvokeHelper(0x194, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetNumSectors(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x194, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPolarGridSeries::GetNumTracks()
{
	long result;
	InvokeHelper(0x195, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPolarGridSeries::SetNumTracks(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x195, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPolarGridSeries::AddCell(long Sector, long Track, double Value)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4 VTS_R8;
	InvokeHelper(0x196, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Sector, Track, Value);
	return result;
}

long CPolarGridSeries::CalcXPos(long ValueIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x197, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ValueIndex);
	return result;
}

long CPolarGridSeries::CalcYPos(long ValueIndex)
{
	long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x198, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		ValueIndex);
	return result;
}

long CPolarGridSeries::Clicked(long X, long Y)
{
	long result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x199, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		X, Y);
	return result;
}

long CPolarGridSeries::CountLegendItems()
{
	long result;
	InvokeHelper(0x19a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
	return result;
}

unsigned long CPolarGridSeries::GetCellColor(double Value)
{
	unsigned long result;
	static BYTE parms[] =
		VTS_R8;
	InvokeHelper(0x19b, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		Value);
	return result;
}

unsigned long CPolarGridSeries::LegendItemColor(long LegendIndex)
{
	unsigned long result;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x19c, DISPATCH_METHOD, VT_I4, (void*)&result, parms,
		LegendIndex);
	return result;
}

CString CPolarGridSeries::LegendString(long LegendIndex, long LegendTextStyle)
{
	CString result;
	static BYTE parms[] =
		VTS_I4 VTS_I4;
	InvokeHelper(0x19d, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms,
		LegendIndex, LegendTextStyle);
	return result;
}

CCustom3DPaletteSeries CPolarGridSeries::GetPalette()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x19e, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CCustom3DPaletteSeries(pDispatch);
}
