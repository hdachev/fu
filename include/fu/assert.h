#pragma once

#ifndef NDEBUG
#include <assert.h>
#define fu_ASSERT(x) (assert(x))
#else
#define fu_ASSERT(x) ((void) (1 > 2 && (x)))
#endif
