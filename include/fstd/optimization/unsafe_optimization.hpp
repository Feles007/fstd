#pragma once

#ifndef UNSAFE_OPTIMIZATIONS
	#define UNSAFE_OPTIMIZATIONS 0
#else
	#if (UNSAFE_OPTIMIZATIONS != 0) && (UNSAFE_OPTIMIZATIONS != 1)
		#undef UNSAFE_OPTIMIZATIONS
		#define UNSAFE_OPTIMIZATIONS 0
	#endif
#endif