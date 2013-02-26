
// pmsfSet.cpp : implementation of the CpmsfSet class
//

#include "stdafx.h"
#include "pmsf.h"
#include "pmsfSet.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CpmsfSet implementation

// code generated on Monday, February 25, 2013, 1:48 PM

IMPLEMENT_DYNAMIC(CpmsfSet, CRecordset)

CpmsfSet::CpmsfSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	m_username = "";
	m_password = "";
	m_usertype = "";
	m_nFields = 3;
	m_nDefaultType = snapshot;
}
//#error Security Issue: The connection string may contain a password
// The connection string below may contain plain text passwords and/or
// other sensitive information. Please remove the #error after reviewing
// the connection string for any security related issues. You may want to
// store the password in some other form or use a different user authentication.
CString CpmsfSet::GetDefaultConnect()
{
	return _T("Driver=MySQL ODBC 5.2a Driver;SERVER=localhost;UID=root;PWD=arpit;DATABASE=pms;PORT=3306");
}

CString CpmsfSet::GetDefaultSQL()
{
	return _T("[userdata]");
}

void CpmsfSet::DoFieldExchange(CFieldExchange* pFX)
{
	pFX->SetFieldType(CFieldExchange::outputColumn);
// Macros such as RFX_Text() and RFX_Int() are dependent on the
// type of the member variable, not the type of the field in the database.
// ODBC will try to automatically convert the column value to the requested type
	RFX_Text(pFX, _T("[username]"), m_username);
	RFX_Text(pFX, _T("[password]"), m_password);
	RFX_Text(pFX, _T("[usertype]"), m_usertype);

}
/////////////////////////////////////////////////////////////////////////////
// CpmsfSet diagnostics

#ifdef _DEBUG
void CpmsfSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CpmsfSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG

