#pragma once
#include "../../dependencies/includes.h"

class CConnection {
public:
	bool check();
};

extern std::unique_ptr<CConnection> connection;