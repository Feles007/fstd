#include "../include/fstd/types/vector.hpp"

using vec3f = Vector<f32, 3>;

int main() {
	vec3f v;

	v += v.swizzle<yxx>();
}