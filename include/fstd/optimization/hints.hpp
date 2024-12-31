#pragma once

#include "../platform.hpp"

#define restrict __restrict

#define likely   [[likely]]
#define unlikely [[unlikely]]

#define assume(e) \
	if (!(e)) unreachable()

#if CLANG | GCC
	#define unreachable() __builtin_unreachable()
#elif MSVC
	#define unreachable() __assume(false)
#endif

#if CLANG | GCC
	#define alwaysinline __attribute__((alwaysinline))
#elif MSVC
	#define alwaysinline __forceinline
#endif
