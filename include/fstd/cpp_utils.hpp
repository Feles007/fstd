#pragma once

#define TO_STRING_INNER(s) #s
#define TO_STRING(s)       TO_STRING_INNER(s)

#define CONCATENATE_INNER(a, b) a##b
#define CONCATENATE(a, b)       CONCATENATE_INNER(a, b)

#define UNIQUE_IDENTIFIER(s) CONCATENATE(s, __COUNTER__)
