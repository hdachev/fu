
BEFORE:

NO_PROFILE:

    lex 0.016937s
  parse 0.023277s
  solve 1.876886s
codegen 0.092869s
    ---------
        1.774676s

WITH_PROFILE:

    lex 0.015996s
  parse 0.022478s
  solve 1.698412s
codegen 0.089546s
    ---------
    0.344315s   440298x 0.000001s       20% ScopeSearch
    0.230559s     3664x 0.000063s       14% SolveBody
    0.204139s   549303x 0.000000s       12% TryMatch_Convert
    0.185266s    12867x 0.000014s       11% DoTrySpec
    0.184345s   124885x 0.000001s       11% TryMatch_SolveCall
    0.110049s     3146x 0.000035s        6% RelaxCopyResize
    0.106151s     3146x 0.000034s        6% ArgumentsAtRisk
    0.091828s     3146x 0.000029s        5% RelaxMut
    0.088897s    54257x 0.000002s        5% TryMatch_Implicit
    0.069437s     3146x 0.000022s        4% BorrowCheck
    0.040674s    75209x 0.000001s        2% TryConvert
    0.025821s       52x 0.000497s        2% UnaccountedFor
    0.017922s     9384x 0.000002s        1% TryMatch_Autocall
    0.000000s        0x 0.000000s        0% TestPass

    1.699405s       Total time profiled.
    ---------
        1.567593s

