#include "App.h"

wxIMPLEMENT_APP(App);

bool App::OnInit()
{
	win = new Window();
	win->Show();
	return true;
}
