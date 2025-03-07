#include "StartScreen.h"
#include <windows.h>
#include "GameScreen.h"
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")  // Ensure the sound library is linked

using namespace System;
using namespace System::Windows::Forms;
using namespace WMPLib;
using namespace System::Media;
using namespace DungeonDescent;
using namespace System::Data;

[STAThread]
int main(cli::array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StartScreen^ form = gcnew StartScreen();
	PlaySound(TEXT("scifi.wav"), NULL, SND_ASYNC | SND_LOOP);
	Application::Run(form);
}
