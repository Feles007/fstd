#pragma once

#include "num.hpp"
#include <cstdlib>
#include <iostream>

#define report_error(message) unrecoverable_error(message, __FILE__, __LINE__)
#define fassert(expression)   ((void)(!(expression) && report_error("Assert (" #expression ") failed")))

inline bool unrecoverable_error(const char *message, const char *file, usize line) {
	std::cout << message << " - " << file << ':' << line << std::endl;
	std::exit(1);
	return false;
}
