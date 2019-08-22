#if !defined(AFX_CALENDARSERIES_H__2F3AC3E1_D8CD_479B_B406_C84623346D2E__INCLUDED_)
#define AFX_CALENDARSERIES_H__2F3AC3E1_D8CD_479B_B406_C84623346D2E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CCalendarCell;
class CCalendarCellUpper;

/////////////////////////////////////////////////////////////////////////////
// CCalendarSeries wrapper class

class CCalendarSeries : public COleDispatchDriver
{
public:
	CCalendarSeries() {}		// Calls COleDispatchDriver default constructor
	CCalendarSeries(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCalendarSeries(const CCalendarSeries& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetDate();
	void SetDate(double newValue);
	CCalendarCell GetDays();
	CCalendarCellUpper GetMonths();
	CCalendarCell GetTrailing();
	CCalendarCell GetSunday();
	CCalendarCell GetToday();
	CCalendarCellUpper GetWeekdays();
	void NextMonth();
	void PreviousMonth();
	// method 'RectCell' not emitted because of invalid return type or parameter type
	long Rows();
	// method 'SeriesRect' not emitted because of invalid return type or parameter type
	BOOL GetNextButtonVisible();
	void SetNextButtonVisible(BOOL bNewValue);
	BOOL GetPreviousButtonVisible();
	void SetPreviousButtonVisible(BOOL bNewValue);
	BOOL ClickedDate(long X, long Y, DATE* ADate);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CALENDARSERIES_H__2F3AC3E1_D8CD_479B_B406_C84623346D2E__INCLUDED_)
