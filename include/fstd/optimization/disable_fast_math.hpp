#include "../platform.hpp"

#if COMPILER & (CLANG | MSVC)
	#pragma float_control(pop)
#elif COMPILER & GCC
	#pragma GCC pop_options
#endif
