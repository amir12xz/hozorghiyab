#pragma once
#include "afxdialogex.h"


// show dialog

class show : public CDialogEx
{
	DECLARE_DYNAMIC(show)

public:
	show(CWnd* pParent = nullptr);   // standard constructor
	virtual ~show();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl showsc;
	virtual BOOL OnInitDialog();
};
