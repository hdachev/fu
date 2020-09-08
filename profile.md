
____________
cgFnAsStruct:

        lex 0.00590086 s    0 allocs    0 bytes
      parse 0.00894403 s    0 allocs    0 bytes
      solve 0.0845289 s     0 allocs    0 bytes
    codegen 0.0171213 s     0 allocs    0 bytes

            0.117994s

___________________________
new style, plain free funcs:

        lex 0.00560808 s    0 allocs    0 bytes
      parse 0.00870609 s    0 allocs    0 bytes
      solve 0.178981 s      0 allocs    0 bytes
    codegen 0.0268743 s     0 allocs    0 bytes

            0.221582s

_____________________________
lambdas unsorted, not amazing:

        lex 0.00667906 s    0 allocs    0 bytes
      parse 0.00982022 s    0 allocs    0 bytes
      solve 0.279457 s      0 allocs    0 bytes
    codegen 0.0292532 s     0 allocs    0 bytes

            0.326952s
