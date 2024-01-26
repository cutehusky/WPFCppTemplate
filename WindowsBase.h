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
	Window^ _wd;
public:
	WindowsBase(String^ name);
	virtual Window^ LoadWindows();
protected:
	template <class T>
	T^ GetComponent(String^ name);
	virtual void InitializeComponent() = 0;
};

template <class T>
T^ WindowsBase::GetComponent(String^ name) {
	return (T^)_wd->FindName(name);
}