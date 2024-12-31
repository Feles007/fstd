#pragma once

#include "cpp_utils.hpp"

#define mca_start(n) __asm volatile("# LLVM-MCA-BEGIN " #n ::: "memory");
#define mca_end()    __asm volatile("# LLVM-MCA-END" ::: "memory");

#define mca(...)                                                            \
	__asm volatile("# LLVM-MCA-BEGIN " TO_STRING(__VA_ARGS__)::: "memory"); \
	McaEnd mca_end;

struct McaEnd {
	~McaEnd() {
		__asm volatile("# LLVM-MCA-END" ::: "memory");
	}
};
