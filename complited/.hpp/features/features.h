#pragma once
#include "../../dependencies/includes.h"

class CFunctions {
public:
    void download();
    void information();
};

extern std::unique_ptr<CFunctions> functions;