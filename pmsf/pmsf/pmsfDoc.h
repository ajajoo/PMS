
// pmsfDoc.h : interface of the CpmsfDoc class
//


#pragma once
#include "pmsfSet.h"


class CpmsfDoc : public CDocument
{
protected: // create from serialization only
	CpmsfDoc();
	DECLARE_DYNCREATE(CpmsfDoc)

// Attributes
public:
	CpmsfSet m_pmsfSet;

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CpmsfDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
