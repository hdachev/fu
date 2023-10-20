
AFTER:

NO_PROFILE:

    lex 0.015102s
  parse 0.026115s
  solve 2.012718s
codegen 0.094895s
    ---------
        1.879789s

WITH_PROFILE:

    lex 0.016049s
  parse 0.024483s
  solve 1.847095s
codegen 0.093426s
    ---------
    0.359242s   447215x 0.000001s       19% ScopeSearch
    0.271489s     3760x 0.000072s       15% SolveBody
    0.203073s    13323x 0.000015s       11% DoTrySpec
    0.198908s   549885x 0.000000s       11% TryMatch_Convert
    0.189603s   128416x 0.000001s       10% TryMatch_SolveCall
    0.126267s     3222x 0.000039s        7% ArgumentsAtRisk
    0.125760s     3222x 0.000039s        7% RelaxCopyResize
    0.106314s     3222x 0.000033s        6% RelaxMut
    0.098881s    54373x 0.000002s        5% TryMatch_Implicit
    0.082742s     3222x 0.000026s        4% BorrowCheck
    0.041639s    75397x 0.000001s        2% TryConvert
    0.026534s       52x 0.000510s        1% UnaccountedFor
    0.017625s     9447x 0.000002s        1% TryMatch_Autocall
    0.000000s        0x 0.000000s        0% TestPass

    1.848077s       Total time profiled.
    ---------
        1.688973s
