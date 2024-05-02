#pragma once
#include "../../dependencies/includes.h"

class CConsole {
public:
	void set();
};

extern std::unique_ptr<CConsole> console;