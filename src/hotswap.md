
# fwd decls

    #ifdef HOTSWAP_CLIENT
    int (*AddInts)(int, int);
    #else
    int AddInts(int, int);
    #endif

# fn defs

    #ifdef HOTSWAP_CLIENT
    #define AddInts AddInts_local
    #endif

    int AddInts(int a, int b) {
        return a + b;
    }

    #ifdef HOTSWAP_CLIENT
    #undef AddInts
    int (*AddInts)(int, int) = &AddInts_local;
    #endif
