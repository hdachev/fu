#include <algorithm>

namespace fu {

template <typename V>
void sort(V& vec)
{
    auto* data = vec.mut_data();
    std::sort(data, data + vec.size());
}

}
