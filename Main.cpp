#include <windows.h>
#include "WinApplication.h"
#include "MainWindows.h"

/*
// With console
[STAThread]
int main(array<String^>^ args)
{
	MainWindows^ mainWin = gcnew MainWindows();
	return (gcnew WinApplication(mainWin))->Run();
}
*/

// Without Console
[STAThread]
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hInstPrev, LPSTR lpCmd, int cmdshow)
{
	MainWindows^ mainWin = gcnew MainWindows();
	return (gcnew WinApplication(mainWin))->Run();;
}