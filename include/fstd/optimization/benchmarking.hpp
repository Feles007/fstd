#pragma once

#include "../platform.hpp"

#if COMPILER & (CLANG | GCC)
	#define noinline __attribute__((noinline))
#elif COMPILER & MSVC
	#define noinline __declspec(noinline)
#endif
