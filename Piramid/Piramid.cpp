#include "stdafx.h"  //________________________________________ Piramid.cpp
#include "Piramid.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Piramid app;
	return app.BeginDialog(IDI_Piramid, hInstance);
}

void Piramid::Window_Open(Win::Event& e)
{
}
void Piramid::Line(int Pregunta)
{
	for (int j = 0; j < tbxNumero.IntValue; j++)
	{
		for (int i = 0; i <= j; i++)
		{
			tbx1.Text += L"*";
		}
		tbx1.Text += L"\r\n";
	}
	int n = tbxNumero.IntValue - 1;
	for (int i = tbxNumero.IntValue; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			tbx1.Text += L"*";
		}
		n--;
		tbx1.Text += L"\r\n";
	}
}

void Piramid::btClick_Click(Win::Event& e)
{
	int r = tbxNumero.IntValue;
	Line(r);
}

