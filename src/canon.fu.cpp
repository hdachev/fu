#include <cstdint>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/default.h>

struct s_Target;
const fu::str& canon_tryIntersect_YrRpjGae(const fu::str&, const fu::str&);
s_Target parseGlobal_qtvefzpE(fu::view<char>, int&);
bool isCanonAssignable_IaeizMuX(fu::view<char>, fu::view<char>);
const fu::str& canon_trySuper_YrRpjGae(const fu::str&, const fu::str&);

                                #ifndef DEF_s_Target
                                #define DEF_s_Target
struct s_Target
{
    uint64_t _packed;
    explicit operator bool() const noexcept
    {
        return false
            || _packed
        ;
    }
};
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_ends_Db9eGFmCKDj
                                #define DEF_ends_Db9eGFmCKDj
inline bool ends_Db9eGFmC(fu::view<char> a, const char with)
{
    return a.size() && (a[(a.size() - 1)] == with);
}
                                #endif

                                #ifndef DEF_x3Cx3E_mJGU9byOmI4
                                #define DEF_x3Cx3E_mJGU9byOmI4
inline int x3Cx3E_mJGU9byO(const int a, const int b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_sOVQcK2JOH3
                                #define DEF_x3Cx3E_sOVQcK2JOH3
inline int x3Cx3E_sOVQcK2J(const char a, const char b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_gCeFmDFw0L8
                                #define DEF_x3Cx3E_gCeFmDFw0L8
inline int x3Cx3E_gCeFmDFw(fu::view<char> a, fu::view<char> b)
{
    int cmp = x3Cx3E_mJGU9byO(a.size(), b.size());
    for (int i = 0; (i < a.size()) && !cmp; i++)
        cmp = x3Cx3E_sOVQcK2J(a[i], b[i]);

    return cmp;
}
                                #endif

                                #ifndef DEF_x3Dx3D_gCeFmDFw0L8
                                #define DEF_x3Dx3D_gCeFmDFw0L8
inline bool operator==(fu::view<char> a, fu::view<char> b)
{
    return !x3Cx3E_gCeFmDFw(a, b);
}
                                #endif

                                #ifndef DEF_find_KonMQ4KBuu5
                                #define DEF_find_KonMQ4KBuu5
inline int find_KonMQ4KB(fu::view<char> a, const char b)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b)
            return i;

    };
    return -1;
}
                                #endif

bool scan(fu::view<char> str, const char sep, int& offset, bool& isLast)
{
    bool isDeep = false;
    int depth = 0;

    { {
        for (; offset < str.size(); offset++)
        {
            const char c = str[offset];
            if (c == '(')
            {
                depth++;
                isDeep = true;
            }
            else if (c == ')')
                depth--;
            else if ((c == sep) && !depth)
                goto BL_1;

        };
        isLast = true;
      } BL_1:;
    };
    return isDeep;
}

                                #ifndef DEF_x3Cx3E_62dxnA0Dbb1
                                #define DEF_x3Cx3E_62dxnA0Dbb1
inline int x3Cx3E_62dxnA0D(const uint64_t a, const uint64_t b)
{
    if (a < b)
        return -1;
    else if (a > b)
        return +1;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x3Cx3E_LngZZmWAHm3
                                #define DEF_x3Cx3E_LngZZmWAHm3
inline int x3Cx3E_LngZZmWA(const s_Target& a, const s_Target& b)
{
    int cmp = 0;
    if ((cmp = x3Cx3E_62dxnA0D(a._packed, b._packed)))
        return cmp;
    else
        return 0;

}
                                #endif

                                #ifndef DEF_x21x3D_LngZZmWAHm3
                                #define DEF_x21x3D_LngZZmWAHm3
inline bool operator!=(const s_Target& a, const s_Target& b)
{
    return !!x3Cx3E_LngZZmWA(a, b);
}
                                #endif

bool isCanonAssignable_IaeizMuX(fu::view<char> host, fu::view<char> guest)
{
    const bool guestHasPatterns = ends_Db9eGFmC(guest, ')');
    if (!guestHasPatterns)
        return host == guest;
    else
    {
        const int g0 = (find_KonMQ4KB(guest, '(') + 1);
        const int g1 = (guest.size() - 1);
        const bool hostHasPatterns = ends_Db9eGFmC(host, ')');
        if (!hostHasPatterns)
            return host == fu::get_view_start0(guest, (g0 - 1));
        else
        {
            const int h0 = (find_KonMQ4KB(host, '(') + 1);
            const int h1 = (host.size() - 1);
            if (host[0] != guest[0])
                return false;
            else
            {

                {
                    fu::view<char> pattern = fu::get_view(host, h0, h1);
                    int offset = 0;
                    for (; ; )
                    {
                        const s_Target spec_of = parseGlobal_qtvefzpE(pattern, offset);
                        const int start = offset;
                        bool isLastSubPattern {};
                        const bool isDeep = scan(pattern, '|', offset, isLastSubPattern);

                        { {
                            fu::view<char> host_1 = fu::get_view(pattern, start, offset);

                            {
                                fu::view<char> pattern_1 = fu::get_view(guest, g0, g1);
                                int offset_1 = 0;
                                for (; ; )
                                {
                                    const s_Target spec_of_1 = parseGlobal_qtvefzpE(pattern_1, offset_1);
                                    const int start_1 = offset_1;
                                    bool isLastSubPattern_1 {};
                                    const bool isDeep_1 = scan(pattern_1, '|', offset_1, isLastSubPattern_1);

                                    {
                                        fu::view<char> guest_1 = fu::get_view(pattern_1, start_1, offset_1);
                                        if (!(spec_of_1 != spec_of))
                                        {
                                            if (!isDeep && !isDeep_1)
                                            {
                                                if (host_1 == guest_1)
                                                    goto BL_10;

                                            }
                                            else if (isDeep && isDeep_1)
                                            {
                                                int h1_1 = 0;
                                                int g1_1 = 0;
                                                for (; ; )
                                                {
                                                    h1_1++;
                                                    g1_1++;
                                                    const int h0_1 = h1_1;
                                                    const int g0_1 = g1_1;
                                                    bool isLastHostPair {};
                                                    bool isLastGuestPair {};
                                                    scan(host_1, ':', h1_1, isLastHostPair);
                                                    scan(guest_1, ':', g1_1, isLastGuestPair);
                                                    if (isLastHostPair != isLastGuestPair)
                                                        break;
                                                    else
                                                    {
                                                        fu::view<char> hostItem = fu::get_view(host_1, h0_1, h1_1);
                                                        fu::view<char> guestItem = fu::get_view(guest_1, g0_1, g1_1);
                                                        if (isCanonAssignable_IaeizMuX(hostItem, guestItem))
                                                            goto BL_10;

                                                    };
                                                };
                                            };
                                        };
                                    };
                                    if (isLastSubPattern_1)
                                        break;
                                    else
                                        offset_1++;

                                };
                            };
                            return false;
                          } BL_10:;
                        };
                        if (isLastSubPattern)
                            break;
                        else
                            offset++;

                    };
                };
                return true;
            };
        };
    };
}

const fu::str& canon_tryIntersect_YrRpjGae(const fu::str& a, const fu::str& b)
{
    if (a.size() < b.size())
        return canon_tryIntersect_YrRpjGae(b, a);
    else if (isCanonAssignable_IaeizMuX(a, b))
        return a;
    else
        return (*(const fu::str*)fu::NIL);

}

const fu::str& canon_trySuper_YrRpjGae(const fu::str& a, const fu::str& b)
{
    if (a.size() > b.size())
        return canon_trySuper_YrRpjGae(b, a);
    else if (isCanonAssignable_IaeizMuX(a, b))
        return a;
    else
        return (*(const fu::str*)fu::NIL);

}

fu::view<char> tryGetPattern_sFkr07K7(fu::view<char> canon)
{
    if (ends_Db9eGFmC(canon, ')'))
        return fu::get_view(canon, (find_KonMQ4KB(canon, '(') + 1), (canon.size() - 1));
    else
    {
        return fu::view<char>{};
    };
}

void trimPattern_z4yNxv0x(fu::str& canon)
{
    const int x = find_KonMQ4KB(canon, '(');
    if ((x >= 0))
        canon.shrink(x);

}

#endif
