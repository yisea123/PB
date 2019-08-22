#if !defined(AFX_GLLIGHTSOURCE_H__1FEAB45F_DC67_434E_8E1A_9F75E64E9E93__INCLUDED_)
#define AFX_GLLIGHTSOURCE_H__1FEAB45F_DC67_434E_8E1A_9F75E64E9E93__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CGLPosition;

/////////////////////////////////////////////////////////////////////////////
// CGLLightSource wrapper class

class CGLLightSource : public COleDispatchDriver
{
public:
	CGLLightSource() {}		// Calls COleDispatchDriver default constructor
	CGLLightSource(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CGLLightSource(const CGLLightSource& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CGLPosition GetDirection();
	BOOL GetFixedPosition();
	void SetFixedPosition(BOOL bNewValue);
	CGLPosition GetPosition();
	double GetSpotDegrees();
	void SetSpotDegrees(double newValue);
	BOOL GetUseDirection();
	void SetUseDirection(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GLLIGHTSOURCE_H__1FEAB45F_DC67_434E_8E1A_9F75E64E9E93__INCLUDED_)
