#include "../../.hpp/is_admin/is_admin.h"

bool CAdmin::check() {
    static bool checked = false;
    static bool is_admin = false;

    if (!checked) {
        HANDLE token;
        TOKEN_ELEVATION elevation{};
        DWORD size;
        if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &token) &&
            GetTokenInformation(token, TokenElevation, &elevation, sizeof elevation, &size) &&
            elevation.TokenIsElevated) {
            is_admin = true;
        }
        checked = true;
    }
    return is_admin;
}

std::unique_ptr<CAdmin> admin = std::make_unique<CAdmin>();