#ifdef fu_HOTSWAP

#include <dl/hotswap.hpp>

#include <errno.h>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include <fu/vec.h>

namespace
{

    // My ubuntu refuses to reload the same lib.

    constexpr bool RENAME_LIBS_RANDOMLY     = true;
    constexpr bool LOAD_ON_BOOT             = false;
              bool VERBOSE                  = !!getenv("fu_VERBOSE");


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
        fu::vec<Loader> libs        {};
        fu::vec<Item>   items       {};
    };


    //

    bool try_reload(Item& item, const Loader& ld)
    {
        void* new_fnptr = dlsym(ld.handle, item.symbol);
        if (new_fnptr)
        {
            if (VERBOSE)
            {
                if (*item.slot == new_fnptr)
                    printf("HOTSWAP Got the same fnptr for `%s` in `%s`\n", item.symbol, ld.filename);
                else
                    printf("HOTSWAP Found `%s` in `%s`\n", item.symbol, ld.filename);
            }

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

            // TODO FIX crashes once every two/three reloads,
            //  will leak them for now.
            //
            // if (ld.handle_old)
            //     dlclose(ld.handle_old);

            ld.handle_old   = ld.handle;
            ld.handle       = new_handle;
            return true;
        }

        if (VERBOSE)
            printf("HOTSWAP Could not reload `%s`\n", ld.filename);

        return false;
    }


    // Signal handler -
    //  we try to reload all libs on SIGUSR1.

    Hotswap& get_inst();

    void doReload()
    {
        Hotswap& h = get_inst();

        for (auto& lib: h.libs.mut())
            if (try_reload(lib))
                for (auto& item: h.items.mut())
                    try_reload(item, lib);
    }

    volatile bool manual_reload_mode    = false;
    volatile bool manual_reload_needed  = false;

    void onManualReload()
    {
        manual_reload_mode = true;

        if (manual_reload_needed)
        {
            if (VERBOSE)
                printf("HOTSWAP hotswap::here() called, reloading.\n");

            manual_reload_needed = false;
            doReload();
        }
    }

    extern "C" void onSIGUSR1_reloadLibs(int /*signal*/)
    {
        if (manual_reload_mode)
        {
            if (VERBOSE)
                printf("HOTSWAP Received SIGUSR1, awaiting next call to hotswap::here().\n");

            manual_reload_needed = true;
        }
        else
        {
            if (VERBOSE)
                printf("HOTSWAP Received SIGUSR1, reloading.\n");

            doReload();
        }
    }

    bool attach_onSIGUSR1_reloadLibs()
    {
        auto prev = signal(SIGUSR1, onSIGUSR1_reloadLibs);
        if (prev == SIG_DFL || prev == SIG_IGN)
            return true;

        // This is a plugin, the signal handler is already set, put it back.
        signal(SIGUSR1, prev);
        return false;
    }


    //

    Hotswap initialize()
    {
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

                // Attach signal handler on first lib.
                if (!h.libs)
                {
                    // ... unless this is a plugin in which case
                    //  the signal handler will already have been set.
                    if (!attach_onSIGUSR1_reloadLibs())
                        return;
                }

                if (VERBOSE)
                    printf("HOTSWAP Ready to load %s\n", libname);

                // Try load & list, ignore fail, might show up later.
                Loader l = { libname, nullptr, nullptr };

                if (LOAD_ON_BOOT)
                    try_reload(l);

                h.libs.push(l);
            };

            if (VERBOSE)
                printf("HOTSWAP Init ...\n");

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

/*export*/ void* fu::hotswap_init(const char* symbol, void*& fnptr, void* fallback)
{
    void* ret = fnptr = fallback;

    // Try load immediately.
    Hotswap& h  = get_inst();
    Item item   = { symbol, &fnptr };

    if (LOAD_ON_BOOT)
        for (auto& lib: h.libs)
            if (lib.handle)
                try_reload(item, lib);

    // List.
    h.items.push(item);

    return ret;
}

/*export*/ void fu::hotswap_here()
{
    onManualReload();
}

#endif
