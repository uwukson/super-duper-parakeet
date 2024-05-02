#pragma once
#include "../../dependencies/includes.h"

class CAdmin {
public:
	bool check();
};

extern std::unique_ptr<CAdmin> admin;