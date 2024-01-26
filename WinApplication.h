#pragma once
#include "WindowsBase.h"
using namespace System::Windows::Media;
using namespace System;
using namespace System::Windows;
using namespace System::Windows::Controls;
using namespace System::Windows::Markup;
using namespace System::IO;

ref class WinApplication : Application
{
private:
	Window^ _mainWindows;
public:
	WinApplication(WindowsBase^ mainWindow);
protected:
	void OnStartup(StartupEventArgs^ e) override;
};