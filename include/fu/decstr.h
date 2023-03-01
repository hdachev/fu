#pragma once

#include <fu/str.h>

namespace fu {

fu::str u64dec(uint64_t num);
fu::str i64dec(int64_t num);

fu::str f64dec(double num);
fu::str booldec(bool num);

inline fu::str f32dec(float num) { return f64dec(double(num)); }

}
