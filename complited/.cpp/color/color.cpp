#include "../../.hpp/color/color.h"

void CColor::set(int value) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), value);
}

std::unique_ptr<CColor> color = std::make_unique<CColor>();