#pragma once

#include "num.hpp"
#include <cstdio>
#include <cstdlib>

#define panic(message) unrecoverable_error(message, __FILE__, __LINE__)

#define fassert(expression) \
	if (!(expression)) panic("Assert (" #expression ") failed")

#ifdef UNSAFE_OPTIMIZATIONS
	#define debug_fassert(expression) assume(expression)
#else
	#define debug_fassert(expression) fassert(expression)
#endif

[[noreturn]] inline void unrecoverable_error(const char *message, const char *file, usize line) {
	std::printf("%s - %s:%zu\n", message, file, line);
	std::exit(1);
}
