#pragma once

#include "../platform.hpp"

#define restrict __restrict

#if CLANG | GCC
	#define unreachable() __builtin_unreachable()
	#define assume(e) if (!e) unreachable()
	#define alwaysinline __attribute__((alwaysinline))
#elif MSVC
	#define unreachable() __assume(false)
	#define assume(e) __assume(e)
	#define alwaysinline __forceinline
#endif
