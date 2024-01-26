#pragma once
#include "WindowsBase.h"

ref class MainWindows: public WindowsBase
{
private:
	Button^ button1;
public:
	MainWindows();
	void OnButton1Click(Object^ sender, RoutedEventArgs^ e);
protected:
	void InitializeComponent() override;
};