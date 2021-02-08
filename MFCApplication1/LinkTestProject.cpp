#include "pch.h"
#include "LinkTestProject.h"
BEGIN_MESSAGE_MAP(LinkTestProject, CDialog)

	ON_STN_CLICKED(IDC_STATIC_LINK, &LinkTestProject::OnStnClickedStaticLink)
END_MESSAGE_MAP()

LinkTestProject::LinkTestProject(CWnd* pParent /*=NULL*/):CDialog(LinkTestProject::IDD, pParent)
{
	int i = 0;
}

LinkTestProject::~LinkTestProject() 
{

}

BOOL LinkTestProject::OnInitDialog() 
{
	CDialog::OnInitDialog();

	LOGFONT font_info;

	::GetObject(GetStockObject(DEFAULT_GUI_FONT),sizeof(LOGFONT),&font_info);

	font_info.lfUnderline = TRUE;
	font_info.lfItalic = TRUE;
	font_info.lfWeight = 600;

	memcpy(font_info.lfFaceName,L"굴림체",sizeof(L"굴림체"));
	m_font.CreateFontIndirectW(&font_info);

	GetDlgItem(IDC_STATIC_LINK)->SetFont(&m_font);

	//font의 디자인을 변경 할 수 있습니다.


	return true;
}


void LinkTestProject::OnStnClickedStaticLink()
{
	ShellExecute(NULL,L"open",L"chrome.exe",L"https://www.youtube.com/",NULL,SW_SHOW);
	//이게무슨일이야 이렇게...
	int dfs = 0;
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
