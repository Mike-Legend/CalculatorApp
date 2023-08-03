#pragma once
#include "Window.h"
#include <vector>

class ButtonFactory
{
public:
	static wxButton* MakeButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateSinButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateCosButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateTanButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateModButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create7Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create4Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create1Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateDelButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create8Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);;
	static wxButton* Create5Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create2Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create0Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create9Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create6Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* Create3Button(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateDotButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateSlashButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateMultButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateMinButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateAddButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateClearButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateBackButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static wxButton* CreateEqualButton(wxWindow* buttonPar, int buttonID, std::string buttonName, wxPoint buttonPos, wxSize buttonSize);
	static std::vector<wxButton*> CreateButtons(wxWindow* temp);
};

