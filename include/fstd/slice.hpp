#pragma once

#include "num.hpp"
#include <cstring>
#include <type_traits>

template <typename T>
struct Slice;

template <typename T>
using CSlice = Slice<const T>;

template <typename T>
struct Slice {
	T *data;
	usize length;

	using NCT = std::remove_const_t<T>;

	Slice() = default;
	Slice(T *data, usize length) : data(data), length(length) {}
	Slice(const Slice<NCT>& s) : data(s.data), length(s.length) {}

	bool starts_with(Slice start) {
		if (length < start.length) {
			return false;
		}

		for (usize i = 0; i < start.length; ++i) {
			if (data[i] != start.data[i]) {
				return false;
			}
		}

		return true;
	}

	void shrink_front() {
		++data;
		--length;
	}
	void shrink_back() {
		--length;
	}

	T& operator[](usize i) {
		return data[i];
	}
	NCT operator[](usize i) const {
		return data[i];
	}

	bool operator==(Slice rhs) {
		if (length != rhs.length) return false;

		for (usize i = 0; i < length; ++i) {
			if (data[i] != rhs.data[i]) {
				return false;
			}
		}

		return true;
	}

	static CSlice<T> from_null_terminated(const char *s);
};

template <>
inline CSlice<u8> CSlice<u8>::from_null_terminated(const char *s) {
	return {reinterpret_cast<const u8 *>(s), std::strlen(s)};
}
