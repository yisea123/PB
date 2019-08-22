#if !defined(AFX_AXIS_H__27E0517F_66D3_4A8B_8F43_D4CA49F1DB6E__INCLUDED_)
#define AFX_AXIS_H__27E0517F_66D3_4A8B_8F43_D4CA49F1DB6E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CChartAxisPen;
class CPen1;
class CAxisLabels;
class CAxisTitle;
class CAxisGridPen;

/////////////////////////////////////////////////////////////////////////////
// CAxis wrapper class

class CAxis : public COleDispatchDriver
{
public:
	CAxis() {}		// Calls COleDispatchDriver default constructor
	CAxis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CAxis(const CAxis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAutomatic();
	void SetAutomatic(BOOL bNewValue);
	BOOL GetAutomaticMaximum();
	void SetAutomaticMaximum(BOOL bNewValue);
	BOOL GetAutomaticMinimum();
	void SetAutomaticMinimum(BOOL bNewValue);
	CChartAxisPen GetAxisPen();
	long GetAxisType();
	BOOL GetExactDateTime();
	void SetExactDateTime(BOOL bNewValue);
	CPen1 GetGridPen();
	double GetIncrement();
	void SetIncrement(double newValue);
	BOOL GetInverted();
	void SetInverted(BOOL bNewValue);
	CAxisLabels GetLabels();
	BOOL GetLogarithmic();
	void SetLogarithmic(BOOL bNewValue);
	double GetMaximum();
	void SetMaximum(double newValue);
	double GetMinimum();
	void SetMinimum(double newValue);
	long GetMinorTickCount();
	void SetMinorTickCount(long nNewValue);
	long GetMinorTickLength();
	void SetMinorTickLength(long nNewValue);
	CPen1 GetMinorTicks();
	long GetPosition();
	long GetTickInnerLength();
	void SetTickInnerLength(long nNewValue);
	long GetTickLength();
	void SetTickLength(long nNewValue);
	BOOL GetTickOnLabelsOnly();
	void SetTickOnLabelsOnly(BOOL bNewValue);
	CPen1 GetTicks();
	CPen1 GetTicksInner();
	CAxisTitle GetTitle();
	long GetTitleSize();
	void SetTitleSize(long nNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	void AdjustMaxMin();
	long CalcXPosValue(double SomeValue);
	long CalcYPosValue(double SomeValue);
	long CalcXSizeValue(double SomeValue);
	long CalcYSizeValue(double SomeValue);
	double CalcPosPoint(long SomeValue);
	BOOL Clicked(long XCoord, long YCoord);
	void CustomDraw(long APosLabels, long APosTitle, long APosAxis, BOOL GridVisible);
	BOOL IsDateTime();
	double MaxXValue();
	double MaxYValue();
	double MinXValue();
	double MinYValue();
	void Scroll(double Offset, BOOL CheckLimits);
	void SetMinMax(double AMin, double AMax);
	BOOL GetGridCentered();
	void SetGridCentered(BOOL bNewValue);
	double GetPositionPercent();
	void SetPositionPercent(double newValue);
	double GetStartPosition();
	void SetStartPosition(double newValue);
	double GetEndPosition();
	void SetEndPosition(double newValue);
	double GetLogarithmicBase();
	void SetLogarithmicBase(double newValue);
	void CustomDrawMinMax(long APosLabels, long APosTitle, long APosAxis, BOOL GridVisible, double AMinimum, double AMaximum, long AStartPosition, long AEndPosition);
	CPen1 GetMinorGrid();
	BOOL GetOtherside();
	void SetOtherside(BOOL bNewValue);
	double MaxVisibleSeriesValue(BOOL AllSeries, long SeriesIndex);
	double MinVisibleSeriesValue(BOOL AllSeries, long SeriesIndex);
	double CalcIncrement();
	double GetZPosition();
	void SetZPosition(double newValue);
	long GetMaximumOffset();
	void SetMaximumOffset(long nNewValue);
	long GetMinimumOffset();
	void SetMinimumOffset(long nNewValue);
	double GetGridZPosition();
	void SetGridZPosition(double newValue);
	long GetPositionUnits();
	void SetPositionUnits(long nNewValue);
	long GetIndex();
	long GetIStartPos();
	long GetIEndPos();
	long GetIAxisSize();
	CAxisGridPen GetGrid();
	BOOL GetMaximumRound();
	void SetMaximumRound(BOOL bNewValue);
	BOOL GetMinimumRound();
	void SetMinimumRound(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AXIS_H__27E0517F_66D3_4A8B_8F43_D4CA49F1DB6E__INCLUDED_)
