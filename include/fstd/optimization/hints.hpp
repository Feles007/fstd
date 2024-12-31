#pragma once

#include "../platform.hpp"
#include "../profile.hpp"

#if PROFILE == RELEASE

	#define restrict __restrict

	#if CLANG | GCC
		#define unreachable() __builtin_unreachable()
		#define assume(expression) \
			if (!expression) unreachable()
	#elif MSVC
		#define unreachable()      __assume(false)
		#define assume(expression) __assume(expression)
	#endif

#elif PROFILE == DEBUG

	#define restrict

	#define unreachable() report_error("Unreachable code reached")
	#define assume(expression) \
		if (!expression) report_error("Assumed condition (" #expression ") was false")

#endif

#if CLANG | GCC
	#define alwaysinline __attribute__((alwaysinline))
#elif MSVC
	#define alwaysinline __forceinline
#endif
