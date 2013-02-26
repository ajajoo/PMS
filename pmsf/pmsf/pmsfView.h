
// pmsfView.h : interface of the CpmsfView class
//

#pragma once

class CpmsfSet;

class CpmsfView : public CRecordView
{
protected: // create from serialization only
	CpmsfView();
	DECLARE_DYNCREATE(CpmsfView)

public:
	enum{ IDD = IDD_PMSF_FORM };
	CpmsfSet* m_pSet;

// Attributes
public:
	CpmsfDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CpmsfView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in pmsfView.cpp
inline CpmsfDoc* CpmsfView::GetDocument() const
   { return reinterpret_cast<CpmsfDoc*>(m_pDocument); }
#endif

