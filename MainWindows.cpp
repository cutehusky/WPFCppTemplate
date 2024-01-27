#include "MainWindows.h"

MainWindows::MainWindows(): WindowsBase("MainWindows.xaml") {}

void MainWindows::InitializeComponent()
{
	// list view test
	listView = GetComponent<ListView>("ListView1");
	auto litem = gcnew ListViewItem();
	auto litem2 = gcnew ListViewItem();
	auto litem3 = gcnew ListViewItem();
	auto litem4 = gcnew ListViewItem();
	auto litem5 = gcnew ListViewItem();
	litem->Content = "Hello";
	litem4->Content = "World";
	litem2->Content = "abc";
	litem3->Content = "xyz";
	litem5->Content = "uvs";
	listView->Items->Add(litem);
	listView->Items->Add(litem2);
	listView->Items->Add(litem3);
	listView->Items->Add(litem4);
	listView->Items->Add(litem5);

	// tree view test
	treeView = GetComponent<TreeView>("TreeView1");
	auto item = gcnew TreeViewItem();
	auto item2 = gcnew TreeViewItem();
	auto item3 = gcnew TreeViewItem();
	auto item4 = gcnew TreeViewItem();
	auto item5 = gcnew TreeViewItem();
	item->Header = "Hello";
	item4->Header = "World";
	item2->Header = "abc";
	item3->Header = "xyz";
	item5->Header = "uvs";
	item->Items->Add(item2);
	item->Items->Add(item3);
	item4->Items->Add(item5);
	treeView->Items->Add(item);
	treeView->Items->Add(item4);

	// button test
	button1 = GetComponent<Button>("Button1");
	button1->Click += gcnew RoutedEventHandler(this, &MainWindows::OnButtonClick);

	// Combo box test
	textBox1 = GetComponent<TextBlock>("TextBlock1");
	comboBox1 = GetComponent<ComboBox>("ComboBox1");
	comboBox1->SelectionChanged += gcnew System::Windows::Controls::SelectionChangedEventHandler(this,
		&MainWindows::OnComboBoxChange);

	// Check box test
	checkBox1 = GetComponent<CheckBox>("CheckBox1");
	checkBox1->Checked += gcnew RoutedEventHandler(this, &MainWindows::OnCheckBoxChecked);
	checkBox1->Unchecked += gcnew RoutedEventHandler(this, &MainWindows::OnCheckBoxUnChecked);
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
