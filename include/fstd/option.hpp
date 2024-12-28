#pragma once

template <typename T> struct Option {
	T value;
	bool is_some;

	Option() : is_some(false) {}
	Option(T value) : value(value), is_some(true) {}
};