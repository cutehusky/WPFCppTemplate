#include "MainWindows.h"

MainWindows::MainWindows(): WindowsBase("MainWindows.xaml") {}

void MainWindows::InitializeComponent()
{
	button1 = (Button^)_wd->FindName("Button1");
	button1->Click += gcnew RoutedEventHandler(this, &MainWindows::OnButton1Click);
}

void MainWindows::OnButton1Click(Object^ sender, RoutedEventArgs^ e) {
	button1->Content = button1->Content == "Hello World ???" 
		? "Hello World !!!" 
		: "Hello World ???";
}
