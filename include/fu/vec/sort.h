#include <algorithm>

namespace fu {

template <typename V>
void sort(V& vec)
{
    auto* data = vec.data_mut();
    std::sort(data, data + vec.size());
}

}
