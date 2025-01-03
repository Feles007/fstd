#include "../../core/error.hpp"
#include "../../optimization/unsafe_optimization.hpp"
#include <cmath>
#include <initializer_list>
#include <iostream>

template <typename T, usize N>
	requires(N > 1)
class Vector {
private:
	T vs[N];

	constexpr T get(usize index) const {
		if constexpr (!UNSAFE_OPTIMIZATIONS) fassert(index < N);
		return vs[index];
	}
	constexpr T& get(usize index) {
		if constexpr (!UNSAFE_OPTIMIZATIONS) fassert(index < N);
		return vs[index];
	}

public:
	//
	// Constructors
	//
	constexpr Vector() {
		for (usize i = 0; i < N; ++i) {
			get(i) = T();
		}
	}
	constexpr Vector(T n) {
		for (usize i = 0; i < N; ++i) {
			get(i) = n;
		}
	}
	constexpr Vector(std::initializer_list<T> il) {
		usize i = 0;
		for (; (i < il.size()) && (i < N); ++i) {
			get(i) = *(il.begin() + i);
		}
		for (; i < N; ++i) {
			get(i) = T();
		}
	}
	template <typename OtherT, usize OtherN>
	constexpr Vector(Vector<OtherT, OtherN> const& other) {
		// For N <= OtherN, copy over N elements
		if constexpr (N <= OtherN) {
			for (usize i = 0; i < N; ++i) {
				get(i) = other[i];
			}
			// Otherwise (N > OtherN) copy OtherN elements and default init up to N
		} else {
			usize i = 0;
			for (; i < OtherN; ++i) {
				get(i) = other[i];
			}
			for (; i < N; ++i) {
				get(i) = T();
			}
		}
	}
	//
	// Utils
	//
	constexpr usize size() const {
		return N;
	}
	friend std::ostream& operator<<(std::ostream& os, Vector const& v) {
		os << '{';
		for (usize i = 0; i < N; ++i) {
			os << v[i];
			if (i != N - 1) {
				os << ", ";
			}
		}
		return os << '}';
	}
	//
	// Misc Ops
	//
	constexpr Vector operator-() const {
		Vector result;
		for (usize i = 0; i < N; ++i) {
			result[i] = -get(i);
		}
		return result;
	}
	constexpr bool operator==(Vector const& other) const {
		for (usize i = 0; i < N; ++i) {
			if ((*this)[i] != other[i]) return false;
		}
		return true;
	}
	constexpr bool operator!=(Vector const& other) const {
		return !(*this == other);
	}
	constexpr T operator[](usize index) const {
		return get(index);
	}
	constexpr T& operator[](usize index) {
		return get(index);
	}
	template <typename Sw>
	constexpr Vector<T, Sw::SIZE> swizzle() const {
		Vector<T, Sw::SIZE> sw{};
		for (usize i = 0; i < Sw::SIZE; ++i) {
			sw[i] = get(std::data(Sw::INDICES)[i]);
		}
		return sw;
	}
	//
	// Scalar Ops
	//
	constexpr Vector operator*(T scalar) const {
		Vector result;
		for (usize i = 0; i < N; ++i) {
			result[i] = get(i) * scalar;
		}
		return result;
	}
	constexpr Vector operator/(T scalar) const {
		if constexpr (!UNSAFE_OPTIMIZATIONS) fassert(scalar != 0);
		Vector result;
		for (usize i = 0; i < N; ++i) {
			result[i] = get(i) / scalar;
		}
		return result;
	}
	constexpr Vector& operator*=(T scalar) {
		for (usize i = 0; i < N; ++i) {
			get(i) *= scalar;
		}
		return *this;
	}
	constexpr Vector& operator/=(T scalar) {
		if constexpr (!UNSAFE_OPTIMIZATIONS) fassert(scalar != 0);
		for (usize i = 0; i < N; ++i) {
			get(i) /= scalar;
		}
		return *this;
	}
	constexpr Vector operator+(Vector const& other) const {
		Vector result;
		for (usize i = 0; i < N; ++i) {
			result[i] = get(i) + other[i];
		}
		return result;
	}
	constexpr Vector operator-(Vector const& other) const {
		Vector result;
		for (usize i = 0; i < N; ++i) {
			result[i] = get(i) - other[i];
		}
		return result;
	}
	constexpr Vector& operator+=(Vector const& other) {
		for (usize i = 0; i < N; ++i) {
			get(i) += other[i];
		}
		return *this;
	}
	constexpr Vector& operator-=(Vector const& other) {
		for (usize i = 0; i < N; ++i) {
			get(i) -= other[i];
		}
		return *this;
	}
	//
	// Vector Ops
	//
	constexpr T dot(Vector const& other) const {
		T result = T();
		for (usize i = 0; i < N; ++i) {
			result += get(i) * other[i];
		}
		return result;
	}
	constexpr T magnitude_squared() const {
		return dot(*this);
	}
	constexpr T magnitude() const {
		return std::sqrt(magnitude_squared());
	}
	constexpr Vector normalized() const {
		const auto mag = magnitude();
		if constexpr (!UNSAFE_OPTIMIZATIONS) fassert(mag != 0);
		return *this / mag;
	}
	constexpr void normalize() {
		*this = normalized();
	}
	constexpr Vector cross(Vector const& other) const
		requires(N == 3)
	{
		Vector result;
		result[0] = get(1) * other[2] - get(2) * other[1];
		result[1] = get(2) * other[0] - get(0) * other[2];
		result[2] = get(0) * other[1] - get(1) * other[0];
		return result;
	}
};
