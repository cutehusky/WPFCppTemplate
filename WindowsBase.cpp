#include "WindowsBase.h"

WindowsBase::WindowsBase(String^ windowsName): _windowsName(windowsName) {}

Window^ WindowsBase::LoadWindows() {
	Stream^ st = File::OpenRead(_windowsName);
	_wd = (Window^)XamlReader::Load(st);
	st->Close();
	InitializeComponent();
	return _wd;
}