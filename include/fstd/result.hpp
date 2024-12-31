#pragma once

template <typename Ok, typename Err>
struct Result {
	union {
		Ok ok;
		Err err;
	};
	bool is_ok;

	Result(Ok ok) : ok(ok), is_ok(true) {}
	Result(Err err) : err(err), is_ok(false) {}
};
