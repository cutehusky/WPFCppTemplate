#include "WinApplication.h"

WinApplication::WinApplication(WindowsBase^ mainWindows)
	: _mainWindows(mainWindows->LoadWindows()) {}

void WinApplication::OnStartup(StartupEventArgs^ e)
{
	Application::OnStartup(e);
	_mainWindows->Show();
}
