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
	WindowsBase(String^ windowsName) : _windowsName(windowsName) {}
protected:
	Window^ _wd;
	virtual void InitializeComponent() = 0;
	virtual Window^ LoadWindows() {
		Stream^ st = File::OpenRead(_windowsName);
		_wd = (Window^)XamlReader::Load(st);
		st->Close();
		InitializeComponent();
		return _wd;
	}
};