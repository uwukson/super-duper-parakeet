#pragma once
#include "../../dependies/includes.h"

class CExecute {
public:
	void install(const std::string& programId);
	void command(int command);
};

extern std::unique_ptr<CExecute> execute;