#include <cstdint>
#include <fu/str.h>
#include <fu/view.h>
#include <fu/never.h>
#include <fu/decstr.h>
#include <fu/vec_range.h>
#include <fu/vec/concat.h>
#include <fu/init_priority.h>
#include <fu/vec/concat_one.h>

fu::str get_O2Lh(fu::str&&);
fu::str join_qZI0(fu::view<char>, fu::vec_range<char>);
int64_t size_VWJw(fu::str&&);

                                #ifndef STR_fDUHOAvuy0b
                                #define STR_fDUHOAvuy0b
static const fu::str str_fDUHOAvuy0b fu_INIT_PRIORITY(1002) { "fu"_fu };
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_if_last_JKTRv9aHJBg
                                #define DEF_if_last_JKTRv9aHJBg
inline char if_last_JKTR(fu::view<char> s)
{
    if (s.size())
        return s[(s.size() - 1)];
    else
    {
        return char{};
    };
}
                                #endif

static fu::str slash_Ff6y(fu::vec_range<char> a)
{
    if (if_last_JKTR(a) == '/')
        return fu::str(a);
    else
        return a + '/';

}

static const fu::str HOME fu_INIT_PRIORITY(1002) = slash_Ff6y(get_O2Lh(fu::str("HOME"_fu)));

                                #ifndef DEF_x7E_rA003L6Quul
                                #define DEF_x7E_rA003L6Quul
inline fu::str x7E_rA00(fu::view<char> a, fu::view<char> b)
{
    return a + b;
}
                                #endif

static fu::str get_FU_ROOT_Ff6y()
{
    fu::str _0 {};
    /*MOV*/ fu::str FU_ROOT = slash_Ff6y(((_0 = get_O2Lh(fu::str("FU_ROOT"_fu))) ? static_cast<fu::str&&>(_0) : join_qZI0(HOME, str_fDUHOAvuy0b)));
    fu::str compiler_fu = (FU_ROOT + "src/compiler.fu"_view);
    const int64_t fs = size_VWJw(fu::str(compiler_fu));
    if (fs < 1000ll)
        fu::fail(x7E_rA00((("Bad compiler.fu: "_view + compiler_fu) + ": "_view), fu::i64dec(fs)));
    else
        return /*NRVO*/ FU_ROOT;

}

extern const fu::str FU_ROOT fu_INIT_PRIORITY(1002) = get_FU_ROOT_Ff6y();
extern const fu::str FU_BIN fu_INIT_PRIORITY(1002) = (FU_ROOT + "bin/"_view);
extern const fu::str FU_INCLUDE fu_INIT_PRIORITY(1002) = (FU_ROOT + "include/"_view);
extern const fu::str DEFAULT_WORKSPACE fu_INIT_PRIORITY(1002) = (HOME + ".fu/cache/"_view);
#endif
