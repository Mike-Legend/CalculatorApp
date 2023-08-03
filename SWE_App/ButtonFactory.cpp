#include "ButtonFactory.h"
#include <vector>

//Didnt need to use.
wxButton* ButtonFactory::MakeButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize) {
	wxButton* b = new wxButton;
	b->SetParent(buttonPar);
	b->SetLabel(buttonName);
	b->SetId(buttonID);
	b->SetPosition(buttonPos);
	b->SetSize(buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateSinButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateCosButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateTanButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateModButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create7Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create4Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create1Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateDelButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create8Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create5Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create2Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create0Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create9Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create6Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::Create3Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateDotButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateSlashButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateMultButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateMinButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateAddButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateClearButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateBackButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

wxButton* ButtonFactory::CreateEqualButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize)
{
	wxButton* b = new wxButton(buttonPar, buttonID, buttonName, buttonPos, buttonSize);
	return b;
}

std::vector<wxButton*> ButtonFactory::CreateButtons(wxWindow* temp) {
	std::vector<wxButton*> buttons;
	buttons.push_back(CreateSinButton(temp, 101, "Sin", wxPoint(10, 70), wxSize(50, 50)));
	buttons.push_back(CreateCosButton(temp, 102, "Cos", wxPoint(10, 130), wxSize(50, 50)));
	buttons.push_back(CreateTanButton(temp, 103, "Tan", wxPoint(10, 190), wxSize(50, 50)));
	buttons.push_back(CreateModButton(temp, 104, "%", wxPoint(10, 250), wxSize(50, 50)));
	buttons.push_back(Create7Button(temp, 105, "7", wxPoint(70, 70), wxSize(50, 50)));
	buttons.push_back(Create4Button(temp, 106, "4", wxPoint(70, 130), wxSize(50, 50)));
	buttons.push_back(Create1Button(temp, 107, "1", wxPoint(70, 190), wxSize(50, 50)));
	buttons.push_back(CreateDelButton(temp, 108, "-", wxPoint(70, 250), wxSize(50, 50)));
	buttons.push_back(Create8Button(temp, 109, "8", wxPoint(130, 70), wxSize(50, 50)));
	buttons.push_back(Create5Button(temp, 110, "5", wxPoint(130, 130), wxSize(50, 50)));
	buttons.push_back(Create2Button(temp, 111, "2", wxPoint(130, 190), wxSize(50, 50)));
	buttons.push_back(Create0Button(temp, 112, "0", wxPoint(130, 250), wxSize(50, 50)));
	buttons.push_back(Create9Button(temp, 113, "9", wxPoint(190, 70), wxSize(50, 50)));
	buttons.push_back(Create6Button(temp, 114, "6", wxPoint(190, 130), wxSize(50, 50)));
	buttons.push_back(Create3Button(temp, 115, "3", wxPoint(190, 190), wxSize(50, 50)));
	buttons.push_back(CreateDotButton(temp, 116, ".", wxPoint(190, 250), wxSize(50, 50)));
	buttons.push_back(CreateSlashButton(temp, 117, "/", wxPoint(250, 70), wxSize(50, 50)));
	buttons.push_back(CreateMultButton(temp, 118, "*", wxPoint(250, 130), wxSize(50, 50)));
	buttons.push_back(CreateMinButton(temp, 119, "-", wxPoint(250, 190), wxSize(50, 50)));
	buttons.push_back(CreateAddButton(temp, 120, "+", wxPoint(250, 250), wxSize(50, 50)));
	buttons.push_back(CreateClearButton(temp, 121, "CL", wxPoint(310, 70), wxSize(50, 50)));
	buttons.push_back(CreateBackButton(temp, 122, "<-", wxPoint(310, 130), wxSize(50, 50)));
	buttons.push_back(CreateEqualButton(temp, 123, "=", wxPoint(310, 190), wxSize(50, 110)));
	return buttons;
}