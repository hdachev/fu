#include <algorithm>

namespace fu {

template <typename V>
void sort(V& vec)
{
    auto* data = vec.data_mut();
    std::sort(data, data + vec.size());
}

template <typename V, typename Fn_LessThan>
void sort(V& vec, const Fn_LessThan& lessThan)
{
    auto* data = vec.data_mut();
    std::sort(data, data + vec.size(), lessThan);
}

}
