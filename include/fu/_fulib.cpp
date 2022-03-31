#include <fu/mem/arc.cpp>


// TODO instead of these -
//  pragma sources or something can put these together while we compile regular code -
//   or include("!<fu/decstr.hpp>") - means include its .cpp in the runtime -
//    but bottom line is we don't want anything hotswap or threading related
//     in builds that don't use it.

#include <fu/decstr.cpp>
#include <fu/never.cpp>
#include <fu/print.cpp>

#include <dl/hotswap.cpp>
#include <par/parfor.cpp>
