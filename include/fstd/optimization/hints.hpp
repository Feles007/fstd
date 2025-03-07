#pragma once

#include "../core/platform.hpp"
#include "../core/error.hpp"

#ifdef UNSAFE_OPTIMIZATIONS

	#define restrict __restrict

	#if CLANG | GCC
		#define unreachable() __builtin_unreachable()
		#define assume(expression) \
			if (!(expression)) unreachable()
	#elif MSVC
		#define unreachable()      __assume(false)
		#define assume(expression) __assume(expression)
	#endif

#else

	#define restrict

	#define unreachable() panic("Unreachable code reached")
	#define assume(expression) \
		if (!(expression)) panic("Assumed condition (" #expression ") was false")

#endif

#if CLANG | GCC
	#define alwaysinline __attribute__((alwaysinline))
	#define noinline     __attribute__((noinline))
#elif MSVC
	#define alwaysinline __forceinline
	#define noinline     __declspec(noinline)
#endif
