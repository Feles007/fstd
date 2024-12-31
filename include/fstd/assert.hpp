#pragma once

#include "num.hpp"
#include <iostream>

#define fassert(x) ((void)(!(x) && fassert_handler(#x, __FILE__, __LINE__)))

inline bool fassert_handler(const char *condition, const char *file, usize line) {
	std::cout << "Assert (" << condition << ") failed at " << file << ':' << line << std::endl;
	throw 0;
	return false;
}
