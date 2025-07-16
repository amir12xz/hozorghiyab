#pragma once
#include "afxdialogex.h"


// main dialog

class main : public CDialogEx
{
	DECLARE_DYNAMIC(main)

public:
	main(CWnd* pParent = nullptr);   // standard constructor
	virtual ~main();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int e_h[10] = { 0 }, e_m[10] = { 0 }, v_h[10] = { 0 }, v_m[10] = { 0 };
	CString name;
	afx_msg void OnBnClickedOk();
};
