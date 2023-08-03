#pragma once
#include "wx/wx.h"

class Window : public wxFrame
{
	wxButton* temp = nullptr;
	wxButton* button1 = nullptr;
	wxButton* button2 = nullptr;
	wxButton* button3 = nullptr;
	wxButton* button4 = nullptr;
	wxButton* button5 = nullptr;
	wxButton* button6 = nullptr;
	wxButton* button7 = nullptr;
	wxButton* button8 = nullptr;
	wxButton* button9 = nullptr;
	wxButton* button10 = nullptr;
	wxButton* button11 = nullptr;
	wxButton* button12 = nullptr;
	wxButton* button13 = nullptr;
	wxButton* button14 = nullptr;
	wxButton* button15 = nullptr;
	wxButton* button16 = nullptr;
	wxButton* button17 = nullptr;
	wxButton* button18 = nullptr;
	wxButton* button19 = nullptr;
	wxButton* button20 = nullptr;
	wxButton* button21 = nullptr;
	wxButton* button22 = nullptr;
	wxButton* button23 = nullptr;

	wxTextCtrl* textbox = nullptr;

public:
	Window();
	void OnButtonClick(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();

};

