#include "../platform.hpp"

#if CLANG | MSVC
	#pragma float_control(pop)
#elif GCC
	#pragma GCC pop_options
#endif
