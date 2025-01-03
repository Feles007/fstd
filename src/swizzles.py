import itertools


print("// python3 src/swizzles.py > include/fstd/types/vector/swizzles.hpp")

def print_swizzle(buffer: list, chars: list):
	name = "".join(buffer)
	indices = ", ".join([str(chars.index(x)) for x in buffer])
	print(f"using {name} = Swizzle<{indices}>;")

def swizzle_spot(depth: int, buffer: list, chars: list):
	for char in chars:
		buffer[len(buffer) - depth - 1] = char
		if depth == 0:
			print_swizzle(buffer, chars)
		else:
			swizzle_spot(depth - 1, buffer, chars)

def run_once(chars: list, target_length: int):
	buffer = [' ' for _ in range(target_length)]
	swizzle_spot(target_length - 1, buffer, chars)

def run(chars: str, target_length: int):
	chars = [c for c in chars]
	for i in range(1, target_length + 1):
		run_once(chars, i)


run("xyzw", 4)
run("rgba", 4)
