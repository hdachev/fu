#pragma once

#define fu_INIT_PRIORITY(prio) __attribute__((init_priority(prio)))

#define fu_LIB_INIT_PRIO fu_INIT_PRIORITY(1000)
