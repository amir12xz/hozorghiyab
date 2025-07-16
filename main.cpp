// main.cpp : implementation file
//

#include "pch.h"
#include "porganji.2.h"
#include "afxdialogex.h"
#include "main.h"


// main dialog

IMPLEMENT_DYNAMIC(main, CDialogEx)

main::main(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	
{
	
}

main::~main()
{
}

void main::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX,IDC_name1, name);
	DDX_Text(pDX, IDC_eh1, e_h[0]);
	DDX_Text(pDX, IDC_eh2, e_h[1]);
	DDX_Text(pDX, IDC_eh3, e_h[2]);
	DDX_Text(pDX, IDC_eh4, e_h[3]);
	DDX_Text(pDX, IDC_eh5, e_h[4]);
	DDX_Text(pDX, IDC_eh6, e_h[5]);
	DDX_Text(pDX, IDC_eh7, e_h[6]);
	DDX_Text(pDX, IDC_eh8, e_h[7]);
	DDX_Text(pDX, IDC_eh9, e_h[8]);
	DDX_Text(pDX, IDC_eh10, e_h[9]);
	DDX_Text(pDX, IDC_em1, e_m[0]);
	DDX_Text(pDX, IDC_em2, e_m[1]);
	DDX_Text(pDX, IDC_em3, e_m[2]);
	DDX_Text(pDX, IDC_em4, e_m[3]);
	DDX_Text(pDX, IDC_em5, e_m[4]);
	DDX_Text(pDX, IDC_em6, e_m[5]);
	DDX_Text(pDX, IDC_em7, e_m[6]);
	DDX_Text(pDX, IDC_em8, e_m[7]);
	DDX_Text(pDX, IDC_em9, e_m[8]);
	DDX_Text(pDX, IDC_em10,e_m[9]);
	DDX_Text(pDX, IDC_vh1, v_h[0]);
	DDX_Text(pDX, IDC_vh2, v_h[1]);
	DDX_Text(pDX, IDC_vh3, v_h[2]);
	DDX_Text(pDX, IDC_vh4, v_h[3]);
	DDX_Text(pDX, IDC_vh5, v_h[4]);
	DDX_Text(pDX, IDC_vh6, v_h[5]);
	DDX_Text(pDX, IDC_vh7, v_h[6]);
	DDX_Text(pDX, IDC_vh8, v_h[7]);
	DDX_Text(pDX, IDC_vh9, v_h[8]);
	DDX_Text(pDX, IDC_vh10,v_h[9]);
	DDX_Text(pDX, IDC_vm1, v_m[0]);
	DDX_Text(pDX, IDC_vm2, v_m[1]);
	DDX_Text(pDX, IDC_vm3, v_m[2]);
	DDX_Text(pDX, IDC_vm4, v_m[3]);
	DDX_Text(pDX, IDC_vm5, v_m[4]);
	DDX_Text(pDX, IDC_vm6, v_m[5]);
	DDX_Text(pDX, IDC_vm7, v_m[6]);
	DDX_Text(pDX, IDC_vm8, v_m[7]);
	DDX_Text(pDX, IDC_vm9, v_m[8]);
	DDX_Text(pDX, IDC_vm10,v_m[9]);
}


BEGIN_MESSAGE_MAP(main, CDialogEx)
	ON_BN_CLICKED(IDOK, &main::OnBnClickedOk)
END_MESSAGE_MAP()


// main message handlers

void main::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	if (Time::p_count >= 3)
	{
		CDialog::OnOK();
		return;
	}
	Time *ob=new Time;
	UpdateData(TRUE);
	ob->setName(name);
	for (int i = 0; i < 10; i++)
	{
		ob->setTime(e_h[i], e_m[i],v_h[i],v_m[i]);
	}
	theApp.person[Time::p_count] = ob;
	Time::p_count++;
	CDialog::OnOK();
}
