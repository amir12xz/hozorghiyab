// show.cpp : implementation file
//

#include "pch.h"
#include "porganji.2.h"
#include "afxdialogex.h"
#include "show.h"


// show dialog

IMPLEMENT_DYNAMIC(show, CDialogEx)

show::show(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

show::~show()
{
}

void show::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, showsc);
}


BEGIN_MESSAGE_MAP(show, CDialogEx)
END_MESSAGE_MAP()


// show message handlers

BOOL show::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	showsc.InsertColumn(0, L"name", LVCFMT_LEFT,100);
	showsc.InsertColumn(1, L"takhir", LVCFMT_LEFT,100);
	showsc.InsertColumn(2, L"ezafecar", LVCFMT_LEFT,100);
	for (int i = 0; i < 3; i++)
	{
		showsc.InsertItem(i,theApp.person[i]->getName());
		showsc.SetItemText(i, 1, CString(theApp.person[i]->Takhir().c_str()));
		showsc.SetItemText(i, 2, CString(theApp.person[i]->ezafekar().c_str()));
	}


	// TODO:  Add extra initialization here

	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}
