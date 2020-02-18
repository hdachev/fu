#include <fu/now.h>
#include <fu/str.h>
#include <fu/vec.h>
#include <iostream>

                                #ifndef DEF_NICE_THINGS
                                #define DEF_NICE_THINGS
inline const fu_VEC<fu_STR> NICE_THINGS = fu_VEC<fu_STR> { fu_VEC<fu_STR>::INIT<16> { "LOOKING GOOD TODAY !"_fu, "PASSING TESTS LIKE A BOSS !"_fu, "THIS IS SOME TOP NOTCH SHIT !"_fu, "VALUE ADDED !"_fu, "GOING STRONG !"_fu, "KILLIN IT !"_fu, "POWER LEVEL INCREASED !"_fu, "NOW MAKE ME BETTER AGAIN !"_fu, "NOW MAKE ME EVEN MORE BETTER !"_fu, "ALL CLEAR !"_fu, "UPGRADE ACCEPTED !"_fu, "YOU'RE THE BEST MAN !"_fu, "I LOVE YOU YOU !"_fu, "MORE IS MORE !"_fu, "THIS IS AWESOME !"_fu, "XOXO !"_fu } };
                                #endif

void saySomethingNice()
{
    const int sec = int(fu::now_utc());
    const bool NEW_STUFF = false;
    if (((sec % 5) && !NEW_STUFF))
    {
        fu_STR str {};
        for (int i = 0; (i < 3); i++)
        {
            if ((sec & (1 << i)))
                str += "🍒"_fu;
            else
                str += "🍊"_fu;

        };
        (std::cout << str << "\n");
    }
    else
        (std::cout << NICE_THINGS[((sec >> 6) & 0xf)] << "\n");

}
