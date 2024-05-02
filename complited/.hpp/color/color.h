#pragma once
#include "../../dependies/includes.h"

class CColor {
public:
	void set(int value);

    enum COLORS_CONSOLE {
        ZERO = 0,
        BLUE = 1,
        GREEN = 2,
        RED = 4,
        WHITE = 7
    };
};

extern std::unique_ptr<CColor> color;