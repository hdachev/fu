#pragma once

#include "vec.h"


//

template <typename K, typename V>
struct fu_COW_MAP
{
    fu_VEC<K> m_keys;
    fu_VEC<V> m_values;


    // Const API.

    const V& operator[](const K& key) const
    {
        for (int i = 0; i < m_keys.size(); i++)
            if (m_keys[i] == key)
                return m_values[i];

        static const V def {};
        return def;
    }

    inline size_t size() const
    {
        return m_keys.size();
    }

    inline explicit operator bool() const
    {
        return m_keys.size() > 0;
    }


    // Mut API.

    V& upsert(const K& key)
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

    V& mutref(const K& key)
    {
        for (int i = 0; i < m_keys.size(); i++)
            if (m_keys[i] == key)
                return m_values.mutref(i);

        assert(false);
        return *((V*)1);
    }
};

namespace fu
{
    template <typename K, typename _>
    int lfind(const fu_COW_MAP<K, _>& map, const K& key) noexcept
    {
        auto& keys = map.m_keys;
        auto* i0   = keys.data();
        auto* i1   = i0 + keys.size();

        for (auto* i = i0; i < i1; i++)
            if (*i == key)
                return i - i0;

        return -1;
    }
}
