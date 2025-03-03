#include "StartScreen.h"
#include <windows.h>
#include "GameScreen.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace WMPLib;
[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DungeonDescent::StartScreen form;
	PlaySound(TEXT("scifi.wav"), NULL, SND_ASYNC | SND_LOOP);
	Application::Run(% form);
}
