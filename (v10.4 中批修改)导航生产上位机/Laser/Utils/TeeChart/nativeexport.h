#if !defined(AFX_NATIVEEXPORT_H__66595F1B_DA65_4198_B7B8_878CFF9D776E__INCLUDED_)
#define AFX_NATIVEEXPORT_H__66595F1B_DA65_4198_B7B8_878CFF9D776E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CNativeExport wrapper class

class CNativeExport : public COleDispatchDriver
{
public:
	CNativeExport() {}		// Calls COleDispatchDriver default constructor
	CNativeExport(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CNativeExport(const CNativeExport& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SaveToFile(LPCTSTR FileName, BOOL IncludeData);
	VARIANT SaveToStream(BOOL IncludeData);
	VARIANT SaveToBase64Stream(BOOL IncludeData);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_NATIVEEXPORT_H__66595F1B_DA65_4198_B7B8_878CFF9D776E__INCLUDED_)
