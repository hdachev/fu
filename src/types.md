
# Draft type grammar

    _                   - any

    0-9...              - QUALSET: TODO G-V hex

    bX                  - bools & bytes
    iX
    uX
    fX

    void                - notice all lowercase,
    never                   no conflict with qualsets

    zeroes              - TODO get rid of this, problematic

    [.]                 - arrays & slices

    /Mi                 - structs
    @MiMi...            - addrofn sets

    {. .}               - tuple
    <@MiMi:. .>         - generic receiver          e.g. (@Mi:$K,$V)
    (M:.:. .)           - fn sig receiver           e.g. (FX:b:$T,$T)

    $T                  - type param

    #7i32

        - modid grammar
            - POSITIVE: G-V
            - NEGATIVE: g-v

        - index grammar: 0-9a-f

[#7i32,#7#7b8] // a tuple of an i32[] and a string[]
