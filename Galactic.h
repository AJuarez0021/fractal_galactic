// Galactic.h : main header file for the GALACTIC application
//

#if !defined(AFX_GALACTIC_H__D0FC9A64_CA6C_444B_8BAB_2CADD4372628__INCLUDED_)
#define AFX_GALACTIC_H__D0FC9A64_CA6C_444B_8BAB_2CADD4372628__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CGalacticApp:
// See Galactic.cpp for the implementation of this class
//


class CGalacticApp : public CWinApp
{
public:
	CGalacticApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGalacticApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CGalacticApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};



/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GALACTIC_H__D0FC9A64_CA6C_444B_8BAB_2CADD4372628__INCLUDED_)


