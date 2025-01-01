#pragma once

#ifdef Vector
	#error Vector defined already!
#endif

#include "../core/num.hpp"

template <usize... indices>
struct Swizzle {
	static constexpr auto INDICES = {indices...};
	static constexpr auto SIZE    = INDICES.size();
};

#include "vector/swizzles.hpp"

#include "vector/basic_vector.hpp"

#define Vector StableVector
#include "vector/basic_vector.hpp"
#undef Vector
