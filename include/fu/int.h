#pragma once

// TODO FIX std::byte from
#include <cstddef>

namespace fu {

// Plain char, signed char, and unsigned char
//  are three distinct types, collectively called
//   narrow character types.

typedef   std::byte byte;
typedef   signed char i8;
typedef unsigned char u8;

}
