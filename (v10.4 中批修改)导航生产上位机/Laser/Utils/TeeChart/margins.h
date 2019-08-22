#if !defined(AFX_MARGINS_H__1957F87A_9982_4303_AB73_60E447E9DFE9__INCLUDED_)
#define AFX_MARGINS_H__1957F87A_9982_4303_AB73_60E447E9DFE9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CMargins wrapper class

class CMargins : public COleDispatchDriver
{
public:
	CMargins() {}		// Calls COleDispatchDriver default constructor
	CMargins(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CMargins(const CMargins& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	long GetRight();
	void SetRight(long nNewValue);
	long GetBottom();
	void SetBottom(long nNewValue);
	long GetUnits();
	void SetUnits(long nNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MARGINS_H__1957F87A_9982_4303_AB73_60E447E9DFE9__INCLUDED_)
