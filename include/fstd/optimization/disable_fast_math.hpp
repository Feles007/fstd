#include "../platform.hpp"

#if COMPILER & (CLANG | MSVC | INTEL)
	#pragma float_control(pop)
#elif COMPILER & GCC
	#pragma GCC pop_options
#else
	#error Unsupported compiler!
#endif
