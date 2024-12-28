#pragma once

#include "cpp_utils.hpp"

#define defer(...) const auto UNIQUE_IDENTIFIER(_defer_) = Deferrer([&](){__VA_ARGS__;})

template<typename F>
struct Deferrer {
	F f;
	Deferrer(F f) : f(f) {}
	~Deferrer() { f(); }
};
