#include "WinApplication.h"
#include "MainWindows.h"

[STAThread]
int main(array<String^>^ args)
{
	MainWindows^ mainWin = gcnew MainWindows();
	return (gcnew WinApplication(mainWin))->Run();
}