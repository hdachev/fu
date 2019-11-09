#include "./cow_vec.h"

template <typename T>
void cow_vec_test(int cap0, int cap1)
{
    using vec = fu_COW_VEC<T>;

    //
    vec v0;

    if (cap0)
        v0.reserve(cap0);

    for (int i = 0; i < cap1; i++)
        v0.push( T(i) );

    //
    vec v1 = v0;

    assert(v1.m_capa == v0.m_capa);

    //
    for (int i = 0; i < cap1; i++)
        v1.push( T(i) );

    assert(v1.m_capa == v0.m_capa
        || v1.m_capa <= v1.m_size * 2);

    //
    vec v2 = v1;

    assert(v2.m_size == v1.m_size
        && v2.m_data == v1.m_data
        && v1.m_data != v0.m_data);

    //
    v2.clear();

    assert(v0.m_size == cap1
        && v1.m_size == cap1 * 2
        && v2.m_size == 0);

    //
    v2 = v0;
    v2.pop();

    assert(v0.m_size == cap1
        && v2.m_size == cap1 - 1);

    //
}

struct NonTriv
{
    int x;

    NonTriv(int x)
        : x (x)
    {}

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
