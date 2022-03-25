#include <errno.h>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include "./vec.h"
#include "./hotswap.h"

namespace {


// My ubuntu refuses to reload the same lib.

constexpr bool RENAME_LIBS_RANDOMLY = true;

constexpr bool VERBOSE = true;


//

struct Loader
{
    const char* filename        {};
          void* handle          {};
          void* handle_old      {};
};

struct Item
{
    const char* symbol          {};
         void** slot            {};
};

struct Hotswap
{
    fu_VEC<Loader>  libs        {};
    fu_VEC<Item>    items       {};
};


//

bool try_reload(Item& item, const Loader& ld)
{
    void* new_fnptr = dlsym(ld.handle, item.symbol);
    if (new_fnptr)
    {
        if (VERBOSE)
            printf("HOTSWAP Found `%s` in `%s`\n", item.symbol, ld.filename);

        *item.slot = new_fnptr;
        return true;
    }
    else
    {
        if (VERBOSE)
            printf("HOTSWAP Could not find `%s` in `%s`\n", item.symbol, ld.filename);
    }

    return false;
}

bool try_reload(Loader& ld)
{
    void* new_handle {};

    // Try load.
    {
        if (RENAME_LIBS_RANDOMLY)
        {
            static int unique_id = rand();

            char tempname[1024];
            sprintf(tempname, "%s%i", ld.filename, unique_id++);

            // Linux can rebel, ignores dlclose and then returns the same handle on dlopen.
            if (rename(ld.filename, tempname))
            {
                if (VERBOSE)
                    printf("HOTSWAP Cannot rename `%s` to `%s`: %i\n", ld.filename, tempname, errno);

                goto OpenWithoutRenaming;
            }

            new_handle = dlopen(tempname, RTLD_NOW);
            rename(tempname, ld.filename);

            goto Done;
        }

        OpenWithoutRenaming:
        new_handle = dlopen(ld.filename, RTLD_NOW);

        Done:;
    }

    // Rotate.
    if (new_handle)
    {
        if (VERBOSE)
            printf("HOTSWAP Reloaded `%s`\n", ld.filename);

        if (ld.handle_old)
            dlclose(ld.handle_old);

        ld.handle_old   = ld.handle;
        ld.handle       = new_handle;
        return true;
    }
    else
    {
        if (VERBOSE)
            printf("HOTSWAP Could not reload `%s`\n", ld.filename);
    }

    return false;
}


// Signal handler -
//  we try to reload all libs on SIGUSR1.

Hotswap& get_inst();

extern "C" void onSIGUSR1_reloadLibs(int /*signal*/)
{
    if (VERBOSE)
        printf("HOTSWAP Received SIGUSR1, reloading.\n");

    Hotswap& h = get_inst();

    for (fu::i i = 0; i < h.libs.size(); i++)
    {
        Loader& lib = h.libs.mutref(i);
        if (try_reload(lib))
            for (fu::i i = 0; i < h.items.size(); i++)
                try_reload(h.items.mutref(i), lib);
    }
}

void attach_onSIGUSR1_reloadLibs()
{
    signal(SIGUSR1, onSIGUSR1_reloadLibs);
}


//

Hotswap initialize()
{
    attach_onSIGUSR1_reloadLibs();

    Hotswap h = Hotswap();

    // Two ways to provide a default lib to hotswap:
    //
    //  - we can either source the libname from an environment variable,
    //  - or optionally have been built with a default.
    {
        const auto& add_lib = [&](const char* libname)
        {
            if (!libname)
                return;

            // Try load & list, ignore fail, might show up later.
            Loader l = { libname, nullptr, nullptr };
            try_reload(l);
            h.libs.push(l);
        };

        const char* env = getenv("fu_HOTSWAP_lib");
        if (env)
        {
            // Libname from an environment variable.
            add_lib(env);
        }
        #ifdef fu_HOTSWAP_lib
        else
        {
            // Build-time default.
            #define STRING(s) #s
            add_lib(getenv(STRING(fu_HOTSWAP_lib)));
            #undef STRING
        }
        #else
        else
        {
            if (VERBOSE)
                printf("HOTSWAP No `fu_HOTSWAP_lib` envar set, nothing to load.\n");
        }
        #endif
    }

    //
    return h;
}

Hotswap& get_inst()
{
    static Hotswap inst = initialize();
    return inst;
}


} // namespace


// Enter & init.

void* fu::hotswap_init(const char* symbol, void*& fnptr, void* fallback)
{
    void* ret = fnptr = fallback;

    // Try load immediately.
    Item item = { symbol, &fnptr };

    Hotswap& h = get_inst();
    for (fu::i i = 0; i < h.libs.size(); i++)
    {
        const Loader& loader = h.libs[i];
        try_reload(item, loader);
    }

    // List.
    h.items.push(item);

    return ret;
}
