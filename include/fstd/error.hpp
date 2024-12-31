#pragma once

#include "num.hpp"
#include "optimization/unsafe_optimization.hpp"
#include <cstdio>
#include <cstdlib>

#define report_error(message) unrecoverable_error(message, __FILE__, __LINE__)

#define fassert(expression) \
	if (!expression) report_error("Assert (" #expression ") failed")

#if UNSAFE_OPTIMIZATIONS
	#define debug_fassert(expression) assume(expression)
#else
	#define debug_fassert(expression) fassert(expression)
#endif

inline void unrecoverable_error(const char *message, const char *file, usize line) {
	std::printf("%s - %s:%zu\n", message, file, line);
	std::exit(1);
}
