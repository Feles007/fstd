add_rules("mode.debug", "mode.release")

target("fstd-test")
	set_kind("binary")
	add_files("src/*.cpp")

	set_languages("c++20")
