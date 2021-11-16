#ifndef III_DEBUG
#define III_DEBUG

#include <stdio.h>

extern int debug_enabled;

#define printf_debug(...) do { if (debug_enabled & 1) { printf(__VA_ARGS__); } } while (0)
#define printf_debugg(...) do { if (debug_enabled & 2) { printf(__VA_ARGS__); } } while (0)

#endif
