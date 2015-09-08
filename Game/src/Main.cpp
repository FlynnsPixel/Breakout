#include "AT.h"
#include "ATSystem.h"

#include "Game.h"

#ifdef ANDROID
#include "..\..\Private\Include\Android\android_native_app_glue.h"
#endif

const char ProgramName[] = "Game";

#if defined (WINDOWS) || defined (WINDOWS_GCC)
int APIENTRY WinMain(HINSTANCE hInstance,
					 HINSTANCE hPrevInstance,
					 LPSTR     lpCmdLine,
					 int       nCmdShow)
#elif defined(WINDOWS_STORE)
[Platform::MTAThread]
int main(Platform::Array<Platform::String^>^ commandArgs)
#elif defined(ANDROID)
void android_main(android_app* state)
#else
int main(int argc, char **argv)
#endif
{
	ATSystemInitData data;
#ifdef WINDOWS
	data.hInstance = hInstance;
	data.hPrevInstance = hPrevInstance;
	data.lpCmdLine = lpCmdLine;
	data.nCmdShow = nCmdShow;
#elif defined(WINDOWS_STORE)
	data.commandArgs = commandArgs;
#elif defined(ANDROID)
	data.state = state;
#else
	data.argc = argc;
	data.argv = argv;
#endif
	data.width = Manager::screenwidth;
	data.height = Manager::screenheight;
	data.activeSystems = ATS_Default;
	data.programName = ProgramName;

	ATSystem_RegisterCallback(ATSC_Init, &Game::gameinit);
	ATSystem_RegisterCallback(ATSC_Update, &Game::gameupdate);
	ATSystem_RegisterCallback(ATSC_Render, &Game::gamerender);
	ATSystem_RegisterCallback(ATSC_Deinit, &Game::gamedeinit);

	ATSystem_Init(&data);

	ATSystem_Main();

	ATSystem_Deinit();

#ifndef ANDROID
	return 0;
#endif
}

