#pragma once
#include "../../dependencies/includes.h"

class CExecute {
public:
	void install(const std::string& programId);
	void command(int command);
};

extern std::unique_ptr<CExecute> execute;