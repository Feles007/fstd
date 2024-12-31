#pragma once

#define CLANG 1 << 0
#define MSVC  1 << 1
#define GCC   1 << 2
#define INTEL 1 << 3

#if defined(__INTEL_LLVM_COMPILER) || defined(__INTEL_COMPILER)
	#define COMPILER INTEL
#elif defined(__clang__)
	#define COMPILER CLANG
#elif defined(__GNUC__) || defined(__GNUG__)
	#define COMPILER GCC
#elif defined(_MSC_VER)
	#define COMPILER MSVC
#else
	#error Unknown compiler!
#endif
