import itertools


print("// python3 src/swizzles.py > include/fstd/vector/swizzles.hpp")

def f(chars, li):
	s = "".join(li)
	li = [str(chars.index(x)) for x in li]
	array = ", ".join(li)
	print(f"using {s} = Swizzle<{array}>;")

def g(chars):
	for a in chars:
		f(chars, [a])
	
	for a in chars:
		for b in chars:
			f(chars, [a, b])

	for a in chars:
		for b in chars:
			for c in chars:
				f(chars, [a, b, c])

	for a in chars:
		for b in chars:
			for c in chars:
				for d in chars:
					f(chars, [a, b, c, d])

g("xyzw")
g("rgba")