
#include <fu/default.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <fu/vec/cmp.h>
#include <fu/view.h>

struct s_Map_ss;

                                #ifndef DEF_s_Map_ss
                                #define DEF_s_Map_ss
struct s_Map_ss
{
    fu_VEC<fu_STR> keys;
    fu_VEC<fu_STR> vals;
    s_Map_ss(const s_Map_ss&) = delete;
    s_Map_ss(s_Map_ss&&) = default;
    s_Map_ss& operator=(const s_Map_ss&) = delete;
    s_Map_ss& operator=(s_Map_ss&&) = default;
    explicit operator bool() const noexcept
    {
        return false
            || keys
            || vals
        ;
    }
};
                                #endif

#ifndef FU_NO_FDEFs

                                #ifndef DEFt_find_VtCz
                                #define DEFt_find_VtCz
inline int find_VtCz(fu::view<fu_STR> keys_1, const fu_STR& item)
{
    for (int i = 0; i < keys_1.size(); i++)
    {
        if ((keys_1[i] >= item))
        {
            if (keys_1[i] != item)
                return -1;

            return i;
        };
    };
    return -1;
}
                                #endif

bool has(const s_Map_ss& _, const fu_STR& key)
{
    return (find_VtCz(_.keys, key) >= 0);
}

                                #ifndef DEFt_update_Ukbq
                                #define DEFt_update_Ukbq
inline bool update_Ukbq(int, const fu_STR& item, int, const fu_STR& extra, s_Map_ss& _)
{
    for (int i = 0; i < _.keys.size(); i++)
    {
        if ((_.keys[i] >= item))
        {
            if (_.keys[i] != item)
            {
                _.keys.insert(i, item);
                _.vals.insert(i, extra);
                return true;
            };
            _.vals.mutref(i) = extra;
            return false;
        };
    };
    _.keys.push(item);
    _.vals.push(extra);
    return true;
}
                                #endif

bool set(s_Map_ss& _, const fu_STR& key, const fu_STR& value)
{
    return update_Ukbq(0, key, 0, value, _);
}

const fu_STR& get(const s_Map_ss& _, const fu_STR& key)
{
    const int idx = find_VtCz(_.keys, key);
    if ((idx >= 0))
        return _.vals[idx];

    return (*(const fu_STR*)fu::NIL);
}

#endif
