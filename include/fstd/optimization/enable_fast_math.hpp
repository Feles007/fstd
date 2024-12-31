#include "../platform.hpp"

#if COMPILER & (CLANG | MSVC)
	#pragma float_control(push)
	#pragma float_control(precise, off)
	#pragma float_control(except, off)
	#pragma fp_contract(on)
	#pragma fenv_access(off)
#elif COMPILER & GCC
	#pragma GCC push_options
	#pragma GCC optimize "Ofast"
#endif
