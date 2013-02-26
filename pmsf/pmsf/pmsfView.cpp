
// pmsfView.cpp : implementation of the CpmsfView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "pmsf.h"
#endif

#include "pmsfSet.h"
#include "pmsfDoc.h"
#include "pmsfView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CpmsfView

IMPLEMENT_DYNCREATE(CpmsfView, CRecordView)

BEGIN_MESSAGE_MAP(CpmsfView, CRecordView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CpmsfView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CpmsfView construction/destruction

CpmsfView::CpmsfView()
	: CRecordView(CpmsfView::IDD)
{
	m_pSet = NULL;
	// TODO: add construction code here

}

CpmsfView::~CpmsfView()
{
}

void CpmsfView::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// you can insert DDX_Field* functions here to 'connect' your controls to the database fields, ex.
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// See MSDN and ODBC samples for more information
}

BOOL CpmsfView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CRecordView::PreCreateWindow(cs);
}

void CpmsfView::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_pmsfSet;
	CRecordView::OnInitialUpdate();

}


// CpmsfView printing


void CpmsfView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CpmsfView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CpmsfView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CpmsfView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CpmsfView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CpmsfView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CpmsfView diagnostics

#ifdef _DEBUG
void CpmsfView::AssertValid() const
{
	CRecordView::AssertValid();
}

void CpmsfView::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CpmsfDoc* CpmsfView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CpmsfDoc)));
	return (CpmsfDoc*)m_pDocument;
}
#endif //_DEBUG


// CpmsfView database support
CRecordset* CpmsfView::OnGetRecordset()
{
	return m_pSet;
}



// CpmsfView message handlers
