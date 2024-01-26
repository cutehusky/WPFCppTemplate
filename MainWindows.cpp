#include "MainWindows.h"

MainWindows::MainWindows(): WindowsBase("MainWindows.xaml") {}

void MainWindows::InitializeComponent()
{
	button1 = GetComponent<Button>("Button1");
	comboBox1 = GetComponent<ComboBox>("ComboBox1");
	textBox1 = GetComponent<TextBlock>("TextBlock1");
	checkBox1 = GetComponent<CheckBox>("CheckBox1");
	checkBox1->Checked += gcnew RoutedEventHandler(this, &MainWindows::OnCheckBoxChecked);
	checkBox1->Unchecked += gcnew RoutedEventHandler(this, &MainWindows::OnCheckBoxUnChecked);
	button1->Click += gcnew RoutedEventHandler(this, &MainWindows::OnButtonClick);
	comboBox1->SelectionChanged += gcnew System::Windows::Controls::SelectionChangedEventHandler(this,
		&MainWindows::OnComboBoxChange);
}

void MainWindows::OnComboBoxChange(Object^ sender, SelectionChangedEventArgs^ e) {
	textBox1->Text = "Selected: " + comboBox1->SelectedIndex;
}

void MainWindows::OnCheckBoxUnChecked(Object^ sender, RoutedEventArgs^ e) {
	checkBox1->Content = "unchecked";
}

void MainWindows::OnCheckBoxChecked(Object^ sender, RoutedEventArgs^ e) {
	checkBox1->Content = "checked";
}

void MainWindows::OnButtonClick(Object^ sender, RoutedEventArgs^ e) {
	button1->Content = button1->Content == "Hello World ???" 
		? "Hello World !!!" 
		: "Hello World ???";
}
