// GalacticDoc.h : interface of the CGalacticDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GALACTICDOC_H__32B08540_3F83_44D4_B548_2117EE7D392C__INCLUDED_)
#define AFX_GALACTICDOC_H__32B08540_3F83_44D4_B548_2117EE7D392C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CGalacticDoc : public CDocument
{
protected: // create from serialization only
	CGalacticDoc();
	DECLARE_DYNCREATE(CGalacticDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGalacticDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGalacticDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGalacticDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GALACTICDOC_H__32B08540_3F83_44D4_B548_2117EE7D392C__INCLUDED_)
