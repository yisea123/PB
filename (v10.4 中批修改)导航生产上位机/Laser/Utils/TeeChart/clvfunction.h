#if !defined(AFX_CLVFUNCTION_H__77A4B659_2260_4BC8_9527_1139BC8EA7BC__INCLUDED_)
#define AFX_CLVFUNCTION_H__77A4B659_2260_4BC8_9527_1139BC8EA7BC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCLVFunction wrapper class

class CCLVFunction : public COleDispatchDriver
{
public:
	CCLVFunction() {}		// Calls COleDispatchDriver default constructor
	CCLVFunction(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CCLVFunction(const CCLVFunction& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetAccumulate();
	void SetAccumulate(BOOL bNewValue);
	VARIANT GetVolume();
	void SetVolume(const VARIANT& newValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLVFUNCTION_H__77A4B659_2260_4BC8_9527_1139BC8EA7BC__INCLUDED_)
