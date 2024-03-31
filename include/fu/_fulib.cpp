#include <fu/mem/arc.cpp>

// TODO modularize this, we don't want parfor & hotswap
//  unless your project uses them, we could use pragma sources()
//   or a new pragma runtime() for this.

#include <fu/decstr.cpp>
#include <fu/never.cpp>
#include <fu/print.cpp>
#include <fu/mem/memswap.cpp>

#include <dl/hotswap.cpp>
#include <par/parfor.cpp>

