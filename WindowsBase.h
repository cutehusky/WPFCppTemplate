#pragma once
using namespace System::Windows::Media;
using namespace System;
using namespace System::Windows;
using namespace System::Windows::Controls;
using namespace System::Windows::Markup;
using namespace System::IO;

ref class WindowsBase
{
private:
	String^ _windowsName;
public:
	WindowsBase(String^ name);
	virtual Window^ LoadWindows();
protected:
	Window^ _wd;
	virtual void InitializeComponent() = 0;
};

