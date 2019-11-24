#pragma once

#include "./vec.h"

template <typename T>
void cow_vec_test(int cap0, int cap1)
{
    using vec = fu_VEC<T>;

    //
    vec v0;

    if (cap0)
        v0.reserve(cap0);

    for (int i = 0; i < cap1; i++)
        v0.push( T(i) );

    //
    vec v1 = v0;

    assert(v1.shared_capa() == v0.shared_capa()
        && v1.unique_capa() == 0
        && v0.unique_capa());

    //
    for (int i = 0; i < cap1; i++)
        v1.push( T(i) );

    assert(v1.shared_capa() == v0.shared_capa()
        || v1.shared_capa() <= v1.size() * 2);

    //
    vec v2 = v1;

    assert(v2.size() == v1.size()
        && v2.data() == v1.data()
        && v1.data() != v0.data());

    //
    v2.clear();

    assert(v0.size() == cap1
        && v1.size() == cap1 * 2
        && v2.size() == 0);

    //
    v2 = v0;
    v2.pop();

    assert(v0.size() == cap1
        && v2.size() == cap1 - 1);

    //
    v2 = v1;
    assert(v2[1] == v1[1]);
    assert(v2.data() == v1.data());

    v2.insert(1, 99);
    assert(v2[1] != v1[1]);
    assert(v2.size() == v1.size() + 1);
    assert(v2.data() != v1.data() + 1);

    v1.insert(1, 99);
    assert(v2[1] == v1[1] && v1[1] == 99);
    assert(v2.size() == v1.size());

    //
    v2 = { v1.begin(), v1.end() };

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

    NonTriv(int x)
        : x (x)
    {}

    bool operator==(const NonTriv& other) const
    {
        return x == other.x;
    }

    bool operator!=(const NonTriv& other) const
    {
        return x != other.x;
    }

    ~NonTriv() {}
};

void cow_vec_tests()
{
    for (int i = 3; i < 30; i++)
    {
        cow_vec_test<int>(i, i + (i >> 2));
        cow_vec_test<int>(i, i + (i >> 3));
        cow_vec_test<int>(i + (i >> 2), i);
        cow_vec_test<int>(i + (i >> 3), i);

        cow_vec_test<NonTriv>(i, i + (i >> 2));
        cow_vec_test<NonTriv>(i, i + (i >> 3));
        cow_vec_test<NonTriv>(i + (i >> 2), i);
        cow_vec_test<NonTriv>(i + (i >> 3), i);
    }
}
