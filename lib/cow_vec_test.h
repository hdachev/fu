#pragma once

#include "./str.h"

template <typename T>
void cow_vec_test(int cap0, int cap1)
{
    using vec = fu_VEC<T>;

    const int SMALL_CAPA = fu_CONFIG<T>::SMALL_CAPA;

    const size_t HEADER = sizeof(fu_ARC) / sizeof(T);

    //
    vec v0;

    if (cap0)
        v0.reserve(cap0);

    for (int i = 0; i < cap1; i++)
        v0.push( T(i) );

    //
    vec v1 = v0;

    assert(v1.shared_capa() == v0.shared_capa());

    //
    for (int i = 0; i < cap1; i++)
        v1.push( T(i) );

    int shared_capa0 = v0.shared_capa();
    int shared_capa1 = v1.shared_capa();
    assert(v1.data() != v0.data() && (shared_capa1 == shared_capa0 || shared_capa1 <= (v1.size() + HEADER) * 2 || shared_capa0 <= SMALL_CAPA));

    //
    vec v2 = v1;

    assert( v2.size() == v1.size()
        && (v2.data() == v1.data() || v2.size() <= SMALL_CAPA)
        &&  v1.data() != v0.data() );

    //
    v2.clear();

    assert(v0.size() == cap1
        && v1.size() == cap1 * 2
        && v2.size() == 0);

    {
        v2 = v0;
        v2.pop();

        int s0 = v0.size();
        int s1 = v2.size();
        assert(s0 == cap1
            && s1 == cap1 - 1);
    }

    {
        v2 = v0;
        v2.shift();

        int s0 = v0.size();
        int s1 = v2.size();
        assert(s0 == cap1
            && s1 == cap1 - 1);
    }

    {
        v2 = v0;
        v2.splice(1, 1);

        int s0 = v0.size();
        int s1 = v2.size();
        assert(s0 == cap1
            && s1 == cap1 - 1);
    }

    {
        v2 = v0;
        int s0 = v2.size();
        assert(v2.data() == v0.data() || v2.size() <= SMALL_CAPA);

        v2.reserve();
        int s1 = v2.size();
        assert(v2.data() != v0.data());

        v2 = v2;
        int s2 = v2.size();

        v2 += v2;
        int s3 = v2.size();
        assert(s0 == s1 && s1 == s2 && s2 * 2 == s3);

        for (int i = 0; i < v0.size(); i++) {
            auto a = v0[i];
            auto b = v2[i];
            auto c = v2[i + v0.size()];

            assert(a == b && b == c && a == i);
        }

        v2 = v0;
        v2.splice(0, 0, v2);
        int s4 = v2.size();
        assert(s3 == s4);

        for (int i = 0; i < v0.size(); i++) {
            auto a = v0[i];
            auto b = v2[i];
            auto c = v2[i + v0.size()];

            assert(a == b && b == c && a == i);
        }

        v2 = v0;
        v2.splice(1, 0, v2);
        int s5 = v2.size();
        assert(s4 == s5);

        assert(v0[0] == v2[0]);

        for (int i = 0; i < v0.size(); i++) {
            auto a = v0[i];
            auto b = v2[i + 1];
            auto c = v2[i + (i ? v0.size() : 0)];

            assert(a == b && b == c && a == i);
        }
    }

    //
    v2 = v1;
    assert(v2[1] == v1[1]);
    assert(v2.data() == v1.data() || v2.size() <= SMALL_CAPA);

    v2.insert(1, 99);
    assert(v2[1] != v1[1]);
    assert(v2.size() == v1.size() + 1);
    assert(v2.data() != v1.data() + 1);

    v1.insert(1, 99);
    assert(v2[1] == v1[1] && v1[1] == 99);
    assert(v2.size() == v1.size());

    //
    v2.clear();
    v2.append_copy(0, v1.data(), v1.size());

    assert(v1.size() == v2.size() && v1.data() != v2.data());
    for (int i = 0; i < v1.size(); i++)
        assert(v1[i] == v2[i]);

    //
    v2 = v1;
    v2.pop();
    assert(v2.size() == v1.size() - 1);

    v1.pop();
    assert(v1.size() == v2.size());
}

struct NonTriv
{
    int x;

    inline static fu_DEBUG_CNTDWN NonTriv_count { "NonTriv_count" };

    NonTriv()      : x (0) {                           }
    NonTriv(int x) : x (x) { NonTriv_count.m_cnt += x; }
    ~NonTriv()             { NonTriv_count.m_cnt -= x; }


    // A snitch.

    NonTriv(const NonTriv& c): x (c.x) {
        NonTriv_count.m_cnt += x;
    }

    NonTriv(NonTriv&& m): x (m.x) {
        m.x = 0;
    }

    NonTriv& operator=(const NonTriv& c) {
        NonTriv_count.m_cnt -= x;
        x = c.x;
        NonTriv_count.m_cnt += x;
        return *this;
    }

    NonTriv& operator=(NonTriv&& m) {
        NonTriv_count.m_cnt -= x;
        x = m.x;
        m.x = 0;
        return *this;
    }


    //

    bool operator==(const NonTriv& other) const
    {
        return x == other.x;
    }

    bool operator!=(const NonTriv& other) const
    {
        return x != other.x;
    }
};

void cow_vec_tests()
{
    bool le = fu_LITTLE_ENDIAN;
    assert(le);

    for (int i = 3; i < 30; i++)
    {
        cow_vec_test<char>(i, i + (i >> 2));
        cow_vec_test<char>(i, i + (i >> 3));
        cow_vec_test<char>(i + (i >> 2), i);
        cow_vec_test<char>(i + (i >> 3), i);

        cow_vec_test<short>(i, i + (i >> 2));
        cow_vec_test<short>(i, i + (i >> 3));
        cow_vec_test<short>(i + (i >> 2), i);
        cow_vec_test<short>(i + (i >> 3), i);

        cow_vec_test<int>(i, i + (i >> 2));
        cow_vec_test<int>(i, i + (i >> 3));
        cow_vec_test<int>(i + (i >> 2), i);
        cow_vec_test<int>(i + (i >> 3), i);

        cow_vec_test<size_t>(i, i + (i >> 2));
        cow_vec_test<size_t>(i, i + (i >> 3));
        cow_vec_test<size_t>(i + (i >> 2), i);
        cow_vec_test<size_t>(i + (i >> 3), i);

        cow_vec_test<NonTriv>(i, i + (i >> 2));
        cow_vec_test<NonTriv>(i, i + (i >> 3));
        cow_vec_test<NonTriv>(i + (i >> 2), i);
        cow_vec_test<NonTriv>(i + (i >> 3), i);
    }

    //
    fu_STR hey = fu_TO_STR("you");
    hey += " cruel " + fu_TO_STR("world");

    fu_STR hey2 = fu_TO_STR("you cruel world");

    assert(hey == hey2);

    assert(memcmp(hey.data(), "you cruel world", 15) == 0);
}
