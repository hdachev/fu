#pragma once

#include "./vec.h"
#include "./vec/cmp.h"

#include "./default.h"


//

template <typename K, typename V>
struct fu_MAP
{
    fu_VEC<K> m_keys;
    fu_VEC<V> m_values;


    // Misc.

    inline int size() const noexcept
    {
        return m_keys.size();
    }

    inline explicit operator bool() const noexcept
    {
        return m_keys.size() > 0;
    }


    // Search.

    int find(const K& key) const noexcept
    {
        {
            auto* i0 =      m_keys.data();
            auto* i1 = i0 + m_keys.size();
            for (auto* i = i0; i < i1; i++)
                if (*i == key)
                    return int(i - i0);
        }

        return -1;
    }

    const V& operator[](const K& key) const noexcept
    {
        {
            auto* i0 =      m_keys.data();
            auto* i1 = i0 + m_keys.size();
            for (auto* i = i0; i < i1; i++)
                if (*i == key)
                    return m_values[int(i - i0)];
        }

        return fu::Default<V>::value;
    }

    V& mutref(const K& key) noexcept
    {
        {
            auto* i0 =      m_keys.data();
            auto* i1 = i0 + m_keys.size();
            for (auto* i = i0; i < i1; i++)
                if (*i == key)
                    return m_values.mutref(int(i - i0));
        }

        assert(false);
        return *((V*)1);
    }

    V& upsert(const K& key) noexcept
    {
        {
            auto* i0 =      m_keys.data();
            auto* i1 = i0 + m_keys.size();
            for (auto* i = i0; i < i1; i++)
                if (*i == key)
                    return m_values.mutref(int(i - i0));
        }

        {
            int i = m_values.size();

            m_keys  .push(key);
            m_values.push(V {});

            return m_values.mutref(i);
        }
    }
};
