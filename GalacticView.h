// GalacticView.h : interface of the CGalacticView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_GALACTICVIEW_H__2CD6F311_962F_42CC_958C_9761C5C458FE__INCLUDED_)
#define AFX_GALACTICVIEW_H__2CD6F311_962F_42CC_958C_9761C5C458FE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <complex>
#include <fstream>
#define SIZE 255 
using namespace std;

typedef struct{
	BYTE Rojo;
	BYTE Verde;
	BYTE Azul;
}Color;

class CGalacticView : public CView
{
protected: // create from serialization only
	CGalacticView();
	DECLARE_DYNCREATE(CGalacticView)

// Attributes
public:
	CGalacticDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGalacticView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CGalacticView();
	void LoadPaleta(LPSTR);
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	//coordenadas del plando complejo
    double REALMIN,IMAGMIN,REALMAX,IMAGMAX;
	float DIVERGE; //valor de divergencia
    int MAX;       //iteracion maxima
    int maxx,maxy;
	int i,j;
    int Contador;
	DWORD R,G,B;
	ifstream f;
private:
	char *Buffer;	
    typedef Color TipoPaleta[256];
    TipoPaleta Paleta;
protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CGalacticView)
	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in GalacticView.cpp
inline CGalacticDoc* CGalacticView::GetDocument()
   { return (CGalacticDoc*)m_pDocument; }
#endif



/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GALACTICVIEW_H__2CD6F311_962F_42CC_958C_9761C5C458FE__INCLUDED_)
