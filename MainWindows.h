#pragma once
#include "WindowsBase.h"

ref class MainWindows: public WindowsBase
{
private:
	Button^ button1;
	ComboBox^ comboBox1;
	TextBlock^ textBox1;
	CheckBox^ checkBox1;
public:
	MainWindows();
	void OnButtonClick(Object^ sender, RoutedEventArgs^ e);
	void OnCheckBoxChecked(Object^ sender, RoutedEventArgs^ e);
	void OnCheckBoxUnChecked(Object^ sender, RoutedEventArgs^ e);
	void OnComboBoxChange(Object^sender, SelectionChangedEventArgs^ e);
protected:
	void InitializeComponent() override;
};