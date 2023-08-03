#pragma once
#include "wx/wx.h"
#include "Window.h"

class App : public wxApp
{
	Window* win = nullptr;

public:
	virtual bool OnInit();
};

