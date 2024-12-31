#pragma once

#define DEBUG   1 << 0
#define RELEASE 1 << 1

#ifdef RELEASE_MODE
	#define PROFILE RELEASE
#else
	#define PROFILE DEBUG
#endif
