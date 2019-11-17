
RELEASE compiler.fu

    lex:      20236 µs
    parse:    15799 µs
    solve:    48105 µs
    codegen:  19374 µs

             130260 µs

DEBUG compiler.fu

    lex:     130466 µs
    parse:    56186 µs
    solve:   220868 µs
    codegen:  58789 µs

             530421 µs

    std::string compile(const std::string& fname, const std::string& src, s_TEMP_Context& ctx)
    {
        auto t0 = std::chrono::high_resolution_clock::now();
        s_LexResult res_lex = lex(src, fname);

        auto t1 = std::chrono::high_resolution_clock::now();
        s_Node res_parse = parse(fname, res_lex.tokens);

        auto t2 = std::chrono::high_resolution_clock::now();
        s_SolveResult res_solve = solve(res_parse, ctx);

        auto t3 = std::chrono::high_resolution_clock::now();
        std::string cpp = cpp_codegen(res_solve.root, res_solve.scope, ctx);

        auto t4 = std::chrono::high_resolution_clock::now();

        auto t10 = std::chrono::duration_cast<std::chrono::microseconds>(t1 - t0).count();
        auto t21 = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
        auto t32 = std::chrono::duration_cast<std::chrono::microseconds>(t3 - t2).count();
        auto t43 = std::chrono::duration_cast<std::chrono::microseconds>(t4 - t3).count();

        std::cout << "    lex:     " << t10 << " µs" << std::endl;
        std::cout << "    parse:   " << t21 << " µs" << std::endl;
        std::cout << "    solve:   " << t32 << " µs" << std::endl;
        std::cout << "    codegen: " << t43 << " µs" << std::endl;

        return cpp;
    }

