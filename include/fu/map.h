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


    // Const API.

    const V& operator[](const K& key) const noexcept
    {
        for (int i = 0; i < m_keys.size(); i++)
            if (m_keys[i] == key)
                return m_values[i];

        return fu::Default<V>::value;
    }

    inline int size() const noexcept
    {
        return m_keys.size();
    }

    inline explicit operator bool() const noexcept
    {
        return m_keys.size() > 0;
    }

    int find(const K& key) const noexcept
    {
        auto* i0 = m_keys.data();
        auto* i1 = i0 + m_keys.size();
        for (auto* i = i0; i < i1; i++)
            if (*i == key)
                return int(i - i0);

        return -1;
    }


    // Mut API.

    V& upsert(const K& key) noexcept
    {
        // Update?
        for (int i = 0; i < m_keys.size(); i++)
            if (m_keys[i] == key)
                return m_values.mutref(i);

        // Insert.
        {
            int i = m_values.size();

            m_keys  .push(key);
            m_values.push(V {});

            return m_values.mutref(i);
        }
    }

    V& mutref(const K& key) noexcept
    {
        for (int i = 0; i < m_keys.size(); i++)
            if (m_keys[i] == key)
                return m_values.mutref(i);

        assert(false);
        return *((V*)1);
    }
};
