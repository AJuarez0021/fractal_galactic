// GalacticDoc.cpp : implementation of the CGalacticDoc class
//

#include "stdafx.h"
#include "Galactic.h"

#include "GalacticDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGalacticDoc

IMPLEMENT_DYNCREATE(CGalacticDoc, CDocument)

BEGIN_MESSAGE_MAP(CGalacticDoc, CDocument)
	//{{AFX_MSG_MAP(CGalacticDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGalacticDoc construction/destruction

CGalacticDoc::CGalacticDoc()
{
}

CGalacticDoc::~CGalacticDoc()
{
}

BOOL CGalacticDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CGalacticDoc serialization

void CGalacticDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}

/////////////////////////////////////////////////////////////////////////////
// CGalacticDoc diagnostics

#ifdef _DEBUG
void CGalacticDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CGalacticDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CGalacticDoc commands
