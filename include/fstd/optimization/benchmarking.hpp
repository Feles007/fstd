#pragma once

#include "../core/platform.hpp"

#if CLANG | GCC
	#define noinline __attribute__((noinline))
#elif MSVC
	#define noinline __declspec(noinline)
#endif
