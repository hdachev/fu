#pragma once

#include <cassert>


// FBString::find

template <  typename value_type,
            typename size_type = int,
            typename pos_type = int,
            size_type npos = size_type(-1)  >

size_type fbstring_lfind(
    const value_type* haystack, const size_type size,
    const value_type* needle,   const size_type nsize,
    const pos_type pos
        ) noexcept
{
  // nsize + pos can overflow (eg pos == npos),
  //  guard against that by checking
  //   that nsize + pos does not wrap around.
  if (nsize + pos > size || nsize + pos < pos) {
    return npos;
  }

  if (nsize == 0) {
    return pos;
  }

  // Don't use std::search,
  //  use a Boyer-Moore-like trick by comparing
  //   the last characters first
  auto const nsize_1 = nsize - 1;
  auto const lastNeedle = needle[nsize_1];

  // Boyer-Moore skip value for the last char in the needle. Zero is
  // not a valid value; skip will be computed the first time it's
  // needed.
  size_type skip = 0;

  const value_type* i = haystack + pos;
  auto iEnd = haystack + size - nsize_1;

  while (i < iEnd) {

    // Boyer-Moore: match the last element in the needle
    while (i[nsize_1] != lastNeedle) {
      if (++i == iEnd) {
        // not found
        return npos;
      }
    }

    // Here we know that the last char matches
    //  Continue in pedestrian mode
    for (size_type j = 0;;) {
      assert(j < nsize);
      if (i[j] != needle[j]) {

        // Not found, we can skip
        //  Compute the skip value lazily
        if (skip == 0) {
          skip = 1;
          while (skip <= nsize_1 && needle[nsize_1 - skip] != lastNeedle) {
            ++skip;
          }
        }
        i += skip;
        break;
      }

      // Check if done searching
      if (++j == nsize) {

        // Yay
        return i - haystack;
      }
    }
  }
  return npos;
}

