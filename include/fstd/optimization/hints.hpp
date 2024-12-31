#pragma once

#include "../platform.hpp"

#define restrict __restrict

#define likely   [[likely]]
#define unlikely [[unlikely]]

#define assume(e) \
	if (!(e)) unreachable()

#if COMPILER & (CLANG | GCC | INTEL)
	#define unreachable() __builtin_unreachable()
#elif COMPILER & MSVC
	#define unreachable() __assume(false)
#endif

#if COMPILER & (CLANG | GCC | INTEL)
	#define alwaysinline __attribute__((alwaysinline))
#elif COMPILER & MSVC
	#define alwaysinline __forceinline
#endif
