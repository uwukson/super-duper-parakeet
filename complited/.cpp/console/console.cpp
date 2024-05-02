#include "../../.hpp/console/console.h"

void CConsole::set() {
	SetConsoleTitleA("repos");

	HWND consoleWindow = GetConsoleWindow();
	LONG_PTR style = GetWindowLongPtr(consoleWindow, GWL_EXSTYLE);
	SetWindowLongPtr(consoleWindow, GWL_EXSTYLE, style | WS_EX_LAYERED);
	SetLayeredWindowAttributes(consoleWindow, 0, 250, LWA_ALPHA);
}

std::unique_ptr<CConsole> console = std::make_unique<CConsole>();