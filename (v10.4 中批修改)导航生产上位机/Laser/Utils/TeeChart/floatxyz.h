#if !defined(AFX_FLOATXYZ_H__7153E9C7_6528_47F9_9B6B_D7E48F845B4F__INCLUDED_)
#define AFX_FLOATXYZ_H__7153E9C7_6528_47F9_9B6B_D7E48F845B4F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CFloatXYZ wrapper class

class CFloatXYZ : public COleDispatchDriver
{
public:
	CFloatXYZ() {}		// Calls COleDispatchDriver default constructor
	CFloatXYZ(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CFloatXYZ(const CFloatXYZ& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

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

#endif // !defined(AFX_FLOATXYZ_H__7153E9C7_6528_47F9_9B6B_D7E48F845B4F__INCLUDED_)
