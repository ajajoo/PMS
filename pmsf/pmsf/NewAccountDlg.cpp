// NewAccountDlg.cpp : implementation file
//

#include "stdafx.h"
#include "pmsf.h"
#include "NewAccountDlg.h"
#include "afxdialogex.h"


// CNewAccountDlg dialog

IMPLEMENT_DYNAMIC(CNewAccountDlg, CDialog)

CNewAccountDlg::CNewAccountDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CNewAccountDlg::IDD, pParent)
	, m_Username(_T(""))
	, m_Password(_T(""))
	, m_ConfirmPassword(_T(""))
{

}

CNewAccountDlg::~CNewAccountDlg()
{
}

void CNewAccountDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_USERNAME, m_EditUsername);
	DDX_Text(pDX, IDC_USERNAME, m_Username);
	DDX_Control(pDX, IDC_PASSWORD, m_EditPassword);
	DDX_Text(pDX, IDC_PASSWORD, m_Password);
	DDX_Text(pDX, IDC_CONFIRM_PASSWORD, m_ConfirmPassword);
}


BEGIN_MESSAGE_MAP(CNewAccountDlg, CDialog)
	ON_BN_CLICKED(IDOK, &CNewAccountDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CNewAccountDlg message handlers


void CNewAccountDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	UpdateData();

	// Make sure the user provided a username
	if( m_Username == "" )
	{
		AfxMessageBox((CString)"You must provide a username");
		m_EditUsername.SetFocus();
		return;
	}

	// Don't allow a blank password
	if( m_Password == "" )
	{
		AfxMessageBox((CString)"Blank passwords are not allowed\n"
					  "Please provide a password");
		m_EditPassword.SetFocus();
		return;
	}

	// The password and the blank password must be the same
	if( m_ConfirmPassword != m_Password )
	{
		AfxMessageBox((CString)"The passwords you provided are not the same");
		m_EditPassword.SetFocus();
		return;
	}

	//database
	//FILE *fleCredentials;

	try {
		//create or open database
		// Create a new file or open the existing one
		//fleCredentials = fopen("credentials.crd", "a+");
		//add the username to the database
		// Add the username to the file
		//fprintf(fleCredentials, "%s ",  (LPCTSTR)m_Username);
		//add the password to database
		// Add the password to the file
		//fprintf(fleCredentials, "%s\n", (LPCTSTR)m_Password);

		//close the database
		// After using it, close the file
		//fclose(fleCredentials);
	}
	catch(...)
	{
		// Did something go wrong???
		AfxMessageBox((CString)"Could not validate the credentials");
	}

	UpdateData(FALSE);
	OnOK();
}
