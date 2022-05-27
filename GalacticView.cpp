// GalacticView.cpp : implementation of the CGalacticView class
//

#include "stdafx.h"
#include "Galactic.h"
#include "GalacticDoc.h"
#include "GalacticView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CGalacticView

IMPLEMENT_DYNCREATE(CGalacticView, CView)

BEGIN_MESSAGE_MAP(CGalacticView, CView)
	//{{AFX_MSG_MAP(CGalacticView)
	ON_WM_PAINT()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGalacticView construction/destruction


CGalacticView::CGalacticView()
{
    Buffer=new char[SIZE];
	LoadPaleta("paleta.pal");
	REALMIN=-0.25,
    IMAGMIN=-0.25,
    REALMAX= 0.25,
    IMAGMAX= 0.25;
	DIVERGE=4.0;
	MAX=256;
	
}

CGalacticView::~CGalacticView()
{
	delete [] Buffer;
}

BOOL CGalacticView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CGalacticView drawing

void CGalacticView::OnDraw(CDC* pDC)
{
	CGalacticDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
}

/////////////////////////////////////////////////////////////////////////////
// CGalacticView diagnostics

#ifdef _DEBUG
void CGalacticView::AssertValid() const
{
	CView::AssertValid();
}

void CGalacticView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CGalacticDoc* CGalacticView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CGalacticDoc)));
	return (CGalacticDoc*)m_pDocument;
}
#endif //_DEBUG


void CGalacticView::LoadPaleta(LPSTR Name)
{
	f.open(Name);
	for(i=0;i<256;i++){
		f.getline(Buffer,SIZE+1,'\n');
		sscanf(Buffer,"%d %d %d",&R,&G,&B);
		Paleta[i].Rojo= R;
		Paleta[i].Verde=G;
		Paleta[i].Azul= B;
	}
	f.close();
}


/////////////////////////////////////////////////////////////////////////////
// CGalacticView message handlers

void CGalacticView::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	complex<double> Z,C;
   
	// TODO: Add your message handler code here
	
	// Do not call CView::OnPaint() for painting messages
 
    //proceso que dibuja el fractal
	  for(i=0;i<maxx;i++)
		for(j=0;j<maxy;j++){
			//asignamos a Z las coordenadas del plano complejo
			 Z.real(((REALMAX-REALMIN)/(maxx)) * i + REALMIN);
			 Z.imag(((IMAGMAX-IMAGMIN)/(maxy)) * j + IMAGMIN);
			   

			 Contador=0; //inicializamos el contador
			 //iniciamos C=-0.7+0.775i
			 //C es una constante
			 C.real(-0.7); //-0.7
			 C.imag(0.775);// 0.775
		do{

		   Z=C*Z - C*Z*Z;//ecuacion Z=C*Z(1-Z)
		   Contador++;   //incrementamos el contador
		   if(norm(Z) > DIVERGE)break;
		 }while(Contador < MAX);
          R=Paleta[Contador].Rojo;
		  G=Paleta[Contador].Verde;
		  B=Paleta[Contador].Azul;
		  if(Contador!=MAX)
		    dc.SetPixel(i,maxy-j,RGB(R,G,B));
		  else
			dc.SetPixel(i,maxy-j,RGB(0,0,0));
	 }
}



void CGalacticView::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	
	// TODO: Add your message handler code here
	maxx=cx;
	maxy=cy;
	
}
