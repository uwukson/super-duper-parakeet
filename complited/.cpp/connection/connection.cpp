#include "../../.hpp/connection/connection.h"

bool CConnection::check() {
	if (system("ping -n 1 -4 www.microsoft.com > nul 2>&1") == 0) //@note - DNS Google: ping -n 1 8.8.8.8 > nul
		return true;

	return false;
}

std::unique_ptr<CConnection> connection = std::make_unique<CConnection>();