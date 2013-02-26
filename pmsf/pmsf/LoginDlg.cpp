// LoginDlg.cpp : implementation file
//

#include "stdafx.h"
#include "pmsf.h"
#include "LoginDlg.h"
#include ".\logindlg.h"
#include "afxdialogex.h"

#include "NewAccountDlg.h"

// CLoginDlg dialog

IMPLEMENT_DYNAMIC(CLoginDlg, CDialog)

CLoginDlg::CLoginDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLoginDlg::IDD, pParent)
	, m_Username(_T(""))
	, m_Password(_T(""))
{

}

CLoginDlg::~CLoginDlg()
{
}

void CLoginDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_USERNAME, m_EditUsername);
	DDX_Text(pDX, IDC_USERNAME, m_Username);
	DDX_Text(pDX, IDC_PASSWORD, m_Password);
}


BEGIN_MESSAGE_MAP(CLoginDlg, CDialog)
	ON_BN_CLICKED(IDC_NEWACCOUNT_BTN, &CLoginDlg::OnBnClickedNewaccountBtn)
	ON_BN_CLICKED(IDOK, &CLoginDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CLoginDlg message handlers


void CLoginDlg::OnBnClickedNewaccountBtn()
{
	// TODO: Add your control notification handler code here
	CNewAccountDlg Dlg;

	Dlg.DoModal();
}


void CLoginDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	UpdateData();

	char UsernameFromFile[20], PasswordFromFile[20];
	//database handle
	//FILE *fleCredentials;
	bool ValidLogin = true;

	if( m_Username == "" )
	{
		AfxMessageBox((CString)"You must provide a username and a password or click Cancel");
		return;
	}
	if( m_Password == "" )
	{
		AfxMessageBox((CString)"Invalid Login");
		return;
	}

	try {
		//open the database
		// Open the file for reading
		//fleCredentials = fopen("credentials.crd", "r");

		// Scan the file from beginning to end
		while(0)//!feof(fleCredentials) //not the last
		{
			// Read a username
			//fscanf(fleCredentials, "%s", UsernameFromFile);

			// Compare the typed username with the username from the file
			if( strcmp((char*)(LPCTSTR)m_Username, UsernameFromFile) == 0 )
			{
				// With the current username, retrieve the corresponding password
				//fscanf(fleCredentials, "%s", PasswordFromFile);
			
				// Compare the typed password with the one on file
				if( strcmp((char*)(LPCTSTR)m_Password, PasswordFromFile) == 0 )
				{
					ValidLogin = true;
				}
				else
					ValidLogin = false;
			}
		}
		if( ValidLogin == true )
			OnOK();
		else
		{
			AfxMessageBox((CString)"Invalid Credentials. Please try again");
			this->m_EditUsername.SetFocus();
		}

		//close the database
		//fclose(fleCredentials);
	}
	catch(...)
	{
		AfxMessageBox((CString)"Could not validate the credentials");
	}
	
	UpdateData(FALSE);
}
