#include "../../.hpp/ascii/ascii.h"

std::wstring CAscii::string_2_wstring(const std::string& str) {
    std::wstring wstr(str.begin(), str.end());
    return wstr;
}

std::unique_ptr<CAscii> ascii = std::make_unique<CAscii>();