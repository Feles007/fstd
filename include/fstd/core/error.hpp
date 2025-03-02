#pragma once

#include "fmt.hpp"
#include <cstdio>
#include <cstdlib>

#define panic(fmt, ...)                                                                          \
	do {                                                                                         \
		std::printf(fmt " - %s:" FMT_USIZE "\n", __FILE__, __LINE__ __VA_OPT__(, ) __VA_ARGS__); \
		std::exit(1);                                                                            \
	} while (0)

#define fassert(expression) \
	if (!(expression)) panic("Assert (" #expression ") failed")

#ifdef UNSAFE_OPTIMIZATIONS
	#define debug_fassert(expression) assume(expression)
#else
	#define debug_fassert(expression) fassert(expression)
#endif
