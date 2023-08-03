#include "Window.h"
#include <cmath>
#include <wx/tokenzr.h>
#include <string>
#include "ButtonFactory.h"
#include "CalculatorProcessor.h"

wxBEGIN_EVENT_TABLE(Window, wxFrame)
EVT_BUTTON(101, Window::OnButtonClick)
EVT_BUTTON(102, Window::OnButtonClick)
EVT_BUTTON(103, Window::OnButtonClick)
EVT_BUTTON(104, Window::OnButtonClick)
EVT_BUTTON(105, Window::OnButtonClick)
EVT_BUTTON(106, Window::OnButtonClick)
EVT_BUTTON(107, Window::OnButtonClick)
EVT_BUTTON(108, Window::OnButtonClick)
EVT_BUTTON(109, Window::OnButtonClick)
EVT_BUTTON(110, Window::OnButtonClick)
EVT_BUTTON(111, Window::OnButtonClick)
EVT_BUTTON(112, Window::OnButtonClick)
EVT_BUTTON(113, Window::OnButtonClick)
EVT_BUTTON(114, Window::OnButtonClick)
EVT_BUTTON(115, Window::OnButtonClick)
EVT_BUTTON(116, Window::OnButtonClick)
EVT_BUTTON(117, Window::OnButtonClick)
EVT_BUTTON(118, Window::OnButtonClick)
EVT_BUTTON(119, Window::OnButtonClick)
EVT_BUTTON(120, Window::OnButtonClick)
EVT_BUTTON(121, Window::OnButtonClick)
EVT_BUTTON(122, Window::OnButtonClick)
EVT_BUTTON(123, Window::OnButtonClick)
wxEND_EVENT_TABLE()

Window::Window() : 
	wxFrame(nullptr, wxID_ANY, "Calculator", wxPoint(400,200), wxSize(385,345))
{
	textbox = new wxTextCtrl(this, 100, "", wxPoint(10, 10), wxSize(350, 50));
	textbox->SetFont(textbox->GetFont().Scale(2.5));
	temp = new wxButton(this, 99, "" , wxPoint(0, 0), wxSize(0,0));
	
	//old code
	
	//button1 = new wxButton(this, 101, "Sin", wxPoint(10, 70), wxSize(50, 50));
	//button2 = new wxButton(this, 102, "Cos", wxPoint(10, 130), wxSize(50, 50));
	//button3 = new wxButton(this, 103, "Tan", wxPoint(10, 190), wxSize(50, 50));
	//button4 = new wxButton(this, 104, "%", wxPoint(10, 250), wxSize(50, 50));
	//button5 = new wxButton(this, 105, "7", wxPoint(70, 70), wxSize(50, 50));
	//button6 = new wxButton(this, 106, "4", wxPoint(70, 130), wxSize(50, 50));
	//button7 = new wxButton(this, 107, "1", wxPoint(70, 190), wxSize(50, 50));
	//button8 = new wxButton(this, 108, "-", wxPoint(70, 250), wxSize(50, 50));
	//button9 = new wxButton(this, 109, "8", wxPoint(130, 70), wxSize(50, 50));
	//button10 = new wxButton(this, 110, "5", wxPoint(130, 130), wxSize(50, 50));
	//button11 = new wxButton(this, 111, "2", wxPoint(130, 190), wxSize(50, 50));
	//button12 = new wxButton(this, 112, "0", wxPoint(130, 250), wxSize(50, 50));
	//button13 = new wxButton(this, 113, "9", wxPoint(190, 70), wxSize(50, 50));
	//button14 = new wxButton(this, 114, "6", wxPoint(190, 130), wxSize(50, 50));
	//button15 = new wxButton(this, 115, "3", wxPoint(190, 190), wxSize(50, 50));
	//button16 = new wxButton(this, 116, ".", wxPoint(190, 250), wxSize(50, 50));
	//button17 = new wxButton(this, 117, "/", wxPoint(250, 70), wxSize(50, 50));
	//button18 = new wxButton(this, 118, "*", wxPoint(250, 130), wxSize(50, 50));
	//button19 = new wxButton(this, 119, "-", wxPoint(250, 190), wxSize(50, 50));
	//button20 = new wxButton(this, 120, "+", wxPoint(250, 250), wxSize(50, 50));
	//button21 = new wxButton(this, 121, "CL", wxPoint(310, 70), wxSize(50, 50));
	//button22 = new wxButton(this, 122, "<-", wxPoint(310, 130), wxSize(50, 50));
	//button23 = new wxButton(this, 123, "=", wxPoint(310, 190), wxSize(50, 110));
	
	std::vector<wxButton*> buttons = ButtonFactory::CreateButtons(temp->GetParent());	
	button1 = buttons[0];
	button2 = buttons[1];
	button3 = buttons[2];
	button4 = buttons[3];
	button5 = buttons[4];
	button6 = buttons[5];
	button7 = buttons[6];
	button8 = buttons[7];
	button9 = buttons[8];
	button10 = buttons[9];
	button11 = buttons[10];
	button12 = buttons[11];
	button13 = buttons[12];
	button14 = buttons[13];
	button15 = buttons[14];
	button16 = buttons[15];
	button17 = buttons[16];
	button18 = buttons[17];
	button19 = buttons[18];
	button20 = buttons[19];
	button21 = buttons[20];
	button22 = buttons[21];
	button23 = buttons[22];
}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	wxButton* evtButton = static_cast<wxButton*>(evt.GetEventObject());
	textbox->AppendText(evtButton->GetLabel());
	wxString numbers;

	switch (evt.GetId())
	{
	case 121:
		textbox->Clear();
		break;
	case 122:
		numbers = textbox->GetValue();
		if (numbers.size() != 0) {
			for (int i = 0; i < 3; i++) {
				numbers.RemoveLast();
			}
		}
		textbox->SetValue(numbers);
		break;
	case 123:
		numbers = textbox->GetValue();
		numbers.RemoveLast();
		std::string eqn = std::string(numbers.mb_str());

		//Singleton Calculated
		float result = Calculator::Calc(eqn.c_str());

		//Shunting Yard Organization for error text
		Calculator::RPN rpn = Calculator::reversePolishNotation(eqn.c_str());
		Calculator::Node* tree = Calculator::parse(rpn);
		if (tree == NULL) {
			eqn = "Error";
			textbox->SetValue(eqn);
		}
		else {
			eqn = std::to_string(result);
			textbox->SetValue(eqn);
		}
		break;
	}
}
