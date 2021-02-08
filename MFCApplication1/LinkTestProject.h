#pragma once
#include "afxwin.h"
#include "afxcmn.h"
#include "resource.h"

class LinkTestProject :public CDialog
{
public:
	LinkTestProject(CWnd* pParent /*=NULL*/);
	virtual ~LinkTestProject();

	enum { IDD = IDD_DIALOG_LISTTEST };
	
public:

	CFont m_font;


public:
	DECLARE_MESSAGE_MAP()
	virtual BOOL OnInitDialog();

	afx_msg void OnStnClickedStaticLink();
};