#pragma once
#include "afxwin.h"


// CNewAccountDlg dialog

class CNewAccountDlg : public CDialog
{
	DECLARE_DYNAMIC(CNewAccountDlg)

public:
	CNewAccountDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CNewAccountDlg();

// Dialog Data
	enum { IDD = IDD_NEWACCOUNT_DLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CEdit m_EditUsername;
	CString m_Username;
	CEdit m_EditPassword;
	CString m_Password;
	CString m_ConfirmPassword;
	afx_msg void OnBnClickedOk();
};
