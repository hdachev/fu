#ifdef fu_HOTSWAP

#include <dl/hotswap.hpp>

#include <errno.h>
#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include <fu/vec.h>

#define fu_HOTSWAP_use_rename_hack

#if defined(fu_HOTSWAP_use_rename_hack) && !defined(RTLD_DI_LINKMAP)
#define fu_HOTSWAP_use_dladdr
#endif

namespace
{

    // My ubuntu refuses to reload the same lib.

    bool FU_VERBOSE             = !!getenv("FU_VERBOSE");
    bool FU_HOTSWAP_RELOADING   = false;

    bool FU_HOTSWAP_MANUAL_MODE = false;
    bool FU_HOTSWAP_SIGNALLED   = false;


    //

    struct Loader
    {
        const char* filename        {};
              void* handle          {};
              void* handle_old      {};

        #ifdef fu_HOTSWAP_use_rename_hack
        const char* abs_path        {};

            #ifdef fu_HOTSWAP_use_dladdr
              void* dladdr_symbol   {};
            #endif
        #endif
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

    bool try_reload(Item& item, Loader& ld)
    {
        void* new_fnptr = dlsym(ld.handle, item.symbol);
        if (new_fnptr)
        {
            #ifdef fu_HOTSWAP_use_dladdr
            ld.dladdr_symbol = new_fnptr;
            #endif

            //
            if (FU_VERBOSE)
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
            if (FU_VERBOSE)
                printf("HOTSWAP Could not find `%s` in `%s`\n", item.symbol, ld.filename);
        }

        return false;
    }

    bool try_reload(Loader& ld)
    {
        // Don't register new symbols.
        FU_HOTSWAP_RELOADING = true;

        //
        void* new_handle {};

        // Try load.
        {
            #ifdef fu_HOTSWAP_use_rename_hack
            if (!ld.abs_path)
            {
                // 2024: the stuff below works for both linux and macos,
                //  but doesn't account for $ORIGIN, @rpath and co,
                //   and just tries to rename the file in the local directory.
                //
                // What we're now doing is to initially load without renaming,
                //  then use that loaded lib to query its abs_path via dlinfo/dladdr,
                //   and then use that abspath to rename the lib before reloading it later.
                //
                #ifdef fu_HOTSWAP_use_dladdr
                Dl_info link_map {};

                if (ld.dladdr_symbol
                        // On success dladdr() returns a **NONZERO** value.
                        && dladdr(ld.dladdr_symbol, &link_map)
                        && link_map.dli_fname)
                {
                    ld.abs_path = link_map.dli_fname;
                }
                #else
                Link_map link_map {};

                if (ld.handle
                        // On success dlinfo() function returns 0.
                        && !dlinfo(ld.handle, RTLD_DI_LINKMAP, &link_map)
                        && link_map.l_name)
                {
                    ld.abs_path = link_map.l_name;
                }
                #endif
                else
                {
                    if (FU_VERBOSE)
                        printf("HOTSWAP Failed to resolve dlinfo/dladdr for `%s`\n", ld.filename);
                }
            }

            if (ld.abs_path)
            {
                static int unique_id = rand();

                auto tempname_capa = strlen(ld.filename) + 10/*strlen("2147483647")*/ + 1/*nullterm*/;
                char* tempname     = (char*) alloca(tempname_capa);
                snprintf(tempname, tempname_capa, "%s%i", ld.filename, unique_id++);

                // Linux can rebel, ignores dlclose
                //  and then returns the same handle on dlopen.
                //
                if (rename(ld.abs_path, tempname))
                {
                    if (FU_VERBOSE)
                        printf("HOTSWAP Cannot rename `%s` to `%s`: %i\n", ld.abs_path, tempname, errno);

                    goto OpenWithoutRenaming;
                }

                new_handle = dlopen(tempname, RTLD_NOW);
                rename(tempname, ld.abs_path);

                goto Done;
            }
            #endif //fu_HOTSWAP_use_rename_hack

            OpenWithoutRenaming:
            new_handle = dlopen(ld.filename, RTLD_NOW);

            Done:;
        }

        // Rotate.
        if (new_handle)
        {
            if (FU_VERBOSE)
                printf("HOTSWAP Reloaded `%s`\n", ld.filename);

            // TODO FIX crashes once every two/three reloads,
            //  will leak them for now.
            //
            // if (ld.handle_old)
            // {
            //     ld.abs_path = nullptr;
            //     dlclose(ld.handle_old);
            // }
            //
            ld.handle_old       = ld.handle;
            ld.handle           = new_handle;

            #ifdef fu_HOTSWAP_use_dladdr
            ld.dladdr_symbol    = nullptr;
            #endif

            return true;
        }

        if (FU_VERBOSE)
        {
            const char* e = dlerror();

            printf("HOTSWAP Could not reload `%s`: `%s`\n", ld.filename, e ? e : "[null dlerror]");
        }

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

    void onManualReload()
    {
        FU_HOTSWAP_MANUAL_MODE = true;

        if (FU_HOTSWAP_SIGNALLED)
        {
            if (FU_VERBOSE)
                printf("HOTSWAP hotswap::here() called, reloading.\n");

            FU_HOTSWAP_SIGNALLED = false;
            doReload();
        }
    }

    extern "C" void onSIGUSR1_reloadLibs(int /*signal*/)
    {
        if (FU_HOTSWAP_MANUAL_MODE)
        {
            if (FU_VERBOSE)
                printf("HOTSWAP Received SIGUSR1, awaiting next call to hotswap::here().\n");

            FU_HOTSWAP_SIGNALLED = true;
        }
        else
        {
            if (FU_VERBOSE)
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

                if (FU_VERBOSE)
                    printf("HOTSWAP Ready to load %s\n", libname);

                // Try load & list, ignore fail, might show up later.
                Loader l = { libname, nullptr, nullptr };

                // if (LOAD_ON_BOOT)
                //     try_reload(l);

                h.libs.push(l);
            };

            const char* env = getenv("FU_HOTSWAP_LIB");
            if (!env)
            {
                env = "hotswap";

                if (FU_VERBOSE)
                    printf("HOTSWAP Init, `FU_HOTSWAP_LIB` envar is not set, assuming `%s`.\n", env);
            }
            else
            {
                if (FU_VERBOSE)
                    printf("HOTSWAP Init, `FU_HOTSWAP_LIB` envar is set to: `%s`.\n", env);
            }

            add_lib(env);
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

    if (FU_HOTSWAP_RELOADING)
    {
        // Here we're actually receiving the new symbols,
        //  we could skip the dlsym stuff altogether
        //   and do the replacements here.
        //
        if (FU_VERBOSE)
            printf("HOTSWAP Loaded symbol `%s`, ignoring for now, will lookup via dlsym.\n", symbol);
    }
    else
    {
        if (FU_VERBOSE)
            printf("HOTSWAP Register symbol `%s`.\n", symbol);

        // Try load immediately.
        Hotswap& h  = get_inst();
        Item item   = { symbol, &fnptr };

        // if (LOAD_ON_BOOT)
        //     for (auto& lib: h.libs.mut())
        //         if (lib.handle)
        //             try_reload(item, lib);

        // List.
        h.items.push(item);
    }

    return ret;
}

/*export*/ void fu::hotswap_here()
{
    onManualReload();
}

#endif

#undef fu_HOTSWAP_use_dladdr
#undef fu_HOTSWAP_use_rename_hack
