#pragma once

#define CLANG 1 << 0
#define MSVC  1 << 1
#define GCC   1 << 2

#if defined(__clang__)
	#define COMPILER CLANG
#elif defined(__GNUC__) || defined(__GNUG__)
	#define COMPILER GCC
#elif defined(_MSC_VER)
	#define COMPILER MSVC
#else
	#error Unknown compiler!
#endif
