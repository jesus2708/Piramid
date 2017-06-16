#pragma once  //______________________________________ Piramid.h  
#include "Resource.h"
class Piramid: public Win::Dialog
{
public:
	Piramid()
	{
	}
	~Piramid()
	{
	}
	void Line(int Pregunta);
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxNumero;
	Win::Textbox tbx1;
	Win::Button btClick;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(8.17563);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(7.56708);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Piramid";
		tbxNumero.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 1.58750, 0.52917, 2.48708, 0.60854, hWnd, 1000);
		tbx1.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_MULTILINE | ES_LEFT | ES_WINNORMALCASE, 1.58750, 1.45521, 6.40292, 5.92667, hWnd, 1001);
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.84187, 0.52917, 2.64583, 0.68792, hWnd, 1002);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxNumero.Font = fontArial009A;
		tbx1.Font = fontArial009A;
		btClick.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
